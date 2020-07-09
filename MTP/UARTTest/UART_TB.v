`timescale 1ns / 1ps
module Custom_TB(clock, reset, in, out);

input clock, reset;
input [15:0] in;
output [15:0] out;
//parameter       CLOCKPERIOD = 6.4;
wire serial;
//reg clock;
//reg reset;
reg new_tx_data;
wire new_rx_data;
reg [15:0] tx_data;
reg [15:0] rx_data;
wire tx_busy;
wire ce_32;
wire	[11:0]	baud_freq;	// baud rate setting registers
wire	[15:0]	baud_limit;
`define D_BAUD_FREQ		12'h240		//100 MHz clock and 115200 Baud rate
`define D_BAUD_LIMIT		16'h3AC9
 assign baud_freq = `D_BAUD_FREQ;
 assign baud_limit = `D_BAUD_LIMIT;
integer cycle;	

//initial
//begin
//	clock = 1'b0;
//	reset = 1'b1;
//	#200 reset = 1'b0;
//end
//
//always  
//#(CLOCKPERIOD / 2) clock = !clock;
//
//always @(posedge clock) 
//begin
//	cycle = cycle +1;
//end
//initial 
//begin
//new_tx_data = 1'b1;
////wait (tx_busy)
//cycle = 0;
//tx_data = 16'habcd;
//$display("@%3d: Sending flit %x into send port", cycle, tx_data);
//wait (new_rx_data)//[flit_port_width-1]) //begin
//$display("@%3d: Receiving flit %x at receive port", cycle, rx_data);
//new_tx_data = 1'b0;
//$finish();
//end

baud_gen baud_gen_1
(
	.clock(clock), 
	.reset(reset),
	.ce_32(ce_32), 
	.baud_freq(baud_freq), 
	.baud_limit(baud_limit)
);	

uart_rx receiver 
(
	.clock(clock), 
	.reset(reset),
	.ce_32(ce_32), 
	.ser_in(serial), 
	.rx_data(out), 
	.new_rx_data(new_rx_data) 
);

uart_tx transmiter
(
	.clock(clock), 
	.reset(reset),
	.ce_32(ce_32), 
	.tx_data(in), 
	.new_tx_data(new_tx_data), 
	.ser_out(serial), 
	.tx_busy(tx_busy)
);

endmodule 