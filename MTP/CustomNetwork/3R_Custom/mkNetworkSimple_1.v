`ifdef BSV_ASSIGNMENT_DELAY
`else
`define BSV_ASSIGNMENT_DELAY
`endif

module mkNetworkSimple_1(CLK,
		       RST_N,

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

		       send_ports_4_putFlit_flit_in,
		       EN_send_ports_4_putFlit,

		       EN_send_ports_4_getNonFullVCs,
		       send_ports_4_getNonFullVCs,

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

		       EN_recv_ports_4_getFlit,
		       recv_ports_4_getFlit,

		       recv_ports_4_putNonFullVCs_nonFullVCs,
		       EN_recv_ports_4_putNonFullVCs,

		       recv_ports_info_0_getRecvPortID,

		       recv_ports_info_1_getRecvPortID,

		       recv_ports_info_2_getRecvPortID,

		       recv_ports_info_3_getRecvPortID,

		       recv_ports_info_4_getRecvPortID);
  input  CLK;
  input  RST_N;

  // action method send_ports_0_putFlit
  input  [15 : 0] send_ports_0_putFlit_flit_in;
  input  EN_send_ports_0_putFlit;

  // actionvalue method send_ports_0_getNonFullVCs
  input  EN_send_ports_0_getNonFullVCs;
  output [1 : 0] send_ports_0_getNonFullVCs;

  // action method send_ports_1_putFlit
  input  [15 : 0] send_ports_1_putFlit_flit_in;
  input  EN_send_ports_1_putFlit;

  // actionvalue method send_ports_1_getNonFullVCs
  input  EN_send_ports_1_getNonFullVCs;
  output [1 : 0] send_ports_1_getNonFullVCs;

  // action method send_ports_2_putFlit
  input  [15 : 0] send_ports_2_putFlit_flit_in;
  input  EN_send_ports_2_putFlit;

  // actionvalue method send_ports_2_getNonFullVCs
  input  EN_send_ports_2_getNonFullVCs;
  output [1 : 0] send_ports_2_getNonFullVCs;

  // action method send_ports_3_putFlit
  input  [15 : 0] send_ports_3_putFlit_flit_in;
  input  EN_send_ports_3_putFlit;

  // actionvalue method send_ports_3_getNonFullVCs
  input  EN_send_ports_3_getNonFullVCs;
  output [1 : 0] send_ports_3_getNonFullVCs;

  // action method send_ports_4_putFlit
  input  [15 : 0] send_ports_4_putFlit_flit_in;
  input  EN_send_ports_4_putFlit;

  // actionvalue method send_ports_4_getNonFullVCs
  input  EN_send_ports_4_getNonFullVCs;
  output [1 : 0] send_ports_4_getNonFullVCs;

  // actionvalue method recv_ports_0_getFlit
  input  EN_recv_ports_0_getFlit;
  output [15 : 0] recv_ports_0_getFlit;

  // action method recv_ports_0_putNonFullVCs
  input  [1 : 0] recv_ports_0_putNonFullVCs_nonFullVCs;
  input  EN_recv_ports_0_putNonFullVCs;

  // actionvalue method recv_ports_1_getFlit
  input  EN_recv_ports_1_getFlit;
  output [15 : 0] recv_ports_1_getFlit;

  // action method recv_ports_1_putNonFullVCs
  input  [1 : 0] recv_ports_1_putNonFullVCs_nonFullVCs;
  input  EN_recv_ports_1_putNonFullVCs;

  // actionvalue method recv_ports_2_getFlit
  input  EN_recv_ports_2_getFlit;
  output [15 : 0] recv_ports_2_getFlit;

  // action method recv_ports_2_putNonFullVCs
  input  [1 : 0] recv_ports_2_putNonFullVCs_nonFullVCs;
  input  EN_recv_ports_2_putNonFullVCs;

  // actionvalue method recv_ports_3_getFlit
  input  EN_recv_ports_3_getFlit;
  output [15 : 0] recv_ports_3_getFlit;

  // action method recv_ports_3_putNonFullVCs
  input  [1 : 0] recv_ports_3_putNonFullVCs_nonFullVCs;
  input  EN_recv_ports_3_putNonFullVCs;

  // actionvalue method recv_ports_4_getFlit
  input  EN_recv_ports_4_getFlit;
  output [15 : 0] recv_ports_4_getFlit;

  // action method recv_ports_4_putNonFullVCs
  input  [1 : 0] recv_ports_4_putNonFullVCs_nonFullVCs;
  input  EN_recv_ports_4_putNonFullVCs;

  // value method recv_ports_info_0_getRecvPortID
  output [2 : 0] recv_ports_info_0_getRecvPortID;

  // value method recv_ports_info_1_getRecvPortID
  output [2 : 0] recv_ports_info_1_getRecvPortID;

  // value method recv_ports_info_2_getRecvPortID
  output [2 : 0] recv_ports_info_2_getRecvPortID;

  // value method recv_ports_info_3_getRecvPortID
  output [2 : 0] recv_ports_info_3_getRecvPortID;

  // value method recv_ports_info_4_getRecvPortID
  output [2 : 0] recv_ports_info_4_getRecvPortID;

  // signals for module outputs
  wire [15 : 0] recv_ports_0_getFlit,
		recv_ports_1_getFlit,
		recv_ports_2_getFlit,
		recv_ports_3_getFlit,
		recv_ports_4_getFlit;
  wire [2 : 0] recv_ports_info_0_getRecvPortID,
	       recv_ports_info_1_getRecvPortID,
	       recv_ports_info_2_getRecvPortID,
	       recv_ports_info_3_getRecvPortID,
	       recv_ports_info_4_getRecvPortID;
  wire [1 : 0] send_ports_0_getNonFullVCs,
	       send_ports_1_getNonFullVCs,
	       send_ports_2_getNonFullVCs,
	       send_ports_3_getNonFullVCs,
	       send_ports_4_getNonFullVCs;

  // ports of submodule net_routers_routeTable_1_rt_ifc_banks_banks_rf
  wire [2 : 0] net_routers_routeTable_1_rt_ifc_banks_banks_rf$ADDR_1,
	       net_routers_routeTable_1_rt_ifc_banks_banks_rf$ADDR_IN;
  wire [1 : 0] net_routers_routeTable_1_rt_ifc_banks_banks_rf$D_IN,
	       net_routers_routeTable_1_rt_ifc_banks_banks_rf$D_OUT_1;
  wire net_routers_routeTable_1_rt_ifc_banks_banks_rf$WE;

  // ports of submodule net_routers_routeTable_1_rt_ifc_banks_banks_rf_1
  wire [2 : 0] net_routers_routeTable_1_rt_ifc_banks_banks_rf_1$ADDR_1,
	       net_routers_routeTable_1_rt_ifc_banks_banks_rf_1$ADDR_IN;
  wire [1 : 0] net_routers_routeTable_1_rt_ifc_banks_banks_rf_1$D_IN,
	       net_routers_routeTable_1_rt_ifc_banks_banks_rf_1$D_OUT_1;
  wire net_routers_routeTable_1_rt_ifc_banks_banks_rf_1$WE;

  // ports of submodule net_routers_routeTable_1_rt_ifc_banks_banks_rf_2
  wire [2 : 0] net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$ADDR_1,
	       net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$ADDR_IN;
  wire [1 : 0] net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$D_IN,
	       net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$D_OUT_1;
  wire net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$WE;

  // ports of submodule net_routers_routeTable_2_rt_ifc_banks_banks_rf
  wire [2 : 0] net_routers_routeTable_2_rt_ifc_banks_banks_rf$ADDR_1,
	       net_routers_routeTable_2_rt_ifc_banks_banks_rf$ADDR_IN;
  wire [1 : 0] net_routers_routeTable_2_rt_ifc_banks_banks_rf$D_IN,
	       net_routers_routeTable_2_rt_ifc_banks_banks_rf$D_OUT_1;
  wire net_routers_routeTable_2_rt_ifc_banks_banks_rf$WE;

  // ports of submodule net_routers_routeTable_2_rt_ifc_banks_banks_rf_1
  wire [2 : 0] net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$ADDR_1,
	       net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$ADDR_IN;
  wire [1 : 0] net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$D_IN,
	       net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$D_OUT_1;
  wire net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$WE;

  // ports of submodule net_routers_routeTable_2_rt_ifc_banks_banks_rf_2
  wire [2 : 0] net_routers_routeTable_2_rt_ifc_banks_banks_rf_2$ADDR_1,
	       net_routers_routeTable_2_rt_ifc_banks_banks_rf_2$ADDR_IN;
  wire [1 : 0] net_routers_routeTable_2_rt_ifc_banks_banks_rf_2$D_IN,
	       net_routers_routeTable_2_rt_ifc_banks_banks_rf_2$D_OUT_1;
  wire net_routers_routeTable_2_rt_ifc_banks_banks_rf_2$WE;

  // ports of submodule net_routers_routeTable_rt_ifc_banks_banks_rf
  wire [2 : 0] net_routers_routeTable_rt_ifc_banks_banks_rf$ADDR_1,
	       net_routers_routeTable_rt_ifc_banks_banks_rf$ADDR_IN;
  wire [1 : 0] net_routers_routeTable_rt_ifc_banks_banks_rf$D_IN,
	       net_routers_routeTable_rt_ifc_banks_banks_rf$D_OUT_1;
  wire net_routers_routeTable_rt_ifc_banks_banks_rf$WE;

  // ports of submodule net_routers_routeTable_rt_ifc_banks_banks_rf_1
  wire [2 : 0] net_routers_routeTable_rt_ifc_banks_banks_rf_1$ADDR_1,
	       net_routers_routeTable_rt_ifc_banks_banks_rf_1$ADDR_IN;
  wire [1 : 0] net_routers_routeTable_rt_ifc_banks_banks_rf_1$D_IN,
	       net_routers_routeTable_rt_ifc_banks_banks_rf_1$D_OUT_1;
  wire net_routers_routeTable_rt_ifc_banks_banks_rf_1$WE;

  // ports of submodule net_routers_routeTable_rt_ifc_banks_banks_rf_2
  wire [2 : 0] net_routers_routeTable_rt_ifc_banks_banks_rf_2$ADDR_1,
	       net_routers_routeTable_rt_ifc_banks_banks_rf_2$ADDR_IN;
  wire [1 : 0] net_routers_routeTable_rt_ifc_banks_banks_rf_2$D_IN,
	       net_routers_routeTable_rt_ifc_banks_banks_rf_2$D_OUT_1;
  wire net_routers_routeTable_rt_ifc_banks_banks_rf_2$WE;

  // ports of submodule net_routers_router_core
  wire [17 : 0] net_routers_router_core$in_ports_0_putRoutedFlit_flit_in,
		net_routers_router_core$in_ports_1_putRoutedFlit_flit_in,
		net_routers_router_core$in_ports_2_putRoutedFlit_flit_in;
  wire [15 : 0] net_routers_router_core$out_ports_0_getFlit,
		net_routers_router_core$out_ports_1_getFlit,
		net_routers_router_core$out_ports_2_getFlit;
  wire [1 : 0] net_routers_router_core$in_ports_0_getNonFullVCs,
	       net_routers_router_core$in_ports_1_getNonFullVCs,
	       net_routers_router_core$in_ports_2_getNonFullVCs,
	       net_routers_router_core$out_ports_0_putNonFullVCs_nonFullVCs,
	       net_routers_router_core$out_ports_1_putNonFullVCs_nonFullVCs,
	       net_routers_router_core$out_ports_2_putNonFullVCs_nonFullVCs;
  wire net_routers_router_core$EN_in_ports_0_getNonFullVCs,
       net_routers_router_core$EN_in_ports_0_putRoutedFlit,
       net_routers_router_core$EN_in_ports_1_getNonFullVCs,
       net_routers_router_core$EN_in_ports_1_putRoutedFlit,
       net_routers_router_core$EN_in_ports_2_getNonFullVCs,
       net_routers_router_core$EN_in_ports_2_putRoutedFlit,
       net_routers_router_core$EN_out_ports_0_getFlit,
       net_routers_router_core$EN_out_ports_0_putNonFullVCs,
       net_routers_router_core$EN_out_ports_1_getFlit,
       net_routers_router_core$EN_out_ports_1_putNonFullVCs,
       net_routers_router_core$EN_out_ports_2_getFlit,
       net_routers_router_core$EN_out_ports_2_putNonFullVCs;

  // ports of submodule net_routers_router_core_1
  wire [17 : 0] net_routers_router_core_1$in_ports_0_putRoutedFlit_flit_in,
		net_routers_router_core_1$in_ports_1_putRoutedFlit_flit_in,
		net_routers_router_core_1$in_ports_2_putRoutedFlit_flit_in;
  wire [15 : 0] net_routers_router_core_1$out_ports_0_getFlit,
		net_routers_router_core_1$out_ports_1_getFlit,
		net_routers_router_core_1$out_ports_2_getFlit;
  wire [1 : 0] net_routers_router_core_1$in_ports_0_getNonFullVCs,
	       net_routers_router_core_1$in_ports_1_getNonFullVCs,
	       net_routers_router_core_1$in_ports_2_getNonFullVCs,
	       net_routers_router_core_1$out_ports_0_putNonFullVCs_nonFullVCs,
	       net_routers_router_core_1$out_ports_1_putNonFullVCs_nonFullVCs,
	       net_routers_router_core_1$out_ports_2_putNonFullVCs_nonFullVCs;
  wire net_routers_router_core_1$EN_in_ports_0_getNonFullVCs,
       net_routers_router_core_1$EN_in_ports_0_putRoutedFlit,
       net_routers_router_core_1$EN_in_ports_1_getNonFullVCs,
       net_routers_router_core_1$EN_in_ports_1_putRoutedFlit,
       net_routers_router_core_1$EN_in_ports_2_getNonFullVCs,
       net_routers_router_core_1$EN_in_ports_2_putRoutedFlit,
       net_routers_router_core_1$EN_out_ports_0_getFlit,
       net_routers_router_core_1$EN_out_ports_0_putNonFullVCs,
       net_routers_router_core_1$EN_out_ports_1_getFlit,
       net_routers_router_core_1$EN_out_ports_1_putNonFullVCs,
       net_routers_router_core_1$EN_out_ports_2_getFlit,
       net_routers_router_core_1$EN_out_ports_2_putNonFullVCs;

  // ports of submodule net_routers_router_core_2
  wire [17 : 0] net_routers_router_core_2$in_ports_0_putRoutedFlit_flit_in,
		net_routers_router_core_2$in_ports_1_putRoutedFlit_flit_in,
		net_routers_router_core_2$in_ports_2_putRoutedFlit_flit_in;
  wire [15 : 0] net_routers_router_core_2$out_ports_0_getFlit,
		net_routers_router_core_2$out_ports_1_getFlit,
		net_routers_router_core_2$out_ports_2_getFlit;
  wire [1 : 0] net_routers_router_core_2$in_ports_0_getNonFullVCs,
	       net_routers_router_core_2$in_ports_1_getNonFullVCs,
	       net_routers_router_core_2$in_ports_2_getNonFullVCs,
	       net_routers_router_core_2$out_ports_0_putNonFullVCs_nonFullVCs,
	       net_routers_router_core_2$out_ports_1_putNonFullVCs_nonFullVCs,
	       net_routers_router_core_2$out_ports_2_putNonFullVCs_nonFullVCs;
  wire net_routers_router_core_2$EN_in_ports_0_getNonFullVCs,
       net_routers_router_core_2$EN_in_ports_0_putRoutedFlit,
       net_routers_router_core_2$EN_in_ports_1_getNonFullVCs,
       net_routers_router_core_2$EN_in_ports_1_putRoutedFlit,
       net_routers_router_core_2$EN_in_ports_2_getNonFullVCs,
       net_routers_router_core_2$EN_in_ports_2_putRoutedFlit,
       net_routers_router_core_2$EN_out_ports_0_getFlit,
       net_routers_router_core_2$EN_out_ports_0_putNonFullVCs,
       net_routers_router_core_2$EN_out_ports_1_getFlit,
       net_routers_router_core_2$EN_out_ports_1_putNonFullVCs,
       net_routers_router_core_2$EN_out_ports_2_getFlit,
       net_routers_router_core_2$EN_out_ports_2_putNonFullVCs;

  // actionvalue method send_ports_0_getNonFullVCs
  assign send_ports_0_getNonFullVCs =
	     net_routers_router_core$in_ports_0_getNonFullVCs ;

  // actionvalue method send_ports_1_getNonFullVCs
  assign send_ports_1_getNonFullVCs =
	     net_routers_router_core_1$in_ports_0_getNonFullVCs ;

  // actionvalue method send_ports_2_getNonFullVCs
  assign send_ports_2_getNonFullVCs =
	     net_routers_router_core_2$in_ports_0_getNonFullVCs ;

  // actionvalue method send_ports_3_getNonFullVCs
  assign send_ports_3_getNonFullVCs =
	     net_routers_router_core_2$in_ports_2_getNonFullVCs ;

  // actionvalue method send_ports_4_getNonFullVCs
  assign send_ports_4_getNonFullVCs =
	     net_routers_router_core$in_ports_1_getNonFullVCs ;

  // actionvalue method recv_ports_0_getFlit
  assign recv_ports_0_getFlit = net_routers_router_core$out_ports_0_getFlit ;

  // actionvalue method recv_ports_1_getFlit
  assign recv_ports_1_getFlit =
	     net_routers_router_core_1$out_ports_0_getFlit ;

  // actionvalue method recv_ports_2_getFlit
  assign recv_ports_2_getFlit =
	     net_routers_router_core_2$out_ports_0_getFlit ;

  // actionvalue method recv_ports_3_getFlit
  assign recv_ports_3_getFlit =
	     net_routers_router_core_2$out_ports_2_getFlit ;

  // actionvalue method recv_ports_4_getFlit
  assign recv_ports_4_getFlit = net_routers_router_core$out_ports_1_getFlit ;

  // value method recv_ports_info_0_getRecvPortID
  assign recv_ports_info_0_getRecvPortID = 3'd0 ;

  // value method recv_ports_info_1_getRecvPortID
  assign recv_ports_info_1_getRecvPortID = 3'd1 ;

  // value method recv_ports_info_2_getRecvPortID
  assign recv_ports_info_2_getRecvPortID = 3'd2 ;

  // value method recv_ports_info_3_getRecvPortID
  assign recv_ports_info_3_getRecvPortID = 3'd3 ;

  // value method recv_ports_info_4_getRecvPortID
  assign recv_ports_info_4_getRecvPortID = 3'd4 ;

  // submodule net_routers_routeTable_1_rt_ifc_banks_banks_rf
  RegFileLoadSyn_1 #( /*file*/ "customa7a54ec6eb873981e3716cfb5fb7eba1_8RTs_2VCs_8BD_10DW_SepIFRoundRobinAlloc_routing_1.hex",
		    /*addr_width*/ 32'd3,
		    /*data_width*/ 32'd2,
		    /*lo*/ 32'd0,
		    /*hi*/ 32'd7,
		    /*binary*/ 32'd0) net_routers_routeTable_1_rt_ifc_banks_banks_rf(.CLK(CLK),
										     .RST_N(RST_N),
										     .ADDR_1(net_routers_routeTable_1_rt_ifc_banks_banks_rf$ADDR_1),
										     .ADDR_IN(net_routers_routeTable_1_rt_ifc_banks_banks_rf$ADDR_IN),
										     .D_IN(net_routers_routeTable_1_rt_ifc_banks_banks_rf$D_IN),
										     .WE(net_routers_routeTable_1_rt_ifc_banks_banks_rf$WE),
										     .D_OUT_1(net_routers_routeTable_1_rt_ifc_banks_banks_rf$D_OUT_1));

  // submodule net_routers_routeTable_1_rt_ifc_banks_banks_rf_1
  RegFileLoadSyn_1 #( /*file*/ "customa7a54ec6eb873981e3716cfb5fb7eba1_8RTs_2VCs_8BD_10DW_SepIFRoundRobinAlloc_routing_1.hex",
		    /*addr_width*/ 32'd3,
		    /*data_width*/ 32'd2,
		    /*lo*/ 32'd0,
		    /*hi*/ 32'd7,
		    /*binary*/ 32'd0) net_routers_routeTable_1_rt_ifc_banks_banks_rf_1(.CLK(CLK),
										       .RST_N(RST_N),
										       .ADDR_1(net_routers_routeTable_1_rt_ifc_banks_banks_rf_1$ADDR_1),
										       .ADDR_IN(net_routers_routeTable_1_rt_ifc_banks_banks_rf_1$ADDR_IN),
										       .D_IN(net_routers_routeTable_1_rt_ifc_banks_banks_rf_1$D_IN),
										       .WE(net_routers_routeTable_1_rt_ifc_banks_banks_rf_1$WE),
										       .D_OUT_1(net_routers_routeTable_1_rt_ifc_banks_banks_rf_1$D_OUT_1));

  // submodule net_routers_routeTable_1_rt_ifc_banks_banks_rf_2
  RegFileLoadSyn_1 #( /*file*/ "customa7a54ec6eb873981e3716cfb5fb7eba1_8RTs_2VCs_8BD_10DW_SepIFRoundRobinAlloc_routing_1.hex",
		    /*addr_width*/ 32'd3,
		    /*data_width*/ 32'd2,
		    /*lo*/ 32'd0,
		    /*hi*/ 32'd7,
		    /*binary*/ 32'd0) net_routers_routeTable_1_rt_ifc_banks_banks_rf_2(.CLK(CLK),
										       .RST_N(RST_N),
										       .ADDR_1(net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$ADDR_1),
										       .ADDR_IN(net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$ADDR_IN),
										       .D_IN(net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$D_IN),
										       .WE(net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$WE),
										       .D_OUT_1(net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$D_OUT_1));

  // submodule net_routers_routeTable_2_rt_ifc_banks_banks_rf
  RegFileLoadSyn_1 #( /*file*/ "customa7a54ec6eb873981e3716cfb5fb7eba1_8RTs_2VCs_8BD_10DW_SepIFRoundRobinAlloc_routing_2.hex",
		    /*addr_width*/ 32'd3,
		    /*data_width*/ 32'd2,
		    /*lo*/ 32'd0,
		    /*hi*/ 32'd7,
		    /*binary*/ 32'd0) net_routers_routeTable_2_rt_ifc_banks_banks_rf(.CLK(CLK),
										     .RST_N(RST_N),
										     .ADDR_1(net_routers_routeTable_2_rt_ifc_banks_banks_rf$ADDR_1),
										     .ADDR_IN(net_routers_routeTable_2_rt_ifc_banks_banks_rf$ADDR_IN),
										     .D_IN(net_routers_routeTable_2_rt_ifc_banks_banks_rf$D_IN),
										     .WE(net_routers_routeTable_2_rt_ifc_banks_banks_rf$WE),
										     .D_OUT_1(net_routers_routeTable_2_rt_ifc_banks_banks_rf$D_OUT_1));

  // submodule net_routers_routeTable_2_rt_ifc_banks_banks_rf_1
  RegFileLoadSyn_1 #( /*file*/ "customa7a54ec6eb873981e3716cfb5fb7eba1_8RTs_2VCs_8BD_10DW_SepIFRoundRobinAlloc_routing_2.hex",
		    /*addr_width*/ 32'd3,
		    /*data_width*/ 32'd2,
		    /*lo*/ 32'd0,
		    /*hi*/ 32'd7,
		    /*binary*/ 32'd0) net_routers_routeTable_2_rt_ifc_banks_banks_rf_1(.CLK(CLK),
										       .RST_N(RST_N),
										       .ADDR_1(net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$ADDR_1),
										       .ADDR_IN(net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$ADDR_IN),
										       .D_IN(net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$D_IN),
										       .WE(net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$WE),
										       .D_OUT_1(net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$D_OUT_1));

  // submodule net_routers_routeTable_2_rt_ifc_banks_banks_rf_2
  RegFileLoadSyn_1 #( /*file*/ "customa7a54ec6eb873981e3716cfb5fb7eba1_8RTs_2VCs_8BD_10DW_SepIFRoundRobinAlloc_routing_2.hex",
		    /*addr_width*/ 32'd3,
		    /*data_width*/ 32'd2,
		    /*lo*/ 32'd0,
		    /*hi*/ 32'd7,
		    /*binary*/ 32'd0) net_routers_routeTable_2_rt_ifc_banks_banks_rf_2(.CLK(CLK),
										       .RST_N(RST_N),
										       .ADDR_1(net_routers_routeTable_2_rt_ifc_banks_banks_rf_2$ADDR_1),
										       .ADDR_IN(net_routers_routeTable_2_rt_ifc_banks_banks_rf_2$ADDR_IN),
										       .D_IN(net_routers_routeTable_2_rt_ifc_banks_banks_rf_2$D_IN),
										       .WE(net_routers_routeTable_2_rt_ifc_banks_banks_rf_2$WE),
										       .D_OUT_1(net_routers_routeTable_2_rt_ifc_banks_banks_rf_2$D_OUT_1));

  // submodule net_routers_routeTable_rt_ifc_banks_banks_rf
  RegFileLoadSyn_1 #( /*file*/ "customa7a54ec6eb873981e3716cfb5fb7eba1_8RTs_2VCs_8BD_10DW_SepIFRoundRobinAlloc_routing_0.hex",
		    /*addr_width*/ 32'd3,
		    /*data_width*/ 32'd2,
		    /*lo*/ 32'd0,
		    /*hi*/ 32'd7,
		    /*binary*/ 32'd0) net_routers_routeTable_rt_ifc_banks_banks_rf(.CLK(CLK),
										   .RST_N(RST_N),
										   .ADDR_1(net_routers_routeTable_rt_ifc_banks_banks_rf$ADDR_1),
										   .ADDR_IN(net_routers_routeTable_rt_ifc_banks_banks_rf$ADDR_IN),
										   .D_IN(net_routers_routeTable_rt_ifc_banks_banks_rf$D_IN),
										   .WE(net_routers_routeTable_rt_ifc_banks_banks_rf$WE),
										   .D_OUT_1(net_routers_routeTable_rt_ifc_banks_banks_rf$D_OUT_1));

  // submodule net_routers_routeTable_rt_ifc_banks_banks_rf_1
  RegFileLoadSyn_1 #( /*file*/ "customa7a54ec6eb873981e3716cfb5fb7eba1_8RTs_2VCs_8BD_10DW_SepIFRoundRobinAlloc_routing_0.hex",
		    /*addr_width*/ 32'd3,
		    /*data_width*/ 32'd2,
		    /*lo*/ 32'd0,
		    /*hi*/ 32'd7,
		    /*binary*/ 32'd0) net_routers_routeTable_rt_ifc_banks_banks_rf_1(.CLK(CLK),
										     .RST_N(RST_N),
										     .ADDR_1(net_routers_routeTable_rt_ifc_banks_banks_rf_1$ADDR_1),
										     .ADDR_IN(net_routers_routeTable_rt_ifc_banks_banks_rf_1$ADDR_IN),
										     .D_IN(net_routers_routeTable_rt_ifc_banks_banks_rf_1$D_IN),
										     .WE(net_routers_routeTable_rt_ifc_banks_banks_rf_1$WE),
										     .D_OUT_1(net_routers_routeTable_rt_ifc_banks_banks_rf_1$D_OUT_1));

  // submodule net_routers_routeTable_rt_ifc_banks_banks_rf_2
  RegFileLoadSyn_1 #( /*file*/ "customa7a54ec6eb873981e3716cfb5fb7eba1_8RTs_2VCs_8BD_10DW_SepIFRoundRobinAlloc_routing_0.hex",
		    /*addr_width*/ 32'd3,
		    /*data_width*/ 32'd2,
		    /*lo*/ 32'd0,
		    /*hi*/ 32'd7,
		    /*binary*/ 32'd0) net_routers_routeTable_rt_ifc_banks_banks_rf_2(.CLK(CLK),
										     .RST_N(RST_N),
										     .ADDR_1(net_routers_routeTable_rt_ifc_banks_banks_rf_2$ADDR_1),
										     .ADDR_IN(net_routers_routeTable_rt_ifc_banks_banks_rf_2$ADDR_IN),
										     .D_IN(net_routers_routeTable_rt_ifc_banks_banks_rf_2$D_IN),
										     .WE(net_routers_routeTable_rt_ifc_banks_banks_rf_2$WE),
										     .D_OUT_1(net_routers_routeTable_rt_ifc_banks_banks_rf_2$D_OUT_1));

  // submodule net_routers_router_core
  mkIQRouterCoreSimple_1 net_routers_router_core(.CLK(CLK),
					       .RST_N(RST_N),
					       .in_ports_0_putRoutedFlit_flit_in(net_routers_router_core$in_ports_0_putRoutedFlit_flit_in),
					       .in_ports_1_putRoutedFlit_flit_in(net_routers_router_core$in_ports_1_putRoutedFlit_flit_in),
					       .in_ports_2_putRoutedFlit_flit_in(net_routers_router_core$in_ports_2_putRoutedFlit_flit_in),
					       .out_ports_0_putNonFullVCs_nonFullVCs(net_routers_router_core$out_ports_0_putNonFullVCs_nonFullVCs),
					       .out_ports_1_putNonFullVCs_nonFullVCs(net_routers_router_core$out_ports_1_putNonFullVCs_nonFullVCs),
					       .out_ports_2_putNonFullVCs_nonFullVCs(net_routers_router_core$out_ports_2_putNonFullVCs_nonFullVCs),
					       .EN_in_ports_0_putRoutedFlit(net_routers_router_core$EN_in_ports_0_putRoutedFlit),
					       .EN_in_ports_0_getNonFullVCs(net_routers_router_core$EN_in_ports_0_getNonFullVCs),
					       .EN_in_ports_1_putRoutedFlit(net_routers_router_core$EN_in_ports_1_putRoutedFlit),
					       .EN_in_ports_1_getNonFullVCs(net_routers_router_core$EN_in_ports_1_getNonFullVCs),
					       .EN_in_ports_2_putRoutedFlit(net_routers_router_core$EN_in_ports_2_putRoutedFlit),
					       .EN_in_ports_2_getNonFullVCs(net_routers_router_core$EN_in_ports_2_getNonFullVCs),
					       .EN_out_ports_0_getFlit(net_routers_router_core$EN_out_ports_0_getFlit),
					       .EN_out_ports_0_putNonFullVCs(net_routers_router_core$EN_out_ports_0_putNonFullVCs),
					       .EN_out_ports_1_getFlit(net_routers_router_core$EN_out_ports_1_getFlit),
					       .EN_out_ports_1_putNonFullVCs(net_routers_router_core$EN_out_ports_1_putNonFullVCs),
					       .EN_out_ports_2_getFlit(net_routers_router_core$EN_out_ports_2_getFlit),
					       .EN_out_ports_2_putNonFullVCs(net_routers_router_core$EN_out_ports_2_putNonFullVCs),
					       .in_ports_0_getNonFullVCs(net_routers_router_core$in_ports_0_getNonFullVCs),
					       .in_ports_1_getNonFullVCs(net_routers_router_core$in_ports_1_getNonFullVCs),
					       .in_ports_2_getNonFullVCs(net_routers_router_core$in_ports_2_getNonFullVCs),
					       .out_ports_0_getFlit(net_routers_router_core$out_ports_0_getFlit),
					       .out_ports_1_getFlit(net_routers_router_core$out_ports_1_getFlit),
					       .out_ports_2_getFlit(net_routers_router_core$out_ports_2_getFlit));

  // submodule net_routers_router_core_1
  mkIQRouterCoreSimple_1 net_routers_router_core_1(.CLK(CLK),
						 .RST_N(RST_N),
						 .in_ports_0_putRoutedFlit_flit_in(net_routers_router_core_1$in_ports_0_putRoutedFlit_flit_in),
						 .in_ports_1_putRoutedFlit_flit_in(net_routers_router_core_1$in_ports_1_putRoutedFlit_flit_in),
						 .in_ports_2_putRoutedFlit_flit_in(net_routers_router_core_1$in_ports_2_putRoutedFlit_flit_in),
						 .out_ports_0_putNonFullVCs_nonFullVCs(net_routers_router_core_1$out_ports_0_putNonFullVCs_nonFullVCs),
						 .out_ports_1_putNonFullVCs_nonFullVCs(net_routers_router_core_1$out_ports_1_putNonFullVCs_nonFullVCs),
						 .out_ports_2_putNonFullVCs_nonFullVCs(net_routers_router_core_1$out_ports_2_putNonFullVCs_nonFullVCs),
						 .EN_in_ports_0_putRoutedFlit(net_routers_router_core_1$EN_in_ports_0_putRoutedFlit),
						 .EN_in_ports_0_getNonFullVCs(net_routers_router_core_1$EN_in_ports_0_getNonFullVCs),
						 .EN_in_ports_1_putRoutedFlit(net_routers_router_core_1$EN_in_ports_1_putRoutedFlit),
						 .EN_in_ports_1_getNonFullVCs(net_routers_router_core_1$EN_in_ports_1_getNonFullVCs),
						 .EN_in_ports_2_putRoutedFlit(net_routers_router_core_1$EN_in_ports_2_putRoutedFlit),
						 .EN_in_ports_2_getNonFullVCs(net_routers_router_core_1$EN_in_ports_2_getNonFullVCs),
						 .EN_out_ports_0_getFlit(net_routers_router_core_1$EN_out_ports_0_getFlit),
						 .EN_out_ports_0_putNonFullVCs(net_routers_router_core_1$EN_out_ports_0_putNonFullVCs),
						 .EN_out_ports_1_getFlit(net_routers_router_core_1$EN_out_ports_1_getFlit),
						 .EN_out_ports_1_putNonFullVCs(net_routers_router_core_1$EN_out_ports_1_putNonFullVCs),
						 .EN_out_ports_2_getFlit(net_routers_router_core_1$EN_out_ports_2_getFlit),
						 .EN_out_ports_2_putNonFullVCs(net_routers_router_core_1$EN_out_ports_2_putNonFullVCs),
						 .in_ports_0_getNonFullVCs(net_routers_router_core_1$in_ports_0_getNonFullVCs),
						 .in_ports_1_getNonFullVCs(net_routers_router_core_1$in_ports_1_getNonFullVCs),
						 .in_ports_2_getNonFullVCs(net_routers_router_core_1$in_ports_2_getNonFullVCs),
						 .out_ports_0_getFlit(net_routers_router_core_1$out_ports_0_getFlit),
						 .out_ports_1_getFlit(net_routers_router_core_1$out_ports_1_getFlit),
						 .out_ports_2_getFlit(net_routers_router_core_1$out_ports_2_getFlit));

  // submodule net_routers_router_core_2
  mkIQRouterCoreSimple_1 net_routers_router_core_2(.CLK(CLK),
						 .RST_N(RST_N),
						 .in_ports_0_putRoutedFlit_flit_in(net_routers_router_core_2$in_ports_0_putRoutedFlit_flit_in),
						 .in_ports_1_putRoutedFlit_flit_in(net_routers_router_core_2$in_ports_1_putRoutedFlit_flit_in),
						 .in_ports_2_putRoutedFlit_flit_in(net_routers_router_core_2$in_ports_2_putRoutedFlit_flit_in),
						 .out_ports_0_putNonFullVCs_nonFullVCs(net_routers_router_core_2$out_ports_0_putNonFullVCs_nonFullVCs),
						 .out_ports_1_putNonFullVCs_nonFullVCs(net_routers_router_core_2$out_ports_1_putNonFullVCs_nonFullVCs),
						 .out_ports_2_putNonFullVCs_nonFullVCs(net_routers_router_core_2$out_ports_2_putNonFullVCs_nonFullVCs),
						 .EN_in_ports_0_putRoutedFlit(net_routers_router_core_2$EN_in_ports_0_putRoutedFlit),
						 .EN_in_ports_0_getNonFullVCs(net_routers_router_core_2$EN_in_ports_0_getNonFullVCs),
						 .EN_in_ports_1_putRoutedFlit(net_routers_router_core_2$EN_in_ports_1_putRoutedFlit),
						 .EN_in_ports_1_getNonFullVCs(net_routers_router_core_2$EN_in_ports_1_getNonFullVCs),
						 .EN_in_ports_2_putRoutedFlit(net_routers_router_core_2$EN_in_ports_2_putRoutedFlit),
						 .EN_in_ports_2_getNonFullVCs(net_routers_router_core_2$EN_in_ports_2_getNonFullVCs),
						 .EN_out_ports_0_getFlit(net_routers_router_core_2$EN_out_ports_0_getFlit),
						 .EN_out_ports_0_putNonFullVCs(net_routers_router_core_2$EN_out_ports_0_putNonFullVCs),
						 .EN_out_ports_1_getFlit(net_routers_router_core_2$EN_out_ports_1_getFlit),
						 .EN_out_ports_1_putNonFullVCs(net_routers_router_core_2$EN_out_ports_1_putNonFullVCs),
						 .EN_out_ports_2_getFlit(net_routers_router_core_2$EN_out_ports_2_getFlit),
						 .EN_out_ports_2_putNonFullVCs(net_routers_router_core_2$EN_out_ports_2_putNonFullVCs),
						 .in_ports_0_getNonFullVCs(net_routers_router_core_2$in_ports_0_getNonFullVCs),
						 .in_ports_1_getNonFullVCs(net_routers_router_core_2$in_ports_1_getNonFullVCs),
						 .in_ports_2_getNonFullVCs(net_routers_router_core_2$in_ports_2_getNonFullVCs),
						 .out_ports_0_getFlit(net_routers_router_core_2$out_ports_0_getFlit),
						 .out_ports_1_getFlit(net_routers_router_core_2$out_ports_1_getFlit),
						 .out_ports_2_getFlit(net_routers_router_core_2$out_ports_2_getFlit));

  // submodule net_routers_routeTable_1_rt_ifc_banks_banks_rf
  assign net_routers_routeTable_1_rt_ifc_banks_banks_rf$ADDR_1 =
	     send_ports_1_putFlit_flit_in[13:11] ;
  assign net_routers_routeTable_1_rt_ifc_banks_banks_rf$ADDR_IN = 3'h0 ;
  assign net_routers_routeTable_1_rt_ifc_banks_banks_rf$D_IN = 2'h0 ;
  assign net_routers_routeTable_1_rt_ifc_banks_banks_rf$WE = 1'b0 ;

  // submodule net_routers_routeTable_1_rt_ifc_banks_banks_rf_1
  assign net_routers_routeTable_1_rt_ifc_banks_banks_rf_1$ADDR_1 =
	     net_routers_router_core$out_ports_2_getFlit[13:11] ;
  assign net_routers_routeTable_1_rt_ifc_banks_banks_rf_1$ADDR_IN = 3'h0 ;
  assign net_routers_routeTable_1_rt_ifc_banks_banks_rf_1$D_IN = 2'h0 ;
  assign net_routers_routeTable_1_rt_ifc_banks_banks_rf_1$WE = 1'b0 ;

  // submodule net_routers_routeTable_1_rt_ifc_banks_banks_rf_2
  assign net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$ADDR_1 =
	     net_routers_router_core_2$out_ports_1_getFlit[13:11] ;
  assign net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$ADDR_IN = 3'h0 ;
  assign net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$D_IN = 2'h0 ;
  assign net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$WE = 1'b0 ;

  // submodule net_routers_routeTable_2_rt_ifc_banks_banks_rf
  assign net_routers_routeTable_2_rt_ifc_banks_banks_rf$ADDR_1 =
	     send_ports_2_putFlit_flit_in[13:11] ;
  assign net_routers_routeTable_2_rt_ifc_banks_banks_rf$ADDR_IN = 3'h0 ;
  assign net_routers_routeTable_2_rt_ifc_banks_banks_rf$D_IN = 2'h0 ;
  assign net_routers_routeTable_2_rt_ifc_banks_banks_rf$WE = 1'b0 ;

  // submodule net_routers_routeTable_2_rt_ifc_banks_banks_rf_1
  assign net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$ADDR_1 =
	     net_routers_router_core_1$out_ports_2_getFlit[13:11] ;
  assign net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$ADDR_IN = 3'h0 ;
  assign net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$D_IN = 2'h0 ;
  assign net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$WE = 1'b0 ;

  // submodule net_routers_routeTable_2_rt_ifc_banks_banks_rf_2
  assign net_routers_routeTable_2_rt_ifc_banks_banks_rf_2$ADDR_1 =
	     send_ports_3_putFlit_flit_in[13:11] ;
  assign net_routers_routeTable_2_rt_ifc_banks_banks_rf_2$ADDR_IN = 3'h0 ;
  assign net_routers_routeTable_2_rt_ifc_banks_banks_rf_2$D_IN = 2'h0 ;
  assign net_routers_routeTable_2_rt_ifc_banks_banks_rf_2$WE = 1'b0 ;

  // submodule net_routers_routeTable_rt_ifc_banks_banks_rf
  assign net_routers_routeTable_rt_ifc_banks_banks_rf$ADDR_1 =
	     send_ports_0_putFlit_flit_in[13:11] ;
  assign net_routers_routeTable_rt_ifc_banks_banks_rf$ADDR_IN = 3'h0 ;
  assign net_routers_routeTable_rt_ifc_banks_banks_rf$D_IN = 2'h0 ;
  assign net_routers_routeTable_rt_ifc_banks_banks_rf$WE = 1'b0 ;

  // submodule net_routers_routeTable_rt_ifc_banks_banks_rf_1
  assign net_routers_routeTable_rt_ifc_banks_banks_rf_1$ADDR_1 =
	     send_ports_4_putFlit_flit_in[13:11] ;
  assign net_routers_routeTable_rt_ifc_banks_banks_rf_1$ADDR_IN = 3'h0 ;
  assign net_routers_routeTable_rt_ifc_banks_banks_rf_1$D_IN = 2'h0 ;
  assign net_routers_routeTable_rt_ifc_banks_banks_rf_1$WE = 1'b0 ;

  // submodule net_routers_routeTable_rt_ifc_banks_banks_rf_2
  assign net_routers_routeTable_rt_ifc_banks_banks_rf_2$ADDR_1 =
	     net_routers_router_core_1$out_ports_1_getFlit[13:11] ;
  assign net_routers_routeTable_rt_ifc_banks_banks_rf_2$ADDR_IN = 3'h0 ;
  assign net_routers_routeTable_rt_ifc_banks_banks_rf_2$D_IN = 2'h0 ;
  assign net_routers_routeTable_rt_ifc_banks_banks_rf_2$WE = 1'b0 ;

  // submodule net_routers_router_core
  assign net_routers_router_core$in_ports_0_putRoutedFlit_flit_in =
	     { send_ports_0_putFlit_flit_in,
	       net_routers_routeTable_rt_ifc_banks_banks_rf$D_OUT_1 } ;
  assign net_routers_router_core$in_ports_1_putRoutedFlit_flit_in =
	     { send_ports_4_putFlit_flit_in,
	       net_routers_routeTable_rt_ifc_banks_banks_rf_1$D_OUT_1 } ;
  assign net_routers_router_core$in_ports_2_putRoutedFlit_flit_in =
	     { net_routers_router_core_1$out_ports_1_getFlit,
	       net_routers_routeTable_rt_ifc_banks_banks_rf_2$D_OUT_1 } ;
  assign net_routers_router_core$out_ports_0_putNonFullVCs_nonFullVCs =
	     recv_ports_0_putNonFullVCs_nonFullVCs ;
  assign net_routers_router_core$out_ports_1_putNonFullVCs_nonFullVCs =
	     recv_ports_4_putNonFullVCs_nonFullVCs ;
  assign net_routers_router_core$out_ports_2_putNonFullVCs_nonFullVCs =
	     net_routers_router_core_1$in_ports_1_getNonFullVCs ;
  assign net_routers_router_core$EN_in_ports_0_putRoutedFlit =
	     EN_send_ports_0_putFlit ;
  assign net_routers_router_core$EN_in_ports_0_getNonFullVCs =
	     EN_send_ports_0_getNonFullVCs ;
  assign net_routers_router_core$EN_in_ports_1_putRoutedFlit =
	     EN_send_ports_4_putFlit ;
  assign net_routers_router_core$EN_in_ports_1_getNonFullVCs =
	     EN_send_ports_4_getNonFullVCs ;
  assign net_routers_router_core$EN_in_ports_2_putRoutedFlit = 1'd1 ;
  assign net_routers_router_core$EN_in_ports_2_getNonFullVCs = 1'd1 ;
  assign net_routers_router_core$EN_out_ports_0_getFlit =
	     EN_recv_ports_0_getFlit ;
  assign net_routers_router_core$EN_out_ports_0_putNonFullVCs =
	     EN_recv_ports_0_putNonFullVCs ;
  assign net_routers_router_core$EN_out_ports_1_getFlit =
	     EN_recv_ports_4_getFlit ;
  assign net_routers_router_core$EN_out_ports_1_putNonFullVCs =
	     EN_recv_ports_4_putNonFullVCs ;
  assign net_routers_router_core$EN_out_ports_2_getFlit = 1'd1 ;
  assign net_routers_router_core$EN_out_ports_2_putNonFullVCs = 1'd1 ;

  // submodule net_routers_router_core_1
  assign net_routers_router_core_1$in_ports_0_putRoutedFlit_flit_in =
	     { send_ports_1_putFlit_flit_in,
	       net_routers_routeTable_1_rt_ifc_banks_banks_rf$D_OUT_1 } ;
  assign net_routers_router_core_1$in_ports_1_putRoutedFlit_flit_in =
	     { net_routers_router_core$out_ports_2_getFlit,
	       net_routers_routeTable_1_rt_ifc_banks_banks_rf_1$D_OUT_1 } ;
  assign net_routers_router_core_1$in_ports_2_putRoutedFlit_flit_in =
	     { net_routers_router_core_2$out_ports_1_getFlit,
	       net_routers_routeTable_1_rt_ifc_banks_banks_rf_2$D_OUT_1 } ;
  assign net_routers_router_core_1$out_ports_0_putNonFullVCs_nonFullVCs =
	     recv_ports_1_putNonFullVCs_nonFullVCs ;
  assign net_routers_router_core_1$out_ports_1_putNonFullVCs_nonFullVCs =
	     net_routers_router_core$in_ports_2_getNonFullVCs ;
  assign net_routers_router_core_1$out_ports_2_putNonFullVCs_nonFullVCs =
	     net_routers_router_core_2$in_ports_1_getNonFullVCs ;
  assign net_routers_router_core_1$EN_in_ports_0_putRoutedFlit =
	     EN_send_ports_1_putFlit ;
  assign net_routers_router_core_1$EN_in_ports_0_getNonFullVCs =
	     EN_send_ports_1_getNonFullVCs ;
  assign net_routers_router_core_1$EN_in_ports_1_putRoutedFlit = 1'd1 ;
  assign net_routers_router_core_1$EN_in_ports_1_getNonFullVCs = 1'd1 ;
  assign net_routers_router_core_1$EN_in_ports_2_putRoutedFlit = 1'd1 ;
  assign net_routers_router_core_1$EN_in_ports_2_getNonFullVCs = 1'd1 ;
  assign net_routers_router_core_1$EN_out_ports_0_getFlit =
	     EN_recv_ports_1_getFlit ;
  assign net_routers_router_core_1$EN_out_ports_0_putNonFullVCs =
	     EN_recv_ports_1_putNonFullVCs ;
  assign net_routers_router_core_1$EN_out_ports_1_getFlit = 1'd1 ;
  assign net_routers_router_core_1$EN_out_ports_1_putNonFullVCs = 1'd1 ;
  assign net_routers_router_core_1$EN_out_ports_2_getFlit = 1'd1 ;
  assign net_routers_router_core_1$EN_out_ports_2_putNonFullVCs = 1'd1 ;

  // submodule net_routers_router_core_2
  assign net_routers_router_core_2$in_ports_0_putRoutedFlit_flit_in =
	     { send_ports_2_putFlit_flit_in,
	       net_routers_routeTable_2_rt_ifc_banks_banks_rf$D_OUT_1 } ;
  assign net_routers_router_core_2$in_ports_1_putRoutedFlit_flit_in =
	     { net_routers_router_core_1$out_ports_2_getFlit,
	       net_routers_routeTable_2_rt_ifc_banks_banks_rf_1$D_OUT_1 } ;
  assign net_routers_router_core_2$in_ports_2_putRoutedFlit_flit_in =
	     { send_ports_3_putFlit_flit_in,
	       net_routers_routeTable_2_rt_ifc_banks_banks_rf_2$D_OUT_1 } ;
  assign net_routers_router_core_2$out_ports_0_putNonFullVCs_nonFullVCs =
	     recv_ports_2_putNonFullVCs_nonFullVCs ;
  assign net_routers_router_core_2$out_ports_1_putNonFullVCs_nonFullVCs =
	     net_routers_router_core_1$in_ports_2_getNonFullVCs ;
  assign net_routers_router_core_2$out_ports_2_putNonFullVCs_nonFullVCs =
	     recv_ports_3_putNonFullVCs_nonFullVCs ;
  assign net_routers_router_core_2$EN_in_ports_0_putRoutedFlit =
	     EN_send_ports_2_putFlit ;
  assign net_routers_router_core_2$EN_in_ports_0_getNonFullVCs =
	     EN_send_ports_2_getNonFullVCs ;
  assign net_routers_router_core_2$EN_in_ports_1_putRoutedFlit = 1'd1 ;
  assign net_routers_router_core_2$EN_in_ports_1_getNonFullVCs = 1'd1 ;
  assign net_routers_router_core_2$EN_in_ports_2_putRoutedFlit =
	     EN_send_ports_3_putFlit ;
  assign net_routers_router_core_2$EN_in_ports_2_getNonFullVCs =
	     EN_send_ports_3_getNonFullVCs ;
  assign net_routers_router_core_2$EN_out_ports_0_getFlit =
	     EN_recv_ports_2_getFlit ;
  assign net_routers_router_core_2$EN_out_ports_0_putNonFullVCs =
	     EN_recv_ports_2_putNonFullVCs ;
  assign net_routers_router_core_2$EN_out_ports_1_getFlit = 1'd1 ;
  assign net_routers_router_core_2$EN_out_ports_1_putNonFullVCs = 1'd1 ;
  assign net_routers_router_core_2$EN_out_ports_2_getFlit =
	     EN_recv_ports_3_getFlit ;
  assign net_routers_router_core_2$EN_out_ports_2_putNonFullVCs =
	     EN_recv_ports_3_putNonFullVCs ;

  // handling of system tasks

  // synopsys translate_off
  always@(negedge CLK)
  begin
    #0;
    if (RST_N)
      if (EN_send_ports_0_putFlit && send_ports_0_putFlit_flit_in[15])
	$write("");
    if (RST_N)
      if (EN_send_ports_1_putFlit && send_ports_1_putFlit_flit_in[15])
	$write("");
    if (RST_N)
      if (EN_send_ports_2_putFlit && send_ports_2_putFlit_flit_in[15])
	$write("");
    if (RST_N)
      if (EN_send_ports_3_putFlit && send_ports_3_putFlit_flit_in[15])
	$write("");
    if (RST_N)
      if (EN_send_ports_4_putFlit && send_ports_4_putFlit_flit_in[15])
	$write("");
    if (RST_N)
      if (net_routers_router_core_1$out_ports_1_getFlit[15]) $write("");
    if (RST_N)
      if (net_routers_router_core_1$out_ports_2_getFlit[15]) $write("");
    if (RST_N)
      if (net_routers_router_core$out_ports_2_getFlit[15]) $write("");
    if (RST_N)
      if (net_routers_router_core_2$out_ports_1_getFlit[15]) $write("");
  end
  // synopsys translate_on
endmodule  // mkNetworkSimple

