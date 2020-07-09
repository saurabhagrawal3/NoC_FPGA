/*
 * These source files contain a hardware description of a network
 * automatically generated by CONNECT (CONfigurable NEtwork Creation Tool).
 *
 * This product includes a hardware design developed by Carnegie Mellon
 * University.
 *
 * Copyright (c) 2012 by Michael K. Papamichael, Carnegie Mellon University
 *
 * For more information, see the CONNECT project website at:
 *   http://www.ece.cmu.edu/~mpapamic/connect
 *
 * This design is provided for internal, non-commercial research use only, 
 * cannot be used for, or in support of, goods or services, and is not for
 * redistribution, with or without modifications.
 * 
 * You may not use the name "Carnegie Mellon University" or derivations
 * thereof to endorse or promote products derived from this software.
 *
 * THE SOFTWARE IS PROVIDED "AS-IS" WITHOUT ANY WARRANTY OF ANY KIND, EITHER
 * EXPRESS, IMPLIED OR STATUTORY, INCLUDING BUT NOT LIMITED TO ANY WARRANTY
 * THAT THE SOFTWARE WILL CONFORM TO SPECIFICATIONS OR BE ERROR-FREE AND ANY
 * IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE,
 * TITLE, OR NON-INFRINGEMENT.  IN NO EVENT SHALL CARNEGIE MELLON UNIVERSITY
 * BE LIABLE FOR ANY DAMAGES, INCLUDING BUT NOT LIMITED TO DIRECT, INDIRECT,
 * SPECIAL OR CONSEQUENTIAL DAMAGES, ARISING OUT OF, RESULTING FROM, OR IN
 * ANY WAY CONNECTED WITH THIS SOFTWARE (WHETHER OR NOT BASED UPON WARRANTY,
 * CONTRACT, TORT OR OTHERWISE).
 *
 */


//
// Generated by Bluespec Compiler, version 2012.01.A (build 26572, 2012-01-17)
//
// On Sat Oct  4 06:03:13 EDT 2014
//
// Method conflict info:
// Method: output_arbs_0_select
// Conflict-free: output_arbs_0_select,
// 	       output_arbs_0_next,
// 	       output_arbs_1_select,
// 	       output_arbs_1_next,
// 	       output_arbs_2_select,
// 	       output_arbs_2_next
//
// Method: output_arbs_0_next
// Conflict-free: output_arbs_0_select,
// 	       output_arbs_0_next,
// 	       output_arbs_1_select,
// 	       output_arbs_1_next,
// 	       output_arbs_2_select,
// 	       output_arbs_2_next
//
// Method: output_arbs_1_select
// Conflict-free: output_arbs_0_select,
// 	       output_arbs_0_next,
// 	       output_arbs_1_select,
// 	       output_arbs_1_next,
// 	       output_arbs_2_select,
// 	       output_arbs_2_next
//
// Method: output_arbs_1_next
// Conflict-free: output_arbs_0_select,
// 	       output_arbs_0_next,
// 	       output_arbs_1_select,
// 	       output_arbs_1_next,
// 	       output_arbs_2_select,
// 	       output_arbs_2_next
//
// Method: output_arbs_2_select
// Conflict-free: output_arbs_0_select,
// 	       output_arbs_0_next,
// 	       output_arbs_1_select,
// 	       output_arbs_1_next,
// 	       output_arbs_2_select,
// 	       output_arbs_2_next
//
// Method: output_arbs_2_next
// Conflict-free: output_arbs_0_select,
// 	       output_arbs_0_next,
// 	       output_arbs_1_select,
// 	       output_arbs_1_next,
// 	       output_arbs_2_select,
// 	       output_arbs_2_next
//
//
// Ports:
// Name                         I/O  size props
// output_arbs_0_select           O     3
// output_arbs_1_select           O     3
// output_arbs_2_select           O     3
// CLK                            I     1 unused
// RST_N                          I     1 unused
// output_arbs_0_select_requests  I     3
// output_arbs_1_select_requests  I     3
// output_arbs_2_select_requests  I     3
// EN_output_arbs_0_next          I     1 unused
// EN_output_arbs_1_next          I     1 unused
// EN_output_arbs_2_next          I     1 unused
//
// Combinational paths from inputs to outputs:
//   output_arbs_0_select_requests -> output_arbs_0_select
//   output_arbs_1_select_requests -> output_arbs_1_select
//   output_arbs_2_select_requests -> output_arbs_2_select
//
//

`ifdef BSV_ASSIGNMENT_DELAY
`else
`define BSV_ASSIGNMENT_DELAY
`endif

module mkRouterOutputArbitersStatic(CLK,
				    RST_N,

				    output_arbs_0_select_requests,
				    output_arbs_0_select,

				    EN_output_arbs_0_next,

				    output_arbs_1_select_requests,
				    output_arbs_1_select,

				    EN_output_arbs_1_next,

				    output_arbs_2_select_requests,
				    output_arbs_2_select,

				    EN_output_arbs_2_next);
  input  CLK;
  input  RST_N;

  // value method output_arbs_0_select
  input  [2 : 0] output_arbs_0_select_requests;
  output [2 : 0] output_arbs_0_select;

  // action method output_arbs_0_next
  input  EN_output_arbs_0_next;

  // value method output_arbs_1_select
  input  [2 : 0] output_arbs_1_select_requests;
  output [2 : 0] output_arbs_1_select;

  // action method output_arbs_1_next
  input  EN_output_arbs_1_next;

  // value method output_arbs_2_select
  input  [2 : 0] output_arbs_2_select_requests;
  output [2 : 0] output_arbs_2_select;

  // action method output_arbs_2_next
  input  EN_output_arbs_2_next;

  // signals for module outputs
  wire [2 : 0] output_arbs_0_select,
	       output_arbs_1_select,
	       output_arbs_2_select;

  // value method output_arbs_0_select
  assign output_arbs_0_select =
	     { output_arbs_0_select_requests[2],
	       !output_arbs_0_select_requests[2] &&
	       output_arbs_0_select_requests[1],
	       !output_arbs_0_select_requests[2] &&
	       !output_arbs_0_select_requests[1] &&
	       output_arbs_0_select_requests[0] } ;

  // value method output_arbs_1_select
  assign output_arbs_1_select =
	     { !output_arbs_1_select_requests[0] &&
	       output_arbs_1_select_requests[2],
	       !output_arbs_1_select_requests[0] &&
	       !output_arbs_1_select_requests[2] &&
	       output_arbs_1_select_requests[1],
	       output_arbs_1_select_requests[0] } ;

  // value method output_arbs_2_select
  assign output_arbs_2_select =
	     { !output_arbs_2_select_requests[1] &&
	       !output_arbs_2_select_requests[0] &&
	       output_arbs_2_select_requests[2],
	       output_arbs_2_select_requests[1],
	       !output_arbs_2_select_requests[1] &&
	       output_arbs_2_select_requests[0] } ;
endmodule  // mkRouterOutputArbitersStatic
