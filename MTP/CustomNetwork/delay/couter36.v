module counter32(data_in, data_out, clk, reset, ack);
input  [15:0] data_in;
output reg [15:0] data_out;
input clk, reset;
integer temp;
output reg ack;

initial 
begin
	temp = 0;
end

always @(posedge clk) 
begin
	if (!reset) 
	begin
		if (temp == 36) 
		begin
			data_out = data_in;
			ack = 1'b1;
			temp = 0;
		end
		else 
		begin
			ack = 1'b0;
			temp = temp + 1;
		end
	end
	else
	begin 
		data_out = 'b0;
		ack = 1'b0;
		temp = 0;
	end
end
endmodule 