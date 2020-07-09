
`ifndef XST_SYNTH

`timescale 1ns / 1ps

`include "connect_parameters.v"


module Custom_TB;

//*************************Parameter Declarations**************************

parameter       SIM_MAX_TIME  = 525000; //To quit the simulation //156.25MHz GTP Reference clock 
parameter       CLOCKPERIOD_1 = 6.4;
parameter       CLOCKPERIOD_2 = 6.4;

// non-VC routers still reeserve 1 dummy bit for VC.
parameter vc_bits = (`NUM_VCS > 1) ? $clog2(`NUM_VCS) : 1;
parameter dest_bits = $clog2(`NUM_USER_RECV_PORTS)+1;
localparam flit_port_width = 2 /*valid and tail bits*/+ `FLIT_DATA_WIDTH + dest_bits + vc_bits;
//localparam credit_port_width = 1 + vc_bits; // 1 valid bit
localparam credit_port_width = `NUM_VCS; // 1 valid bit

//************************Internal Register Declarations*****************************

// input regs
reg send_flit [0:`NUM_USER_SEND_PORTS-1]; // enable sending flits
reg [flit_port_width-1:0] flit_in [0:`NUM_USER_SEND_PORTS-1]; // send port inputs

reg send_credit [0:`NUM_USER_RECV_PORTS-1]; // enable sending credits
reg [credit_port_width-1:0] credit_in [0:`NUM_USER_RECV_PORTS-1]; //recv port credits

integer i;

// packet fields
reg [dest_bits-1:0] dest;
reg [vc_bits-1:0]   vc;
reg [`FLIT_DATA_WIDTH-1:0] data;

reg [31:0] cycle;
// output wires
wire [credit_port_width-1:0] credit_out [0:`NUM_USER_SEND_PORTS-1];
wire [flit_port_width-1:0] flit_out [0:`NUM_USER_RECV_PORTS-1];
//Freerunning Clock
reg                reference_clk_1_n_r;
reg                reference_clk_2_n_r;

//Global signals
reg                gsr_r;
reg                gts_r;
reg                reset_i;

//********************************Wire Declarations**********************************

//Freerunning Clock         
wire               reference_clk_1_p_r;
wire               reference_clk_2_p_r;         


//Dut1

//Error Detection Interface
wire               hard_err_1_i;        
wire               soft_err_1_i;        
wire               frame_err_1_i;        

//Status 
wire               channel_up_1_i;        
wire               lane_up_1_i;


//GT Serial I/O
wire               rxp_1_i; 
wire               rxn_1_i; 

wire               txp_1_i; 
wire               txn_1_i; 

wire               rxp_2_i; 
wire               rxn_2_i; 

wire               txp_2_i; 
wire               txn_2_i; 
// Error signals from the Local Link packet checker
wire    [0:7]      err_count_1_i; 


//Dut2

//Error Detection Interface
wire               hard_err_2_i;        
wire               soft_err_2_i;        
wire               frame_err_2_i;        

//Status 
wire               channel_up_2_i;        
wire               lane_up_2_i;


//GT Serial I/O
wire               rxp_3_i; 
wire               rxn_3_i; 

wire               txp_3_i; 
wire               txn_3_i;

wire               rxp_4_i; 
wire               rxn_4_i; 

wire               txp_4_i; 
wire               txn_4_i; 

// Error signals from the Local Link packet checker
wire    [0:7]      err_count_2_i; 

//*********************************Main Body of Code**********************************//

//---------------------------------Serial Connections---------------------------------//

assign   rxn_1_i      =    txn_3_i;
assign   rxp_1_i      =    txp_3_i;
assign   rxn_2_i      =    txn_4_i;
assign   rxp_2_i      =    txp_4_i;
assign   rxn_3_i      =    txn_1_i;
assign   rxp_3_i      =    txp_1_i;
assign   rxn_4_i      =    txn_2_i;
assign   rxp_4_i      =    txp_2_i;

//-----------------------------------Global Signals-----------------------------------//

//Simultate the global reset that occurs after configuration at the beginning
//of the simulation. Note that both GT smart models use the same global signals.
assign glbl.GSR = gsr_r;
assign glbl.GTS = gts_r;
//---------------------------------------Clocks---------------------------------------//

initial
reference_clk_1_n_r = 1'b0;

always  
#(CLOCKPERIOD_1 / 2) reference_clk_1_n_r = !reference_clk_1_n_r;

assign reference_clk_1_p_r = !reference_clk_1_n_r;

initial
reference_clk_2_n_r = 1'b0;

always  
#(CLOCKPERIOD_2 / 2) reference_clk_2_n_r = !reference_clk_2_n_r;

assign reference_clk_2_p_r = !reference_clk_2_n_r;

//---------------------------------------Resets---------------------------------------//
initial
begin
	reset_i = 1'b1;
	#200 reset_i = 1'b0;
end

initial
begin
	gts_r = 1'b0;        
	gsr_r = 1'b1;
	#(16*CLOCKPERIOD_1);
	gsr_r = 1'b0;
end

//----------------------------------- Run simulation----------------------------------// 
initial 
begin
	for(i = 0; i < `NUM_USER_SEND_PORTS; i = i + 1) 
	begin 
		flit_in[i] = 0; 
		send_flit[i] = 0; 
	end
	for(i = 0; i < `NUM_USER_RECV_PORTS; i = i + 1) 
	begin 
		credit_in[i] = 'b1; 
		send_credit[i] = 'b1; 
	end //constantly provide credits
end
// 
//	wait (!reset_i)
//	wait (channel_up_1_i && channel_up_2_i)

////_________________________________0 to 1__________________________________//
//// send a 2-flit packet from send port 0 to receive port 1
//	cycle = 0;
//send_flit[0] = 1'b1;
//dest = 1;
//vc = 0;
//data = 'h0;


//flit_in[0] = {1'b1 /*valid*/, 1'b1 /*tail*/, dest, vc, data};
//$display("@%3d: Sending flit %x into send port %0d from Router = %0d to Router = %0d", cycle, flit_in[0], 0, 0, dest);
//wait (flit_out[dest] == flit_in[0])//[flit_port_width-1]) //begin
//send_flit[0] = 1'b0;
//$display("@%3d: Receiving flit %x at receive port of router = %0d", cycle, flit_out[dest], dest);
//wait (!flit_out[dest][flit_port_width-1]) //begin
//
////_________________________________0 to 2__________________________________//
//// send a 2-flit packet from send port 0 to receive port 1
//	cycle = 0;
//send_flit[0] = 1'b1;
//dest = 2;
//vc = 0;
//data = 'h1;
//flit_in[0] = {1'b1 /*valid*/, 1'b1 /*tail*/, dest, vc, data};
//$display("@%3d: Sending flit %x into send port %0d from Router = %0d to Router = %0d", cycle, flit_in[0], 0, 0, dest);
//wait (flit_out[dest] == flit_in[0])//[flit_port_width-1]) //begin
//send_flit[0] = 1'b0;
//$display("@%3d: Receiving flit %x at receive port of router = %0d", cycle, flit_out[dest], dest);
//wait (!flit_out[dest][flit_port_width-1]) //begin
//
////__________________________________0 to 3_________________________________//
//// send a 2-flit packet from send port 0 to receive port 1
//	cycle = 0;
//send_flit[0] = 1'b1;
//dest = 3;
//vc = 0;
//data = 'h2;
//flit_in[0] = {1'b1 /*valid*/, 1'b1 /*tail*/, dest, vc, data};
//$display("@%3d: Sending flit %x into send port %0d from Router = %0d to Router = %0d", cycle, flit_in[0], 0, 0, dest);
//wait (flit_out[dest] == flit_in[0])//[flit_port_width-1]) //begin
//send_flit[0] = 1'b0;
//$display("@%3d: Receiving flit %x at receive port of router = %0d", cycle, flit_out[dest], dest);
//wait (!flit_out[dest][flit_port_width-1]) //begin
//
//// stop sending flits
//send_flit[0] = 1'b0;
//flit_in[0] = 'b0; // valid bit
//
////_________________________________1 to 0__________________________________//
//// send a 2-flit packet from send port 0 to receive port 1
//	cycle = 0;
//send_flit[1] = 1'b1;
//dest = 0;
//vc = 0;
//data = 'h3;
//flit_in[1] = {1'b1 /*valid*/, 1'b1 /*tail*/, dest, vc, data};
//$display("@%3d: Sending flit %x into send port %0d from Router = %0d to Router = %0d", cycle, flit_in[1], 1, 1, dest);
//wait (flit_out[dest] == flit_in[1])//[flit_port_width-1])
//send_flit[1] = 1'b0; //begin
//$display("@%3d: Receiving flit %x at receive port of router = %0d", cycle, flit_out[dest], dest);
//wait (!flit_out[dest][flit_port_width-1]) //begin
//
////_________________________________1 to 2__________________________________//
//// send a 2-flit packet from send port 0 to receive port 1
//	cycle = 0;
//	send_flit[1] = 1'b1;
//dest = 2;
//vc = 0;
//data = 'h4;
//flit_in[1] = {1'b1 /*valid*/, 1'b1 /*tail*/, dest, vc, data};
//$display("@%3d: Sending flit %x into send port %0d from Router = %0d to Router = %0d", cycle, flit_in[1], 1, 1, dest);
//wait (flit_out[dest] == flit_in[1])//[flit_port_width-1])
//send_flit[1] = 1'b0; //begin
//$display("@%3d: Receiving flit %x at receive port of router = %0d", cycle, flit_out[dest], dest);
//wait (!flit_out[dest][flit_port_width-1]) //begin
//
////__________________________________13_________________________________//
//// send a 2-flit packet from send port 0 to receive port 1
//	cycle = 0;
//send_flit[1] = 1'b1;
//dest = 3;
//vc = 0;
//data = 'h5;
//flit_in[1] = {1'b1 /*valid*/, 1'b1 /*tail*/, dest, vc, data};
//$display("@%3d: Sending flit %x into send port %0d from Router = %0d to Router = %0d", cycle, flit_in[1], 1, 1, dest);
//wait (flit_out[dest] == flit_in[1])//[flit_port_width-1])
//send_flit[1] = 1'b0; //begin
//$display("@%3d: Receiving flit %x at receive port of router = %0d", cycle, flit_out[dest], dest);
//wait (!flit_out[dest][flit_port_width-1]) //begin
//
//// stop sending flits
//send_flit[1] = 1'b0;
//flit_in[1] = 'b0; // valid bit	 
//
//
//
////_________________________________20__________________________________//
//// send a 2-flit packet from send port 0 to receive port 1
//	cycle = 0;
//send_flit[2] = 1'b1;
//dest = 0;
//vc = 0;
//data = 'h6;
//flit_in[2] = {1'b1 /*valid*/, 1'b1 /*tail*/, dest, vc, data};
//$display("@%3d: Sending flit %x into send port %0d from Router = %0d to Router = %0d", cycle, flit_in[2], 2, 2, dest);
//wait (flit_out[dest] == flit_in[2])//[flit_port_width-1])
//send_flit[2] = 1'b0; //begin
//$display("@%3d: Receiving flit %x at receive port of router = %0d", cycle, flit_out[dest], dest);
//wait (!flit_out[dest][flit_port_width-1]) //begin
//
////_________________________________21__________________________________//
//// send a 2-flit packet from send port 0 to receive port 1
//	cycle = 0;
//send_flit[2] = 1'b1;
//dest = 1;
//vc = 0;
//data = 'h7;
//flit_in[2] = {1'b1 /*valid*/, 1'b1 /*tail*/, dest, vc, data};
//$display("@%3d: Sending flit %x into send port %0d from Router = %0d to Router = %0d", cycle, flit_in[2], 2, 2, dest);
//wait (flit_out[dest] == flit_in[2])//[flit_port_width-1])
//send_flit[2] = 1'b0; //begin
//$display("@%3d: Receiving flit %x at receive port of router = %0d", cycle, flit_out[dest], dest);
//wait (!flit_out[dest][flit_port_width-1]) //begin
//
////__________________________________23_________________________________//
//// send a 2-flit packet from send port 0 to receive port 1
//	cycle = 0;
//send_flit[2] = 1'b1;
//dest = 3;
//vc = 0;
//data = 'h8;
//flit_in[2] = {1'b1 /*valid*/, 1'b1 /*tail*/, dest, vc, data};
//$display("@%3d: Sending flit %x into send port %0d from Router = %0d to Router = %0d", cycle, flit_in[2], 2, 2, dest);
//wait (flit_out[dest] == flit_in[2])//[flit_port_width-1])
//send_flit[2] = 1'b0; //begin
//$display("@%3d: Receiving flit %x at receive port of router = %0d", cycle, flit_out[dest], dest);
//wait (!flit_out[dest][flit_port_width-1]) //begin
//
//// stop sending flits
//send_flit[2] = 1'b0;
//flit_in[2] = 'b0; // valid bit	 
//
////_________________________________30__________________________________//
//// send a 2-flit packet from send port 0 to receive port 1
//	cycle = 0;
//send_flit[3] = 1'b1;
//dest = 0;
//vc = 0;
//data = 'h9;
//flit_in[3] = {1'b1 /*valid*/, 1'b1 /*tail*/, dest, vc, data};
//$display("@%3d: Sending flit %x into send port %0d from Router = %0d to Router = %0d", cycle, flit_in[3], 3, 3, dest);
//wait (flit_out[dest] == flit_in[3])//[flit_port_width-1])
//send_flit[3] = 1'b0; //begin
//$display("@%3d: Receiving flit %x at receive port of router = %0d", cycle, flit_out[dest], dest);
//wait (!flit_out[dest][flit_port_width-1]) //begin
//
////_________________________________31__________________________________//
//// send a 2-flit packet from send port 0 to receive port 1
//	cycle = 0;
//send_flit[3] = 1'b1;
//dest = 1;
//vc = 0;
//data = 'ha;
//flit_in[3] = {1'b1 /*valid*/, 1'b1 /*tail*/, dest, vc, data};
//$display("@%3d: Sending flit %x into send port %0d from Router = %0d to Router = %0d", cycle, flit_in[3], 3, 3, dest);
//wait (flit_out[dest] == flit_in[3])//[flit_port_width-1])
//send_flit[3] = 1'b0; //begin
//$display("@%3d: Receiving flit %x at receive port of router = %0d", cycle, flit_out[dest], dest);
//wait (!flit_out[dest][flit_port_width-1]) //begin
//
////__________________________________32_________________________________//
//// send a 2-flit packet from send port 0 to receive port 1
//	cycle = 0;
//send_flit[3] = 1'b1;
//dest = 2;
//vc = 0;
//data = 'hb;
//flit_in[3] = {1'b1 /*valid*/, 1'b1 /*tail*/, dest, vc, data};
//$display("@%3d: Sending flit %x into send port %0d from Router = %0d to Router = %0d", cycle, flit_in[3], 3, 3, dest);
//wait (flit_out[dest] == flit_in[3])//[flit_port_width-1])
//send_flit[3] = 1'b0; //begin
//$display("@%3d: Receiving flit %x at receive port of router = %0d", cycle, flit_out[dest], dest);
//wait (!flit_out[dest][flit_port_width-1]) //begin
//
//// stop sending flits
//send_flit[3] = 1'b0;
//flit_in[3] = 'b0; // valid bit
//$finish();
//end

always @(posedge reference_clk_1_p_r)
begin
	if (!reset_i) begin
		if (channel_up_1_i && channel_up_2_i) begin 
			cycle = cycle +1;
			send_flit[1] = 1'b1;
			dest = 3;
			vc = 0;
			data = data + 1;
			flit_in[1] = {1'b1 /*valid*/, 1'b1 /*tail*/, dest, vc, data};
			$display("@%3d: Sending flit %x into send port %0d from Router = %0d to Router = %0d", cycle, flit_in[1][9:0], 0, 1, dest);
			wait (flit_out[dest] == flit_in[1]) 
			cycle = 0;
			$display("@%3d: Receiving flit %x at receive port of router = %0d", cycle, flit_out[dest][9:0], dest);
		end
	end
	else begin
		cycle = 0;
		dest = 0;
		vc = 0;
		data = 0;
		flit_in[3] = 'b0; 
	end
end


aurora_Network_1 example_design_1_i
(
	// User IO
	.RESET(reset_i),
	// Error signals from Aurora    
	.HARD_ERR(hard_err_1_i),
	.SOFT_ERR(soft_err_1_i),
	.FRAME_ERR((frame_err_1_i)),

	// Status Signals
	.LANE_UP(lane_up_1_i),
	.CHANNEL_UP(channel_up_1_i),
	.INIT_CLK(reference_clk_1_p_r),
	.GT_RESET_IN(gsr_r),

	// Clock Signals
	.GTPD5_P(reference_clk_1_p_r),
	.GTPD5_N(reference_clk_1_n_r),

	// GT I/O
	.RXP3(rxp_3_i),
	.RXN3(rxn_3_i),

	.TXP3(txp_3_i),
	.TXN3(txn_3_i),

	// GT I/O
	.RXP4(rxp_4_i),
	.RXN4(rxn_4_i),

	.TXP4(txp_4_i),
	.TXN4(txn_4_i),
//-----------------------------------------------------------//
	.send_ports_0_putFlit_flit_in(flit_in[0]),
	.EN_send_ports_0_putFlit(send_flit[0]),

	.EN_send_ports_0_getNonFullVCs(1'b1),
	.send_ports_0_getNonFullVCs(credit_out[0]),

	.EN_recv_ports_0_getFlit(1'b1),
	.recv_ports_0_getFlit(flit_out[0]),

	.recv_ports_0_putNonFullVCs_nonFullVCs(credit_in[0]),
	.EN_recv_ports_0_putNonFullVCs(send_credit[0]),
//-----------------------------------------------------------//
	.send_ports_1_putFlit_flit_in(flit_in[1]),
	.EN_send_ports_1_putFlit(send_flit[1]),

	.EN_send_ports_1_getNonFullVCs(1'b1),
	.send_ports_1_getNonFullVCs(credit_out[1]),

	.EN_recv_ports_1_getFlit(1'b1),
	.recv_ports_1_getFlit(flit_out[1]),

	.recv_ports_1_putNonFullVCs_nonFullVCs(credit_in[1]),
	.EN_recv_ports_1_putNonFullVCs(send_credit[1]),
//-----------------------------------------------------------//
	.send_ports_2_putFlit_flit_in(flit_in[2]),
	.EN_send_ports_2_putFlit(send_flit[2]),

	.EN_send_ports_2_getNonFullVCs(1'b1),
	.send_ports_2_getNonFullVCs(credit_out[2]),

	.EN_recv_ports_2_getFlit(1'b1),
	.recv_ports_2_getFlit(flit_out[2]),

	.recv_ports_2_putNonFullVCs_nonFullVCs(credit_in[2]),
	.EN_recv_ports_2_putNonFullVCs(send_credit[2]),
//-----------------------------------------------------------//
	.recv_ports_info_0_getRecvPortID(),

	.recv_ports_info_1_getRecvPortID(),

	.recv_ports_info_2_getRecvPortID(),
	// Error signals from the Local Link packet checker
	.ERR_COUNT(err_count_1_i)
);

//------------------------Instantiate Dut 2 --------------------------------//


aurora_Network_2 example_design_2_i
(
	// User IO
	.RESET(reset_i),
	// Error signals from Aurora    
	.HARD_ERR(hard_err_2_i),
	.SOFT_ERR(soft_err_2_i),
	.FRAME_ERR((frame_err_2_i)),

	// Status Signals
	.LANE_UP(lane_up_2_i),
	.CHANNEL_UP(channel_up_2_i),
	.INIT_CLK(reference_clk_2_p_r),
	.GT_RESET_IN(gsr_r),

	// Clock Signals
	.GTPD5_P(reference_clk_2_p_r),
	.GTPD5_N(reference_clk_2_n_r),

	// GT I/O
	.RXP1(rxp_1_i),
	.RXN1(rxn_1_i),

	.TXP1(txp_1_i),
	.TXN1(txn_1_i),

	// GT I/O
	.RXP2(rxp_2_i),
	.RXN2(rxn_2_i),

	.TXP2(txp_2_i),
	.TXN2(txn_2_i),
//-----------------------------------------------------------//
	.send_ports_0_putFlit_flit_in(flit_in[3]),
	.EN_send_ports_0_putFlit(send_flit[3]),

	.EN_send_ports_0_getNonFullVCs(1'b1), // drain credits
	.send_ports_0_getNonFullVCs(credit_out[3]),

	.EN_recv_ports_0_getFlit(1'b1), // drain flits
	.recv_ports_0_getFlit(flit_out[3]),

	.recv_ports_0_putNonFullVCs_nonFullVCs(credit_in[3]),
	.EN_recv_ports_0_putNonFullVCs(send_credit[3]),
	
	
	.recv_ports_info_0_getRecvPortID(),
//-----------------------------------------------------------//
	// Error signals from the Local Link packet checker
	.ERR_COUNT(err_count_2_i)
);

endmodule

`endif
