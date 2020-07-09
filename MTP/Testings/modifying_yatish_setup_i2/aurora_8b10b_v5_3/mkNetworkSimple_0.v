`ifdef BSV_ASSIGNMENT_DELAY 
`else  
`define BSV_ASSIGNMENT_DELAY #1 
`endif 

module mkNetworkSimple_0
(
	CLK,  
	RESET,
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

	in_ports_1_2_getNonFullVCs, 
	in_ports_2_1_getNonFullVCs, 
	out_ports_2_3_getNonFullVCs, 
	out_ports_1_4_getNonFullVCs, 
	recv_ports_info_0_getRecvPortID,
	recv_ports_info_1_getRecvPortID,
	recv_ports_info_2_getRecvPortID,

	// User Interface TX AND RX FROM ROUTER 1
	TX_D_ROUTER_1_PORT_4,  
	TX_REM_ROUTER_1_PORT_4,     
	TX_SOF_N_ROUTER_1_PORT_4,       
	TX_EOF_N_ROUTER_1_PORT_4,
	TX_SRC_RDY_N_ROUTER_1_PORT_4,
	TX_DST_RDY_N_ROUTER_1_PORT_4,

	RX_D_ROUTER_1_PORT_2,  
	RX_REM_ROUTER_1_PORT_2,     
	RX_SOF_N_ROUTER_1_PORT_2,       
	RX_EOF_N_ROUTER_1_PORT_2,
	RX_SRC_RDY_N_ROUTER_1_PORT_2,

	// User Interface TX AND RX FROM ROUTER 1
	TX_D_ROUTER_2_PORT_3,  
	TX_REM_ROUTER_2_PORT_3,     
	TX_SOF_N_ROUTER_2_PORT_3,       
	TX_EOF_N_ROUTER_2_PORT_3,
	TX_SRC_RDY_N_ROUTER_2_PORT_3,
	TX_DST_RDY_N_ROUTER_2_PORT_3,

	RX_D_ROUTER_2_PORT_1,  
	RX_REM_ROUTER_2_PORT_1,     
	RX_SOF_N_ROUTER_2_PORT_1,       
	RX_EOF_N_ROUTER_2_PORT_1,
	RX_SRC_RDY_N_ROUTER_2_PORT_1
);
// User Interface
output  [0:15]     TX_D_ROUTER_1_PORT_4;
output             TX_REM_ROUTER_1_PORT_4;
output             TX_SOF_N_ROUTER_1_PORT_4;
output             TX_EOF_N_ROUTER_1_PORT_4;
output             TX_SRC_RDY_N_ROUTER_1_PORT_4;
input              TX_DST_RDY_N_ROUTER_1_PORT_4;

// User Interface
input   [0:15]     RX_D_ROUTER_1_PORT_2;
input              RX_REM_ROUTER_1_PORT_2;
input              RX_SOF_N_ROUTER_1_PORT_2;
input              RX_EOF_N_ROUTER_1_PORT_2;
input              RX_SRC_RDY_N_ROUTER_1_PORT_2;


// User Interface
output  [0:15]     TX_D_ROUTER_2_PORT_3;
output             TX_REM_ROUTER_2_PORT_3;
output             TX_SOF_N_ROUTER_2_PORT_3;
output             TX_EOF_N_ROUTER_2_PORT_3;
output             TX_SRC_RDY_N_ROUTER_2_PORT_3;
input              TX_DST_RDY_N_ROUTER_2_PORT_3;

// User Interface
input   [0:15]     RX_D_ROUTER_2_PORT_1;
input              RX_REM_ROUTER_2_PORT_1;
input              RX_SOF_N_ROUTER_2_PORT_1;
input              RX_EOF_N_ROUTER_2_PORT_1;
input              RX_SRC_RDY_N_ROUTER_2_PORT_1;

input              CLK;
input              RESET; 


input  out_ports_2_3_getNonFullVCs, out_ports_1_4_getNonFullVCs;

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
wire [1 : 0] net_routers_routeTable_0_rt_ifc_banks_banks_rf_0$ADDR_1, 
net_routers_routeTable_0_rt_ifc_banks_banks_rf_0$ADDR_IN;
wire [2:0] net_routers_routeTable_0_rt_ifc_banks_banks_rf_0$D_IN, 
net_routers_routeTable_0_rt_ifc_banks_banks_rf_0$D_OUT_1; 
wire net_routers_routeTable_0_rt_ifc_banks_banks_rf_0$WE;

// ports of submodule net_routers_routeTable_0_rt_ifc_banks_banks_rf_1
wire [1 : 0] net_routers_routeTable_0_rt_ifc_banks_banks_rf_1$ADDR_1, 
net_routers_routeTable_0_rt_ifc_banks_banks_rf_1$ADDR_IN;
wire [2:0] net_routers_routeTable_0_rt_ifc_banks_banks_rf_1$D_IN, 
net_routers_routeTable_0_rt_ifc_banks_banks_rf_1$D_OUT_1; 
wire net_routers_routeTable_0_rt_ifc_banks_banks_rf_1$WE;

// ports of submodule net_routers_routeTable_0_rt_ifc_banks_banks_rf_2
wire [1 : 0] net_routers_routeTable_0_rt_ifc_banks_banks_rf_2$ADDR_1, 
net_routers_routeTable_0_rt_ifc_banks_banks_rf_2$ADDR_IN;
wire [2:0] net_routers_routeTable_0_rt_ifc_banks_banks_rf_2$D_IN, 
net_routers_routeTable_0_rt_ifc_banks_banks_rf_2$D_OUT_1; 
wire net_routers_routeTable_0_rt_ifc_banks_banks_rf_2$WE;

// ports of submodule net_routers_routeTable_0_rt_ifc_banks_banks_rf_3
wire [1 : 0] net_routers_routeTable_0_rt_ifc_banks_banks_rf_3$ADDR_1, 
net_routers_routeTable_0_rt_ifc_banks_banks_rf_3$ADDR_IN;
wire [2:0] net_routers_routeTable_0_rt_ifc_banks_banks_rf_3$D_IN, 
net_routers_routeTable_0_rt_ifc_banks_banks_rf_3$D_OUT_1; 
wire net_routers_routeTable_0_rt_ifc_banks_banks_rf_3$WE;

// ports of submodule net_routers_routeTable_0_rt_ifc_banks_banks_rf_4
wire [1 : 0] net_routers_routeTable_0_rt_ifc_banks_banks_rf_4$ADDR_1, 
net_routers_routeTable_0_rt_ifc_banks_banks_rf_4$ADDR_IN;
wire [2:0] net_routers_routeTable_0_rt_ifc_banks_banks_rf_4$D_IN, 
net_routers_routeTable_0_rt_ifc_banks_banks_rf_4$D_OUT_1; 
wire net_routers_routeTable_0_rt_ifc_banks_banks_rf_4$WE;

// ports of submodule net_routers_routeTable_1_rt_ifc_banks_banks_rf_0
wire [1 : 0] net_routers_routeTable_1_rt_ifc_banks_banks_rf_0$ADDR_1, 
net_routers_routeTable_1_rt_ifc_banks_banks_rf_0$ADDR_IN;
wire [2:0] net_routers_routeTable_1_rt_ifc_banks_banks_rf_0$D_IN, 
net_routers_routeTable_1_rt_ifc_banks_banks_rf_0$D_OUT_1; 
wire net_routers_routeTable_1_rt_ifc_banks_banks_rf_0$WE;

// ports of submodule net_routers_routeTable_1_rt_ifc_banks_banks_rf_1
wire [1 : 0] net_routers_routeTable_1_rt_ifc_banks_banks_rf_1$ADDR_1, 
net_routers_routeTable_1_rt_ifc_banks_banks_rf_1$ADDR_IN;
wire [2:0] net_routers_routeTable_1_rt_ifc_banks_banks_rf_1$D_IN, 
net_routers_routeTable_1_rt_ifc_banks_banks_rf_1$D_OUT_1; 
wire net_routers_routeTable_1_rt_ifc_banks_banks_rf_1$WE;

// ports of submodule net_routers_routeTable_1_rt_ifc_banks_banks_rf_2
wire [1 : 0] net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$ADDR_1, 
net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$ADDR_IN;
wire [2:0] net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$D_IN, 
net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$D_OUT_1; 
wire net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$WE;

// ports of submodule net_routers_routeTable_1_rt_ifc_banks_banks_rf_3
wire [1 : 0] net_routers_routeTable_1_rt_ifc_banks_banks_rf_3$ADDR_1, 
net_routers_routeTable_1_rt_ifc_banks_banks_rf_3$ADDR_IN;
wire [2:0] net_routers_routeTable_1_rt_ifc_banks_banks_rf_3$D_IN, 
net_routers_routeTable_1_rt_ifc_banks_banks_rf_3$D_OUT_1; 
wire net_routers_routeTable_1_rt_ifc_banks_banks_rf_3$WE;

// ports of submodule net_routers_routeTable_1_rt_ifc_banks_banks_rf_4
wire [1 : 0] net_routers_routeTable_1_rt_ifc_banks_banks_rf_4$ADDR_1, 
net_routers_routeTable_1_rt_ifc_banks_banks_rf_4$ADDR_IN;
wire [2:0] net_routers_routeTable_1_rt_ifc_banks_banks_rf_4$D_IN, 
net_routers_routeTable_1_rt_ifc_banks_banks_rf_4$D_OUT_1; 
wire net_routers_routeTable_1_rt_ifc_banks_banks_rf_4$WE;

// ports of submodule net_routers_routeTable_2_rt_ifc_banks_banks_rf_0
wire [1 : 0] net_routers_routeTable_2_rt_ifc_banks_banks_rf_0$ADDR_1, 
net_routers_routeTable_2_rt_ifc_banks_banks_rf_0$ADDR_IN;
wire [2:0] net_routers_routeTable_2_rt_ifc_banks_banks_rf_0$D_IN, 
net_routers_routeTable_2_rt_ifc_banks_banks_rf_0$D_OUT_1; 
wire net_routers_routeTable_2_rt_ifc_banks_banks_rf_0$WE;

// ports of submodule net_routers_routeTable_2_rt_ifc_banks_banks_rf_1
wire [1 : 0] net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$ADDR_1, 
net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$ADDR_IN;
wire [2:0] net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$D_IN, 
net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$D_OUT_1; 
wire net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$WE;

// ports of submodule net_routers_routeTable_2_rt_ifc_banks_banks_rf_2
wire [1 : 0] net_routers_routeTable_2_rt_ifc_banks_banks_rf_2$ADDR_1, 
net_routers_routeTable_2_rt_ifc_banks_banks_rf_2$ADDR_IN;
wire [2:0] net_routers_routeTable_2_rt_ifc_banks_banks_rf_2$D_IN, 
net_routers_routeTable_2_rt_ifc_banks_banks_rf_2$D_OUT_1; 
wire net_routers_routeTable_2_rt_ifc_banks_banks_rf_2$WE;

// ports of submodule net_routers_routeTable_2_rt_ifc_banks_banks_rf_3
wire [1 : 0] net_routers_routeTable_2_rt_ifc_banks_banks_rf_3$ADDR_1, 
net_routers_routeTable_2_rt_ifc_banks_banks_rf_3$ADDR_IN;
wire [2:0] net_routers_routeTable_2_rt_ifc_banks_banks_rf_3$D_IN, 
net_routers_routeTable_2_rt_ifc_banks_banks_rf_3$D_OUT_1; 
wire net_routers_routeTable_2_rt_ifc_banks_banks_rf_3$WE;

// ports of submodule net_routers_routeTable_2_rt_ifc_banks_banks_rf_4
wire [1 : 0] net_routers_routeTable_2_rt_ifc_banks_banks_rf_4$ADDR_1, 
net_routers_routeTable_2_rt_ifc_banks_banks_rf_4$ADDR_IN;
wire [2:0] net_routers_routeTable_2_rt_ifc_banks_banks_rf_4$D_IN, 
net_routers_routeTable_2_rt_ifc_banks_banks_rf_4$D_OUT_1; 
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

wire new_RX_D_ROUTER_1_PORT_2;
wire [15:0] RX_D_ROUTER_1_PORT_2;


wire new_RX_D_ROUTER_2_PORT_1;
wire [15:0] RX_D_ROUTER_2_PORT_1;


wire tx_busy_2_3, new_TX_D_ROUTER_2_PORT_3;
wire [15:0] TX_D_ROUTER_2_PORT_3;


wire tx_busy_1_4, new_TX_D_ROUTER_1_PORT_4;
wire [15:0] TX_D_ROUTER_1_PORT_4;

assign TX_D_ROUTER_2_PORT_3 = {net_routers_router_core_2$out_ports_3_getFlit[18:17],net_routers_router_core_2$out_ports_3_getFlit[13:0]};
assign TX_SOF_N_ROUTER_2_PORT_3 = net_routers_router_core_2$out_ports_3_getFlit[20]; //node-router interfacing port
assign TX_EOF_N_ROUTER_2_PORT_3 = net_routers_router_core_2$out_ports_3_getFlit[19]; //node-router interfacing port
assign TX_REM_ROUTER_2_PORT_3 = net_routers_router_core_2$out_ports_3_getFlit[16]; //node-router interfacing port

assign TX_D_ROUTER_1_PORT_4 = {net_routers_router_core_1$out_ports_4_getFlit[18:17],net_routers_router_core_1$out_ports_4_getFlit[13:0]};
assign TX_SOF_N_ROUTER_1_PORT_4 = net_routers_router_core_1$out_ports_4_getFlit[20]; //node-router interfacing port
assign TX_EOF_N_ROUTER_1_PORT_4 = net_routers_router_core_1$out_ports_4_getFlit[19]; //node-router interfacing port
assign TX_REM_ROUTER_1_PORT_4 = net_routers_router_core_1$out_ports_4_getFlit[16]; //node-router interfacing port

assign net_routers_router_core_1$EN_out_ports_2_putNonFullVCs = 1'd1;
assign net_routers_router_core_1$EN_out_ports_2_getFlit = 1'd1;

assign net_routers_router_core_2$EN_out_ports_1_putNonFullVCs = 1'd1;
assign net_routers_router_core_2$EN_out_ports_1_getFlit = 1'd1;


RegFileLoadSyn #
( 
	/*file*/ "../../YATISH/fpgaInterfaces/ml605/hex_files/Mesh2x2/mesh_4RTs_2VCs_8BD_16DW_SepIFRoundRobinAlloc_2RTsPerRow_2RTsPerCol_routing_0.hex",
	/*addr_width*/ 32'd2,
	/*data_width*/ 32'd3,
	/*lo*/ 32'd0,
	/*hi*/ 32'd3,
	/*binary*/ 32'd0
) 
net_routers_routeTable_0_rt_ifc_banks_banks_rf_0
(
	.CLK(CLK),
	.RESET(RESET),
	.ADDR_1(net_routers_routeTable_0_rt_ifc_banks_banks_rf_0$ADDR_1),
	.ADDR_IN(net_routers_routeTable_0_rt_ifc_banks_banks_rf_0$ADDR_IN),
	.D_IN(net_routers_routeTable_0_rt_ifc_banks_banks_rf_0$D_IN),
	.WE(net_routers_routeTable_0_rt_ifc_banks_banks_rf_0$WE),
	.D_OUT_1(net_routers_routeTable_0_rt_ifc_banks_banks_rf_0$D_OUT_1)
);


RegFileLoadSyn #
(
 	/*file*/ "../../YATISH/fpgaInterfaces/ml605/hex_files/Mesh2x2/mesh_4RTs_2VCs_8BD_16DW_SepIFRoundRobinAlloc_2RTsPerRow_2RTsPerCol_routing_0.hex",
	/*addr_width*/ 32'd2,
	/*data_width*/ 32'd3,
	/*lo*/ 32'd0,
	/*hi*/ 32'd3,
	/*binary*/ 32'd0
) 
net_routers_routeTable_0_rt_ifc_banks_banks_rf_1
(
	.CLK(CLK),
	.RESET(RESET),
	.ADDR_1(net_routers_routeTable_0_rt_ifc_banks_banks_rf_1$ADDR_1),
	.ADDR_IN(net_routers_routeTable_0_rt_ifc_banks_banks_rf_1$ADDR_IN),
	.D_IN(net_routers_routeTable_0_rt_ifc_banks_banks_rf_1$D_IN),
	.WE(net_routers_routeTable_0_rt_ifc_banks_banks_rf_1$WE),
	.D_OUT_1(net_routers_routeTable_0_rt_ifc_banks_banks_rf_1$D_OUT_1)
);


RegFileLoadSyn #
( 
	/*file*/ "../../YATISH/fpgaInterfaces/ml605/hex_files/Mesh2x2/mesh_4RTs_2VCs_8BD_16DW_SepIFRoundRobinAlloc_2RTsPerRow_2RTsPerCol_routing_0.hex",
	/*addr_width*/ 32'd2,
	/*data_width*/ 32'd3,
	/*lo*/ 32'd0,
	/*hi*/ 32'd3,
	/*binary*/ 32'd0
) 
net_routers_routeTable_0_rt_ifc_banks_banks_rf_2
(
	.CLK(CLK),
	.RESET(RESET),
	.ADDR_1(net_routers_routeTable_0_rt_ifc_banks_banks_rf_2$ADDR_1),
	.ADDR_IN(net_routers_routeTable_0_rt_ifc_banks_banks_rf_2$ADDR_IN),
	.D_IN(net_routers_routeTable_0_rt_ifc_banks_banks_rf_2$D_IN),
	.WE(net_routers_routeTable_0_rt_ifc_banks_banks_rf_2$WE),
	.D_OUT_1(net_routers_routeTable_0_rt_ifc_banks_banks_rf_2$D_OUT_1)
);


RegFileLoadSyn #
( 
	/*file*/ "../../YATISH/fpgaInterfaces/ml605/hex_files/Mesh2x2/mesh_4RTs_2VCs_8BD_16DW_SepIFRoundRobinAlloc_2RTsPerRow_2RTsPerCol_routing_0.hex",
	/*addr_width*/ 32'd2,
	/*data_width*/ 32'd3,
	/*lo*/ 32'd0,
	/*hi*/ 32'd3,
	/*binary*/ 32'd0
) 
net_routers_routeTable_0_rt_ifc_banks_banks_rf_3
(
	.CLK(CLK),
	.RESET(RESET),
	.ADDR_1(net_routers_routeTable_0_rt_ifc_banks_banks_rf_3$ADDR_1),
	.ADDR_IN(net_routers_routeTable_0_rt_ifc_banks_banks_rf_3$ADDR_IN),
	.D_IN(net_routers_routeTable_0_rt_ifc_banks_banks_rf_3$D_IN),
	.WE(net_routers_routeTable_0_rt_ifc_banks_banks_rf_3$WE),
	.D_OUT_1()
);


RegFileLoadSyn #
(
 	/*file*/ "../../YATISH/fpgaInterfaces/ml605/hex_files/Mesh2x2/mesh_4RTs_2VCs_8BD_16DW_SepIFRoundRobinAlloc_2RTsPerRow_2RTsPerCol_routing_0.hex",
	/*addr_width*/ 32'd2,
	/*data_width*/ 32'd3,
	/*lo*/ 32'd0,
	/*hi*/ 32'd3,
	/*binary*/ 32'd0
) 
net_routers_routeTable_0_rt_ifc_banks_banks_rf_4
(
	.CLK(CLK),
	.RESET(RESET),
	.ADDR_1(net_routers_routeTable_0_rt_ifc_banks_banks_rf_4$ADDR_1),
	.ADDR_IN(net_routers_routeTable_0_rt_ifc_banks_banks_rf_4$ADDR_IN),
	.D_IN(net_routers_routeTable_0_rt_ifc_banks_banks_rf_4$D_IN),
	.WE(net_routers_routeTable_0_rt_ifc_banks_banks_rf_4$WE),
	.D_OUT_1()
);


RegFileLoadSyn #
( 
	/*file*/ "../../YATISH/fpgaInterfaces/ml605/hex_files/Mesh2x2/mesh_4RTs_2VCs_8BD_16DW_SepIFRoundRobinAlloc_2RTsPerRow_2RTsPerCol_routing_1.hex",
	/*addr_width*/ 32'd2,
	/*data_width*/ 32'd3,
	/*lo*/ 32'd0,
	/*hi*/ 32'd3,
	/*binary*/ 32'd0
) 
net_routers_routeTable_1_rt_ifc_banks_banks_rf_0
(
	.CLK(CLK),
	.RESET(RESET),
	.ADDR_1(net_routers_routeTable_1_rt_ifc_banks_banks_rf_0$ADDR_1),
	.ADDR_IN(net_routers_routeTable_1_rt_ifc_banks_banks_rf_0$ADDR_IN),
	.D_IN(net_routers_routeTable_1_rt_ifc_banks_banks_rf_0$D_IN),
	.WE(net_routers_routeTable_1_rt_ifc_banks_banks_rf_0$WE),
	.D_OUT_1(net_routers_routeTable_1_rt_ifc_banks_banks_rf_0$D_OUT_1)
);


RegFileLoadSyn #
( 
	/*file*/ "../../YATISH/fpgaInterfaces/ml605/hex_files/Mesh2x2/mesh_4RTs_2VCs_8BD_16DW_SepIFRoundRobinAlloc_2RTsPerRow_2RTsPerCol_routing_1.hex",
	/*addr_width*/ 32'd2,
	/*data_width*/ 32'd3,
	/*lo*/ 32'd0,
	/*hi*/ 32'd3,
	/*binary*/ 32'd0
) 
net_routers_routeTable_1_rt_ifc_banks_banks_rf_1
(
	.CLK(CLK),
	.RESET(RESET),
	.ADDR_1(net_routers_routeTable_1_rt_ifc_banks_banks_rf_1$ADDR_1),
	.ADDR_IN(net_routers_routeTable_1_rt_ifc_banks_banks_rf_1$ADDR_IN),
	.D_IN(net_routers_routeTable_1_rt_ifc_banks_banks_rf_1$D_IN),
	.WE(net_routers_routeTable_1_rt_ifc_banks_banks_rf_1$WE),
	.D_OUT_1()
);


RegFileLoadSyn #
( 
	/*file*/ "../../YATISH/fpgaInterfaces/ml605/hex_files/Mesh2x2/mesh_4RTs_2VCs_8BD_16DW_SepIFRoundRobinAlloc_2RTsPerRow_2RTsPerCol_routing_1.hex",
	/*addr_width*/ 32'd2,
	/*data_width*/ 32'd3,
	/*lo*/ 32'd0,
	/*hi*/ 32'd3,
	/*binary*/ 32'd0
) 
net_routers_routeTable_1_rt_ifc_banks_banks_rf_2
(
	.CLK(CLK),
	.RESET(RESET),
	.ADDR_1(net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$ADDR_1),
	.ADDR_IN(net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$ADDR_IN),
	.D_IN(net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$D_IN),
	.WE(net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$WE),
	.D_OUT_1(net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$D_OUT_1)
);


RegFileLoadSyn #
( 
	/*file*/ "../../YATISH/fpgaInterfaces/ml605/hex_files/Mesh2x2/mesh_4RTs_2VCs_8BD_16DW_SepIFRoundRobinAlloc_2RTsPerRow_2RTsPerCol_routing_1.hex",
	/*addr_width*/ 32'd2,
	/*data_width*/ 32'd3,
	/*lo*/ 32'd0,
	/*hi*/ 32'd3,
	/*binary*/ 32'd0
) 
net_routers_routeTable_1_rt_ifc_banks_banks_rf_3
(
	.CLK(CLK),
	.RESET(RESET),
	.ADDR_1(net_routers_routeTable_1_rt_ifc_banks_banks_rf_3$ADDR_1),
	.ADDR_IN(net_routers_routeTable_1_rt_ifc_banks_banks_rf_3$ADDR_IN),
	.D_IN(net_routers_routeTable_1_rt_ifc_banks_banks_rf_3$D_IN),
	.WE(net_routers_routeTable_1_rt_ifc_banks_banks_rf_3$WE),
	.D_OUT_1(net_routers_routeTable_1_rt_ifc_banks_banks_rf_3$D_OUT_1)
);


RegFileLoadSyn #
( 
	/*file*/ "../../YATISH/fpgaInterfaces/ml605/hex_files/Mesh2x2/mesh_4RTs_2VCs_8BD_16DW_SepIFRoundRobinAlloc_2RTsPerRow_2RTsPerCol_routing_1.hex",
	/*addr_width*/ 32'd2,
	/*data_width*/ 32'd3,
	/*lo*/ 32'd0,
	/*hi*/ 32'd3,
	/*binary*/ 32'd0
) 
net_routers_routeTable_1_rt_ifc_banks_banks_rf_4
(
	.CLK(CLK),
	.RESET(RESET),
	.ADDR_1(net_routers_routeTable_1_rt_ifc_banks_banks_rf_4$ADDR_1),
	.ADDR_IN(net_routers_routeTable_1_rt_ifc_banks_banks_rf_4$ADDR_IN),
	.D_IN(net_routers_routeTable_1_rt_ifc_banks_banks_rf_4$D_IN),
	.WE(net_routers_routeTable_1_rt_ifc_banks_banks_rf_4$WE),
	.D_OUT_1()
);


RegFileLoadSyn #
( 
	/*file*/ "../../YATISH/fpgaInterfaces/ml605/hex_files/Mesh2x2/mesh_4RTs_2VCs_8BD_16DW_SepIFRoundRobinAlloc_2RTsPerRow_2RTsPerCol_routing_2.hex",
	/*addr_width*/ 32'd2,
	/*data_width*/ 32'd3,
	/*lo*/ 32'd0,
	/*hi*/ 32'd3,
	/*binary*/ 32'd0
) 
net_routers_routeTable_2_rt_ifc_banks_banks_rf_0
(
	.CLK(CLK),
	.RESET(RESET),
	.ADDR_1(net_routers_routeTable_2_rt_ifc_banks_banks_rf_0$ADDR_1),
	.ADDR_IN(net_routers_routeTable_2_rt_ifc_banks_banks_rf_0$ADDR_IN),
	.D_IN(net_routers_routeTable_2_rt_ifc_banks_banks_rf_0$D_IN),
	.WE(net_routers_routeTable_2_rt_ifc_banks_banks_rf_0$WE),
	.D_OUT_1(net_routers_routeTable_2_rt_ifc_banks_banks_rf_0$D_OUT_1)
);


RegFileLoadSyn #
( 
	/*file*/ "../../YATISH/fpgaInterfaces/ml605/hex_files/Mesh2x2/mesh_4RTs_2VCs_8BD_16DW_SepIFRoundRobinAlloc_2RTsPerRow_2RTsPerCol_routing_2.hex",
	/*addr_width*/ 32'd2,
	/*data_width*/ 32'd3,
	/*lo*/ 32'd0,
	/*hi*/ 32'd3,
	/*binary*/ 32'd0
) 
net_routers_routeTable_2_rt_ifc_banks_banks_rf_1
(
	.CLK(CLK),
	.RESET(RESET),
	.ADDR_1(net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$ADDR_1),
	.ADDR_IN(net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$ADDR_IN),
	.D_IN(net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$D_IN),
	.WE(net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$WE),
	.D_OUT_1(net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$D_OUT_1)
);


RegFileLoadSyn #
( 
	/*file*/ "../../YATISH/fpgaInterfaces/ml605/hex_files/Mesh2x2/mesh_4RTs_2VCs_8BD_16DW_SepIFRoundRobinAlloc_2RTsPerRow_2RTsPerCol_routing_2.hex",
	/*addr_width*/ 32'd2,
	/*data_width*/ 32'd3,
	/*lo*/ 32'd0,
	/*hi*/ 32'd3,
	/*binary*/ 32'd0
) 
net_routers_routeTable_2_rt_ifc_banks_banks_rf_2
(
	.CLK(CLK),
	.RESET(RESET),
	.ADDR_1(net_routers_routeTable_2_rt_ifc_banks_banks_rf_2$ADDR_1),
	.ADDR_IN(net_routers_routeTable_2_rt_ifc_banks_banks_rf_2$ADDR_IN),
	.D_IN(net_routers_routeTable_2_rt_ifc_banks_banks_rf_2$D_IN),
	.WE(net_routers_routeTable_2_rt_ifc_banks_banks_rf_2$WE),
	.D_OUT_1()
);


RegFileLoadSyn #
( 
	/*file*/ "../../YATISH/fpgaInterfaces/ml605/hex_files/Mesh2x2/mesh_4RTs_2VCs_8BD_16DW_SepIFRoundRobinAlloc_2RTsPerRow_2RTsPerCol_routing_2.hex",
	/*addr_width*/ 32'd2,
	/*data_width*/ 32'd3,
	/*lo*/ 32'd0,
	/*hi*/ 32'd3,
	/*binary*/ 32'd0
) 
net_routers_routeTable_2_rt_ifc_banks_banks_rf_3
(
	.CLK(CLK),
	.RESET(RESET),
	.ADDR_1(net_routers_routeTable_2_rt_ifc_banks_banks_rf_3$ADDR_1),
	.ADDR_IN(net_routers_routeTable_2_rt_ifc_banks_banks_rf_3$ADDR_IN),
	.D_IN(net_routers_routeTable_2_rt_ifc_banks_banks_rf_3$D_IN),
	.WE(net_routers_routeTable_2_rt_ifc_banks_banks_rf_3$WE),
	.D_OUT_1()
);


RegFileLoadSyn #
( 
	/*file*/ "../../YATISH/fpgaInterfaces/ml605/hex_files/Mesh2x2/mesh_4RTs_2VCs_8BD_16DW_SepIFRoundRobinAlloc_2RTsPerRow_2RTsPerCol_routing_2.hex",
	/*addr_width*/ 32'd2,
	/*data_width*/ 32'd3,
	/*lo*/ 32'd0,
	/*hi*/ 32'd3,
	/*binary*/ 32'd0
) 
net_routers_routeTable_2_rt_ifc_banks_banks_rf_4
(
	.CLK(CLK),
	.RESET(RESET),
	.ADDR_1(net_routers_routeTable_2_rt_ifc_banks_banks_rf_4$ADDR_1),
	.ADDR_IN(net_routers_routeTable_2_rt_ifc_banks_banks_rf_4$ADDR_IN),
	.D_IN(net_routers_routeTable_2_rt_ifc_banks_banks_rf_4$D_IN),
	.WE(net_routers_routeTable_2_rt_ifc_banks_banks_rf_4$WE),
	.D_OUT_1(net_routers_routeTable_2_rt_ifc_banks_banks_rf_4$D_OUT_1)
);


// submodule net_routers_router_core_0
mkIQRouterCoreSimple net_routers_router_core_0
(
	.CLK(CLK),

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

	.RESET(RESET)
);




// submodule net_routers_router_core_1
mkIQRouterCoreSimple net_routers_router_core_1
(
	.CLK(CLK),

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

	.RESET(RESET)
);




// submodule net_routers_router_core_2
mkIQRouterCoreSimple net_routers_router_core_2
(
	.CLK(CLK),

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

	.RESET(RESET)
);



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
assign net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$ADDR_1 = RX_D_ROUTER_1_PORT_2[15:14]; 
assign net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$ADDR_IN = 0 ;
assign net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$D_IN = 0 ;
assign net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$WE = 1'b0 ;

// submodule net_routers_routeTable_2_rt_ifc_banks_banks_rf_1
assign net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$ADDR_1 = RX_D_ROUTER_2_PORT_1[15:14]; 
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
{ RX_SOF_N_ROUTER_1_PORT_2, RX_EOF_N_ROUTER_1_PORT_2, RX_D_ROUTER_1_PORT_2[15:14], RX_REM_ROUTER_1_PORT_2, RX_D_ROUTER_1_PORT_2[13:0], net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$D_OUT_1 } ;

assign net_routers_router_core_1$EN_in_ports_2_putRoutedFlit = 1 ;
assign net_routers_router_core_1$EN_in_ports_2_getNonFullVCs = 1'b1;

// submodule net_routers_router_core_2
assign net_routers_router_core_2$in_ports_1_putRoutedFlit_flit_in =
{ RX_SOF_N_ROUTER_2_PORT_1, RX_EOF_N_ROUTER_2_PORT_1, RX_D_ROUTER_2_PORT_1[15:14], RX_REM_ROUTER_2_PORT_1, RX_D_ROUTER_2_PORT_1[13:0],net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$D_OUT_1 } ;

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



endmodule  // mkNetworkSimple
