`ifndef XST_SYNTH

`timescale 1ns / 1ps

`include "connect_parameters.v"


module CONNECT_testbench_sample_peek();
  parameter HalfClkPeriod = 5;
  localparam ClkPeriod = 2*HalfClkPeriod;

  // non-VC routers still reeserve 1 dummy bit for VC.
  parameter vc_bits = (`NUM_VCS > 1) ? $clog2(`NUM_VCS) : 1;
  parameter dest_bits = $clog2(`NUM_USER_RECV_PORTS);
  localparam flit_port_width = 2 /*valid and tail bits*/+ `FLIT_DATA_WIDTH + dest_bits + vc_bits;
  //localparam credit_port_width = 1 + vc_bits; // 1 valid bit
  localparam credit_port_width = `NUM_VCS; // 1 valid bit
  localparam test_cycles = 20;

  reg Clk;
  reg Rst_n;

  // input regs
  reg send_flit [0:`NUM_USER_SEND_PORTS-1]; // enable sending flits
  reg [flit_port_width-1:0] flit_in [0:`NUM_USER_SEND_PORTS-1]; // send port inputs

  reg send_credit [0:`NUM_USER_RECV_PORTS-1]; // enable sending credits
  reg [credit_port_width-1:0] credit_in [0:`NUM_USER_RECV_PORTS-1]; //recv port credits

  // output wires
  wire [credit_port_width-1:0] credit_out [0:`NUM_USER_SEND_PORTS-1];
  wire [flit_port_width-1:0] flit_out [0:`NUM_USER_RECV_PORTS-1];

  reg [31:0] cycle;
  integer i;

  // packet fields
  reg is_valid;
  reg is_tail;
  reg [dest_bits-1:0] dest;
  reg [vc_bits-1:0]   vc;
  reg [`FLIT_DATA_WIDTH-1:0] data;
  reg EN_send_port [0:`NUM_USER_SEND_PORTS-1]; // enable sending flits

  // Generate Clock
  initial Clk = 0;
  always #(HalfClkPeriod) Clk = ~Clk;

  // Run simulation 
  initial begin 
    cycle = 0;
    for(i = 0; i < `NUM_USER_SEND_PORTS; i = i + 1) begin flit_in[i] = 0; EN_send_port[i] = 0; end
    for(i = 0; i < `NUM_USER_RECV_PORTS; i = i + 1) begin credit_in[i] = 'b1; send_credit[i] = 'b1; end //constantly provide credits
    
    $display("---- Performing Reset ----");
    Rst_n = 0; // perform reset (active low) 
    #(5*ClkPeriod+HalfClkPeriod); 
    Rst_n = 1; 
    #(HalfClkPeriod);
//_________________________________01__________________________________//
    // send a 2-flit packet from send port 0 to receive port 1
    EN_send_port[0] = 1'b1;
    dest = 1;
    vc = 0;
    data = 'ha;
    flit_in[0] = {1'b1 /*valid*/, 1'b0 /*tail*/, dest, vc, data};
    $display("@%3d: Injecting flit %x into send port %0d", cycle, flit_in[0], 0);
    		wait (flit_out[dest][flit_port_width-1]) //begin
		$display("@%3d: Receiving flit %x at receive port %0d", cycle, flit_out[dest], dest);
	 
//_________________________________02__________________________________//
    // send a 2-flit packet from send port 0 to receive port 1
    EN_send_port[0] = 1'b1;
    dest = 2;
    vc = 0;
    data = 'hb;
    flit_in[0] = {1'b1 /*valid*/, 1'b0 /*tail*/, dest, vc, data};
    $display("@%3d: Injecting flit %x into send port %0d", cycle, flit_in[0], 0);
    		wait (flit_out[dest][flit_port_width-1]) //begin
		$display("@%3d: Receiving flit %x at receive port %0d", cycle, flit_out[dest], dest);
	 
//__________________________________03_________________________________//
    // send a 2-flit packet from send port 0 to receive port 1
    EN_send_port[0] = 1'b1;
    dest = 3;
    vc = 0;
    data = 'hc;
    flit_in[0] = {1'b1 /*valid*/, 1'b0 /*tail*/, dest, vc, data};
    $display("@%3d: Injecting flit %x into send port %0d", cycle, flit_in[0], 0);
    		wait (flit_out[dest][flit_port_width-1]) //begin
		$display("@%3d: Receiving flit %x at receive port %0d", cycle, flit_out[dest], dest);
    
// stop sending flits
    EN_send_port[0] = 1'b0;
    flit_in[0] = 'b0; // valid bit
	 
//_________________________________10__________________________________//
    // send a 2-flit packet from send port 0 to receive port 1
    EN_send_port[1] = 1'b1;
    dest = 0;
    vc = 0;
    data = 'hd;
    flit_in[1] = {1'b1 /*valid*/, 1'b0 /*tail*/, dest, vc, data};
    $display("@%3d: Injecting flit %x into send port %0d", cycle, flit_in[1], 0);
    		wait (flit_out[dest][flit_port_width-1]) //begin
		$display("@%3d: Receiving flit %x at receive port %0d", cycle, flit_out[dest], dest);
	 
//_________________________________12__________________________________//
    // send a 2-flit packet from send port 0 to receive port 1
    EN_send_port[1] = 1'b1;
    dest = 2;
    vc = 0;
    data = 'he;
    flit_in[1] = {1'b1 /*valid*/, 1'b0 /*tail*/, dest, vc, data};
    $display("@%3d: Injecting flit %x into send port %0d", cycle, flit_in[1], 0);
    		wait (flit_out[dest][flit_port_width-1]) //begin
		$display("@%3d: Receiving flit %x at receive port %0d", cycle, flit_out[dest], dest);
	 
//__________________________________13_________________________________//
    // send a 2-flit packet from send port 0 to receive port 1
    EN_send_port[1] = 1'b1;
    dest = 3;
    vc = 0;
    data = 'hf;
    flit_in[1] = {1'b1 /*valid*/, 1'b0 /*tail*/, dest, vc, data};
    $display("@%3d: Injecting flit %x into send port %0d", cycle, flit_in[1], 0);
    		wait (flit_out[dest][flit_port_width-1]) //begin
		$display("@%3d: Receiving flit %x at receive port %0d", cycle, flit_out[dest], dest);
    
// stop sending flits
    EN_send_port[1] = 1'b0;
    flit_in[1] = 'b0; // valid bit	 
	 
	 
	 
//_________________________________20__________________________________//
    // send a 2-flit packet from send port 0 to receive port 1
    EN_send_port[2] = 1'b1;
    dest = 0;
    vc = 0;
    data = 'h1;
    flit_in[2] = {1'b1 /*valid*/, 1'b0 /*tail*/, dest, vc, data};
    $display("@%3d: Injecting flit %x into send port %0d", cycle, flit_in[2], 0);
    		wait (flit_out[dest][flit_port_width-1]) //begin
		$display("@%3d: Receiving flit %x at receive port %0d", cycle, flit_out[dest], dest);
	 
//_________________________________21__________________________________//
    // send a 2-flit packet from send port 0 to receive port 1
    EN_send_port[2] = 1'b1;
    dest = 1;
    vc = 0;
    data = 'h2;
    flit_in[2] = {1'b1 /*valid*/, 1'b0 /*tail*/, dest, vc, data};
    $display("@%3d: Injecting flit %x into send port %0d", cycle, flit_in[2], 0);
    		wait (flit_out[dest][flit_port_width-1]) //begin
		$display("@%3d: Receiving flit %x at receive port %0d", cycle, flit_out[dest], dest);
	 
//__________________________________23_________________________________//
    // send a 2-flit packet from send port 0 to receive port 1
    EN_send_port[2] = 1'b1;
    dest = 3;
    vc = 0;
    data = 'h3;
    flit_in[2] = {1'b1 /*valid*/, 1'b0 /*tail*/, dest, vc, data};
    $display("@%3d: Injecting flit %x into send port %0d", cycle, flit_in[2], 0);
    		wait (flit_out[dest][flit_port_width-1]) //begin
		$display("@%3d: Receiving flit %x at receive port %0d", cycle, flit_out[dest], dest);
    
// stop sending flits
    EN_send_port[2] = 1'b0;
    flit_in[2] = 'b0; // valid bit	 
	 
//_________________________________30__________________________________//
    // send a 2-flit packet from send port 0 to receive port 1
    EN_send_port[3] = 1'b1;
    dest = 0;
    vc = 0;
    data = 'h4;
    flit_in[3] = {1'b1 /*valid*/, 1'b0 /*tail*/, dest, vc, data};
    $display("@%3d: Injecting flit %x into send port %0d", cycle, flit_in[3], 0);
    		wait (flit_out[dest][flit_port_width-1]) //begin
		$display("@%3d: Receiving flit %x at receive port %0d", cycle, flit_out[dest], dest);
	 
//_________________________________31__________________________________//
    // send a 2-flit packet from send port 0 to receive port 1
    EN_send_port[3] = 1'b1;
    dest = 1;
    vc = 0;
    data = 'h5;
    flit_in[3] = {1'b1 /*valid*/, 1'b0 /*tail*/, dest, vc, data};
    $display("@%3d: Injecting flit %x into send port %0d", cycle, flit_in[3], 0);
    		wait (flit_out[dest][flit_port_width-1]) //begin
		$display("@%3d: Receiving flit %x at receive port %0d", cycle, flit_out[dest], dest);
	 
//__________________________________32_________________________________//
    // send a 2-flit packet from send port 0 to receive port 1
    EN_send_port[3] = 1'b1;
    dest = 2;
    vc = 0;
    data = 'h6;
    flit_in[3] = {1'b1 /*valid*/, 1'b0 /*tail*/, dest, vc, data};
    $display("@%3d: Injecting flit %x into send port %0d", cycle, flit_in[3], 0);
    		wait (flit_out[dest][flit_port_width-1]) //begin
		$display("@%3d: Receiving flit %x at receive port %0d", cycle, flit_out[dest], dest);
    
// stop sending flits
    EN_send_port[3] = 1'b0;
    flit_in[3] = 'b0; // valid bit
	 $finish();
  end

myNetworkAurora dut
(
	.RESET(Rst_n),
	.INIT_CLK1(Clk),
	.INIT_CLK2(Clk),
	.GTPD5_P1(Clk),
	.GTPD5_N1(!Clk),
	.GTPD5_P2(Clk),
	.GTPD5_N2(!Clk),
	.CHANNEL_UP(channel_up),
	.USER_CLK(user_clk_i),

	.send_ports_0_putFlit_flit_in(flit_in[0]),
	.EN_send_ports_0_putFlit(EN_send_port[0]),

	.EN_send_ports_0_getNonFullVCs(1'b1), // drain credits
	.send_ports_0_getNonFullVCs(credit_out[0]),

	.send_ports_1_putFlit_flit_in(flit_in[1]),
	.EN_send_ports_1_putFlit(EN_send_port[1]),

	.EN_send_ports_1_getNonFullVCs(1'b1), // drain credits
	.send_ports_1_getNonFullVCs(credit_out[1]),
	
	.send_ports_2_putFlit_flit_in(flit_in[2]),
	.EN_send_ports_2_putFlit(EN_send_port[2]),

	.EN_send_ports_2_getNonFullVCs(1'b1), // drain credits
	.send_ports_2_getNonFullVCs(credit_out[2]),

	.send_ports_3_putFlit_flit_in(flit_in[3]),
	.EN_send_ports_3_putFlit(EN_send_port[3]),

	.EN_send_ports_3_getNonFullVCs(1'b1), // drain credits
	.send_ports_3_getNonFullVCs(credit_out[3]),

	.EN_recv_ports_0_getFlit(1'b1), // drain flits
	.recv_ports_0_getFlit(flit_out[0]),

	.recv_ports_0_putNonFullVCs_nonFullVCs(credit_in[0]),
	.EN_recv_ports_0_putNonFullVCs(send_credit[0]),

	.EN_recv_ports_1_getFlit(1'b1), // drain flits
	.recv_ports_1_getFlit(flit_out[1]),

	.recv_ports_1_putNonFullVCs_nonFullVCs(credit_in[1]),
	.EN_recv_ports_1_putNonFullVCs(send_credit[1]),

	.EN_recv_ports_2_getFlit(1'b1), // drain flits
	.recv_ports_2_getFlit(flit_out[2]),

	.recv_ports_2_putNonFullVCs_nonFullVCs(credit_in[0]),
	.EN_recv_ports_2_putNonFullVCs(send_credit[2]),

	.EN_recv_ports_3_getFlit(1'b1), // drain flits
	.recv_ports_3_getFlit(flit_out[3]),

	.recv_ports_3_putNonFullVCs_nonFullVCs(credit_in[1]),
	.EN_recv_ports_3_putNonFullVCs(send_credit[3])
);

endmodule

`endif
