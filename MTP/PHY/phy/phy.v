module phy(
				// Physical link control signals
				read_req_received, 				// From physical link
				read_ready,  								// To physical link
				write_ready_ack,  					// From physical link
				write_req_send,  						// To physical link

				// Physical link data lines
				serial_data_in,  							// From physical link 8-bit serial_data_in
				serial_data_out, 						// To physical link 8-bit serial_data_out 

				// Network node data lines
				input_data_from_router, // From network node 8-bit serial_data_input
				output_data_to_router, 	// To network node 8-bit serial_data_output

				// Network node control signals
				enable_receive, 							// Data ready to be recieved from network node
				enable_send, 								// Send data reqest from network node

				// System Clock
				clk,
				rst_n
			);

input read_req_received, write_ready_ack,clk, rst_n;
input enable_receive, enable_send;
input [31:0] input_data_from_router;
output reg [31:0] output_data_to_router;
output read_ready, write_req_send;
input [7:0] serial_data_in;
output [7:0] serial_data_out;

reg [7:0] serial_data_out;
reg [31:0]  input_buffer_stack [89:0];
reg [31:0]  output_buffer_stack [89:0];
reg [31:0]  input_buffer_empty;
reg [31:0]  output_buffer; 
reg [31:0] deserial_buffer;
reg buffer_full1, buffer_full2 ,buffer_serviced, input_buffer_ready, buffer_sent;
reg read_ready, write_req_send,output_buffer_ready;
integer a, b, c, d, e, f; 
initial
begin
	a = 0;
	b = 0;
	c = 0;
	d = 0;
	e = 0;
	f = 0;
	output_buffer_ready <= 0;
	buffer_full1 <= 0;
	buffer_full2 <= 0;
	input_buffer_ready <= 0;
	buffer_sent <= 0;
	buffer_serviced <= 0;
	read_ready <= 0;
	write_req_send <= 0;
	deserial_buffer<= 32'b0;
	output_buffer<= 32'b0;
end
// This block of hardware fills up the input buffer with the network node data.
always @(posedge clk)
begin
	if (enable_receive) // enable signal input from network node signifies new data is ready to be sent other network node. 
	begin
		if (buffer_full1 == 0) // buffer_full is an internal signal which stops accepting data from network node if the buffer is full
		begin
			if (a == 90) // checking the buffer maximum index length
			begin
					buffer_full1 <= 1; // indicating that the buffer is full.
			end 
			else 
			begin
				input_buffer_stack[a] <= input_data_from_router; // filling up the buffer
				a = a +1; // index increment
				buffer_full1 = 0;
				input_buffer_ready <= 1; // input buffer is ready to be processed and sent
			end
		end
	end
end


always @(posedge read_ready)
begin
	if (enable_send)
	begin
		if (buffer_sent == 0)
		begin
			if (b == 90)
			begin
				buffer_sent <= 1;
			end
			else
			begin
				output_data_to_router <= output_buffer_stack[b] ;
				b = b +1;
				buffer_sent <= 0;
			end
		end
	end
end



always @(posedge read_req_received) //read_req_received is connect to write_req_send ouput from other physical link
	begin
		case (d)
			0: 
			begin
				deserial_buffer[31:24] <= serial_data_in;
				d <= 1;
			end
			1: 
			begin
				deserial_buffer[23:16] <= serial_data_in;
				d <= 2;
				read_ready <= 0;
			end
			2: 
			begin
				deserial_buffer[15:8] <= serial_data_in;
				d <= 3;
			end
			3:
			begin
				deserial_buffer[7:0] <= serial_data_in;
				write_req_send <= 1;
				c <= c + 1;
				output_buffer_stack[c] = deserial_buffer;
				read_ready <= 1;
				d <= 4;
			end
			4:
			begin
				output_buffer_stack[c] = deserial_buffer;
				d <= 0;
			end
		endcase
		
	end

always @(posedge clk)
	begin
		if (input_buffer_ready == 1) 
		begin
			output_buffer <= input_buffer_stack[f];
			e <= e + 1;
		end
		case (e)
			0:
			begin
				write_req_send <= 0;
			end
			1: 
			begin
				serial_data_out <= output_buffer[31:24];
				write_req_send <= 1;
			end
			2:
			begin
				write_req_send <= 0;
			end
			3: 
			begin
				serial_data_out <= output_buffer[23:16];
				write_req_send <= 1;
			end
			4:
			begin
				write_req_send <= 0;
			end
			5: 
			begin
				serial_data_out <= output_buffer[15:8];
				write_req_send <= 1;
			end
			6:
			begin
				write_req_send <= 0;
			end
			7:
			begin
				serial_data_out <= output_buffer[7:0];
				write_req_send <= 1;
				f <= f + 1;
			end
			8: 
			begin
				write_req_send <= 0;				
			end
			9: 
			begin
				write_req_send <= 1;
				e <= 0;
			end
		endcase
	end
endmodule
