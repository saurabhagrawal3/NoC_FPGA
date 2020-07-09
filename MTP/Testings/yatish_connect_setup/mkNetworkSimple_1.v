`ifdef BSV_ASSIGNMENT_DELAY 
 `else  
 `define BSV_ASSIGNMENT_DELAY 
 `endif 

 module mkNetworkSimple_1(CLK,
			send_ports_3_putFlit_flit_in,
			EN_send_ports_3_putFlit,
			EN_send_ports_3_getNonFullVCs,
			send_ports_3_getNonFullVCs,

			EN_recv_ports_3_getFlit,
			recv_ports_3_getFlit,
			recv_ports_3_putNonFullVCs_nonFullVCs,
			EN_recv_ports_3_putNonFullVCs, 

			ser_in_3_3,
			in_ports_3_3_getNonFullVCs, 
			ser_in_3_4,
			in_ports_3_4_getNonFullVCs, 
			ser_out_3_2,
			out_ports_3_2_getNonFullVCs, 
			ser_out_3_1,
			out_ports_3_1_getNonFullVCs, 
			recv_ports_info_3_getRecvPortID,
			RST_N);


	input ser_in_3_3, ser_in_3_4, out_ports_3_2_getNonFullVCs, out_ports_3_1_getNonFullVCs, CLK, RST_N;


	output ser_out_3_2;


	output ser_out_3_1;


	output in_ports_3_3_getNonFullVCs;


	output in_ports_3_4_getNonFullVCs;


 // action method send_ports_3_putFlit 

		input  [20 : 0] send_ports_3_putFlit_flit_in;
		input  EN_send_ports_3_putFlit;

 // actionvalue method send_ports_3_getNonFullVCs 

		 input  EN_send_ports_3_getNonFullVCs;
		output [1 : 0] send_ports_3_getNonFullVCs;

 // actionvalue method recv_ports_3_getFlit

		input EN_recv_ports_3_getFlit;
		output [20 : 0] recv_ports_3_getFlit;

 // action method recv_ports_3_putNonFullVCs 

		 input  [1 : 0] recv_ports_3_putNonFullVCs_nonFullVCs;
		input  EN_recv_ports_3_putNonFullVCs;
			output [1 : 0] recv_ports_info_3_getRecvPortID;


			wire [20 : 0] recv_ports_3_getFlit;




			wire [1 : 0] send_ports_3_getNonFullVCs;
// ports of submodule net_routers_routeTable_3_rt_ifc_banks_banks_rf_0
			wire [1 : 0] net_routers_routeTable_3_rt_ifc_banks_banks_rf_0$ADDR_1, 
			net_routers_routeTable_3_rt_ifc_banks_banks_rf_0$ADDR_IN;
			wire [2:0] net_routers_routeTable_3_rt_ifc_banks_banks_rf_0$D_IN, 
			net_routers_routeTable_3_rt_ifc_banks_banks_rf_0$D_OUT_1; 
			wire net_routers_routeTable_3_rt_ifc_banks_banks_rf_0$WE;
// ports of submodule net_routers_routeTable_3_rt_ifc_banks_banks_rf_1
			wire [1 : 0] net_routers_routeTable_3_rt_ifc_banks_banks_rf_1$ADDR_1, 
			net_routers_routeTable_3_rt_ifc_banks_banks_rf_1$ADDR_IN;
			wire [2:0] net_routers_routeTable_3_rt_ifc_banks_banks_rf_1$D_IN, 
			net_routers_routeTable_3_rt_ifc_banks_banks_rf_1$D_OUT_1; 
			wire net_routers_routeTable_3_rt_ifc_banks_banks_rf_1$WE;
// ports of submodule net_routers_routeTable_3_rt_ifc_banks_banks_rf_2
			wire [1 : 0] net_routers_routeTable_3_rt_ifc_banks_banks_rf_2$ADDR_1, 
			net_routers_routeTable_3_rt_ifc_banks_banks_rf_2$ADDR_IN;
			wire [2:0] net_routers_routeTable_3_rt_ifc_banks_banks_rf_2$D_IN, 
			net_routers_routeTable_3_rt_ifc_banks_banks_rf_2$D_OUT_1; 
			wire net_routers_routeTable_3_rt_ifc_banks_banks_rf_2$WE;
// ports of submodule net_routers_routeTable_3_rt_ifc_banks_banks_rf_3
			wire [1 : 0] net_routers_routeTable_3_rt_ifc_banks_banks_rf_3$ADDR_1, 
			net_routers_routeTable_3_rt_ifc_banks_banks_rf_3$ADDR_IN;
			wire [2:0] net_routers_routeTable_3_rt_ifc_banks_banks_rf_3$D_IN, 
			net_routers_routeTable_3_rt_ifc_banks_banks_rf_3$D_OUT_1; 
			wire net_routers_routeTable_3_rt_ifc_banks_banks_rf_3$WE;
// ports of submodule net_routers_routeTable_3_rt_ifc_banks_banks_rf_4
			wire [1 : 0] net_routers_routeTable_3_rt_ifc_banks_banks_rf_4$ADDR_1, 
			net_routers_routeTable_3_rt_ifc_banks_banks_rf_4$ADDR_IN;
			wire [2:0] net_routers_routeTable_3_rt_ifc_banks_banks_rf_4$D_IN, 
			net_routers_routeTable_3_rt_ifc_banks_banks_rf_4$D_OUT_1; 
			wire net_routers_routeTable_3_rt_ifc_banks_banks_rf_4$WE;

		assign in_ports_3_3_getNonFullVCs = net_routers_router_core_3$in_ports_3_getNonFullVCs[0];


		assign in_ports_3_4_getNonFullVCs = net_routers_router_core_3$in_ports_4_getNonFullVCs[0];


// ports of submodule net_routers_router_core_3

	wire [23 : 0] net_routers_router_core_3$in_ports_0_putRoutedFlit_flit_in;
	wire [20 : 0] net_routers_router_core_3$out_ports_0_getFlit;
	wire [1 : 0] net_routers_router_core_3$in_ports_0_getNonFullVCs;
	wire [1 : 0] net_routers_router_core_3$out_ports_0_putNonFullVCs_nonFullVCs;
	wire net_routers_router_core_3$EN_in_ports_0_getNonFullVCs;
	wire net_routers_router_core_3$EN_in_ports_0_putRoutedFlit;
	wire net_routers_router_core_3$EN_out_ports_0_getFlit;
	wire net_routers_router_core_3$EN_out_ports_0_putNonFullVCs;


	wire [23 : 0] net_routers_router_core_3$in_ports_1_putRoutedFlit_flit_in;
	wire [20 : 0] net_routers_router_core_3$out_ports_1_getFlit;
	wire [1 : 0] net_routers_router_core_3$in_ports_1_getNonFullVCs;
	wire [1 : 0] net_routers_router_core_3$out_ports_1_putNonFullVCs_nonFullVCs;
	wire net_routers_router_core_3$EN_in_ports_1_getNonFullVCs;
	wire net_routers_router_core_3$EN_in_ports_1_putRoutedFlit;
	wire net_routers_router_core_3$EN_out_ports_1_getFlit;
	wire net_routers_router_core_3$EN_out_ports_1_putNonFullVCs;


	wire [23 : 0] net_routers_router_core_3$in_ports_2_putRoutedFlit_flit_in;
	wire [20 : 0] net_routers_router_core_3$out_ports_2_getFlit;
	wire [1 : 0] net_routers_router_core_3$in_ports_2_getNonFullVCs;
	wire [1 : 0] net_routers_router_core_3$out_ports_2_putNonFullVCs_nonFullVCs;
	wire net_routers_router_core_3$EN_in_ports_2_getNonFullVCs;
	wire net_routers_router_core_3$EN_in_ports_2_putRoutedFlit;
	wire net_routers_router_core_3$EN_out_ports_2_getFlit;
	wire net_routers_router_core_3$EN_out_ports_2_putNonFullVCs;


	wire [23 : 0] net_routers_router_core_3$in_ports_3_putRoutedFlit_flit_in;
	wire [20 : 0] net_routers_router_core_3$out_ports_3_getFlit;
	wire [1 : 0] net_routers_router_core_3$in_ports_3_getNonFullVCs;
	wire [1 : 0] net_routers_router_core_3$out_ports_3_putNonFullVCs_nonFullVCs;
	wire net_routers_router_core_3$EN_in_ports_3_getNonFullVCs;
	wire net_routers_router_core_3$EN_in_ports_3_putRoutedFlit;
	wire net_routers_router_core_3$EN_out_ports_3_getFlit;
	wire net_routers_router_core_3$EN_out_ports_3_putNonFullVCs;


	wire [23 : 0] net_routers_router_core_3$in_ports_4_putRoutedFlit_flit_in;
	wire [20 : 0] net_routers_router_core_3$out_ports_4_getFlit;
	wire [1 : 0] net_routers_router_core_3$in_ports_4_getNonFullVCs;
	wire [1 : 0] net_routers_router_core_3$out_ports_4_putNonFullVCs_nonFullVCs;
	wire net_routers_router_core_3$EN_in_ports_4_getNonFullVCs;
	wire net_routers_router_core_3$EN_in_ports_4_putRoutedFlit;
	wire net_routers_router_core_3$EN_out_ports_4_getFlit;
	wire net_routers_router_core_3$EN_out_ports_4_putNonFullVCs;


// actionvalue method send_ports_3_getNonFullVCs 
	 assign send_ports_3_getNonFullVCs = net_routers_router_core_3$in_ports_0_getNonFullVCs;

// actionvalue method recv_ports_3_getFlit 
	assign recv_ports_3_getFlit = net_routers_router_core_3$out_ports_0_getFlit ;

 // value method recv_ports_info_3_getRecvPortID 

	 assign recv_ports_info_3_getRecvPortID = 3 ; 
	wire reset, clock, ce_32;
	assign reset = !(RST_N);
	assign clock = CLK;

	wire	[11:0]	baud_freq;	// baud rate setting registers
		wire	[15:0]	baud_limit;

	// `define D_BAUD_FREQ		12'h0C0		//66 MHz clock and 115200 Baud rate
	 // `define D_BAUD_LIMIT		16'h1A1B

	  `define D_BAUD_FREQ		12'h240		//100 MHz clock and 115200 Baud rate
	`define D_BAUD_LIMIT		16'h3AC9
	assign baud_freq = `D_BAUD_FREQ;
	assign baud_limit = `D_BAUD_LIMIT;
		baud_gen baud_gen_1
		(
			.clock(clock), .reset(reset),
			.ce_32(ce_32), .baud_freq(baud_freq), .baud_limit(baud_limit)
		);	



	wire new_rx_data_3_3;
	wire [15:0] rx_data_3_3;


	wire new_rx_data_3_4;
	wire [15:0] rx_data_3_4;


	wire tx_busy_3_2, new_tx_data_3_2;
	wire [15:0] tx_data_3_2;


	wire tx_busy_3_1, new_tx_data_3_1;
	wire [15:0] tx_data_3_1;

	  uart_rx uart_rx_3_3
	  (
		.clock(clock), 
		.reset(reset),
		.ce_32(ce_32), 
		.ser_in(ser_in_3_3),
		.rx_data(rx_data_3_3), 
		.new_rx_data(new_rx_data_3_3)
	  );


	  uart_rx uart_rx_3_4
	  (
		.clock(clock), 
		.reset(reset),
		.ce_32(ce_32), 
		.ser_in(ser_in_3_4),
		.rx_data(rx_data_3_4), 
		.new_rx_data(new_rx_data_3_4)
	  );


	uart_tx tx_3_2
	  (
		.clock(clock), 
		.reset(reset),
		.ce_32(ce_32), 
		.ser_out(ser_out_3_2), 
		.tx_busy(tx_busy_3_2), 
		.tx_data(tx_data_3_2), 
		.new_tx_data(new_tx_data_3_2)
	  );

	uart_tx tx_3_1
	  (
		.clock(clock), 
		.reset(reset),
		.ce_32(ce_32), 
		.ser_out(ser_out_3_1), 
		.tx_busy(tx_busy_3_1), 
		.tx_data(tx_data_3_1), 
		.new_tx_data(new_tx_data_3_1)
	  );

	assign tx_data_3_2 = {net_routers_router_core_3$out_ports_2_getFlit[18:17],net_routers_router_core_3$out_ports_2_getFlit[13:0]};
	assign new_tx_data_3_2 = net_routers_router_core_3$out_ports_2_getFlit[20]; //node-router interfacing port

	assign tx_data_3_1 = {net_routers_router_core_3$out_ports_1_getFlit[18:17],net_routers_router_core_3$out_ports_1_getFlit[13:0]};
	assign new_tx_data_3_1 = net_routers_router_core_3$out_ports_1_getFlit[20]; //node-router interfacing port

	assign net_routers_router_core_3$EN_out_ports_3_putNonFullVCs = 1'd1;
	assign net_routers_router_core_3$EN_out_ports_3_getFlit = 1'd1;

	assign net_routers_router_core_3$EN_out_ports_4_putNonFullVCs = 1'd1;
	assign net_routers_router_core_3$EN_out_ports_4_getFlit = 1'd1;


	  RegFileLoadSyn #( /*file*/ "../../YATISH/fpgaInterfaces/ml605/hex_files/Mesh2x2/mesh_4RTs_2VCs_8BD_16DW_SepIFRoundRobinAlloc_2RTsPerRow_2RTsPerCol_routing_3.hex",
			    /*addr_width*/ 32'd2,
			    /*data_width*/ 32'd3,
			    /*lo*/ 32'd0,
			    /*hi*/ 32'd3,
			    /*binary*/ 32'd0) 
	  net_routers_routeTable_3_rt_ifc_banks_banks_rf_0(.CLK(CLK),
				.RST_N(RST_N),
				.ADDR_1(net_routers_routeTable_3_rt_ifc_banks_banks_rf_0$ADDR_1),
				.ADDR_IN(net_routers_routeTable_3_rt_ifc_banks_banks_rf_0$ADDR_IN),
				.D_IN(net_routers_routeTable_3_rt_ifc_banks_banks_rf_0$D_IN),
				.WE(net_routers_routeTable_3_rt_ifc_banks_banks_rf_0$WE),
				.D_OUT_1(net_routers_routeTable_3_rt_ifc_banks_banks_rf_0$D_OUT_1));


	  RegFileLoadSyn #( /*file*/ "../../YATISH/fpgaInterfaces/ml605/hex_files/Mesh2x2/mesh_4RTs_2VCs_8BD_16DW_SepIFRoundRobinAlloc_2RTsPerRow_2RTsPerCol_routing_3.hex",
			    /*addr_width*/ 32'd2,
			    /*data_width*/ 32'd3,
			    /*lo*/ 32'd0,
			    /*hi*/ 32'd3,
			    /*binary*/ 32'd0) 
	  net_routers_routeTable_3_rt_ifc_banks_banks_rf_1(.CLK(CLK),
				.RST_N(RST_N),
				.ADDR_1(net_routers_routeTable_3_rt_ifc_banks_banks_rf_1$ADDR_1),
				.ADDR_IN(net_routers_routeTable_3_rt_ifc_banks_banks_rf_1$ADDR_IN),
				.D_IN(net_routers_routeTable_3_rt_ifc_banks_banks_rf_1$D_IN),
				.WE(net_routers_routeTable_3_rt_ifc_banks_banks_rf_1$WE),
				.D_OUT_1());


	  RegFileLoadSyn #( /*file*/ "../../YATISH/fpgaInterfaces/ml605/hex_files/Mesh2x2/mesh_4RTs_2VCs_8BD_16DW_SepIFRoundRobinAlloc_2RTsPerRow_2RTsPerCol_routing_3.hex",
			    /*addr_width*/ 32'd2,
			    /*data_width*/ 32'd3,
			    /*lo*/ 32'd0,
			    /*hi*/ 32'd3,
			    /*binary*/ 32'd0) 
	  net_routers_routeTable_3_rt_ifc_banks_banks_rf_2(.CLK(CLK),
				.RST_N(RST_N),
				.ADDR_1(net_routers_routeTable_3_rt_ifc_banks_banks_rf_2$ADDR_1),
				.ADDR_IN(net_routers_routeTable_3_rt_ifc_banks_banks_rf_2$ADDR_IN),
				.D_IN(net_routers_routeTable_3_rt_ifc_banks_banks_rf_2$D_IN),
				.WE(net_routers_routeTable_3_rt_ifc_banks_banks_rf_2$WE),
				.D_OUT_1());


	  RegFileLoadSyn #( /*file*/ "../../YATISH/fpgaInterfaces/ml605/hex_files/Mesh2x2/mesh_4RTs_2VCs_8BD_16DW_SepIFRoundRobinAlloc_2RTsPerRow_2RTsPerCol_routing_3.hex",
			    /*addr_width*/ 32'd2,
			    /*data_width*/ 32'd3,
			    /*lo*/ 32'd0,
			    /*hi*/ 32'd3,
			    /*binary*/ 32'd0) 
	  net_routers_routeTable_3_rt_ifc_banks_banks_rf_3(.CLK(CLK),
				.RST_N(RST_N),
				.ADDR_1(net_routers_routeTable_3_rt_ifc_banks_banks_rf_3$ADDR_1),
				.ADDR_IN(net_routers_routeTable_3_rt_ifc_banks_banks_rf_3$ADDR_IN),
				.D_IN(net_routers_routeTable_3_rt_ifc_banks_banks_rf_3$D_IN),
				.WE(net_routers_routeTable_3_rt_ifc_banks_banks_rf_3$WE),
				.D_OUT_1(net_routers_routeTable_3_rt_ifc_banks_banks_rf_3$D_OUT_1));


	  RegFileLoadSyn #( /*file*/ "../../YATISH/fpgaInterfaces/ml605/hex_files/Mesh2x2/mesh_4RTs_2VCs_8BD_16DW_SepIFRoundRobinAlloc_2RTsPerRow_2RTsPerCol_routing_3.hex",
			    /*addr_width*/ 32'd2,
			    /*data_width*/ 32'd3,
			    /*lo*/ 32'd0,
			    /*hi*/ 32'd3,
			    /*binary*/ 32'd0) 
	  net_routers_routeTable_3_rt_ifc_banks_banks_rf_4(.CLK(CLK),
				.RST_N(RST_N),
				.ADDR_1(net_routers_routeTable_3_rt_ifc_banks_banks_rf_4$ADDR_1),
				.ADDR_IN(net_routers_routeTable_3_rt_ifc_banks_banks_rf_4$ADDR_IN),
				.D_IN(net_routers_routeTable_3_rt_ifc_banks_banks_rf_4$D_IN),
				.WE(net_routers_routeTable_3_rt_ifc_banks_banks_rf_4$WE),
				.D_OUT_1(net_routers_routeTable_3_rt_ifc_banks_banks_rf_4$D_OUT_1));


// submodule net_routers_router_core_3
	  mkIQRouterCoreSimple net_routers_router_core_3(.CLK(CLK),

		.in_ports_0_putRoutedFlit_flit_in(net_routers_router_core_3$in_ports_0_putRoutedFlit_flit_in),
		.out_ports_0_putNonFullVCs_nonFullVCs(net_routers_router_core_3$out_ports_0_putNonFullVCs_nonFullVCs),
		.EN_in_ports_0_putRoutedFlit(net_routers_router_core_3$EN_in_ports_0_putRoutedFlit),
		.EN_in_ports_0_getNonFullVCs(net_routers_router_core_3$EN_in_ports_0_getNonFullVCs),
		.EN_out_ports_0_getFlit(net_routers_router_core_3$EN_out_ports_0_getFlit),
		.EN_out_ports_0_putNonFullVCs(net_routers_router_core_3$EN_out_ports_0_putNonFullVCs),
		.in_ports_0_getNonFullVCs(net_routers_router_core_3$in_ports_0_getNonFullVCs),
		.out_ports_0_getFlit(net_routers_router_core_3$out_ports_0_getFlit),

		.in_ports_1_putRoutedFlit_flit_in(net_routers_router_core_3$in_ports_1_putRoutedFlit_flit_in),
		.out_ports_1_putNonFullVCs_nonFullVCs(net_routers_router_core_3$out_ports_1_putNonFullVCs_nonFullVCs),
		.EN_in_ports_1_putRoutedFlit(net_routers_router_core_3$EN_in_ports_1_putRoutedFlit),
		.EN_in_ports_1_getNonFullVCs(net_routers_router_core_3$EN_in_ports_1_getNonFullVCs),
		.EN_out_ports_1_getFlit(net_routers_router_core_3$EN_out_ports_1_getFlit),
		.EN_out_ports_1_putNonFullVCs(net_routers_router_core_3$EN_out_ports_1_putNonFullVCs),
		.in_ports_1_getNonFullVCs(),
		.out_ports_1_getFlit(net_routers_router_core_3$out_ports_1_getFlit),

		.in_ports_2_putRoutedFlit_flit_in(net_routers_router_core_3$in_ports_2_putRoutedFlit_flit_in),
		.out_ports_2_putNonFullVCs_nonFullVCs(net_routers_router_core_3$out_ports_2_putNonFullVCs_nonFullVCs),
		.EN_in_ports_2_putRoutedFlit(net_routers_router_core_3$EN_in_ports_2_putRoutedFlit),
		.EN_in_ports_2_getNonFullVCs(net_routers_router_core_3$EN_in_ports_2_getNonFullVCs),
		.EN_out_ports_2_getFlit(net_routers_router_core_3$EN_out_ports_2_getFlit),
		.EN_out_ports_2_putNonFullVCs(net_routers_router_core_3$EN_out_ports_2_putNonFullVCs),
		.in_ports_2_getNonFullVCs(),
		.out_ports_2_getFlit(net_routers_router_core_3$out_ports_2_getFlit),

		.in_ports_3_putRoutedFlit_flit_in(net_routers_router_core_3$in_ports_3_putRoutedFlit_flit_in),
		.out_ports_3_putNonFullVCs_nonFullVCs(net_routers_router_core_3$out_ports_3_putNonFullVCs_nonFullVCs),
		.EN_in_ports_3_putRoutedFlit(net_routers_router_core_3$EN_in_ports_3_putRoutedFlit),
		.EN_in_ports_3_getNonFullVCs(net_routers_router_core_3$EN_in_ports_3_getNonFullVCs),
		.EN_out_ports_3_getFlit(net_routers_router_core_3$EN_out_ports_3_getFlit),
		.EN_out_ports_3_putNonFullVCs(net_routers_router_core_3$EN_out_ports_3_putNonFullVCs),
		.in_ports_3_getNonFullVCs(net_routers_router_core_3$in_ports_3_getNonFullVCs),
		.out_ports_3_getFlit(),

		.in_ports_4_putRoutedFlit_flit_in(net_routers_router_core_3$in_ports_4_putRoutedFlit_flit_in),
		.out_ports_4_putNonFullVCs_nonFullVCs(net_routers_router_core_3$out_ports_4_putNonFullVCs_nonFullVCs),
		.EN_in_ports_4_putRoutedFlit(net_routers_router_core_3$EN_in_ports_4_putRoutedFlit),
		.EN_in_ports_4_getNonFullVCs(net_routers_router_core_3$EN_in_ports_4_getNonFullVCs),
		.EN_out_ports_4_getFlit(net_routers_router_core_3$EN_out_ports_4_getFlit),
		.EN_out_ports_4_putNonFullVCs(net_routers_router_core_3$EN_out_ports_4_putNonFullVCs),
		.in_ports_4_getNonFullVCs(net_routers_router_core_3$in_ports_4_getNonFullVCs),
		.out_ports_4_getFlit(),

	.RST_N(RST_N));



// submodule net_routers_routeTable_3_rt_ifc_banks_banks_rf_3
	  assign net_routers_routeTable_3_rt_ifc_banks_banks_rf_0$ADDR_1 = send_ports_3_putFlit_flit_in[18:17] ;
	  assign net_routers_routeTable_3_rt_ifc_banks_banks_rf_0$ADDR_IN = 0 ;
	  assign net_routers_routeTable_3_rt_ifc_banks_banks_rf_0$D_IN = 0 ;
	  assign net_routers_routeTable_3_rt_ifc_banks_banks_rf_0$WE = 1'b0 ;

  // submodule net_routers_routeTable_3_rt_ifc_banks_banks_rf_3
	  assign net_routers_routeTable_3_rt_ifc_banks_banks_rf_3$ADDR_1 = rx_data_3_3[15:14]; 
	  assign net_routers_routeTable_3_rt_ifc_banks_banks_rf_3$ADDR_IN = 0 ;
	  assign net_routers_routeTable_3_rt_ifc_banks_banks_rf_3$D_IN = 0 ;
	  assign net_routers_routeTable_3_rt_ifc_banks_banks_rf_3$WE = 1'b0 ;

  // submodule net_routers_routeTable_3_rt_ifc_banks_banks_rf_4
	  assign net_routers_routeTable_3_rt_ifc_banks_banks_rf_4$ADDR_1 = rx_data_3_4[15:14]; 
	  assign net_routers_routeTable_3_rt_ifc_banks_banks_rf_4$ADDR_IN = 0 ;
	  assign net_routers_routeTable_3_rt_ifc_banks_banks_rf_4$D_IN = 0 ;
	  assign net_routers_routeTable_3_rt_ifc_banks_banks_rf_4$WE = 1'b0 ;

	assign net_routers_routeTable_3_rt_ifc_banks_banks_rf_1$ADDR_1 = 0 ;
	assign net_routers_routeTable_3_rt_ifc_banks_banks_rf_1$ADDR_IN = 0 ;
	assign net_routers_routeTable_3_rt_ifc_banks_banks_rf_1$D_IN = 0 ;
	assign net_routers_routeTable_3_rt_ifc_banks_banks_rf_1$WE = 0 ;
	assign net_routers_router_core_3$in_ports_1_putRoutedFlit_flit_in = 0 ;

	assign net_routers_routeTable_3_rt_ifc_banks_banks_rf_2$ADDR_1 = 0 ;
	assign net_routers_routeTable_3_rt_ifc_banks_banks_rf_2$ADDR_IN = 0 ;
	assign net_routers_routeTable_3_rt_ifc_banks_banks_rf_2$D_IN = 0 ;
	assign net_routers_routeTable_3_rt_ifc_banks_banks_rf_2$WE = 0 ;
	assign net_routers_router_core_3$in_ports_2_putRoutedFlit_flit_in = 0 ;

 // submodule net_routers_router_core_3
		  assign net_routers_router_core_3$in_ports_3_putRoutedFlit_flit_in =
			{ new_rx_data_3_3, 1'b1, rx_data_3_3[15:14],{3{1'b0}}, rx_data_3_3[13:0],net_routers_routeTable_3_rt_ifc_banks_banks_rf_3$D_OUT_1 } ;
			assign net_routers_router_core_3$EN_in_ports_3_putRoutedFlit = 1 ;
			assign net_routers_router_core_3$EN_in_ports_3_getNonFullVCs = 1'b1;

 // submodule net_routers_router_core_3
		  assign net_routers_router_core_3$in_ports_4_putRoutedFlit_flit_in =
			{ new_rx_data_3_4, 1'b1, rx_data_3_4[15:14],{3{1'b0}}, rx_data_3_4[13:0],net_routers_routeTable_3_rt_ifc_banks_banks_rf_4$D_OUT_1 } ;
			assign net_routers_router_core_3$EN_in_ports_4_putRoutedFlit = 1 ;
			assign net_routers_router_core_3$EN_in_ports_4_getNonFullVCs = 1'b1;

 // submodule net_routers_router_core_3
			assign net_routers_router_core_3$out_ports_2_putNonFullVCs_nonFullVCs = 
			{1'b0, !(tx_busy_3_2)} & {1'b0, out_ports_3_2_getNonFullVCs} ;
			assign net_routers_router_core_3$EN_out_ports_2_getFlit = 1'b1 ;
			assign net_routers_router_core_3$EN_out_ports_2_putNonFullVCs = 1'b1 ;

 // submodule net_routers_router_core_3
			assign net_routers_router_core_3$out_ports_1_putNonFullVCs_nonFullVCs = 
			{1'b0, !(tx_busy_3_1)} & {1'b0, out_ports_3_1_getNonFullVCs} ;
			assign net_routers_router_core_3$EN_out_ports_1_getFlit = 1'b1 ;
			assign net_routers_router_core_3$EN_out_ports_1_putNonFullVCs = 1'b1 ;

	assign net_routers_router_core_3$out_ports_3_putNonFullVCs_nonFullVCs = 0 ;
	assign net_routers_router_core_3$out_ports_3_putNonFullVCs_nonFullVCs = 0 ;

	assign net_routers_router_core_3$out_ports_4_putNonFullVCs_nonFullVCs = 0 ;
	assign net_routers_router_core_3$out_ports_4_putNonFullVCs_nonFullVCs = 0 ;

	assign net_routers_router_core_3$EN_in_ports_1_putRoutedFlit = 0 ;
	assign net_routers_router_core_3$EN_in_ports_1_getNonFullVCs = 0 ;

	assign net_routers_router_core_3$EN_in_ports_2_putRoutedFlit = 0 ;
	assign net_routers_router_core_3$EN_in_ports_2_getNonFullVCs = 0 ;

 
		assign net_routers_router_core_3$in_ports_0_putRoutedFlit_flit_in =
			{ send_ports_3_putFlit_flit_in, 
			net_routers_routeTable_3_rt_ifc_banks_banks_rf_0$D_OUT_1 } ;
			assign net_routers_router_core_3$EN_in_ports_0_putRoutedFlit = EN_send_ports_3_putFlit;
			assign net_routers_router_core_3$EN_in_ports_0_getNonFullVCs = EN_send_ports_3_getNonFullVCs ;
			assign net_routers_router_core_3$out_ports_0_putNonFullVCs_nonFullVCs = recv_ports_3_putNonFullVCs_nonFullVCs;
			assign net_routers_router_core_3$EN_out_ports_0_getFlit = EN_recv_ports_3_getFlit ;
			assign net_routers_router_core_3$EN_out_ports_0_putNonFullVCs = EN_recv_ports_3_putNonFullVCs;


  always@(negedge CLK)
	  begin
	    #0;
		if (RST_N)
			if (EN_send_ports_3_putFlit && send_ports_3_putFlit_flit_in[20])
				$write("");
		if (RST_N)
			if (net_routers_router_core_3$out_ports_2_getFlit[20])
				$write("");
		if (RST_N)
			if (net_routers_router_core_3$out_ports_1_getFlit[20])
				$write("");
	end
endmodule  // mkNetworkSimple
