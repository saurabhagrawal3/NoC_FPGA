        
`timescale 1 ns / 1 ps
`define DLY #1
(* core_generation_info = "aurora_8b10b_v5_3,aurora_8b10b_v5_3,{user_interface=Legacy_LL, backchannel_mode=Sidebands, c_aurora_lanes=1, c_column_used=left, c_gt_clock_1=GTPD5, c_gt_clock_2=None, c_gt_loc_1=X, c_gt_loc_10=X, c_gt_loc_11=1, c_gt_loc_12=X, c_gt_loc_13=X, c_gt_loc_14=X, c_gt_loc_15=X, c_gt_loc_16=X, c_gt_loc_17=X, c_gt_loc_18=X, c_gt_loc_19=X, c_gt_loc_2=X, c_gt_loc_20=X, c_gt_loc_21=X, c_gt_loc_22=X, c_gt_loc_23=X, c_gt_loc_24=X, c_gt_loc_25=X, c_gt_loc_26=X, c_gt_loc_27=X, c_gt_loc_28=X, c_gt_loc_29=X, c_gt_loc_3=X, c_gt_loc_30=X, c_gt_loc_31=X, c_gt_loc_32=X, c_gt_loc_33=X, c_gt_loc_34=X, c_gt_loc_35=X, c_gt_loc_36=X, c_gt_loc_37=X, c_gt_loc_38=X, c_gt_loc_39=X, c_gt_loc_4=X, c_gt_loc_40=X, c_gt_loc_41=X, c_gt_loc_42=X, c_gt_loc_43=X, c_gt_loc_44=X, c_gt_loc_45=X, c_gt_loc_46=X, c_gt_loc_47=X, c_gt_loc_48=X, c_gt_loc_5=X, c_gt_loc_6=X, c_gt_loc_7=X, c_gt_loc_8=X, c_gt_loc_9=X, c_lane_width=2, c_line_rate=3.125, c_nfc=false, c_nfc_mode=IMM, c_refclk_frequency=156.25, c_simplex=false, c_simplex_mode=TX, c_stream=false, c_ufc=false, flow_mode=None, interface_mode=Framing, dataflow_config=Duplex}" *)
module aurora_Network_2 #
(
     parameter   USE_CHIPSCOPE        = 0,
     parameter   SIM_GTPRESET_SPEEDUP = 1      
)
(
	// User IO
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
	GTPD5_N,
	// GT I/O
	RXP1,
	RXN1,
	TXP1,
	TXN1,
	 	// GT I/O
	RXP2,
	RXN2,
	TXP2,
	TXN2,
	 
	send_ports_0_putFlit_flit_in,
	EN_send_ports_0_putFlit,

	EN_send_ports_0_getNonFullVCs,
	send_ports_0_getNonFullVCs,

	EN_recv_ports_0_getFlit,
	recv_ports_0_getFlit,

	recv_ports_0_putNonFullVCs_nonFullVCs,
	EN_recv_ports_0_putNonFullVCs,

	recv_ports_info_0_getRecvPortID

);

//***********************************Port Declarations*******************************
// User I/O
input        RESET;
input        INIT_CLK;
input        GT_RESET_IN;
output       HARD_ERR;
output       SOFT_ERR;
output       FRAME_ERR;
output [0:7] ERR_COUNT;
output       LANE_UP;
output       CHANNEL_UP;
// Clocks
input        GTPD5_P;
input        GTPD5_N;


// GT Serial I/O
input        RXP1;
input        RXN1;
output       TXP1;
output       TXN1;

// GT Serial I/O
input        RXP2;
input        RXN2;
output       TXP2;
output       TXN2;

//------------------------------Node 0--------------------------------------//
// action method send_ports_0_putFlit
input  [15 : 0] send_ports_0_putFlit_flit_in;
input  EN_send_ports_0_putFlit;

// actionvalue method send_ports_0_getNonFullVCs
input  EN_send_ports_0_getNonFullVCs;
output [1 : 0] send_ports_0_getNonFullVCs;

// actionvalue method recv_ports_0_getFlit
input  EN_recv_ports_0_getFlit;
output [15 : 0] recv_ports_0_getFlit;

// action method recv_ports_0_putNonFullVCs
input  [1 : 0] recv_ports_0_putNonFullVCs_nonFullVCs;
input  EN_recv_ports_0_putNonFullVCs;

// value method recv_ports_info_0_getRecvPortID
output recv_ports_info_0_getRecvPortID;
//--------------------------------------------------------------------------//


//------------------------------WIRES--------------------------------------//

//------------------------------Node 0--------------------------------------//
// action method send_ports_0_putFlit
wire  [15 : 0] send_ports_0_putFlit_flit_in;
wire  EN_send_ports_0_putFlit;

// actionvalue method send_ports_0_getNonFullVCs
wire  EN_send_ports_0_getNonFullVCs;
wire [1 : 0] send_ports_0_getNonFullVCs;

// actionvalue method recv_ports_0_getFlit
wire  EN_recv_ports_0_getFlit;
wire [15 : 0] recv_ports_0_getFlit;

// action method recv_ports_0_putNonFullVCs
wire  [1 : 0] recv_ports_0_putNonFullVCs_nonFullVCs;
wire  EN_recv_ports_0_putNonFullVCs;

// value method recv_ports_info_0_getRecvPortID
wire recv_ports_info_0_getRecvPortID;
//--------------------------------------------------------------------------//


//------------------------------Node 1--------------------------------------//
// action method send_ports_1_putFlit
wire  [15 : 0] send_ports_1_putFlit_flit_in;
wire  EN_send_ports_1_putFlit;

// actionvalue method send_ports_1_getNonFullVCs
wire  EN_send_ports_1_getNonFullVCs;
wire [1 : 0] send_ports_1_getNonFullVCs;

// actionvalue method recv_ports_1_getFlit
wire  EN_recv_ports_1_getFlit;
wire [15 : 0] recv_ports_1_getFlit;

// action method recv_ports_1_putNonFullVCs
wire  [1 : 0] recv_ports_1_putNonFullVCs_nonFullVCs;
wire  EN_recv_ports_1_putNonFullVCs;

// value method recv_ports_info_1_getRecvPortID
wire recv_ports_info_1_getRecvPortID;
//--------------------------------------------------------------------------//


//------------------------------Node 2--------------------------------------//
// action method send_ports_2_putFlit
wire  [15 : 0] send_ports_2_putFlit_flit_in;
wire  EN_send_ports_2_putFlit;

// actionvalue method send_ports_2_getNonFullVCs
wire  EN_send_ports_2_getNonFullVCs;
wire [1 : 0] send_ports_2_getNonFullVCs;

// actionvalue method recv_ports_2_getFlit
wire  EN_recv_ports_2_getFlit;
wire [15 : 0] recv_ports_2_getFlit;

// action method recv_ports_2_putNonFullVCs
wire  [1 : 0] recv_ports_2_putNonFullVCs_nonFullVCs;
wire  EN_recv_ports_2_putNonFullVCs;

// value method recv_ports_info_2_getRecvPortID
wire recv_ports_info_2_getRecvPortID;
//--------------------------------------------------------------------------//


//**************************External Register Declarations****************************
reg         HARD_ERR;
reg         SOFT_ERR;
reg         FRAME_ERR;
reg  [0:7]  ERR_COUNT;    
reg         LANE_UP;
reg         CHANNEL_UP;
//********************************Wire Declarations**********************************
// LocalLink TX Interface
wire [0:15] tx_d_i_1;
wire        tx_rem_i_1;
wire        tx_src_rdy_n_i_1;
wire        tx_sof_n_i_1;
wire        tx_eof_n_i_1;
wire        tx_dst_rdy_n_i_1;
// LocalLink RX Interface
wire [0:15] rx_d_i_1;
wire        rx_rem_i_1;
wire        rx_src_rdy_n_i_1;
wire        rx_sof_n_i_1;
wire        rx_eof_n_i_1;

wire [0:15] tx_d_i_2;
wire        tx_rem_i_2;
wire        tx_src_rdy_n_i_2;
wire        tx_sof_n_i_2;
wire        tx_eof_n_i_2;
wire        tx_dst_rdy_n_i_2;
// LocalLink RX Interface
wire [0:15] rx_d_i_2;
wire        rx_rem_i_2;
wire        rx_src_rdy_n_i_2;
wire        rx_sof_n_i_2;
wire        rx_eof_n_i_2;


// V5 Reference Clock Interface
wire        GTPD5_left_i;

// Error Detection Interface
wire        hard_err_i_1;
wire        soft_err_i_1;
wire        frame_err_i_1;

// Error Detection Interface
wire        hard_err_i_2;
wire        soft_err_i_2;
wire        frame_err_i_2;

// Status
wire        channel_up_i_1;
wire        lane_up_i_1;

// Status
wire        channel_up_i_2;
wire        lane_up_i_2;

// Clock Compensation Control Interface
wire        warn_cc_i;
wire        do_cc_i;

// System Interface
wire        pll_not_locked_i;
wire        user_clk_i;
wire        sync_clk_i;
wire        reset_i;
wire        power_down_i;
wire [2:0]  loopback_i;


wire        tx_lock_i_1;
wire        tx_lock_out_i;


wire        tx_lock_i_2;
wire        tx_lock_out_i_2;

wire        tx_out_clk_i;
wire        tx_out_clk_i_1;
wire        tx_out_clk_i_2;
wire        buf_tx_out_clk_i;
wire        gt_reset_i; 
wire        system_reset_i;

//Frame check signals
wire [0:7]  err_count_i;

wire        lane_up_i_i;
wire        tx_lock_i;
wire        lane_up_reduce_i;
wire        rst_cc_module_i;
wire [0:15] tied_to_gnd_vec_i;
 

//*********************************Main Body of Code**********************************
//____________________________Tie off unused signals________________________________//

// System Interface
assign lane_up_i                    		=   lane_up_i_1 & lane_up_i_2;
assign lane_up_reduce_i     	    		=   &lane_up_i;
assign rst_cc_module_i      	   		=   !lane_up_reduce_i;
assign tied_to_gnd_vec_i   	    		=   16'd0;
assign power_down_i        	    		=   1'b0;
assign loopback_i          	    		=   3'b000;
assign reset_i 	                    		=   system_reset_i;

assign send_ports_1_putFlit_flit_in[15:0] 	=  rx_d_i_1[0:15];//({!rx_src_rdy_n_i_1, !rx_eof_n_i_1, 1'b1, 1'b0, rx_d_i_1});
//assign send_ports_1_putFlit_flit_in[15] 	=  rx_src_rdy_n_i_1;//({!rx_src_rdy_n_i_1, !rx_eof_n_i_1, 1'b1, 1'b0, rx_d_i_1});
//assign send_ports_1_putFlit_flit_in[14] 	=  !rx_eof_n_i_1;//({!rx_src_rdy_n_i_1, !rx_eof_n_i_1, 1'b1, 1'b0, rx_d_i_1});
//assign send_ports_1_putFlit_flit_in[13:11] =  rx_d_i_1[2:4];//({!rx_src_rdy_n_i_1, !rx_eof_n_i_1, 1'b1, 1'b0, rx_d_i_1});
//assign send_ports_1_putFlit_flit_in[10]	   =  !rx_rem_i_1;//({!rx_src_rdy_n_i_1, !rx_eof_n_i_1, 1'b1, 1'b0, rx_d_i_1});
assign EN_send_ports_1_putFlit      		=  !rx_sof_n_i_1 || !recv_ports_1_getFlit[15];
assign EN_recv_ports_1_getFlit      		=  !tx_dst_rdy_n_i_1;
assign tx_d_i_1			    					=   recv_ports_1_getFlit;
assign tx_rem_i_1									=  !recv_ports_1_getFlit[15]; 
assign tx_src_rdy_n_i_1							=  !recv_ports_1_getFlit[15];
assign tx_sof_n_i_1								=  !recv_ports_1_getFlit[15];
assign tx_eof_n_i_1								=   recv_ports_1_getFlit[14];

assign EN_send_ports_1_getNonFullVCs				= 1'b1;
assign recv_ports_1_putNonFullVCs_nonFullVCs 	= 1'b1;
assign EN_recv_ports_1_putNonFullVCs				= 1'b1;
//assign send_ports_1_getNonFullVCs					= 2'b1;


assign send_ports_2_putFlit_flit_in[15:0]		=  rx_d_i_2[0:15];//({!rx_src_rdy_n_i_2, !rx_eof_n_i_2, 1'b1, 1'b0, rx_d_i_2});
//assign send_ports_2_putFlit_flit_in[15]		=  rx_src_rdy_n_i_2;//({!rx_src_rdy_n_i_2, !rx_eof_n_i_2, 1'b1, 1'b0, rx_d_i_2});
//assign send_ports_2_putFlit_flit_in[14]		=  !rx_eof_n_i_2;//({!rx_src_rdy_n_i_2, !rx_eof_n_i_2, 1'b1, 1'b0, rx_d_i_2});
//assign send_ports_2_putFlit_flit_in[13:11] =  rx_d_i_2[2:4];//({!rx_src_rdy_n_i_2, !rx_eof_n_i_2, 1'b1, 1'b0, rx_d_i_2});
//assign send_ports_2_putFlit_flit_in[10]	=  !rx_rem_i_2;//({!rx_src_rdy_n_i_2, !rx_eof_n_i_2, 1'b1, 1'b0, rx_d_i_2});
assign EN_send_ports_2_putFlit      		=  !rx_sof_n_i_2 ||  !recv_ports_2_getFlit[15];
assign EN_recv_ports_2_getFlit      		=  !tx_dst_rdy_n_i_2;
assign tx_d_i_2						    		=   recv_ports_2_getFlit;
assign tx_rem_i_2 								=  !recv_ports_2_getFlit[15];
assign tx_src_rdy_n_i_2 						=  !recv_ports_2_getFlit[15];
assign tx_sof_n_i_2								=  !recv_ports_2_getFlit[15];
assign tx_eof_n_i_2								=   recv_ports_2_getFlit[14];

assign EN_send_ports_2_getNonFullVCs				= 1'b1;
assign recv_ports_2_putNonFullVCs_nonFullVCs 	= 1'b1;
assign EN_recv_ports_2_putNonFullVCs				= 1'b1;
//assign send_ports_2_getNonFullVCs					= 2'b1;

assign tx_out_clk_i 										= tx_out_clk_i_1 & tx_out_clk_i_2;
assign tx_lock_i 											= tx_lock_i_1 & tx_lock_i_2;


always @(posedge user_clk_i)
begin
	HARD_ERR      <=  hard_err_i_1 & hard_err_i_2;
	SOFT_ERR      <=  soft_err_i_1 & soft_err_i_2;
	FRAME_ERR     <=  frame_err_i_1 & frame_err_i_2;
	ERR_COUNT     <=  err_count_i;
	LANE_UP       <=  lane_up_i;
	CHANNEL_UP    <=  channel_up_i_1 & channel_up_i_2;
end

//___________________________Module Instantiations_________________________________
//_______________________________Clock Buffers_________________________________
 IBUFDS IBUFDS
 (
	 .I(GTPD5_P),
	 .IB(GTPD5_N),
	 .O(GTPD5_left_i)
 );


BUFG BUFG
(
	.I(tx_out_clk_i),
	.O(buf_tx_out_clk_i)
);

// Instantiate a clock module for clock division.
aurora_8b10b_v5_3_CLOCK_MODULE clock_module_i
(
	.GT_CLK(buf_tx_out_clk_i),
	.GT_CLK_LOCKED(tx_lock_out_i),
	.USER_CLK(user_clk_i),
	.SYNC_CLK(sync_clk_i),
	.PLL_NOT_LOCKED(pll_not_locked_i)
);


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
//----------------------------------------------node 3--------------------------------------------//
aurora_8b10b_v5_3 #
(
	.SIM_GTPRESET_SPEEDUP(SIM_GTPRESET_SPEEDUP)
)
aurora_module_i_1
(
	// LocalLink TX Interface
	.TX_D(tx_d_i_1),
	.TX_REM(tx_rem_i_1),
	.TX_SRC_RDY_N(tx_src_rdy_n_i_1),
	.TX_SOF_N(tx_sof_n_i_1),
	.TX_EOF_N(tx_eof_n_i_1),
	.TX_DST_RDY_N(tx_dst_rdy_n_i_1),
	// LocalLink RX Interface
	.RX_D(rx_d_i_1),
	.RX_REM(rx_rem_i_1),
	.RX_SRC_RDY_N(rx_src_rdy_n_i_1),
	.RX_SOF_N(rx_sof_n_i_1),
	.RX_EOF_N(rx_eof_n_i_1),
	// V5 Serial I/O
	.RXP(RXP1),
	.RXN(RXN1),
	.TXP(TXP1),
	.TXN(TXN1),
	// V5 Reference Clock Interface
	.GTPD5(GTPD5_left_i),
	// Error Detection Interface
	.HARD_ERR(hard_err_i_1),
	.SOFT_ERR(soft_err_i_1),
	.FRAME_ERR(frame_err_i_1),
	// Status
	.CHANNEL_UP(channel_up_i_1),
	.LANE_UP(lane_up_i_1),
	// Clock Compensation Control Interface
	.WARN_CC(warn_cc_i),
	.DO_CC(do_cc_i),
	// System Interface
	.USER_CLK(user_clk_i),
	.SYNC_CLK(sync_clk_i),
	.RESET(reset_i),
	.POWER_DOWN(power_down_i),
	.LOOPBACK(loopback_i),
	.GT_RESET(gt_reset_i),
	.TX_LOCK(tx_lock_i_1),
	.TX_OUT_CLK(tx_out_clk_i_1)
);
//------------------------------------------------------------------------------------------------//
//----------------------------------------------node 4--------------------------------------------//
aurora_8b10b_v5_3 #
(
	.SIM_GTPRESET_SPEEDUP(SIM_GTPRESET_SPEEDUP)
)
aurora_module_i_2
(
	// LocalLink TX Interface
	.TX_D(tx_d_i_2),
	.TX_REM(tx_rem_i_2),
	.TX_SRC_RDY_N(tx_src_rdy_n_i_2),
	.TX_SOF_N(tx_sof_n_i_2),
	.TX_EOF_N(tx_eof_n_i_2),
	.TX_DST_RDY_N(tx_dst_rdy_n_i_2),
	// LocalLink RX Interface
	.RX_D(rx_d_i_2),
	.RX_REM(rx_rem_i_2),
	.RX_SRC_RDY_N(rx_src_rdy_n_i_2),
	.RX_SOF_N(rx_sof_n_i_2),
	.RX_EOF_N(rx_eof_n_i_2),
	// V5 Serial I/O
	.RXP(RXP2),
	.RXN(RXN2),
	.TXP(TXP2),
	.TXN(TXN2),
	// V5 Reference Clock Interface
	.GTPD5(GTPD5_left_i),
	// Error Detection Interface
	.HARD_ERR(hard_err_i_2),
	.SOFT_ERR(soft_err_i_2),
	.FRAME_ERR(frame_err_i_2),
	// Status
	.CHANNEL_UP(channel_up_i_2),
	.LANE_UP(lane_up_i_2),
	// Clock Compensation Control Interface
	.WARN_CC(warn_cc_i),
	.DO_CC(do_cc_i),
	// System Interface
	.USER_CLK(user_clk_i),
	.SYNC_CLK(sync_clk_i),
	.RESET(reset_i),
	.POWER_DOWN(power_down_i),
	.LOOPBACK(loopback_i),
	.GT_RESET(gt_reset_i),
	.TX_LOCK(tx_lock_i_2),
	.TX_OUT_CLK(tx_out_clk_i_2)
);
//------------------------------------------------------------------------------------------------//

mkNetworkSimple_2 dut2
(
	 .CLK(user_clk_i)
	,.RST_N(!reset_i)

	,.send_ports_0_putFlit_flit_in(send_ports_0_putFlit_flit_in)
	,.EN_send_ports_0_putFlit(EN_send_ports_0_putFlit)

	,.EN_send_ports_0_getNonFullVCs(EN_send_ports_0_getNonFullVCs) // drain credits
	,.send_ports_0_getNonFullVCs(send_ports_0_getNonFullVCs)

	//----------------------------------Aurora Links-----------------------------------//
	,.send_ports_1_putFlit_flit_in(send_ports_1_putFlit_flit_in)
	,.EN_send_ports_1_putFlit(EN_send_ports_1_putFlit)

	,.EN_send_ports_1_getNonFullVCs(EN_send_ports_1_getNonFullVCs) // drain credits
	,.send_ports_1_getNonFullVCs(send_ports_1_getNonFullVCs)

	,.send_ports_2_putFlit_flit_in(send_ports_2_putFlit_flit_in)
	,.EN_send_ports_2_putFlit(EN_send_ports_2_putFlit)

	,.EN_send_ports_2_getNonFullVCs(EN_send_ports_2_getNonFullVCs) // drain credits
	,.send_ports_2_getNonFullVCs(send_ports_2_getNonFullVCs)

	//----------------------------------Aurora Links-----------------------------------//
	//---------------------------------------------------------------------------------//

	,.EN_recv_ports_0_getFlit(EN_recv_ports_0_getFlit) // drain flits
	,.recv_ports_0_getFlit(recv_ports_0_getFlit)

	,.recv_ports_0_putNonFullVCs_nonFullVCs(recv_ports_0_putNonFullVCs_nonFullVCs)
	,.EN_recv_ports_0_putNonFullVCs(EN_recv_ports_0_putNonFullVCs)

	//----------------------------------Aurora Links-----------------------------------//
	//---------------------------------------------------------------------------------//
	,.EN_recv_ports_1_getFlit(EN_recv_ports_1_getFlit) // drain flits
	,.recv_ports_1_getFlit(recv_ports_1_getFlit)

	,.recv_ports_1_putNonFullVCs_nonFullVCs(recv_ports_1_putNonFullVCs_nonFullVCs)
	,.EN_recv_ports_1_putNonFullVCs(EN_recv_ports_1_putNonFullVCs)

	,.EN_recv_ports_2_getFlit(EN_recv_ports_2_getFlit) // drain flits
	,.recv_ports_2_getFlit(recv_ports_2_getFlit)

	,.recv_ports_2_putNonFullVCs_nonFullVCs(recv_ports_2_putNonFullVCs_nonFullVCs)
	,.EN_recv_ports_2_putNonFullVCs(EN_recv_ports_2_putNonFullVCs)

	//----------------------------------Aurora Links-----------------------------------//
	//---------------------------------------------------------------------------------//
);
endmodule
