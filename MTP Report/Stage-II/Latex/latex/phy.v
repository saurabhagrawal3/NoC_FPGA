module phy
(
	input CLK, rst_n;
	input sync_clk_in;
	output reg sync_clk_out;
	input [17:0] input_data_from_router;
	output reg [17:0] output_data_to_router;
	input [7:0] serial_data_in;
	output [7:0] serial_data_out;
	output reg en_recv_to_router_port, en_send_to_router_port;
);
always @(posedge CLK) begin
	if (rst_n) begin
		if (a == 30)  begin	// checking the buffer maximum index length
			if (f == 30) begin
				input_buffer_ready <= 0;
			end
			en_recv_to_router_port <= 0; // indicating that the buffer is full.
		end 
		else begin
			if (input_buffer_stack[a-1] == input_data_from_router) begin
				en_recv_to_router_port <= 1;
			end
			else begin
				if (input_data_from_router[17]) begin
					input_buffer_stack[a] <= input_data_from_router;
					en_recv_to_router_port <= 1;
					a = a +1;
					input_buffer_ready <= 1;
				end
				else begin
					input_buffer_stack[a] <= 0;
				end
			end
		end
	end
	else  begin
		en_recv_to_router_port <= 1;
		input_buffer_ready <= 0;	
	end
end
always @(posedge sync_clk_in) begin
	case (d)
		0:  begin		
			if (rst_n) begin
				if (serial_data_in[1]) begin
					deserial_buffer[17:16] <= serial_data_in;
					d <= 1;
				end
				else  begin
					d <= 0;
				end
			end
			else  begin
				d <= 0;
			end
		end
		1: begin
			deserial_buffer[15:8] <= serial_data_in;
			d <= 2;
		end
		2: begin
			deserial_buffer[7:0] <= serial_data_in;
			d <= 3;
		end
		3: begin
			if (deserial_buffer[17]) begin
				output_data_to_router = deserial_buffer;
				c <= c + 1;
				d <= 0;
			end
		end
	endcase
end
always @(posedge CLK) begin	
	case (e)
		0:  begin
			sync_clk_out = 0;
			if (input_buffer_ready && rst_n)  begin
				output_buffer <= input_buffer_stack[f];
				if(output_buffer[17]) begin
					e <=1;
					f <= f + 1;
					if (f == 30)
					begin
						e <= 0;
						output_buffer <= 0;
					end
				end
				else begin
					e <= 0;
				end
			end
			else begin
				e <= 0;
			end
		end
		1: begin
			sync_clk_out = 1;
			e <= 2;
		end
		2: begin
			sync_clk_out = 0;
			serial_data_out <= {6'b0,output_buffer[17:16]};
			e <= 3;
		end
		3: begin
			sync_clk_out = 1;
			e <= 4;
		end
		4: begin
			sync_clk_out = 0;
			serial_data_out <= output_buffer[15:8];
			e <= 5;
		end
		5: begin
			sync_clk_out = 1;
			e <= 6;
		end
		6: begin
			serial_data_out <= output_buffer[7:0];
			e = 7;
			output_buffer <= 0;
			sync_clk_out = 0;
		end
		7: begin
			sync_clk_out = 1;
			e <= 8;
		end
		8: begin
			serial_data_out <= 8'b0;
			sync_clk_out = 0;
			e <= 9;
		end
		9: begin
			sync_clk_out = 1;
			e <= 0;
		end
	endcase
end
endmodule 