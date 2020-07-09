`ifdef BSV_ASSIGNMENT_DELAY
`else
`define BSV_ASSIGNMENT_DELAY
`endif
module mkNetworkSimple_top(CLK,
		       RST_N,
		       send_ports_0_putFlit_flit_in,
		       EN_send_ports_0_putFlit,
		       EN_send_ports_0_getNonFullVCs,
		       send_ports_0_getNonFullVCs,
		       send_ports_1_putFlit_flit_in,
		       EN_send_ports_1_putFlit,
		       EN_send_ports_1_getNonFullVCs,
		       send_ports_1_getNonFullVCs,
		       |
		       |
		       |
		       |
		       send_ports_15_putFlit_flit_in,
		       EN_send_ports_15_putFlit,
		       EN_send_ports_15_getNonFullVCs,
		       send_ports_15_getNonFullVCs,
		       EN_recv_ports_0_getFlit,
		       recv_ports_0_getFlit,
		       recv_ports_0_putNonFullVCs_nonFullVCs,
		       EN_recv_ports_0_putNonFullVCs,
		       |
		       |
		       |
		       |
		       EN_recv_ports_15_getFlit,
		       recv_ports_15_getFlit,
		       recv_ports_15_putNonFullVCs_nonFullVCs,
		       EN_recv_ports_15_putNonFullVCs,
		       recv_ports_info_0_getRecvPortID,
		       |
		       |
		       |
		       |
		       recv_ports_info_15_getRecvPortID);
		       
assign ser_in_11_2 = ser_out_15_2;
assign ser_in_14_1 = ser_out_15_1;
assign ser_in_15_4 = ser_out_11_4;
assign ser_in_15_3 = ser_out_14_3;
assign sync_clk_in_1 = sync_clk_out_3;
assign sync_clk_in_2 = sync_clk_out_4;
assign sync_clk_in_3 = sync_clk_out_1;
assign sync_clk_in_4 = sync_clk_out_2;

mkNetworkSimple_0 mkNetworkSimple_0(	
	CLK,
	send_ports_0_putFlit_flit_in,
	EN_send_ports_0_putFlit,
	EN_send_ports_0_getNonFullVCs,
	send_ports_0_getNonFullVCs,
		       |
		       |
		       
		       |
		       |
	send_ports_14_putFlit_flit_in,
	EN_send_ports_14_putFlit,
	EN_send_ports_14_getNonFullVCs,
	send_ports_14_getNonFullVCs,
	EN_recv_ports_0_getFlit,
	recv_ports_0_getFlit,
	recv_ports_0_putNonFullVCs_nonFullVCs,
	EN_recv_ports_0_putNonFullVCs,
		       |
		       |
		       
		       |
		       |
	EN_recv_ports_13_getFlit,
	recv_ports_13_getFlit,
	recv_ports_13_putNonFullVCs_nonFullVCs,
	EN_recv_ports_13_putNonFullVCs,
	EN_recv_ports_14_getFlit,
	recv_ports_14_getFlit,
	recv_ports_14_putNonFullVCs_nonFullVCs,
	EN_recv_ports_14_putNonFullVCs,
	ser_in_11_2,
	ser_in_14_1,
	ser_out_14_3,
	ser_out_11_4,
	sync_clk_in_1,
	sync_clk_out_1,
	sync_clk_in_2,
	sync_clk_out_2,
	recv_ports_info_0_getRecvPortID,
		       |
		       |
		       
		       |
		       |
	recv_ports_info_14_getRecvPortID,
	RST_N);

 mkNetworkSimple_1 mkNetworkSimple_1(
	CLK,
	send_ports_15_putFlit_flit_in,
	EN_send_ports_15_putFlit,
	EN_send_ports_15_getNonFullVCs,
	send_ports_15_getNonFullVCs,
	EN_recv_ports_15_getFlit,
	recv_ports_15_getFlit,
	recv_ports_15_putNonFullVCs_nonFullVCs,
	EN_recv_ports_15_putNonFullVCs,
	ser_in_15_4,
	ser_in_15_3,
	ser_out_15_2,
	ser_out_15_1,
	sync_clk_in_3,
	sync_clk_out_3,
	sync_clk_in_4,
	sync_clk_out_4,
	recv_ports_info_15_getRecvPortID,
	RST_N);
  // synopsys translate_on
endmodule  // mkNetworkSimple