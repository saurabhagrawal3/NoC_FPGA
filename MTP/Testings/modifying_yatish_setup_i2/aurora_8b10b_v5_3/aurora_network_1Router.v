///////////////////////////////////////////////////////////////////////////////
// (c) Copyright 2008 Xilinx, Inc. All rights reserved.
//
// This file contains confidential and proprietary information
// of Xilinx, Inc. and is protected under U.S. and
// international copyright and other intellectual property
// laws.
//
// DISCLAIMER
// This disclaimer is not a license and does not grant any
// rights to the materials distributed herewith. Except as
// otherwise provided in a valid license issued to you by
// Xilinx, and to the maximum extent permitted by applicable
// law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
// WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
// AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
// BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
// INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
// (2) Xilinx shall not be liable (whether in contract or tort,
// including negligence, or under any other theory of
// liability) for any loss or damage of any kind or nature
// related to, arising under or in connection with these
// materials, including for any direct, or any indirect,
// special, incidental, or consequential loss or damage
// (including loss of data, profits, goodwill, or any type of
// loss or damage suffered as a result of any action brought
// by a third party) even if such damage or loss was
// reasonably foreseeable or Xilinx had been advised of the
// possibility of the same.
//
// CRITICAL APPLICATIONS
// Xilinx products are not designed or intended to be fail-
// safe, or for use in any application requiring fail-safe
// performance, such as life-support or safety devices or
// systems, Class III medical devices, nuclear facilities,
// applications related to the deployment of airbags, or any
// other applications that could lead to death, personal
// injury, or severe property or environmental damage
// (individually and collectively, "Critical
// Applications"). Customer assumes the sole risk and
// liability of any use of Xilinx products in Critical
// Applications, subject only to applicable laws and
// regulations governing limitations on product liability.
//
// THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
// PART OF THIS FILE AT ALL TIMES.
// 
// 
///////////////////////////////////////////////////////////////////////////////
//
//  AURORA_EXAMPLE
//
//  Aurora Generator
//
//
//  Description: Sample Instantiation of a 1 2-byte lane module.
//               Only tests initialization in hardware.
//
//         
`timescale 1 ns / 1 ps
(* core_generation_info = "aurora_8b10b_v5_3,aurora_8b10b_v5_3,{user_interface=Legacy_LL, backchannel_mode=Sidebands, c_aurora_lanes=1, c_column_used=left, c_gt_clock_1=GTPD5, c_gt_clock_2=None, c_gt_loc_1=X, c_gt_loc_10=X, c_gt_loc_11=1, c_gt_loc_12=X, c_gt_loc_13=X, c_gt_loc_14=X, c_gt_loc_15=X, c_gt_loc_16=X, c_gt_loc_17=X, c_gt_loc_18=X, c_gt_loc_19=X, c_gt_loc_2=X, c_gt_loc_20=X, c_gt_loc_21=X, c_gt_loc_22=X, c_gt_loc_23=X, c_gt_loc_24=X, c_gt_loc_25=X, c_gt_loc_26=X, c_gt_loc_27=X, c_gt_loc_28=X, c_gt_loc_29=X, c_gt_loc_3=X, c_gt_loc_30=X, c_gt_loc_31=X, c_gt_loc_32=X, c_gt_loc_33=X, c_gt_loc_34=X, c_gt_loc_35=X, c_gt_loc_36=X, c_gt_loc_37=X, c_gt_loc_38=X, c_gt_loc_39=X, c_gt_loc_4=X, c_gt_loc_40=X, c_gt_loc_41=X, c_gt_loc_42=X, c_gt_loc_43=X, c_gt_loc_44=X, c_gt_loc_45=X, c_gt_loc_46=X, c_gt_loc_47=X, c_gt_loc_48=X, c_gt_loc_5=X, c_gt_loc_6=X, c_gt_loc_7=X, c_gt_loc_8=X, c_gt_loc_9=X, c_lane_width=2, c_line_rate=3.125, c_nfc=false, c_nfc_mode=IMM, c_refclk_frequency=156.25, c_simplex=false, c_simplex_mode=TX, c_stream=false, c_ufc=false, flow_mode=None, interface_mode=Framing, dataflow_config=Duplex}" *)
module aurora_network_1Router #
(
	parameter   USE_CHIPSCOPE        = 0,
	parameter   SIM_GTPRESET_SPEEDUP = 1      
)
(
	send_ports_3_putFlit_flit_in,
	EN_send_ports_3_putFlit,
	EN_send_ports_3_getNonFullVCs,
	send_ports_3_getNonFullVCs,

	EN_recv_ports_3_getFlit,
	recv_ports_3_getFlit,
	recv_ports_3_putNonFullVCs_nonFullVCs,
	EN_recv_ports_3_putNonFullVCs, 

	in_ports_3_3_getNonFullVCs, 
	in_ports_3_4_getNonFullVCs, 
	out_ports_3_2_getNonFullVCs, 
	out_ports_3_1_getNonFullVCs, 

	recv_ports_info_3_getRecvPortID,
	// User IO
	RESET,
	INIT_CLK,
	GTPD5_P,
	GTPD5_N,
	CHANNEL_UP,
	// GT I/O
	RXP_router_3_port_4,
	RXN_router_3_port_4,
	TXP_router_3_port_2,
	TXN_router_3_port_2,

	RXP_router_3_port_3,
	RXN_router_3_port_3,
	TXP_router_3_port_1,
	TXN_router_3_port_1
);


	//***********************************Port Declarations*******************************
	// User I/O
	input              RESET;
	input              INIT_CLK;
	// Clocks
	input              GTPD5_P;
	input              GTPD5_N;
	output             CHANNEL_UP;
	// GT Serial I/O
	input              RXP_router_3_port_4;
	input              RXN_router_3_port_4;
	output             TXP_router_3_port_2;
	output             TXN_router_3_port_2;
	// GT Serial I/O
	input              RXP_router_3_port_3;
	input              RXN_router_3_port_3;
	output             TXP_router_3_port_1;
	output             TXN_router_3_port_1;
	input out_ports_3_2_getNonFullVCs;
	input out_ports_3_1_getNonFullVCs;
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
	wire out_ports_3_2_getNonFullVCs;
	wire out_ports_3_1_getNonFullVCs;
	wire in_ports_3_3_getNonFullVCs;
	wire in_ports_3_4_getNonFullVCs;
	// action method send_ports_3_putFlit 
	wire  [20 : 0] send_ports_3_putFlit_flit_in;
	wire  EN_send_ports_3_putFlit;
	// actionvalue method send_ports_3_getNonFullVCs 
	wire  EN_send_ports_3_getNonFullVCs;
	wire [1 : 0] send_ports_3_getNonFullVCs;
	// actionvalue method recv_ports_3_getFlit
	wire EN_recv_ports_3_getFlit;
	wire [20 : 0] recv_ports_3_getFlit;
	// action method recv_ports_3_putNonFullVCs 
	wire  [1 : 0] recv_ports_3_putNonFullVCs_nonFullVCs;
	wire  EN_recv_ports_3_putNonFullVCs;
	wire [1 : 0] recv_ports_info_3_getRecvPortID;
	//**************************External Register Declarations****************************
	reg                HARD_ERR;
	reg                SOFT_ERR;
	reg                FRAME_ERR;
	reg                LANE_UP;
	reg                CHANNEL_UP;
	//********************************Wire Declarations**********************************
	// LocalLink TX Interface
	wire    [0:15]     tx_d_i_1;
	wire               tx_rem_i_1;
	wire               tx_src_rdy_n_i_1;
	wire               tx_sof_n_i_1;
	wire               tx_eof_n_i_1;
	wire               tx_dst_rdy_n_i_1;
	// LocalLink RX Interface
	wire    [0:15]     rx_d_i_1;
	wire               rx_rem_i_1;
	wire               rx_src_rdy_n_i_1;
	wire               rx_sof_n_i_1;
	wire               rx_eof_n_i_1;
	wire    [0:15]     tx_d_i_2;
	wire               tx_rem_i_2;
	wire               tx_src_rdy_n_i_2;
	wire               tx_sof_n_i_2;
	wire               tx_eof_n_i_2;
	wire               tx_dst_rdy_n_i_2;
	// LocalLink RX Interface
	wire    [0:15]     rx_d_i_2;
	wire               rx_rem_i_2;
	wire               rx_src_rdy_n_i_2;
	wire               rx_sof_n_i_2;
	wire               rx_eof_n_i_2;
	// V5 Reference Clock Interface
	wire               GTPD5_left_i;
	// Error Detection Interface
	wire               hard_err_i_1;
	wire               soft_err_i_1;
	wire               frame_err_i_1;
	// Status
	wire               channel_up_i_1;
	wire               lane_up_i_1;	
// Error Detection Interface
	wire               hard_err_i_2;
	wire               soft_err_i_2;
	wire               frame_err_i_2;
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
	wire               tx_lock_i_1;
	wire               tx_lock_out_i_1;
	wire               tx_lock_i_2;
	wire               tx_lock_out_i_2;
	wire               tx_out_clk_i;
	wire               tx_out_clk_i_1;
	wire               tx_out_clk_i_2;
	wire               buf_tx_out_clk_i;
	wire               gt_reset_i; 
	wire               system_reset_i;
	wire               lane_up_i_i;
	wire               lane_up_reduce_i;
	wire               rst_cc_module_i;
	wire    [0:15]     tied_to_gnd_vec_i;
	//*********************************Main Body of Code**********************************
	assign lane_up_reduce_i  = &lane_up_i_1;
	assign rst_cc_module_i   = !lane_up_reduce_i;
	// System Interface
	assign  tied_to_gnd_vec_i   =   16'd0;
	assign  power_down_i        =   1'b0;
	assign  loopback_i          =   3'b000;
	assign lane_up_i_i = &lane_up_i_2;
	assign reset_i =   system_reset_i;
	assign tx_out_clk_i = tx_out_clk_i_1 & tx_out_clk_i_2;
	assign tx_lock_i = tx_lock_i_1 & tx_lock_i_2;
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
	.RESET(!RESET),
	.USER_CLK(user_clk_i),
	.INIT_CLK(INIT_CLK),
	.GT_RESET_IN(!RESET),
	.TX_LOCK_IN(tx_lock_i),
	.PLL_NOT_LOCKED(pll_not_locked_i),
	.TX_LOCK_OUT(tx_lock_out_i),
	.SYSTEM_RESET(system_reset_i),
	.GT_RESET_OUT(gt_reset_i)
);

//____________________________Register User I/O___________________________________
// Register User Outputs from core.
always @(posedge user_clk_i)
begin
	HARD_ERR      <=  hard_err_i_1 & hard_err_i_2;
	SOFT_ERR      <=  soft_err_i_1 & soft_err_i_2;
	FRAME_ERR     <=  frame_err_i_1 & frame_err_i_2;
	LANE_UP       <=  lane_up_i_1 & lane_up_i_2;
	CHANNEL_UP    <=  channel_up_i_1 & channel_up_i_2;
end
//assign CHANNEL_UP = channel_up_i;
//____________________________Tieoff unused signals_______________________________
//____________________________Module Instantiations_________________________________
aurora_8b10b_v5_3 #
(
	.SIM_GTPRESET_SPEEDUP(SIM_GTPRESET_SPEEDUP)
)
aurora_module_i_router_1
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
	.RXP(RXP_router_1_port_2),
	.RXN(RXN_router_1_port_2),
	.TXP(TXP_router_1_port_4),
	.TXN(TXN_router_1_port_4),
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

aurora_8b10b_v5_3 #
(
	.SIM_GTPRESET_SPEEDUP(SIM_GTPRESET_SPEEDUP)
)
aurora_module_i_router_2
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
	.RXP(RXP_router_2_port_3),
	.RXN(RXN_router_2_port_3),
	.TXP(TXP_router_2_port_1),
	.TXN(TXN_router_2_port_1),
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

//Connect a frame generator to the TX User interface
mkNetworkSimple_1 network_router_1
(
	.CLK(user_clk_i),
	.RESET(RESET),

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
	// User Interface TX AND RX FROM ROUTER 1
	.TX_D_ROUTER_3_PORT_2(tx_d_i_1),  
	.TX_REM_ROUTER_3_PORT_2(tx_rem_i_1),     
	.TX_SOF_N_ROUTER_3_PORT_2(tx_sof_n_i_1),       
	.TX_EOF_N_ROUTER_3_PORT_2(tx_eof_n_i_1),
	.TX_SRC_RDY_N_ROUTER_3_PORT_2(tx_src_rdy_n_i_1),
	.TX_DST_RDY_N_ROUTER_3_PORT_2(tx_dst_rdy_n_i_1),

	.RX_D_ROUTER_3_PORT_4(rx_d_i_1),  
	.RX_REM_ROUTER_3_PORT_4(rx_rem_i_1),     
	.RX_SOF_N_ROUTER_3_PORT_4(rx_sof_n_i_1),       
	.RX_EOF_N_ROUTER_3_PORT_4(rx_eof_n_i_1),
	.RX_SRC_RDY_N_ROUTER_3_PORT_4(rx_src_rdy_n_i_1),
	// User Interface TX AND RX FROM ROUTER 1
	.TX_D_ROUTER_3_PORT_1(tx_d_i_2),  
	.TX_REM_ROUTER_3_PORT_1(tx_rem_i_2),     
	.TX_SOF_N_ROUTER_3_PORT_1(tx_sof_n_i_2),       
	.TX_EOF_N_ROUTER_3_PORT_1(tx_eof_n_i_2),
	.TX_SRC_RDY_N_ROUTER_3_PORT_1(tx_src_rdy_n_i_2),
	.TX_DST_RDY_N_ROUTER_3_PORT_1(tx_dst_rdy_n_i_2),

	.RX_D_ROUTER_3_PORT_3(rx_d_i_2),  
	.RX_REM_ROUTER_3_PORT_3(rx_rem_i_2),     
	.RX_SOF_N_ROUTER_3_PORT_3(rx_sof_n_i_2),       
	.RX_EOF_N_ROUTER_3_PORT_3(rx_eof_n_i_2),
	.RX_SRC_RDY_N_ROUTER_3_PORT_3(rx_src_rdy_n_i_2)

);    


endmodule

