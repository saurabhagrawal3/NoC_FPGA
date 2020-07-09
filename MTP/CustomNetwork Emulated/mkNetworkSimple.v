`ifdef BSV_ASSIGNMENT_DELAY
`else
`define BSV_ASSIGNMENT_DELAY
`endif

module mkNetworkSimple(CLK,
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

		       recv_ports_info_3_getRecvPortID);
  input  CLK;
  input  RST_N;

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

endmodule  // mkNetworkSimple

