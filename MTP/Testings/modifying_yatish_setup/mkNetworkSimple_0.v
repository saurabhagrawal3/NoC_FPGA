`ifdef BSV_ASSIGNMENT_DELAY 
`else  
`define BSV_ASSIGNMENT_DELAY 
`endif 

module mkNetworkSimple_0 #
(
     parameter   SIM_GTPRESET_SPEEDUP = 1      
)
(
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

	ser_in_1_2,
	in_ports_1_2_getNonFullVCs, 
	ser_in_2_1,
	in_ports_2_1_getNonFullVCs, 
	ser_out_2_3,
	out_ports_2_3_getNonFullVCs, 
	ser_out_1_4,
	out_ports_1_4_getNonFullVCs, 
	recv_ports_info_0_getRecvPortID,
	recv_ports_info_1_getRecvPortID,
	recv_ports_info_2_getRecvPortID,
	RESET,
	HARD_ERR,
	SOFT_ERR,
	FRAME_ERR,
	ERR_COUNT,
	LANE_UP,
	CHANNEL_UP,
	INIT_CLK,
	GT_RESET_IN,
	GTPD5_P,
	GTPD5_N
);

// User I/O
input              RESET;
input              INIT_CLK;
input              GT_RESET_IN;
output             HARD_ERR;
output             SOFT_ERR;
output             FRAME_ERR;
output  [0:7]      ERR_COUNT;
output             LANE_UP;
output             CHANNEL_UP;
// Clocks
input              GTPD5_P;
input              GTPD5_N;


input ser_in_1_2, ser_in_2_1, out_ports_2_3_getNonFullVCs, out_ports_1_4_getNonFullVCs;
output ser_out_2_3;
output ser_out_1_4;
output in_ports_1_2_getNonFullVCs;
output in_ports_2_1_getNonFullVCs;

// action method send_ports_0_putFlit 
input  [20 : 0] send_ports_0_putFlit_flit_in;
input  EN_send_ports_0_putFlit;

// actionvalue method send_ports_0_getNonFullVCs 
input  EN_send_ports_0_getNonFullVCs;
output [1 : 0] send_ports_0_getNonFullVCs;

// actionvalue method recv_ports_0_getFlit
input EN_recv_ports_0_getFlit;
output [20 : 0] recv_ports_0_getFlit;

// action method recv_ports_0_putNonFullVCs 
input  [1 : 0] recv_ports_0_putNonFullVCs_nonFullVCs;
input  EN_recv_ports_0_putNonFullVCs;

// action method send_ports_1_putFlit 
input  [20 : 0] send_ports_1_putFlit_flit_in;
input  EN_send_ports_1_putFlit;

// actionvalue method send_ports_1_getNonFullVCs 
input  EN_send_ports_1_getNonFullVCs;
output [1 : 0] send_ports_1_getNonFullVCs;

// actionvalue method recv_ports_1_getFlit
input EN_recv_ports_1_getFlit;
output [20 : 0] recv_ports_1_getFlit;

// action method recv_ports_1_putNonFullVCs 
input  [1 : 0] recv_ports_1_putNonFullVCs_nonFullVCs;
input  EN_recv_ports_1_putNonFullVCs;

// action method send_ports_2_putFlit 
input  [20 : 0] send_ports_2_putFlit_flit_in;
input  EN_send_ports_2_putFlit;

// actionvalue method send_ports_2_getNonFullVCs 
input  EN_send_ports_2_getNonFullVCs;
output [1 : 0] send_ports_2_getNonFullVCs;

// actionvalue method recv_ports_2_getFlit
input EN_recv_ports_2_getFlit;
output [20 : 0] recv_ports_2_getFlit;

// action method recv_ports_2_putNonFullVCs 
input  [1 : 0] recv_ports_2_putNonFullVCs_nonFullVCs;
input  EN_recv_ports_2_putNonFullVCs;
output [1 : 0] recv_ports_info_0_getRecvPortID;
output [1 : 0] recv_ports_info_1_getRecvPortID;
output [1 : 0] recv_ports_info_2_getRecvPortID;

wire [20 : 0] recv_ports_0_getFlit;
wire [20 : 0] recv_ports_1_getFlit;
wire [20 : 0] recv_ports_2_getFlit;

wire [1 : 0] send_ports_0_getNonFullVCs;
wire [1 : 0] send_ports_1_getNonFullVCs;
wire [1 : 0] send_ports_2_getNonFullVCs;

// ports of submodule net_routers_routeTable_0_rt_ifc_banks_banks_rf_0
wire [1 : 0] net_routers_routeTable_0_rt_ifc_banks_banks_rf_0$ADDR_1, net_routers_routeTable_0_rt_ifc_banks_banks_rf_0$ADDR_IN;
wire [2:0] net_routers_routeTable_0_rt_ifc_banks_banks_rf_0$D_IN, net_routers_routeTable_0_rt_ifc_banks_banks_rf_0$D_OUT_1; 
wire net_routers_routeTable_0_rt_ifc_banks_banks_rf_0$WE;

// ports of submodule net_routers_routeTable_0_rt_ifc_banks_banks_rf_1
wire [1 : 0] net_routers_routeTable_0_rt_ifc_banks_banks_rf_1$ADDR_1, net_routers_routeTable_0_rt_ifc_banks_banks_rf_1$ADDR_IN;
wire [2:0] net_routers_routeTable_0_rt_ifc_banks_banks_rf_1$D_IN, net_routers_routeTable_0_rt_ifc_banks_banks_rf_1$D_OUT_1; 
wire net_routers_routeTable_0_rt_ifc_banks_banks_rf_1$WE;

// ports of submodule net_routers_routeTable_0_rt_ifc_banks_banks_rf_2
wire [1 : 0] net_routers_routeTable_0_rt_ifc_banks_banks_rf_2$ADDR_1, net_routers_routeTable_0_rt_ifc_banks_banks_rf_2$ADDR_IN;
wire [2:0] net_routers_routeTable_0_rt_ifc_banks_banks_rf_2$D_IN, net_routers_routeTable_0_rt_ifc_banks_banks_rf_2$D_OUT_1; 
wire net_routers_routeTable_0_rt_ifc_banks_banks_rf_2$WE;

// ports of submodule net_routers_routeTable_0_rt_ifc_banks_banks_rf_3
wire [1 : 0] net_routers_routeTable_0_rt_ifc_banks_banks_rf_3$ADDR_1, net_routers_routeTable_0_rt_ifc_banks_banks_rf_3$ADDR_IN;
wire [2:0] net_routers_routeTable_0_rt_ifc_banks_banks_rf_3$D_IN, net_routers_routeTable_0_rt_ifc_banks_banks_rf_3$D_OUT_1; 
wire net_routers_routeTable_0_rt_ifc_banks_banks_rf_3$WE;

// ports of submodule net_routers_routeTable_0_rt_ifc_banks_banks_rf_4
wire [1 : 0] net_routers_routeTable_0_rt_ifc_banks_banks_rf_4$ADDR_1, net_routers_routeTable_0_rt_ifc_banks_banks_rf_4$ADDR_IN;
wire [2:0] net_routers_routeTable_0_rt_ifc_banks_banks_rf_4$D_IN, net_routers_routeTable_0_rt_ifc_banks_banks_rf_4$D_OUT_1; 
wire net_routers_routeTable_0_rt_ifc_banks_banks_rf_4$WE;

// ports of submodule net_routers_routeTable_1_rt_ifc_banks_banks_rf_0
wire [1 : 0] net_routers_routeTable_1_rt_ifc_banks_banks_rf_0$ADDR_1, net_routers_routeTable_1_rt_ifc_banks_banks_rf_0$ADDR_IN;
wire [2:0] net_routers_routeTable_1_rt_ifc_banks_banks_rf_0$D_IN, net_routers_routeTable_1_rt_ifc_banks_banks_rf_0$D_OUT_1; 
wire net_routers_routeTable_1_rt_ifc_banks_banks_rf_0$WE;

// ports of submodule net_routers_routeTable_1_rt_ifc_banks_banks_rf_1
wire [1 : 0] net_routers_routeTable_1_rt_ifc_banks_banks_rf_1$ADDR_1, net_routers_routeTable_1_rt_ifc_banks_banks_rf_1$ADDR_IN;
wire [2:0] net_routers_routeTable_1_rt_ifc_banks_banks_rf_1$D_IN, net_routers_routeTable_1_rt_ifc_banks_banks_rf_1$D_OUT_1; 
wire net_routers_routeTable_1_rt_ifc_banks_banks_rf_1$WE;

// ports of submodule net_routers_routeTable_1_rt_ifc_banks_banks_rf_2
wire [1 : 0] net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$ADDR_1, net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$ADDR_IN;
wire [2:0] net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$D_IN, net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$D_OUT_1; 
wire net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$WE;

// ports of submodule net_routers_routeTable_1_rt_ifc_banks_banks_rf_3
wire [1 : 0] net_routers_routeTable_1_rt_ifc_banks_banks_rf_3$ADDR_1, net_routers_routeTable_1_rt_ifc_banks_banks_rf_3$ADDR_IN;
wire [2:0] net_routers_routeTable_1_rt_ifc_banks_banks_rf_3$D_IN, net_routers_routeTable_1_rt_ifc_banks_banks_rf_3$D_OUT_1; 
wire net_routers_routeTable_1_rt_ifc_banks_banks_rf_3$WE;

// ports of submodule net_routers_routeTable_1_rt_ifc_banks_banks_rf_4
wire [1 : 0] net_routers_routeTable_1_rt_ifc_banks_banks_rf_4$ADDR_1, net_routers_routeTable_1_rt_ifc_banks_banks_rf_4$ADDR_IN;
wire [2:0] net_routers_routeTable_1_rt_ifc_banks_banks_rf_4$D_IN, net_routers_routeTable_1_rt_ifc_banks_banks_rf_4$D_OUT_1; 
wire net_routers_routeTable_1_rt_ifc_banks_banks_rf_4$WE;

// ports of submodule net_routers_routeTable_2_rt_ifc_banks_banks_rf_0
wire [1 : 0] net_routers_routeTable_2_rt_ifc_banks_banks_rf_0$ADDR_1, net_routers_routeTable_2_rt_ifc_banks_banks_rf_0$ADDR_IN;
wire [2:0] net_routers_routeTable_2_rt_ifc_banks_banks_rf_0$D_IN, net_routers_routeTable_2_rt_ifc_banks_banks_rf_0$D_OUT_1; 
wire net_routers_routeTable_2_rt_ifc_banks_banks_rf_0$WE;

// ports of submodule net_routers_routeTable_2_rt_ifc_banks_banks_rf_1
wire [1 : 0] net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$ADDR_1, net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$ADDR_IN;
wire [2:0] net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$D_IN, net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$D_OUT_1; 
wire net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$WE;

// ports of submodule net_routers_routeTable_2_rt_ifc_banks_banks_rf_2
wire [1 : 0] net_routers_routeTable_2_rt_ifc_banks_banks_rf_2$ADDR_1, net_routers_routeTable_2_rt_ifc_banks_banks_rf_2$ADDR_IN;
wire [2:0] net_routers_routeTable_2_rt_ifc_banks_banks_rf_2$D_IN, net_routers_routeTable_2_rt_ifc_banks_banks_rf_2$D_OUT_1; 
wire net_routers_routeTable_2_rt_ifc_banks_banks_rf_2$WE;

// ports of submodule net_routers_routeTable_2_rt_ifc_banks_banks_rf_3
wire [1 : 0] net_routers_routeTable_2_rt_ifc_banks_banks_rf_3$ADDR_1, net_routers_routeTable_2_rt_ifc_banks_banks_rf_3$ADDR_IN;
wire [2:0] net_routers_routeTable_2_rt_ifc_banks_banks_rf_3$D_IN, net_routers_routeTable_2_rt_ifc_banks_banks_rf_3$D_OUT_1; 
wire net_routers_routeTable_2_rt_ifc_banks_banks_rf_3$WE;

// ports of submodule net_routers_routeTable_2_rt_ifc_banks_banks_rf_4
wire [1 : 0] net_routers_routeTable_2_rt_ifc_banks_banks_rf_4$ADDR_1, net_routers_routeTable_2_rt_ifc_banks_banks_rf_4$ADDR_IN;
wire [2:0] net_routers_routeTable_2_rt_ifc_banks_banks_rf_4$D_IN, net_routers_routeTable_2_rt_ifc_banks_banks_rf_4$D_OUT_1; 
wire net_routers_routeTable_2_rt_ifc_banks_banks_rf_4$WE;

// ports of submodule net_routers_router_core_0
wire [23 : 0] net_routers_router_core_0$in_ports_0_putRoutedFlit_flit_in;
wire [20 : 0] net_routers_router_core_0$out_ports_0_getFlit;
wire [1 : 0] net_routers_router_core_0$in_ports_0_getNonFullVCs;
wire [1 : 0] net_routers_router_core_0$out_ports_0_putNonFullVCs_nonFullVCs;
wire net_routers_router_core_0$EN_in_ports_0_getNonFullVCs;
wire net_routers_router_core_0$EN_in_ports_0_putRoutedFlit;
wire net_routers_router_core_0$EN_out_ports_0_getFlit;
wire net_routers_router_core_0$EN_out_ports_0_putNonFullVCs;

wire [23 : 0] net_routers_router_core_0$in_ports_1_putRoutedFlit_flit_in;
wire [20 : 0] net_routers_router_core_0$out_ports_1_getFlit;
wire [1 : 0] net_routers_router_core_0$in_ports_1_getNonFullVCs;
wire [1 : 0] net_routers_router_core_0$out_ports_1_putNonFullVCs_nonFullVCs;
wire net_routers_router_core_0$EN_in_ports_1_getNonFullVCs;
wire net_routers_router_core_0$EN_in_ports_1_putRoutedFlit;
wire net_routers_router_core_0$EN_out_ports_1_getFlit;
wire net_routers_router_core_0$EN_out_ports_1_putNonFullVCs;

wire [23 : 0] net_routers_router_core_0$in_ports_2_putRoutedFlit_flit_in;
wire [20 : 0] net_routers_router_core_0$out_ports_2_getFlit;
wire [1 : 0] net_routers_router_core_0$in_ports_2_getNonFullVCs;
wire [1 : 0] net_routers_router_core_0$out_ports_2_putNonFullVCs_nonFullVCs;
wire net_routers_router_core_0$EN_in_ports_2_getNonFullVCs;
wire net_routers_router_core_0$EN_in_ports_2_putRoutedFlit;
wire net_routers_router_core_0$EN_out_ports_2_getFlit;
wire net_routers_router_core_0$EN_out_ports_2_putNonFullVCs;

wire [23 : 0] net_routers_router_core_0$in_ports_3_putRoutedFlit_flit_in;
wire [20 : 0] net_routers_router_core_0$out_ports_3_getFlit;
wire [1 : 0] net_routers_router_core_0$in_ports_3_getNonFullVCs;
wire [1 : 0] net_routers_router_core_0$out_ports_3_putNonFullVCs_nonFullVCs;
wire net_routers_router_core_0$EN_in_ports_3_getNonFullVCs;
wire net_routers_router_core_0$EN_in_ports_3_putRoutedFlit;
wire net_routers_router_core_0$EN_out_ports_3_getFlit;
wire net_routers_router_core_0$EN_out_ports_3_putNonFullVCs;

wire [23 : 0] net_routers_router_core_0$in_ports_4_putRoutedFlit_flit_in;
wire [20 : 0] net_routers_router_core_0$out_ports_4_getFlit;
wire [1 : 0] net_routers_router_core_0$in_ports_4_getNonFullVCs;
wire [1 : 0] net_routers_router_core_0$out_ports_4_putNonFullVCs_nonFullVCs;
wire net_routers_router_core_0$EN_in_ports_4_getNonFullVCs;
wire net_routers_router_core_0$EN_in_ports_4_putRoutedFlit;
wire net_routers_router_core_0$EN_out_ports_4_getFlit;
wire net_routers_router_core_0$EN_out_ports_4_putNonFullVCs;

// ports of submodule net_routers_router_core_1
wire [23 : 0] net_routers_router_core_1$in_ports_0_putRoutedFlit_flit_in;
wire [20 : 0] net_routers_router_core_1$out_ports_0_getFlit;
wire [1 : 0] net_routers_router_core_1$in_ports_0_getNonFullVCs;
wire [1 : 0] net_routers_router_core_1$out_ports_0_putNonFullVCs_nonFullVCs;
wire net_routers_router_core_1$EN_in_ports_0_getNonFullVCs;
wire net_routers_router_core_1$EN_in_ports_0_putRoutedFlit;
wire net_routers_router_core_1$EN_out_ports_0_getFlit;
wire net_routers_router_core_1$EN_out_ports_0_putNonFullVCs;

wire [23 : 0] net_routers_router_core_1$in_ports_1_putRoutedFlit_flit_in;
wire [20 : 0] net_routers_router_core_1$out_ports_1_getFlit;
wire [1 : 0] net_routers_router_core_1$in_ports_1_getNonFullVCs;
wire [1 : 0] net_routers_router_core_1$out_ports_1_putNonFullVCs_nonFullVCs;
wire net_routers_router_core_1$EN_in_ports_1_getNonFullVCs;
wire net_routers_router_core_1$EN_in_ports_1_putRoutedFlit;
wire net_routers_router_core_1$EN_out_ports_1_getFlit;
wire net_routers_router_core_1$EN_out_ports_1_putNonFullVCs;

wire [23 : 0] net_routers_router_core_1$in_ports_2_putRoutedFlit_flit_in;
wire [20 : 0] net_routers_router_core_1$out_ports_2_getFlit;
wire [1 : 0] net_routers_router_core_1$in_ports_2_getNonFullVCs;
wire [1 : 0] net_routers_router_core_1$out_ports_2_putNonFullVCs_nonFullVCs;
wire net_routers_router_core_1$EN_in_ports_2_getNonFullVCs;
wire net_routers_router_core_1$EN_in_ports_2_putRoutedFlit;
wire net_routers_router_core_1$EN_out_ports_2_getFlit;
wire net_routers_router_core_1$EN_out_ports_2_putNonFullVCs;

wire [23 : 0] net_routers_router_core_1$in_ports_3_putRoutedFlit_flit_in;
wire [20 : 0] net_routers_router_core_1$out_ports_3_getFlit;
wire [1 : 0] net_routers_router_core_1$in_ports_3_getNonFullVCs;
wire [1 : 0] net_routers_router_core_1$out_ports_3_putNonFullVCs_nonFullVCs;
wire net_routers_router_core_1$EN_in_ports_3_getNonFullVCs;
wire net_routers_router_core_1$EN_in_ports_3_putRoutedFlit;
wire net_routers_router_core_1$EN_out_ports_3_getFlit;
wire net_routers_router_core_1$EN_out_ports_3_putNonFullVCs;

wire [23 : 0] net_routers_router_core_1$in_ports_4_putRoutedFlit_flit_in;
wire [20 : 0] net_routers_router_core_1$out_ports_4_getFlit;
wire [1 : 0] net_routers_router_core_1$in_ports_4_getNonFullVCs;
wire [1 : 0] net_routers_router_core_1$out_ports_4_putNonFullVCs_nonFullVCs;
wire net_routers_router_core_1$EN_in_ports_4_getNonFullVCs;
wire net_routers_router_core_1$EN_in_ports_4_putRoutedFlit;
wire net_routers_router_core_1$EN_out_ports_4_getFlit;
wire net_routers_router_core_1$EN_out_ports_4_putNonFullVCs;


// ports of submodule net_routers_router_core_2
wire [23 : 0] net_routers_router_core_2$in_ports_0_putRoutedFlit_flit_in;
wire [20 : 0] net_routers_router_core_2$out_ports_0_getFlit;
wire [1 : 0] net_routers_router_core_2$in_ports_0_getNonFullVCs;
wire [1 : 0] net_routers_router_core_2$out_ports_0_putNonFullVCs_nonFullVCs;
wire net_routers_router_core_2$EN_in_ports_0_getNonFullVCs;
wire net_routers_router_core_2$EN_in_ports_0_putRoutedFlit;
wire net_routers_router_core_2$EN_out_ports_0_getFlit;
wire net_routers_router_core_2$EN_out_ports_0_putNonFullVCs;


wire [23 : 0] net_routers_router_core_2$in_ports_1_putRoutedFlit_flit_in;
wire [20 : 0] net_routers_router_core_2$out_ports_1_getFlit;
wire [1 : 0] net_routers_router_core_2$in_ports_1_getNonFullVCs;
wire [1 : 0] net_routers_router_core_2$out_ports_1_putNonFullVCs_nonFullVCs;
wire net_routers_router_core_2$EN_in_ports_1_getNonFullVCs;
wire net_routers_router_core_2$EN_in_ports_1_putRoutedFlit;
wire net_routers_router_core_2$EN_out_ports_1_getFlit;
wire net_routers_router_core_2$EN_out_ports_1_putNonFullVCs;


wire [23 : 0] net_routers_router_core_2$in_ports_2_putRoutedFlit_flit_in;
wire [20 : 0] net_routers_router_core_2$out_ports_2_getFlit;
wire [1 : 0] net_routers_router_core_2$in_ports_2_getNonFullVCs;
wire [1 : 0] net_routers_router_core_2$out_ports_2_putNonFullVCs_nonFullVCs;
wire net_routers_router_core_2$EN_in_ports_2_getNonFullVCs;
wire net_routers_router_core_2$EN_in_ports_2_putRoutedFlit;
wire net_routers_router_core_2$EN_out_ports_2_getFlit;
wire net_routers_router_core_2$EN_out_ports_2_putNonFullVCs;


wire [23 : 0] net_routers_router_core_2$in_ports_3_putRoutedFlit_flit_in;
wire [20 : 0] net_routers_router_core_2$out_ports_3_getFlit;
wire [1 : 0] net_routers_router_core_2$in_ports_3_getNonFullVCs;
wire [1 : 0] net_routers_router_core_2$out_ports_3_putNonFullVCs_nonFullVCs;
wire net_routers_router_core_2$EN_in_ports_3_getNonFullVCs;
wire net_routers_router_core_2$EN_in_ports_3_putRoutedFlit;
wire net_routers_router_core_2$EN_out_ports_3_getFlit;
wire net_routers_router_core_2$EN_out_ports_3_putNonFullVCs;


wire [23 : 0] net_routers_router_core_2$in_ports_4_putRoutedFlit_flit_in;
wire [20 : 0] net_routers_router_core_2$out_ports_4_getFlit;
wire [1 : 0] net_routers_router_core_2$in_ports_4_getNonFullVCs;
wire [1 : 0] net_routers_router_core_2$out_ports_4_putNonFullVCs_nonFullVCs;
wire net_routers_router_core_2$EN_in_ports_4_getNonFullVCs;
wire net_routers_router_core_2$EN_in_ports_4_putRoutedFlit;
wire net_routers_router_core_2$EN_out_ports_4_getFlit;
wire net_routers_router_core_2$EN_out_ports_4_putNonFullVCs;



wire new_rx_data_1_2;
wire [15:0] rx_data_1_2;


wire new_rx_data_2_1;
wire [15:0] rx_data_2_1;


wire tx_busy_2_3, new_tx_data_2_3;
wire [15:0] tx_data_2_3;


wire tx_busy_1_4, new_tx_data_1_4;
wire [15:0] tx_data_1_4;




//**************************External Register Declarations****************************
    reg                HARD_ERR;
    reg                SOFT_ERR;
    reg                FRAME_ERR;
    reg     [0:7]      ERR_COUNT;    
    reg                LANE_UP;
    reg                CHANNEL_UP;
//********************************Wire Declarations**********************************
    // LocalLink TX Interface
    // V5 Reference Clock Interface
    wire               GTPD5_left_i;

    // Error Detection Interface
    wire               hard_err_i_1;
    wire               soft_err_i_1;
    wire               frame_err_i_1;    
    // Error Detection Interface
    wire               hard_err_i_2;
    wire               soft_err_i_2;
    wire               frame_err_i_2;
    // Status
    wire               channel_up_i_1;
    wire               lane_up_i_1;
    // Status
    wire               channel_up_i_2;
    wire               lane_up_i_2;
    // Clock Compensation Control Interface
    wire               warn_cc_i;
    wire               do_cc_i;
    // System Interface
    wire               pll_not_locked_i;
    wire               user_clk_i;
    wire               sync_clk_i;
    wire               reset_i;
    wire               power_down_i;
    wire    [2:0]      loopback_i;
    wire               tx_lock_i;
    wire               tx_lock_out_i;

    wire               tx_out_clk_i_1;
    wire               buf_tx_out_clk_i_1;    
    wire               tx_out_clk_i_2;
    wire               buf_tx_out_clk_i_2;

    wire               gt_reset_i; 
    wire               system_reset_i;
    //Frame check signals
    wire    [0:7]      err_count_i_1;
    wire    [0:7]      err_count_i_2;


    wire        lane_up_i_i;
    wire        tx_lock_i_i;
    wire        lane_up_reduce_i;
    wire        rst_cc_module_i;

    wire    [0:15]     tied_to_gnd_vec_i;

assign in_ports_1_2_getNonFullVCs = net_routers_router_core_1$in_ports_2_getNonFullVCs[0];

assign in_ports_2_1_getNonFullVCs = net_routers_router_core_2$in_ports_1_getNonFullVCs[0];

// actionvalue method send_ports_0_getNonFullVCs 
assign send_ports_0_getNonFullVCs = net_routers_router_core_0$in_ports_0_getNonFullVCs;

// actionvalue method recv_ports_0_getFlit 
assign recv_ports_0_getFlit = net_routers_router_core_0$out_ports_0_getFlit ;

// value method recv_ports_info_0_getRecvPortID 

assign recv_ports_info_0_getRecvPortID = 0 ;

// actionvalue method send_ports_1_getNonFullVCs 
assign send_ports_1_getNonFullVCs = net_routers_router_core_1$in_ports_0_getNonFullVCs;

// actionvalue method recv_ports_1_getFlit 
assign recv_ports_1_getFlit = net_routers_router_core_1$out_ports_0_getFlit ;

// value method recv_ports_info_1_getRecvPortID 

assign recv_ports_info_1_getRecvPortID = 1 ;

// actionvalue method send_ports_2_getNonFullVCs 
assign send_ports_2_getNonFullVCs = net_routers_router_core_2$in_ports_0_getNonFullVCs;

// actionvalue method recv_ports_2_getFlit 
assign recv_ports_2_getFlit = net_routers_router_core_2$out_ports_0_getFlit ;

// value method recv_ports_info_2_getRecvPortID 

assign recv_ports_info_2_getRecvPortID = 2 ; 


assign tx_data_2_3 = {net_routers_router_core_2$out_ports_3_getFlit[18:17],net_routers_router_core_2$out_ports_3_getFlit[13:0]};
assign new_tx_data_2_3 = net_routers_router_core_2$out_ports_3_getFlit[20]; //node-router interfacing port

assign tx_data_1_4 = {net_routers_router_core_1$out_ports_4_getFlit[18:17],net_routers_router_core_1$out_ports_4_getFlit[13:0]};
assign new_tx_data_1_4 = net_routers_router_core_1$out_ports_4_getFlit[20]; //node-router interfacing port

assign net_routers_router_core_1$EN_out_ports_2_putNonFullVCs = 1'd1;
assign net_routers_router_core_1$EN_out_ports_2_getFlit = 1'd1;

assign net_routers_router_core_2$EN_out_ports_1_putNonFullVCs = 1'd1;
assign net_routers_router_core_2$EN_out_ports_1_getFlit = 1'd1;



// submodule net_routers_routeTable_0_rt_ifc_banks_banks_rf_0
assign net_routers_routeTable_0_rt_ifc_banks_banks_rf_0$ADDR_1 = send_ports_0_putFlit_flit_in[18:17] ;
assign net_routers_routeTable_0_rt_ifc_banks_banks_rf_0$ADDR_IN = 0 ;
assign net_routers_routeTable_0_rt_ifc_banks_banks_rf_0$D_IN = 0 ;
assign net_routers_routeTable_0_rt_ifc_banks_banks_rf_0$WE = 1'b0 ;

// submodule net_routers_routeTable_1_rt_ifc_banks_banks_rf_1
assign net_routers_routeTable_1_rt_ifc_banks_banks_rf_0$ADDR_1 = send_ports_1_putFlit_flit_in[18:17] ;
assign net_routers_routeTable_1_rt_ifc_banks_banks_rf_0$ADDR_IN = 0 ;
assign net_routers_routeTable_1_rt_ifc_banks_banks_rf_0$D_IN = 0 ;
assign net_routers_routeTable_1_rt_ifc_banks_banks_rf_0$WE = 1'b0 ;

// submodule net_routers_routeTable_2_rt_ifc_banks_banks_rf_2
assign net_routers_routeTable_2_rt_ifc_banks_banks_rf_0$ADDR_1 = send_ports_2_putFlit_flit_in[18:17] ;
assign net_routers_routeTable_2_rt_ifc_banks_banks_rf_0$ADDR_IN = 0 ;
assign net_routers_routeTable_2_rt_ifc_banks_banks_rf_0$D_IN = 0 ;
assign net_routers_routeTable_2_rt_ifc_banks_banks_rf_0$WE = 1'b0 ;

// submodule net_routers_routeTable_0_rt_ifc_banks_banks_rf_1
assign net_routers_routeTable_0_rt_ifc_banks_banks_rf_1$ADDR_1 = net_routers_router_core_1$out_ports_1_getFlit[18:17]; 
assign net_routers_routeTable_0_rt_ifc_banks_banks_rf_1$ADDR_IN = 0 ;
assign net_routers_routeTable_0_rt_ifc_banks_banks_rf_1$D_IN = 0 ;
assign net_routers_routeTable_0_rt_ifc_banks_banks_rf_1$WE = 1'b0 ;

// submodule net_routers_routeTable_0_rt_ifc_banks_banks_rf_2
assign net_routers_routeTable_0_rt_ifc_banks_banks_rf_2$ADDR_1 = net_routers_router_core_2$out_ports_2_getFlit[18:17]; 
assign net_routers_routeTable_0_rt_ifc_banks_banks_rf_2$ADDR_IN = 0 ;
assign net_routers_routeTable_0_rt_ifc_banks_banks_rf_2$D_IN = 0 ;
assign net_routers_routeTable_0_rt_ifc_banks_banks_rf_2$WE = 1'b0 ;

// submodule net_routers_routeTable_1_rt_ifc_banks_banks_rf_3
assign net_routers_routeTable_1_rt_ifc_banks_banks_rf_3$ADDR_1 = net_routers_router_core_0$out_ports_3_getFlit[18:17]; 
assign net_routers_routeTable_1_rt_ifc_banks_banks_rf_3$ADDR_IN = 0 ;
assign net_routers_routeTable_1_rt_ifc_banks_banks_rf_3$D_IN = 0 ;
assign net_routers_routeTable_1_rt_ifc_banks_banks_rf_3$WE = 1'b0 ;

// submodule net_routers_routeTable_2_rt_ifc_banks_banks_rf_4
assign net_routers_routeTable_2_rt_ifc_banks_banks_rf_4$ADDR_1 = net_routers_router_core_0$out_ports_4_getFlit[18:17]; 
assign net_routers_routeTable_2_rt_ifc_banks_banks_rf_4$ADDR_IN = 0 ;
assign net_routers_routeTable_2_rt_ifc_banks_banks_rf_4$D_IN = 0 ;
assign net_routers_routeTable_2_rt_ifc_banks_banks_rf_4$WE = 1'b0 ;

// submodule net_routers_routeTable_1_rt_ifc_banks_banks_rf_2
assign net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$ADDR_1 = rx_data_1_2[15:14]; 
assign net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$ADDR_IN = 0 ;
assign net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$D_IN = 0 ;
assign net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$WE = 1'b0 ;

// submodule net_routers_routeTable_2_rt_ifc_banks_banks_rf_1
assign net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$ADDR_1 = rx_data_2_1[15:14]; 
assign net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$ADDR_IN = 0 ;
assign net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$D_IN = 0 ;
assign net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$WE = 1'b0 ;

assign net_routers_routeTable_0_rt_ifc_banks_banks_rf_3$ADDR_1 = 0 ;
assign net_routers_routeTable_0_rt_ifc_banks_banks_rf_3$ADDR_IN = 0 ;
assign net_routers_routeTable_0_rt_ifc_banks_banks_rf_3$D_IN = 0 ;
assign net_routers_routeTable_0_rt_ifc_banks_banks_rf_3$WE = 0 ;
assign net_routers_router_core_0$in_ports_3_putRoutedFlit_flit_in = 0 ;

assign net_routers_routeTable_0_rt_ifc_banks_banks_rf_4$ADDR_1 = 0 ;
assign net_routers_routeTable_0_rt_ifc_banks_banks_rf_4$ADDR_IN = 0 ;
assign net_routers_routeTable_0_rt_ifc_banks_banks_rf_4$D_IN = 0 ;
assign net_routers_routeTable_0_rt_ifc_banks_banks_rf_4$WE = 0 ;
assign net_routers_router_core_0$in_ports_4_putRoutedFlit_flit_in = 0 ;

assign net_routers_routeTable_1_rt_ifc_banks_banks_rf_1$ADDR_1 = 0 ;
assign net_routers_routeTable_1_rt_ifc_banks_banks_rf_1$ADDR_IN = 0 ;
assign net_routers_routeTable_1_rt_ifc_banks_banks_rf_1$D_IN = 0 ;
assign net_routers_routeTable_1_rt_ifc_banks_banks_rf_1$WE = 0 ;
assign net_routers_router_core_1$in_ports_1_putRoutedFlit_flit_in = 0 ;

assign net_routers_routeTable_1_rt_ifc_banks_banks_rf_4$ADDR_1 = 0 ;
assign net_routers_routeTable_1_rt_ifc_banks_banks_rf_4$ADDR_IN = 0 ;
assign net_routers_routeTable_1_rt_ifc_banks_banks_rf_4$D_IN = 0 ;
assign net_routers_routeTable_1_rt_ifc_banks_banks_rf_4$WE = 0 ;
assign net_routers_router_core_1$in_ports_4_putRoutedFlit_flit_in = 0 ;

assign net_routers_routeTable_2_rt_ifc_banks_banks_rf_2$ADDR_1 = 0 ;
assign net_routers_routeTable_2_rt_ifc_banks_banks_rf_2$ADDR_IN = 0 ;
assign net_routers_routeTable_2_rt_ifc_banks_banks_rf_2$D_IN = 0 ;
assign net_routers_routeTable_2_rt_ifc_banks_banks_rf_2$WE = 0 ;
assign net_routers_router_core_2$in_ports_2_putRoutedFlit_flit_in = 0 ;

assign net_routers_routeTable_2_rt_ifc_banks_banks_rf_3$ADDR_1 = 0 ;
assign net_routers_routeTable_2_rt_ifc_banks_banks_rf_3$ADDR_IN = 0 ;
assign net_routers_routeTable_2_rt_ifc_banks_banks_rf_3$D_IN = 0 ;
assign net_routers_routeTable_2_rt_ifc_banks_banks_rf_3$WE = 0 ;
assign net_routers_router_core_2$in_ports_3_putRoutedFlit_flit_in = 0 ;

// submodule net_routers_router_core_0
assign net_routers_router_core_0$in_ports_1_putRoutedFlit_flit_in =
{ net_routers_router_core_1$out_ports_1_getFlit, 
net_routers_routeTable_0_rt_ifc_banks_banks_rf_1$D_OUT_1 } ;
assign net_routers_router_core_0$EN_in_ports_1_putRoutedFlit = 1 ;
assign net_routers_router_core_0$EN_in_ports_1_getNonFullVCs = 1;
assign net_routers_router_core_1$out_ports_1_putNonFullVCs_nonFullVCs = net_routers_router_core_0$in_ports_1_getNonFullVCs ;
assign net_routers_router_core_1$EN_out_ports_1_getFlit = 1 ;
assign net_routers_router_core_1$EN_out_ports_1_putNonFullVCs = 1;

// submodule net_routers_router_core_0
assign net_routers_router_core_0$in_ports_2_putRoutedFlit_flit_in =
{ net_routers_router_core_2$out_ports_2_getFlit, 
net_routers_routeTable_0_rt_ifc_banks_banks_rf_2$D_OUT_1 } ;
assign net_routers_router_core_0$EN_in_ports_2_putRoutedFlit = 1 ;
assign net_routers_router_core_0$EN_in_ports_2_getNonFullVCs = 1;
assign net_routers_router_core_2$out_ports_2_putNonFullVCs_nonFullVCs = net_routers_router_core_0$in_ports_2_getNonFullVCs ;
assign net_routers_router_core_2$EN_out_ports_2_getFlit = 1 ;
assign net_routers_router_core_2$EN_out_ports_2_putNonFullVCs = 1;

// submodule net_routers_router_core_1
assign net_routers_router_core_1$in_ports_3_putRoutedFlit_flit_in =
{ net_routers_router_core_0$out_ports_3_getFlit, 
net_routers_routeTable_1_rt_ifc_banks_banks_rf_3$D_OUT_1 } ;
assign net_routers_router_core_1$EN_in_ports_3_putRoutedFlit = 1 ;
assign net_routers_router_core_1$EN_in_ports_3_getNonFullVCs = 1;
assign net_routers_router_core_0$out_ports_3_putNonFullVCs_nonFullVCs = net_routers_router_core_1$in_ports_3_getNonFullVCs ;
assign net_routers_router_core_0$EN_out_ports_3_getFlit = 1 ;
assign net_routers_router_core_0$EN_out_ports_3_putNonFullVCs = 1;

// submodule net_routers_router_core_2
assign net_routers_router_core_2$in_ports_4_putRoutedFlit_flit_in =
{ net_routers_router_core_0$out_ports_4_getFlit, 
net_routers_routeTable_2_rt_ifc_banks_banks_rf_4$D_OUT_1 } ;
assign net_routers_router_core_2$EN_in_ports_4_putRoutedFlit = 1 ;
assign net_routers_router_core_2$EN_in_ports_4_getNonFullVCs = 1;
assign net_routers_router_core_0$out_ports_4_putNonFullVCs_nonFullVCs = net_routers_router_core_2$in_ports_4_getNonFullVCs ;
assign net_routers_router_core_0$EN_out_ports_4_getFlit = 1 ;
assign net_routers_router_core_0$EN_out_ports_4_putNonFullVCs = 1;

// submodule net_routers_router_core_1
assign net_routers_router_core_1$in_ports_2_putRoutedFlit_flit_in =
{ new_rx_data_1_2, 1'b1, rx_data_1_2[15:14],{3{1'b0}}, rx_data_1_2[13:0],net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$D_OUT_1 } ;
assign net_routers_router_core_1$EN_in_ports_2_putRoutedFlit = 1 ;
assign net_routers_router_core_1$EN_in_ports_2_getNonFullVCs = 1'b1;

// submodule net_routers_router_core_2
assign net_routers_router_core_2$in_ports_1_putRoutedFlit_flit_in =
{ new_rx_data_2_1, 1'b1, rx_data_2_1[15:14],{3{1'b0}}, rx_data_2_1[13:0],net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$D_OUT_1 } ;
assign net_routers_router_core_2$EN_in_ports_1_putRoutedFlit = 1 ;
assign net_routers_router_core_2$EN_in_ports_1_getNonFullVCs = 1'b1;

// submodule net_routers_router_core_2
assign net_routers_router_core_2$out_ports_3_putNonFullVCs_nonFullVCs = 
{1'b0, !(tx_busy_2_3)} & {1'b0, out_ports_2_3_getNonFullVCs} ;
assign net_routers_router_core_2$EN_out_ports_3_getFlit = 1'b1 ;
assign net_routers_router_core_2$EN_out_ports_3_putNonFullVCs = 1'b1 ;

// submodule net_routers_router_core_1
assign net_routers_router_core_1$out_ports_4_putNonFullVCs_nonFullVCs = 
{1'b0, !(tx_busy_1_4)} & {1'b0, out_ports_1_4_getNonFullVCs} ;
assign net_routers_router_core_1$EN_out_ports_4_getFlit = 1'b1 ;
assign net_routers_router_core_1$EN_out_ports_4_putNonFullVCs = 1'b1 ;

assign net_routers_router_core_0$out_ports_1_putNonFullVCs_nonFullVCs = 0 ;
assign net_routers_router_core_0$out_ports_1_putNonFullVCs_nonFullVCs = 0 ;

assign net_routers_router_core_0$out_ports_2_putNonFullVCs_nonFullVCs = 0 ;
assign net_routers_router_core_0$out_ports_2_putNonFullVCs_nonFullVCs = 0 ;

assign net_routers_router_core_1$out_ports_2_putNonFullVCs_nonFullVCs = 0 ;
assign net_routers_router_core_1$out_ports_2_putNonFullVCs_nonFullVCs = 0 ;

assign net_routers_router_core_1$out_ports_3_putNonFullVCs_nonFullVCs = 0 ;
assign net_routers_router_core_1$out_ports_3_putNonFullVCs_nonFullVCs = 0 ;

assign net_routers_router_core_2$out_ports_1_putNonFullVCs_nonFullVCs = 0 ;
assign net_routers_router_core_2$out_ports_1_putNonFullVCs_nonFullVCs = 0 ;

assign net_routers_router_core_2$out_ports_4_putNonFullVCs_nonFullVCs = 0 ;
assign net_routers_router_core_2$out_ports_4_putNonFullVCs_nonFullVCs = 0 ;

assign net_routers_router_core_0$EN_in_ports_3_putRoutedFlit = 0 ;
assign net_routers_router_core_0$EN_in_ports_3_getNonFullVCs = 0 ;

assign net_routers_router_core_0$EN_in_ports_4_putRoutedFlit = 0 ;
assign net_routers_router_core_0$EN_in_ports_4_getNonFullVCs = 0 ;

assign net_routers_router_core_1$EN_in_ports_1_putRoutedFlit = 0 ;
assign net_routers_router_core_1$EN_in_ports_1_getNonFullVCs = 0 ;

assign net_routers_router_core_1$EN_in_ports_4_putRoutedFlit = 0 ;
assign net_routers_router_core_1$EN_in_ports_4_getNonFullVCs = 0 ;

assign net_routers_router_core_2$EN_in_ports_2_putRoutedFlit = 0 ;
assign net_routers_router_core_2$EN_in_ports_2_getNonFullVCs = 0 ;

assign net_routers_router_core_2$EN_in_ports_3_putRoutedFlit = 0 ;
assign net_routers_router_core_2$EN_in_ports_3_getNonFullVCs = 0 ;


assign net_routers_router_core_0$in_ports_0_putRoutedFlit_flit_in =
{ send_ports_0_putFlit_flit_in, 
net_routers_routeTable_0_rt_ifc_banks_banks_rf_0$D_OUT_1 } ;
assign net_routers_router_core_0$EN_in_ports_0_putRoutedFlit = EN_send_ports_0_putFlit;
assign net_routers_router_core_0$EN_in_ports_0_getNonFullVCs = EN_send_ports_0_getNonFullVCs ;
assign net_routers_router_core_0$out_ports_0_putNonFullVCs_nonFullVCs = recv_ports_0_putNonFullVCs_nonFullVCs;
assign net_routers_router_core_0$EN_out_ports_0_getFlit = EN_recv_ports_0_getFlit ;
assign net_routers_router_core_0$EN_out_ports_0_putNonFullVCs = EN_recv_ports_0_putNonFullVCs;


assign net_routers_router_core_1$in_ports_0_putRoutedFlit_flit_in =
{ send_ports_1_putFlit_flit_in, 
net_routers_routeTable_1_rt_ifc_banks_banks_rf_0$D_OUT_1 } ;
assign net_routers_router_core_1$EN_in_ports_0_putRoutedFlit = EN_send_ports_1_putFlit;
assign net_routers_router_core_1$EN_in_ports_0_getNonFullVCs = EN_send_ports_1_getNonFullVCs ;
assign net_routers_router_core_1$out_ports_0_putNonFullVCs_nonFullVCs = recv_ports_1_putNonFullVCs_nonFullVCs;
assign net_routers_router_core_1$EN_out_ports_0_getFlit = EN_recv_ports_1_getFlit ;
assign net_routers_router_core_1$EN_out_ports_0_putNonFullVCs = EN_recv_ports_1_putNonFullVCs;


assign net_routers_router_core_2$in_ports_0_putRoutedFlit_flit_in =
{ send_ports_2_putFlit_flit_in, 
net_routers_routeTable_2_rt_ifc_banks_banks_rf_0$D_OUT_1 } ;
assign net_routers_router_core_2$EN_in_ports_0_putRoutedFlit = EN_send_ports_2_putFlit;
assign net_routers_router_core_2$EN_in_ports_0_getNonFullVCs = EN_send_ports_2_getNonFullVCs ;
assign net_routers_router_core_2$out_ports_0_putNonFullVCs_nonFullVCs = recv_ports_2_putNonFullVCs_nonFullVCs;
assign net_routers_router_core_2$EN_out_ports_0_getFlit = EN_recv_ports_2_getFlit ;
assign net_routers_router_core_2$EN_out_ports_0_putNonFullVCs = EN_recv_ports_2_putNonFullVCs;


//*********************************Main Body of Code**********************************

  assign lane_up_reduce_i  = &lane_up_i_1;
  assign rst_cc_module_i   = !lane_up_reduce_i;
  assign  reset_i =   system_reset_i;

//_______________________________Clock Buffers_________________________________
 IBUFDS IBUFDS
 (
 .I(GTPD5_P),
 .IB(GTPD5_N),
 .O(GTPD5_left_i)
 );


 BUFG BUFG1
 (
  .I(tx_out_clk_i_1),
  .O(buf_tx_out_clk_i_1)
 );

 BUFG BUFG2
 (
  .I(tx_out_clk_i_2),
  .O(buf_tx_out_clk_i_2)
 );

    // Instantiate a clock module for clock division.
    aurora_8b10b_v5_3_CLOCK_MODULE clock_module_i
    (
        .GT_CLK(buf_tx_out_clk_i_1),
        .GT_CLK_LOCKED(tx_lock_out_i),
        .USER_CLK(user_clk_i),
        .SYNC_CLK(sync_clk_i),
        .PLL_NOT_LOCKED(pll_not_locked_i)
    );

//____________________________Register User I/O___________________________________
// Register User Outputs from core.

    always @(posedge user_clk_i)
    begin
        HARD_ERR      <=  hard_err_i_1 && hard_err_i_2 ;
        SOFT_ERR      <=  soft_err_i_1 && soft_err_i_2;
        FRAME_ERR     <=  frame_err_i_1 && frame_err_i_2;
        ERR_COUNT       <=  err_count_i_1 & err_count_i_2;
        LANE_UP         <=  lane_up_i_1 & lane_up_i_2;
        CHANNEL_UP      <=  channel_up_i_1 & channel_up_i_2;
    end

//____________________________Tie off unused signals_______________________________

    // System Interface
    assign  tied_to_gnd_vec_i   =   16'd0;
    assign  power_down_i        =   1'b0;
    assign  loopback_i          =   3'b000;


    aurora_8b10b_v5_3_STANDARD_CC_MODULE standard_cc_module_i
    (
        .RESET(rst_cc_module_i),
        // Clock Compensation Control Interface
        .WARN_CC(warn_cc_i),
        .DO_CC(do_cc_i),
        // System Interface
        .PLL_NOT_LOCKED(pll_not_locked_i),
        .USER_CLK(user_clk_i)
    );

    aurora_8b10b_v5_3_RESET_LOGIC reset_logic_i
    (
        .RESET(RESET),
        .USER_CLK(user_clk_i),
        .INIT_CLK(INIT_CLK),
        .GT_RESET_IN(GT_RESET_IN),
        .TX_LOCK_IN(tx_lock_i),
        .PLL_NOT_LOCKED(pll_not_locked_i),
        .TX_LOCK_OUT(tx_lock_out_i),
        .SYSTEM_RESET(system_reset_i),
        .GT_RESET_OUT(gt_reset_i)
    );




//----------- Begin Cut here for INSTANTIATION Template ---// INST_TAG
// Instantiate the module
aurora_8b10b_v5_3 #
    (
        .SIM_GTPRESET_SPEEDUP(SIM_GTPRESET_SPEEDUP)
    )
	  instance_1
    (
    .TX_D(tx_data_1_4), 
    .TX_REM(net_routers_router_core_1$out_ports_4_getFlit[16]), 
    .TX_SRC_RDY_N(net_routers_router_core_1$out_ports_4_getFlit[20]), 
    .TX_SOF_N(net_routers_router_core_1$out_ports_4_getFlit[20]), 
    .TX_EOF_N(net_routers_router_core_1$out_ports_4_getFlit[19]), 
    .TX_DST_RDY_N(tx_busy_1_4), 

    .RX_D(rx_data_1_2), 
    .RX_REM(), 
    .RX_SRC_RDY_N(), 
    .RX_SOF_N(new_rx_data_1_2), 
    .RX_EOF_N(), 

    .RXP(ser_in_1_2), 
    .RXN(~ser_in_1_2), 
    .TXP(ser_out_1_4), 
    .TXN(!ser_out_1_4), 

    .GTPD5(GTPD5_left_i), 

    .HARD_ERR(hard_err_i_1), 
    .SOFT_ERR(soft_err_i_1), 
    .FRAME_ERR(frame_err_i_1), 

    .CHANNEL_UP(channel_up_i_1), 
    .LANE_UP(lane_up_i_1), 

    .WARN_CC(warn_cc_i), 
    .DO_CC(do_cc_i), 

    .USER_CLK(user_clk_i), 
    .SYNC_CLK(sync_clk_i), 
    .RESET(reset_i), 
    .POWER_DOWN(power_down_i), 
    .LOOPBACK(loopback_i), 
    .GT_RESET(gt_reset_i), 
    .TX_OUT_CLK(tx_out_clk_i_1), 
    .TX_LOCK(tx_lock_out_i)
    );


// INST_TAG_END ------ End INSTANTIATION Template ---------
//----------- Begin Cut here for INSTANTIATION Template ---// INST_TAG
// Instantiate the module

aurora_8b10b_v5_3 #
    (
        .SIM_GTPRESET_SPEEDUP(SIM_GTPRESET_SPEEDUP)
    )
	 instance_2 
    (
    .TX_D(tx_data_2_3), 
    .TX_REM(net_routers_router_core_2$out_ports_3_getFlit[16]), 
    .TX_SRC_RDY_N(net_routers_router_core_2$out_ports_3_getFlit[20]), 
    .TX_SOF_N(net_routers_router_core_2$out_ports_3_getFlit[20]), 
    .TX_EOF_N(net_routers_router_core_2$out_ports_3_getFlit[19]), 
    .TX_DST_RDY_N(tx_busy_2_3), 

    .RX_D(rx_data_2_1), 
    .RX_REM(), 
    .RX_SRC_RDY_N(), 
    .RX_SOF_N(new_rx_data_2_1), 
    .RX_EOF_N(), 

    .RXP(ser_in_2_1), 
    .RXN(~ser_in_2_1), 
    .TXP(ser_out_2_3), 
    .TXN(!ser_out_2_3), 

    .GTPD5(GTPD5), 

    .HARD_ERR(hard_err_i_2), 
    .SOFT_ERR(soft_err_i_2), 
    .FRAME_ERR(frame_err_i_2), 

    .CHANNEL_UP(channel_up_i_2), 
    .LANE_UP(lane_up_i_2), 

    .WARN_CC(warn_cc_i), 
    .DO_CC(do_cc_i), 

    .USER_CLK(user_clk_i), 
    .SYNC_CLK(sync_clk_i), 
    .RESET(reset_i), 
    .POWER_DOWN(power_down_i), 
    .LOOPBACK(loopback_i), 
    .GT_RESET(gt_reset_i),
    .TX_OUT_CLK(tx_out_clk_i_2), 
    .TX_LOCK(tx_lock_out_i)
    );





RegFileLoadSyn #( /*file*/ "../../YATISH/fpgaInterfaces/ml605/hex_files/Mesh2x2/mesh_4RTs_2VCs_8BD_16DW_SepIFRoundRobinAlloc_2RTsPerRow_2RTsPerCol_routing_0.hex",
/*addr_width*/ 32'd2,
/*data_width*/ 32'd3,
/*lo*/ 32'd0,
/*hi*/ 32'd3,
/*binary*/ 32'd0) 
net_routers_routeTable_0_rt_ifc_banks_banks_rf_0(.CLK(user_clk_i),
.RST_N(reset_i),
.ADDR_1(net_routers_routeTable_0_rt_ifc_banks_banks_rf_0$ADDR_1),
.ADDR_IN(net_routers_routeTable_0_rt_ifc_banks_banks_rf_0$ADDR_IN),
.D_IN(net_routers_routeTable_0_rt_ifc_banks_banks_rf_0$D_IN),
.WE(net_routers_routeTable_0_rt_ifc_banks_banks_rf_0$WE),
.D_OUT_1(net_routers_routeTable_0_rt_ifc_banks_banks_rf_0$D_OUT_1));


RegFileLoadSyn #( /*file*/ "../../YATISH/fpgaInterfaces/ml605/hex_files/Mesh2x2/mesh_4RTs_2VCs_8BD_16DW_SepIFRoundRobinAlloc_2RTsPerRow_2RTsPerCol_routing_0.hex",
/*addr_width*/ 32'd2,
/*data_width*/ 32'd3,
/*lo*/ 32'd0,
/*hi*/ 32'd3,
/*binary*/ 32'd0) 
net_routers_routeTable_0_rt_ifc_banks_banks_rf_1(.CLK(user_clk_i),
.RST_N(reset_i),
.ADDR_1(net_routers_routeTable_0_rt_ifc_banks_banks_rf_1$ADDR_1),
.ADDR_IN(net_routers_routeTable_0_rt_ifc_banks_banks_rf_1$ADDR_IN),
.D_IN(net_routers_routeTable_0_rt_ifc_banks_banks_rf_1$D_IN),
.WE(net_routers_routeTable_0_rt_ifc_banks_banks_rf_1$WE),
.D_OUT_1(net_routers_routeTable_0_rt_ifc_banks_banks_rf_1$D_OUT_1));


RegFileLoadSyn #( /*file*/ "../../YATISH/fpgaInterfaces/ml605/hex_files/Mesh2x2/mesh_4RTs_2VCs_8BD_16DW_SepIFRoundRobinAlloc_2RTsPerRow_2RTsPerCol_routing_0.hex",
/*addr_width*/ 32'd2,
/*data_width*/ 32'd3,
/*lo*/ 32'd0,
/*hi*/ 32'd3,
/*binary*/ 32'd0) 
net_routers_routeTable_0_rt_ifc_banks_banks_rf_2(.CLK(user_clk_i),
.RST_N(reset_i),
.ADDR_1(net_routers_routeTable_0_rt_ifc_banks_banks_rf_2$ADDR_1),
.ADDR_IN(net_routers_routeTable_0_rt_ifc_banks_banks_rf_2$ADDR_IN),
.D_IN(net_routers_routeTable_0_rt_ifc_banks_banks_rf_2$D_IN),
.WE(net_routers_routeTable_0_rt_ifc_banks_banks_rf_2$WE),
.D_OUT_1(net_routers_routeTable_0_rt_ifc_banks_banks_rf_2$D_OUT_1));


RegFileLoadSyn #( /*file*/ "../../YATISH/fpgaInterfaces/ml605/hex_files/Mesh2x2/mesh_4RTs_2VCs_8BD_16DW_SepIFRoundRobinAlloc_2RTsPerRow_2RTsPerCol_routing_0.hex",
/*addr_width*/ 32'd2,
/*data_width*/ 32'd3,
/*lo*/ 32'd0,
/*hi*/ 32'd3,
/*binary*/ 32'd0) 
net_routers_routeTable_0_rt_ifc_banks_banks_rf_3(.CLK(user_clk_i),
.RST_N(reset_i),
.ADDR_1(net_routers_routeTable_0_rt_ifc_banks_banks_rf_3$ADDR_1),
.ADDR_IN(net_routers_routeTable_0_rt_ifc_banks_banks_rf_3$ADDR_IN),
.D_IN(net_routers_routeTable_0_rt_ifc_banks_banks_rf_3$D_IN),
.WE(net_routers_routeTable_0_rt_ifc_banks_banks_rf_3$WE),
.D_OUT_1());


RegFileLoadSyn #( /*file*/ "../../YATISH/fpgaInterfaces/ml605/hex_files/Mesh2x2/mesh_4RTs_2VCs_8BD_16DW_SepIFRoundRobinAlloc_2RTsPerRow_2RTsPerCol_routing_0.hex",
/*addr_width*/ 32'd2,
/*data_width*/ 32'd3,
/*lo*/ 32'd0,
/*hi*/ 32'd3,
/*binary*/ 32'd0) 
net_routers_routeTable_0_rt_ifc_banks_banks_rf_4(.CLK(user_clk_i),
.RST_N(reset_i),
.ADDR_1(net_routers_routeTable_0_rt_ifc_banks_banks_rf_4$ADDR_1),
.ADDR_IN(net_routers_routeTable_0_rt_ifc_banks_banks_rf_4$ADDR_IN),
.D_IN(net_routers_routeTable_0_rt_ifc_banks_banks_rf_4$D_IN),
.WE(net_routers_routeTable_0_rt_ifc_banks_banks_rf_4$WE),
.D_OUT_1());


RegFileLoadSyn #( /*file*/ "../../YATISH/fpgaInterfaces/ml605/hex_files/Mesh2x2/mesh_4RTs_2VCs_8BD_16DW_SepIFRoundRobinAlloc_2RTsPerRow_2RTsPerCol_routing_1.hex",
/*addr_width*/ 32'd2,
/*data_width*/ 32'd3,
/*lo*/ 32'd0,
/*hi*/ 32'd3,
/*binary*/ 32'd0) 
net_routers_routeTable_1_rt_ifc_banks_banks_rf_0(.CLK(user_clk_i),
.RST_N(reset_i),
.ADDR_1(net_routers_routeTable_1_rt_ifc_banks_banks_rf_0$ADDR_1),
.ADDR_IN(net_routers_routeTable_1_rt_ifc_banks_banks_rf_0$ADDR_IN),
.D_IN(net_routers_routeTable_1_rt_ifc_banks_banks_rf_0$D_IN),
.WE(net_routers_routeTable_1_rt_ifc_banks_banks_rf_0$WE),
.D_OUT_1(net_routers_routeTable_1_rt_ifc_banks_banks_rf_0$D_OUT_1));


RegFileLoadSyn #( /*file*/ "../../YATISH/fpgaInterfaces/ml605/hex_files/Mesh2x2/mesh_4RTs_2VCs_8BD_16DW_SepIFRoundRobinAlloc_2RTsPerRow_2RTsPerCol_routing_1.hex",
/*addr_width*/ 32'd2,
/*data_width*/ 32'd3,
/*lo*/ 32'd0,
/*hi*/ 32'd3,
/*binary*/ 32'd0) 
net_routers_routeTable_1_rt_ifc_banks_banks_rf_1(.CLK(user_clk_i),
.RST_N(reset_i),
.ADDR_1(net_routers_routeTable_1_rt_ifc_banks_banks_rf_1$ADDR_1),
.ADDR_IN(net_routers_routeTable_1_rt_ifc_banks_banks_rf_1$ADDR_IN),
.D_IN(net_routers_routeTable_1_rt_ifc_banks_banks_rf_1$D_IN),
.WE(net_routers_routeTable_1_rt_ifc_banks_banks_rf_1$WE),
.D_OUT_1());


RegFileLoadSyn #( /*file*/ "../../YATISH/fpgaInterfaces/ml605/hex_files/Mesh2x2/mesh_4RTs_2VCs_8BD_16DW_SepIFRoundRobinAlloc_2RTsPerRow_2RTsPerCol_routing_1.hex",
/*addr_width*/ 32'd2,
/*data_width*/ 32'd3,
/*lo*/ 32'd0,
/*hi*/ 32'd3,
/*binary*/ 32'd0) 
net_routers_routeTable_1_rt_ifc_banks_banks_rf_2(.CLK(user_clk_i),
.RST_N(reset_i),
.ADDR_1(net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$ADDR_1),
.ADDR_IN(net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$ADDR_IN),
.D_IN(net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$D_IN),
.WE(net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$WE),
.D_OUT_1(net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$D_OUT_1));


RegFileLoadSyn #( /*file*/ "../../YATISH/fpgaInterfaces/ml605/hex_files/Mesh2x2/mesh_4RTs_2VCs_8BD_16DW_SepIFRoundRobinAlloc_2RTsPerRow_2RTsPerCol_routing_1.hex",
/*addr_width*/ 32'd2,
/*data_width*/ 32'd3,
/*lo*/ 32'd0,
/*hi*/ 32'd3,
/*binary*/ 32'd0) 
net_routers_routeTable_1_rt_ifc_banks_banks_rf_3(.CLK(user_clk_i),
.RST_N(reset_i),
.ADDR_1(net_routers_routeTable_1_rt_ifc_banks_banks_rf_3$ADDR_1),
.ADDR_IN(net_routers_routeTable_1_rt_ifc_banks_banks_rf_3$ADDR_IN),
.D_IN(net_routers_routeTable_1_rt_ifc_banks_banks_rf_3$D_IN),
.WE(net_routers_routeTable_1_rt_ifc_banks_banks_rf_3$WE),
.D_OUT_1(net_routers_routeTable_1_rt_ifc_banks_banks_rf_3$D_OUT_1));


RegFileLoadSyn #( /*file*/ "../../YATISH/fpgaInterfaces/ml605/hex_files/Mesh2x2/mesh_4RTs_2VCs_8BD_16DW_SepIFRoundRobinAlloc_2RTsPerRow_2RTsPerCol_routing_1.hex",
/*addr_width*/ 32'd2,
/*data_width*/ 32'd3,
/*lo*/ 32'd0,
/*hi*/ 32'd3,
/*binary*/ 32'd0) 
net_routers_routeTable_1_rt_ifc_banks_banks_rf_4(.CLK(user_clk_i),
.RST_N(reset_i),
.ADDR_1(net_routers_routeTable_1_rt_ifc_banks_banks_rf_4$ADDR_1),
.ADDR_IN(net_routers_routeTable_1_rt_ifc_banks_banks_rf_4$ADDR_IN),
.D_IN(net_routers_routeTable_1_rt_ifc_banks_banks_rf_4$D_IN),
.WE(net_routers_routeTable_1_rt_ifc_banks_banks_rf_4$WE),
.D_OUT_1());


RegFileLoadSyn #( /*file*/ "../../YATISH/fpgaInterfaces/ml605/hex_files/Mesh2x2/mesh_4RTs_2VCs_8BD_16DW_SepIFRoundRobinAlloc_2RTsPerRow_2RTsPerCol_routing_2.hex",
/*addr_width*/ 32'd2,
/*data_width*/ 32'd3,
/*lo*/ 32'd0,
/*hi*/ 32'd3,
/*binary*/ 32'd0) 
net_routers_routeTable_2_rt_ifc_banks_banks_rf_0(.CLK(user_clk_i),
.RST_N(reset_i),
.ADDR_1(net_routers_routeTable_2_rt_ifc_banks_banks_rf_0$ADDR_1),
.ADDR_IN(net_routers_routeTable_2_rt_ifc_banks_banks_rf_0$ADDR_IN),
.D_IN(net_routers_routeTable_2_rt_ifc_banks_banks_rf_0$D_IN),
.WE(net_routers_routeTable_2_rt_ifc_banks_banks_rf_0$WE),
.D_OUT_1(net_routers_routeTable_2_rt_ifc_banks_banks_rf_0$D_OUT_1));


RegFileLoadSyn #( /*file*/ "../../YATISH/fpgaInterfaces/ml605/hex_files/Mesh2x2/mesh_4RTs_2VCs_8BD_16DW_SepIFRoundRobinAlloc_2RTsPerRow_2RTsPerCol_routing_2.hex",
/*addr_width*/ 32'd2,
/*data_width*/ 32'd3,
/*lo*/ 32'd0,
/*hi*/ 32'd3,
/*binary*/ 32'd0) 
net_routers_routeTable_2_rt_ifc_banks_banks_rf_1(.CLK(user_clk_i),
.RST_N(reset_i),
.ADDR_1(net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$ADDR_1),
.ADDR_IN(net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$ADDR_IN),
.D_IN(net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$D_IN),
.WE(net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$WE),
.D_OUT_1(net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$D_OUT_1));


RegFileLoadSyn #( /*file*/ "../../YATISH/fpgaInterfaces/ml605/hex_files/Mesh2x2/mesh_4RTs_2VCs_8BD_16DW_SepIFRoundRobinAlloc_2RTsPerRow_2RTsPerCol_routing_2.hex",
/*addr_width*/ 32'd2,
/*data_width*/ 32'd3,
/*lo*/ 32'd0,
/*hi*/ 32'd3,
/*binary*/ 32'd0) 
net_routers_routeTable_2_rt_ifc_banks_banks_rf_2(.CLK(user_clk_i),
.RST_N(reset_i),
.ADDR_1(net_routers_routeTable_2_rt_ifc_banks_banks_rf_2$ADDR_1),
.ADDR_IN(net_routers_routeTable_2_rt_ifc_banks_banks_rf_2$ADDR_IN),
.D_IN(net_routers_routeTable_2_rt_ifc_banks_banks_rf_2$D_IN),
.WE(net_routers_routeTable_2_rt_ifc_banks_banks_rf_2$WE),
.D_OUT_1());


RegFileLoadSyn #( /*file*/ "../../YATISH/fpgaInterfaces/ml605/hex_files/Mesh2x2/mesh_4RTs_2VCs_8BD_16DW_SepIFRoundRobinAlloc_2RTsPerRow_2RTsPerCol_routing_2.hex",
/*addr_width*/ 32'd2,
/*data_width*/ 32'd3,
/*lo*/ 32'd0,
/*hi*/ 32'd3,
/*binary*/ 32'd0) 
net_routers_routeTable_2_rt_ifc_banks_banks_rf_3(.CLK(user_clk_i),
.RST_N(reset_i),
.ADDR_1(net_routers_routeTable_2_rt_ifc_banks_banks_rf_3$ADDR_1),
.ADDR_IN(net_routers_routeTable_2_rt_ifc_banks_banks_rf_3$ADDR_IN),
.D_IN(net_routers_routeTable_2_rt_ifc_banks_banks_rf_3$D_IN),
.WE(net_routers_routeTable_2_rt_ifc_banks_banks_rf_3$WE),
.D_OUT_1());


RegFileLoadSyn #( /*file*/ "../../YATISH/fpgaInterfaces/ml605/hex_files/Mesh2x2/mesh_4RTs_2VCs_8BD_16DW_SepIFRoundRobinAlloc_2RTsPerRow_2RTsPerCol_routing_2.hex",
/*addr_width*/ 32'd2,
/*data_width*/ 32'd3,
/*lo*/ 32'd0,
/*hi*/ 32'd3,
/*binary*/ 32'd0) 
net_routers_routeTable_2_rt_ifc_banks_banks_rf_4(.CLK(user_clk_i),
.RST_N(reset_i),
.ADDR_1(net_routers_routeTable_2_rt_ifc_banks_banks_rf_4$ADDR_1),
.ADDR_IN(net_routers_routeTable_2_rt_ifc_banks_banks_rf_4$ADDR_IN),
.D_IN(net_routers_routeTable_2_rt_ifc_banks_banks_rf_4$D_IN),
.WE(net_routers_routeTable_2_rt_ifc_banks_banks_rf_4$WE),
.D_OUT_1(net_routers_routeTable_2_rt_ifc_banks_banks_rf_4$D_OUT_1));


// submodule net_routers_router_core_0
mkIQRouterCoreSimple net_routers_router_core_0(.CLK(user_clk_i),

.in_ports_0_putRoutedFlit_flit_in(net_routers_router_core_0$in_ports_0_putRoutedFlit_flit_in),
.out_ports_0_putNonFullVCs_nonFullVCs(net_routers_router_core_0$out_ports_0_putNonFullVCs_nonFullVCs),
.EN_in_ports_0_putRoutedFlit(net_routers_router_core_0$EN_in_ports_0_putRoutedFlit),
.EN_in_ports_0_getNonFullVCs(net_routers_router_core_0$EN_in_ports_0_getNonFullVCs),
.EN_out_ports_0_getFlit(net_routers_router_core_0$EN_out_ports_0_getFlit),
.EN_out_ports_0_putNonFullVCs(net_routers_router_core_0$EN_out_ports_0_putNonFullVCs),
.in_ports_0_getNonFullVCs(net_routers_router_core_0$in_ports_0_getNonFullVCs),
.out_ports_0_getFlit(net_routers_router_core_0$out_ports_0_getFlit),

.in_ports_1_putRoutedFlit_flit_in(net_routers_router_core_0$in_ports_1_putRoutedFlit_flit_in),
.out_ports_1_putNonFullVCs_nonFullVCs(net_routers_router_core_0$out_ports_1_putNonFullVCs_nonFullVCs),
.EN_in_ports_1_putRoutedFlit(net_routers_router_core_0$EN_in_ports_1_putRoutedFlit),
.EN_in_ports_1_getNonFullVCs(net_routers_router_core_0$EN_in_ports_1_getNonFullVCs),
.EN_out_ports_1_getFlit(net_routers_router_core_0$EN_out_ports_1_getFlit),
.EN_out_ports_1_putNonFullVCs(net_routers_router_core_0$EN_out_ports_1_putNonFullVCs),
.in_ports_1_getNonFullVCs(net_routers_router_core_0$in_ports_1_getNonFullVCs),
.out_ports_1_getFlit(),

.in_ports_2_putRoutedFlit_flit_in(net_routers_router_core_0$in_ports_2_putRoutedFlit_flit_in),
.out_ports_2_putNonFullVCs_nonFullVCs(net_routers_router_core_0$out_ports_2_putNonFullVCs_nonFullVCs),
.EN_in_ports_2_putRoutedFlit(net_routers_router_core_0$EN_in_ports_2_putRoutedFlit),
.EN_in_ports_2_getNonFullVCs(net_routers_router_core_0$EN_in_ports_2_getNonFullVCs),
.EN_out_ports_2_getFlit(net_routers_router_core_0$EN_out_ports_2_getFlit),
.EN_out_ports_2_putNonFullVCs(net_routers_router_core_0$EN_out_ports_2_putNonFullVCs),
.in_ports_2_getNonFullVCs(net_routers_router_core_0$in_ports_2_getNonFullVCs),
.out_ports_2_getFlit(),

.in_ports_3_putRoutedFlit_flit_in(net_routers_router_core_0$in_ports_3_putRoutedFlit_flit_in),
.out_ports_3_putNonFullVCs_nonFullVCs(net_routers_router_core_0$out_ports_3_putNonFullVCs_nonFullVCs),
.EN_in_ports_3_putRoutedFlit(net_routers_router_core_0$EN_in_ports_3_putRoutedFlit),
.EN_in_ports_3_getNonFullVCs(net_routers_router_core_0$EN_in_ports_3_getNonFullVCs),
.EN_out_ports_3_getFlit(net_routers_router_core_0$EN_out_ports_3_getFlit),
.EN_out_ports_3_putNonFullVCs(net_routers_router_core_0$EN_out_ports_3_putNonFullVCs),
.in_ports_3_getNonFullVCs(),
.out_ports_3_getFlit(net_routers_router_core_0$out_ports_3_getFlit),

.in_ports_4_putRoutedFlit_flit_in(net_routers_router_core_0$in_ports_4_putRoutedFlit_flit_in),
.out_ports_4_putNonFullVCs_nonFullVCs(net_routers_router_core_0$out_ports_4_putNonFullVCs_nonFullVCs),
.EN_in_ports_4_putRoutedFlit(net_routers_router_core_0$EN_in_ports_4_putRoutedFlit),
.EN_in_ports_4_getNonFullVCs(net_routers_router_core_0$EN_in_ports_4_getNonFullVCs),
.EN_out_ports_4_getFlit(net_routers_router_core_0$EN_out_ports_4_getFlit),
.EN_out_ports_4_putNonFullVCs(net_routers_router_core_0$EN_out_ports_4_putNonFullVCs),
.in_ports_4_getNonFullVCs(),
.out_ports_4_getFlit(net_routers_router_core_0$out_ports_4_getFlit),

.RST_N(reset_i));




// submodule net_routers_router_core_1
mkIQRouterCoreSimple net_routers_router_core_1(.CLK(user_clk_i),

.in_ports_0_putRoutedFlit_flit_in(net_routers_router_core_1$in_ports_0_putRoutedFlit_flit_in),
.out_ports_0_putNonFullVCs_nonFullVCs(net_routers_router_core_1$out_ports_0_putNonFullVCs_nonFullVCs),
.EN_in_ports_0_putRoutedFlit(net_routers_router_core_1$EN_in_ports_0_putRoutedFlit),
.EN_in_ports_0_getNonFullVCs(net_routers_router_core_1$EN_in_ports_0_getNonFullVCs),
.EN_out_ports_0_getFlit(net_routers_router_core_1$EN_out_ports_0_getFlit),
.EN_out_ports_0_putNonFullVCs(net_routers_router_core_1$EN_out_ports_0_putNonFullVCs),
.in_ports_0_getNonFullVCs(net_routers_router_core_1$in_ports_0_getNonFullVCs),
.out_ports_0_getFlit(net_routers_router_core_1$out_ports_0_getFlit),

.in_ports_1_putRoutedFlit_flit_in(net_routers_router_core_1$in_ports_1_putRoutedFlit_flit_in),
.out_ports_1_putNonFullVCs_nonFullVCs(net_routers_router_core_1$out_ports_1_putNonFullVCs_nonFullVCs),
.EN_in_ports_1_putRoutedFlit(net_routers_router_core_1$EN_in_ports_1_putRoutedFlit),
.EN_in_ports_1_getNonFullVCs(net_routers_router_core_1$EN_in_ports_1_getNonFullVCs),
.EN_out_ports_1_getFlit(net_routers_router_core_1$EN_out_ports_1_getFlit),
.EN_out_ports_1_putNonFullVCs(net_routers_router_core_1$EN_out_ports_1_putNonFullVCs),
.in_ports_1_getNonFullVCs(),
.out_ports_1_getFlit(net_routers_router_core_1$out_ports_1_getFlit),

.in_ports_2_putRoutedFlit_flit_in(net_routers_router_core_1$in_ports_2_putRoutedFlit_flit_in),
.out_ports_2_putNonFullVCs_nonFullVCs(net_routers_router_core_1$out_ports_2_putNonFullVCs_nonFullVCs),
.EN_in_ports_2_putRoutedFlit(net_routers_router_core_1$EN_in_ports_2_putRoutedFlit),
.EN_in_ports_2_getNonFullVCs(net_routers_router_core_1$EN_in_ports_2_getNonFullVCs),
.EN_out_ports_2_getFlit(net_routers_router_core_1$EN_out_ports_2_getFlit),
.EN_out_ports_2_putNonFullVCs(net_routers_router_core_1$EN_out_ports_2_putNonFullVCs),
.in_ports_2_getNonFullVCs(net_routers_router_core_1$in_ports_2_getNonFullVCs),
.out_ports_2_getFlit(),

.in_ports_3_putRoutedFlit_flit_in(net_routers_router_core_1$in_ports_3_putRoutedFlit_flit_in),
.out_ports_3_putNonFullVCs_nonFullVCs(net_routers_router_core_1$out_ports_3_putNonFullVCs_nonFullVCs),
.EN_in_ports_3_putRoutedFlit(net_routers_router_core_1$EN_in_ports_3_putRoutedFlit),
.EN_in_ports_3_getNonFullVCs(net_routers_router_core_1$EN_in_ports_3_getNonFullVCs),
.EN_out_ports_3_getFlit(net_routers_router_core_1$EN_out_ports_3_getFlit),
.EN_out_ports_3_putNonFullVCs(net_routers_router_core_1$EN_out_ports_3_putNonFullVCs),
.in_ports_3_getNonFullVCs(net_routers_router_core_1$in_ports_3_getNonFullVCs),
.out_ports_3_getFlit(),

.in_ports_4_putRoutedFlit_flit_in(net_routers_router_core_1$in_ports_4_putRoutedFlit_flit_in),
.out_ports_4_putNonFullVCs_nonFullVCs(net_routers_router_core_1$out_ports_4_putNonFullVCs_nonFullVCs),
.EN_in_ports_4_putRoutedFlit(net_routers_router_core_1$EN_in_ports_4_putRoutedFlit),
.EN_in_ports_4_getNonFullVCs(net_routers_router_core_1$EN_in_ports_4_getNonFullVCs),
.EN_out_ports_4_getFlit(net_routers_router_core_1$EN_out_ports_4_getFlit),
.EN_out_ports_4_putNonFullVCs(net_routers_router_core_1$EN_out_ports_4_putNonFullVCs),
.in_ports_4_getNonFullVCs(),
.out_ports_4_getFlit(net_routers_router_core_1$out_ports_4_getFlit),

.RST_N(reset_i));




// submodule net_routers_router_core_2
mkIQRouterCoreSimple net_routers_router_core_2(.CLK(user_clk_i),

.in_ports_0_putRoutedFlit_flit_in(net_routers_router_core_2$in_ports_0_putRoutedFlit_flit_in),
.out_ports_0_putNonFullVCs_nonFullVCs(net_routers_router_core_2$out_ports_0_putNonFullVCs_nonFullVCs),
.EN_in_ports_0_putRoutedFlit(net_routers_router_core_2$EN_in_ports_0_putRoutedFlit),
.EN_in_ports_0_getNonFullVCs(net_routers_router_core_2$EN_in_ports_0_getNonFullVCs),
.EN_out_ports_0_getFlit(net_routers_router_core_2$EN_out_ports_0_getFlit),
.EN_out_ports_0_putNonFullVCs(net_routers_router_core_2$EN_out_ports_0_putNonFullVCs),
.in_ports_0_getNonFullVCs(net_routers_router_core_2$in_ports_0_getNonFullVCs),
.out_ports_0_getFlit(net_routers_router_core_2$out_ports_0_getFlit),

.in_ports_1_putRoutedFlit_flit_in(net_routers_router_core_2$in_ports_1_putRoutedFlit_flit_in),
.out_ports_1_putNonFullVCs_nonFullVCs(net_routers_router_core_2$out_ports_1_putNonFullVCs_nonFullVCs),
.EN_in_ports_1_putRoutedFlit(net_routers_router_core_2$EN_in_ports_1_putRoutedFlit),
.EN_in_ports_1_getNonFullVCs(net_routers_router_core_2$EN_in_ports_1_getNonFullVCs),
.EN_out_ports_1_getFlit(net_routers_router_core_2$EN_out_ports_1_getFlit),
.EN_out_ports_1_putNonFullVCs(net_routers_router_core_2$EN_out_ports_1_putNonFullVCs),
.in_ports_1_getNonFullVCs(net_routers_router_core_2$in_ports_1_getNonFullVCs),
.out_ports_1_getFlit(),

.in_ports_2_putRoutedFlit_flit_in(net_routers_router_core_2$in_ports_2_putRoutedFlit_flit_in),
.out_ports_2_putNonFullVCs_nonFullVCs(net_routers_router_core_2$out_ports_2_putNonFullVCs_nonFullVCs),
.EN_in_ports_2_putRoutedFlit(net_routers_router_core_2$EN_in_ports_2_putRoutedFlit),
.EN_in_ports_2_getNonFullVCs(net_routers_router_core_2$EN_in_ports_2_getNonFullVCs),
.EN_out_ports_2_getFlit(net_routers_router_core_2$EN_out_ports_2_getFlit),
.EN_out_ports_2_putNonFullVCs(net_routers_router_core_2$EN_out_ports_2_putNonFullVCs),
.in_ports_2_getNonFullVCs(),
.out_ports_2_getFlit(net_routers_router_core_2$out_ports_2_getFlit),

.in_ports_3_putRoutedFlit_flit_in(net_routers_router_core_2$in_ports_3_putRoutedFlit_flit_in),
.out_ports_3_putNonFullVCs_nonFullVCs(net_routers_router_core_2$out_ports_3_putNonFullVCs_nonFullVCs),
.EN_in_ports_3_putRoutedFlit(net_routers_router_core_2$EN_in_ports_3_putRoutedFlit),
.EN_in_ports_3_getNonFullVCs(net_routers_router_core_2$EN_in_ports_3_getNonFullVCs),
.EN_out_ports_3_getFlit(net_routers_router_core_2$EN_out_ports_3_getFlit),
.EN_out_ports_3_putNonFullVCs(net_routers_router_core_2$EN_out_ports_3_putNonFullVCs),
.in_ports_3_getNonFullVCs(),
.out_ports_3_getFlit(net_routers_router_core_2$out_ports_3_getFlit),

.in_ports_4_putRoutedFlit_flit_in(net_routers_router_core_2$in_ports_4_putRoutedFlit_flit_in),
.out_ports_4_putNonFullVCs_nonFullVCs(net_routers_router_core_2$out_ports_4_putNonFullVCs_nonFullVCs),
.EN_in_ports_4_putRoutedFlit(net_routers_router_core_2$EN_in_ports_4_putRoutedFlit),
.EN_in_ports_4_getNonFullVCs(net_routers_router_core_2$EN_in_ports_4_getNonFullVCs),
.EN_out_ports_4_getFlit(net_routers_router_core_2$EN_out_ports_4_getFlit),
.EN_out_ports_4_putNonFullVCs(net_routers_router_core_2$EN_out_ports_4_putNonFullVCs),
.in_ports_4_getNonFullVCs(net_routers_router_core_2$in_ports_4_getNonFullVCs),
.out_ports_4_getFlit(),

.RST_N(reset_i));


//
//always@(negedge user_clk_i)
//begin
//#0;
//if (reset_i)
//if (EN_send_ports_0_putFlit && send_ports_0_putFlit_flit_in[20])
//$write("");
//if (reset_i)
//if (EN_send_ports_1_putFlit && send_ports_1_putFlit_flit_in[20])
//$write("");
//if (reset_i)
//if (EN_send_ports_2_putFlit && send_ports_2_putFlit_flit_in[20])
//$write("");
//if (reset_i)
//if (net_routers_router_core_1$out_ports_1_getFlit[20])
//$write("");
//if (reset_i)
//if (net_routers_router_core_2$out_ports_2_getFlit[20])
//$write("");
//if (reset_i)
//if (net_routers_router_core_0$out_ports_3_getFlit[20])
//$write("");
//if (reset_i)
//if (net_routers_router_core_0$out_ports_4_getFlit[20])
//$write("");
//if (reset_i)
//if (net_routers_router_core_2$out_ports_3_getFlit[20])
//$write("");
//if (reset_i)
//if (net_routers_router_core_1$out_ports_4_getFlit[20])
//$write("");
//end
endmodule  // mkNetworkSimple
