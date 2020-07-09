

`ifndef XST_SYNTH

`timescale 1ns / 1ps

`include "connect_parameters.v"


module myNetworkAurora #
(
	parameter   USE_CHIPSCOPE        = 0,
	parameter   SIM_GTPRESET_SPEEDUP = 1      
)
(
	RESET,
	INIT_CLK1,
	INIT_CLK2,
	GTPD5_P1,
	GTPD5_N1,
	GTPD5_P2,
	GTPD5_N2,
	CHANNEL_UP,
//	USER_CLK,
	
	send_ports_0_putFlit_flit_in,
	EN_send_ports_0_putFlit,

	EN_send_ports_0_getNonFullVCs,
	send_ports_0_getNonFullVCs,

	send_ports_1_putFlit_flit_in,
	EN_send_ports_1_putFlit,

	EN_send_ports_1_getNonFullVCs,
	send_ports_1_getNonFullVCs,

	send_ports_2_putFlit_flit_in,
	EN_send_ports_2_putFlit,

	EN_send_ports_2_getNonFullVCs,
	send_ports_2_getNonFullVCs,

	send_ports_3_putFlit_flit_in,
	EN_send_ports_3_putFlit,

	EN_send_ports_3_getNonFullVCs,
	send_ports_3_getNonFullVCs,

	EN_recv_ports_0_getFlit,
	recv_ports_0_getFlit,

	recv_ports_0_putNonFullVCs_nonFullVCs,
	EN_recv_ports_0_putNonFullVCs,

	EN_recv_ports_1_getFlit,
	recv_ports_1_getFlit,

	recv_ports_1_putNonFullVCs_nonFullVCs,
	EN_recv_ports_1_putNonFullVCs,

	EN_recv_ports_2_getFlit,
	recv_ports_2_getFlit,

	recv_ports_2_putNonFullVCs_nonFullVCs,
	EN_recv_ports_2_putNonFullVCs,

	EN_recv_ports_3_getFlit,
	recv_ports_3_getFlit,

	recv_ports_3_putNonFullVCs_nonFullVCs,
	EN_recv_ports_3_putNonFullVCs,

	recv_ports_info_0_getRecvPortID,

	recv_ports_info_1_getRecvPortID,

	recv_ports_info_2_getRecvPortID,

	recv_ports_info_3_getRecvPortID
);


  input  INIT_CLK1;
  input  INIT_CLK2;
  input  RESET;  
  input  GTPD5_P1;
  input  GTPD5_N1;
  input  GTPD5_P2;
  input  GTPD5_N2;
  output CHANNEL_UP;
  //output USER_CLK;

  wire channel_up_i_1, channel_up_i_2;//, user_clk_i;
  // action method send_ports_0_putFlit
  input  [20 : 0] send_ports_0_putFlit_flit_in;
  input  EN_send_ports_0_putFlit;

  // actionvalue method send_ports_0_getNonFullVCs
  input  EN_send_ports_0_getNonFullVCs;
  output [1 : 0] send_ports_0_getNonFullVCs;

  // action method send_ports_1_putFlit
  input  [20 : 0] send_ports_1_putFlit_flit_in;
  input  EN_send_ports_1_putFlit;

  // actionvalue method send_ports_1_getNonFullVCs
  input  EN_send_ports_1_getNonFullVCs;
  output [1 : 0] send_ports_1_getNonFullVCs;

  // action method send_ports_2_putFlit
  input  [20 : 0] send_ports_2_putFlit_flit_in;
  input  EN_send_ports_2_putFlit;

  // actionvalue method send_ports_2_getNonFullVCs
  input  EN_send_ports_2_getNonFullVCs;
  output [1 : 0] send_ports_2_getNonFullVCs;

  // action method send_ports_3_putFlit
  input  [20 : 0] send_ports_3_putFlit_flit_in;
  input  EN_send_ports_3_putFlit;

  // actionvalue method send_ports_3_getNonFullVCs
  input  EN_send_ports_3_getNonFullVCs;
  output [1 : 0] send_ports_3_getNonFullVCs;

  // actionvalue method recv_ports_0_getFlit
  input  EN_recv_ports_0_getFlit;
  output [20 : 0] recv_ports_0_getFlit;

  // action method recv_ports_0_putNonFullVCs
  input  [1 : 0] recv_ports_0_putNonFullVCs_nonFullVCs;
  input  EN_recv_ports_0_putNonFullVCs;

  // actionvalue method recv_ports_1_getFlit
  input  EN_recv_ports_1_getFlit;
  output [20 : 0] recv_ports_1_getFlit;

  // action method recv_ports_1_putNonFullVCs
  input  [1 : 0] recv_ports_1_putNonFullVCs_nonFullVCs;
  input  EN_recv_ports_1_putNonFullVCs;

  // actionvalue method recv_ports_2_getFlit
  input  EN_recv_ports_2_getFlit;
  output [20 : 0] recv_ports_2_getFlit;

  // action method recv_ports_2_putNonFullVCs
  input  [1 : 0] recv_ports_2_putNonFullVCs_nonFullVCs;
  input  EN_recv_ports_2_putNonFullVCs;

  // actionvalue method recv_ports_3_getFlit
  input  EN_recv_ports_3_getFlit;
  output [20 : 0] recv_ports_3_getFlit;

  // action method recv_ports_3_putNonFullVCs
  input  [1 : 0] recv_ports_3_putNonFullVCs_nonFullVCs;
  input  EN_recv_ports_3_putNonFullVCs;

  // value method recv_ports_info_0_getRecvPortID
  output [1 : 0] recv_ports_info_0_getRecvPortID;

  // value method recv_ports_info_1_getRecvPortID
  output [1 : 0] recv_ports_info_1_getRecvPortID;

  // value method recv_ports_info_2_getRecvPortID
  output [1 : 0] recv_ports_info_2_getRecvPortID;

  // value method recv_ports_info_3_getRecvPortID
  output [1 : 0] recv_ports_info_3_getRecvPortID;

////////////////

  // action method send_ports_0_putFlit
  wire  [20 : 0] send_ports_0_putFlit_flit_in;
  wire  EN_send_ports_0_putFlit;

  // actionvalue method send_ports_0_getNonFullVCs
  wire  EN_send_ports_0_getNonFullVCs;
  wire [1 : 0] send_ports_0_getNonFullVCs;

  // action method send_ports_1_putFlit
  wire  [20 : 0] send_ports_1_putFlit_flit_in;
  wire  EN_send_ports_1_putFlit;

  // actionvalue method send_ports_1_getNonFullVCs
  wire  EN_send_ports_1_getNonFullVCs;
  wire [1 : 0] send_ports_1_getNonFullVCs;

  // action method send_ports_2_putFlit
  wire  [20 : 0] send_ports_2_putFlit_flit_in;
  wire  EN_send_ports_2_putFlit;

  // actionvalue method send_ports_2_getNonFullVCs
  wire  EN_send_ports_2_getNonFullVCs;
  wire [1 : 0] send_ports_2_getNonFullVCs;

  // action method send_ports_3_putFlit
  wire  [20 : 0] send_ports_3_putFlit_flit_in;
  wire  EN_send_ports_3_putFlit;

  // actionvalue method send_ports_3_getNonFullVCs
  wire  EN_send_ports_3_getNonFullVCs;
  wire [1 : 0] send_ports_3_getNonFullVCs;

  // actionvalue method recv_ports_0_getFlit
  wire  EN_recv_ports_0_getFlit;
  wire [20 : 0] recv_ports_0_getFlit;

  // action method recv_ports_0_putNonFullVCs
  wire  [1 : 0] recv_ports_0_putNonFullVCs_nonFullVCs;
  wire  EN_recv_ports_0_putNonFullVCs;

  // actionvalue method recv_ports_1_getFlit
  wire  EN_recv_ports_1_getFlit;
  wire [20 : 0] recv_ports_1_getFlit;

  // action method recv_ports_1_putNonFullVCs
  wire  [1 : 0] recv_ports_1_putNonFullVCs_nonFullVCs;
  wire  EN_recv_ports_1_putNonFullVCs;

  // actionvalue method recv_ports_2_getFlit
  wire  EN_recv_ports_2_getFlit;
  wire [20 : 0] recv_ports_2_getFlit;

  // action method recv_ports_2_putNonFullVCs
  wire  [1 : 0] recv_ports_2_putNonFullVCs_nonFullVCs;
  wire  EN_recv_ports_2_putNonFullVCs;

  // actionvalue method recv_ports_3_getFlit
  wire  EN_recv_ports_3_getFlit;
  wire [20 : 0] recv_ports_3_getFlit;

  // action method recv_ports_3_putNonFullVCs
  wire  [1 : 0] recv_ports_3_putNonFullVCs_nonFullVCs;
  wire  EN_recv_ports_3_putNonFullVCs;

  // value method recv_ports_info_0_getRecvPortID
  wire [1 : 0] recv_ports_info_0_getRecvPortID;

  // value method recv_ports_info_1_getRecvPortID
  wire [1 : 0] recv_ports_info_1_getRecvPortID;

  // value method recv_ports_info_2_getRecvPortID
  wire [1 : 0] recv_ports_info_2_getRecvPortID;

  // value method recv_ports_info_3_getRecvPortID
  wire [1 : 0] recv_ports_info_3_getRecvPortID;

wire	RXP_router_3_port_4_i;
wire	RXN_router_3_port_4_i;
wire	TXP_router_3_port_2_i;
wire	TXN_router_3_port_2_i;
wire	RXP_router_3_port_3_i;
wire	RXN_router_3_port_3_i;
wire	TXP_router_3_port_1_i;
wire	TXN_router_3_port_1_i;

wire	RXP_router_1_port_2_i;
wire	RXN_router_1_port_2_i;
wire	TXP_router_1_port_4_i;
wire	TXN_router_1_port_4_i;
wire	RXP_router_2_port_1_i;
wire	RXN_router_2_port_1_i;
wire	TXP_router_2_port_3_i;
wire	TXN_router_2_port_3_i;

assign CHANNEL_UP = channel_up_i_1 & channel_up_i_2;
//assign USER_CLK = user_clk_i;
aurora_network_1Router myNetworkSimple_1
(
	.send_ports_3_putFlit_flit_in(send_ports_3_putFlit_flit_in),
	.EN_send_ports_3_putFlit(EN_send_ports_3_putFlit),
	.EN_send_ports_3_getNonFullVCs(EN_send_ports_3_getNonFullVCs),
	.send_ports_3_getNonFullVCs(send_ports_3_getNonFullVCs),

	.EN_recv_ports_3_getFlit(EN_recv_ports_3_getFlit),
	.recv_ports_3_getFlit(recv_ports_3_getFlit),
	.recv_ports_3_putNonFullVCs_nonFullVCs(recv_ports_3_putNonFullVCs_nonFullVCs),
	.EN_recv_ports_3_putNonFullVCs(EN_recv_ports_3_putNonFullVCs), 

	.in_ports_3_3_getNonFullVCs(in_ports_3_3_getNonFullVCs), 
	.in_ports_3_4_getNonFullVCs(in_ports_3_4_getNonFullVCs), 
	.out_ports_3_2_getNonFullVCs(out_ports_3_2_getNonFullVCs), 
	.out_ports_3_1_getNonFullVCs(out_ports_3_1_getNonFullVCs), 

	.recv_ports_info_3_getRecvPortID(recv_ports_info_3_getRecvPortID),

	// User IO
//	.USER_CLK(user_clk_i),
	.RESET(RESET),
	.INIT_CLK(INIT_CLK1),
	.GTPD5_P(GTPD5_P1),
	.GTPD5_N(GTPD5_N1),
	.CHANNEL_UP(channel_up_i_1),
	// GT I/O
	.RXP_router_3_port_4(RXP_router_3_port_4_i),
	.RXN_router_3_port_4(RXN_router_3_port_4_i),
	.TXP_router_3_port_2(TXP_router_3_port_2_i),
	.TXN_router_3_port_2(TXN_router_3_port_2_i),

	.RXP_router_3_port_3(RXP_router_3_port_3_i),
	.RXN_router_3_port_3(RXN_router_3_port_3_i),
	.TXP_router_3_port_1(TXP_router_3_port_1_i),
	.TXN_router_3_port_1(TXN_router_3_port_1_i)
);

aurora_network_3Router myNetworkSimple_0
(
	.send_ports_0_putFlit_flit_in(send_ports_0_putFlit_flit_in),
	.EN_send_ports_0_putFlit(EN_send_ports_0_putFlit),
	.EN_send_ports_0_getNonFullVCs(EN_send_ports_0_getNonFullVCs),
	.send_ports_0_getNonFullVCs(send_ports_0_getNonFullVCs),

	.send_ports_1_putFlit_flit_in(send_ports_1_putFlit_flit_in),
	.EN_send_ports_1_putFlit(EN_send_ports_1_putFlit),
	.EN_send_ports_1_getNonFullVCs(EN_send_ports_1_getNonFullVCs),
	.send_ports_1_getNonFullVCs(send_ports_1_getNonFullVCs),

	.send_ports_2_putFlit_flit_in(send_ports_2_putFlit_flit_in),
	.EN_send_ports_2_putFlit(EN_send_ports_2_putFlit),
	.EN_send_ports_2_getNonFullVCs(EN_send_ports_2_getNonFullVCs),
	.send_ports_2_getNonFullVCs(send_ports_2_getNonFullVCs),

	.EN_recv_ports_0_getFlit(EN_recv_ports_0_getFlit),
	.recv_ports_0_getFlit(recv_ports_0_getFlit),
	.recv_ports_0_putNonFullVCs_nonFullVCs(recv_ports_0_putNonFullVCs_nonFullVCs),
	.EN_recv_ports_0_putNonFullVCs(EN_recv_ports_0_putNonFullVCs), 

	.EN_recv_ports_1_getFlit(EN_recv_ports_1_getFlit),
	.recv_ports_1_getFlit(recv_ports_1_getFlit),
	.recv_ports_1_putNonFullVCs_nonFullVCs(recv_ports_1_putNonFullVCs_nonFullVCs),
	.EN_recv_ports_1_putNonFullVCs(EN_recv_ports_1_putNonFullVCs), 

	.EN_recv_ports_2_getFlit(EN_recv_ports_2_getFlit),
	.recv_ports_2_getFlit(recv_ports_2_getFlit),
	.recv_ports_2_putNonFullVCs_nonFullVCs(recv_ports_2_putNonFullVCs_nonFullVCs),
	.EN_recv_ports_2_putNonFullVCs(EN_recv_ports_2_putNonFullVCs), 

	.in_ports_1_2_getNonFullVCs(in_ports_1_2_getNonFullVCs), 
	.in_ports_2_1_getNonFullVCs(in_ports_2_1_getNonFullVCs), 
	.out_ports_2_3_getNonFullVCs(out_ports_2_3_getNonFullVCs), 
	.out_ports_1_4_getNonFullVCs(out_ports_1_4_getNonFullVCs), 
	.recv_ports_info_0_getRecvPortID(recv_ports_info_0_getRecvPortID),
	.recv_ports_info_1_getRecvPortID(recv_ports_info_1_getRecvPortID),
	.recv_ports_info_2_getRecvPortID(recv_ports_info_2_getRecvPortID),

	// User IO
	.RESET(RESET),
	.INIT_CLK(INIT_CLK2),
	.GTPD5_P(GTPD5_P2),
	.GTPD5_N(GTPD5_N2),
	.CHANNEL_UP(channel_up_i_2),
	// GT I/O
	.RXP_router_1_port_2(TXP_router_3_port_2_i),
	.RXN_router_1_port_2(TXN_router_3_port_2_i),
	.TXP_router_1_port_4(RXP_router_3_port_4_i),
	.TXN_router_1_port_4(RXN_router_3_port_4_i),

	.RXP_router_2_port_1(TXP_router_3_port_1_i),
	.RXN_router_2_port_1(TXN_router_3_port_1_i),
	.TXP_router_2_port_3(RXP_router_3_port_3_i),
	.TXN_router_2_port_3(RXN_router_3_port_3_i)
);

endmodule

`endif

