`timescale 1ns / 1ps

module testbench();
  parameter HalfClkPeriod = 5;
  localparam ClkPeriod = 2*HalfClkPeriod;

  
wire read_req_received1;
wire write_ready_ack1;
reg enable_receive1, enable_send1,clk;
reg [31:0] input_data_from_router1;
wire [31:0] output_data_to_router1;
wire read_ready1, write_req_send1;

wire read_req_received2;
wire write_ready_ack2;
reg enable_receive2, enable_send2;
reg [31:0] input_data_from_router2;
wire [31:0] output_data_to_router2;
wire read_ready2, write_req_send2;

wire [7:0] serial_data_in;
wire [7:0] serial_data_out;
initial input_data_from_router1 = 32'b0;//10101010010101011010101001010101;

initial input_data_from_router2 = 32'b0;//10101010010101011010101001010101;

  initial 
  begin
		enable_receive1 = 1;
		enable_send1 = 1;
		enable_receive2 = 1;
		enable_send2 = 1;
		clk = 1;
  end
  
  always #(HalfClkPeriod) clk = ~clk;
 always #(8*ClkPeriod) input_data_from_router1 = input_data_from_router1 +1;
  
 always #(8*ClkPeriod) input_data_from_router2 = input_data_from_router2 +2;
  phy dut1
  (
			.read_req_received(read_req_received1), 
			.read_ready(read_ready1), 
			.write_ready_ack(write_ready_ack1), 
			.write_req_send(write_req_send1), 
			.serial_data_in(serial_data_in), 
			.serial_data_out(serial_data_out), 
			.input_data_from_router(input_data_from_router1), 
			.output_data_to_router(output_data_to_router1), 
			.enable_receive(enable_receive1),
			.enable_send(enable_send1),
			.clk(clk)
   );
	
	
//assign read_req_received1 = write_req_send1;
//assign write_ready_ack1 = read_ready1;
//assign serial_data_in = serial_data_out;

assign write_ready_ack1 = read_ready2;
assign read_req_received1 = write_req_send2;
assign write_ready_ack2 = read_ready1;
assign read_req_received2 = write_req_send1;

  phy dut2
  (
			.read_req_received(read_req_received2), 
			.read_ready(read_ready2), 
			.write_ready_ack(write_ready_ack2), 
			.write_req_send(write_req_send2), 
			.serial_data_in(serial_data_out), 
			.serial_data_out(serial_data_in), 
			.input_data_from_router(input_data_from_router2), 
			.output_data_to_router(output_data_to_router2), 
			.enable_receive(enable_receive2),
			.enable_send(enable_send2),
			.clk(clk)
   );

endmodule

