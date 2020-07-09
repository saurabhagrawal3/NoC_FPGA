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
// On Sat Oct  4 06:03:15 EDT 2014
//
// Method conflict info:
// Method: select
// Conflict-free: select
// Sequenced before: next
//
// Method: next
// Sequenced after: select
// Conflicts: next
//
//
// Ports:
// Name                         I/O  size props
// select                         O     3
// CLK                            I     1 clock
// RST_N                          I     1 reset
// select_requests                I     3
// EN_next                        I     1
//
// Combinational paths from inputs to outputs:
//   select_requests -> select
//
//

`ifdef BSV_ASSIGNMENT_DELAY
`else
`define BSV_ASSIGNMENT_DELAY
`endif

module mkInputArbiter(CLK,
		      RST_N,

		      select_requests,
		      select,

		      EN_next);
  input  CLK;
  input  RST_N;

  // value method select
  input  [2 : 0] select_requests;
  output [2 : 0] select;

  // action method next
  input  EN_next;

  // signals for module outputs
  wire [2 : 0] select;

  // register arb_token
  reg [2 : 0] arb_token;
  wire [2 : 0] arb_token$D_IN;
  wire arb_token$EN;

  // remaining internal signals
  wire [1 : 0] ab__h1115,
	       ab__h1130,
	       ab__h1145,
	       ab__h2028,
	       ab__h2321,
	       ab__h2560;
  wire NOT_gen_grant_carry_2_BIT_1_3_2_AND_NOT_gen_gr_ETC___d36,
       ab_BIT_0___h1545,
       ab_BIT_0___h1652,
       ab_BIT_0___h2069,
       ab_BIT_0___h2137,
       ab_BIT_0___h2376,
       arb_token_BIT_0___h1543,
       arb_token_BIT_1___h1650,
       arb_token_BIT_2___h1757;

  // value method select
  assign select =
	     { ab__h1115[1] || ab__h2028[1],
	       !ab__h1115[1] && !ab__h2028[1] &&
	       (ab__h1130[1] || ab__h2321[1]),
	       NOT_gen_grant_carry_2_BIT_1_3_2_AND_NOT_gen_gr_ETC___d36 } ;

  // register arb_token
  assign arb_token$D_IN = { arb_token[0], arb_token[2:1] } ;
  assign arb_token$EN = EN_next ;

  // remaining internal signals
  module_gen_grant_carry instance_gen_grant_carry_5(.gen_grant_carry_c(1'd0),
						    .gen_grant_carry_r(select_requests[0]),
						    .gen_grant_carry_p(arb_token_BIT_0___h1543),
						    .gen_grant_carry(ab__h1145));
  module_gen_grant_carry instance_gen_grant_carry_1(.gen_grant_carry_c(ab_BIT_0___h1545),
						    .gen_grant_carry_r(select_requests[1]),
						    .gen_grant_carry_p(arb_token_BIT_1___h1650),
						    .gen_grant_carry(ab__h1130));
  module_gen_grant_carry instance_gen_grant_carry_0(.gen_grant_carry_c(ab_BIT_0___h1652),
						    .gen_grant_carry_r(select_requests[2]),
						    .gen_grant_carry_p(arb_token_BIT_2___h1757),
						    .gen_grant_carry(ab__h1115));
  module_gen_grant_carry instance_gen_grant_carry_2(.gen_grant_carry_c(ab_BIT_0___h2069),
						    .gen_grant_carry_r(select_requests[0]),
						    .gen_grant_carry_p(arb_token_BIT_0___h1543),
						    .gen_grant_carry(ab__h2560));
  module_gen_grant_carry instance_gen_grant_carry_3(.gen_grant_carry_c(ab_BIT_0___h2376),
						    .gen_grant_carry_r(select_requests[1]),
						    .gen_grant_carry_p(arb_token_BIT_1___h1650),
						    .gen_grant_carry(ab__h2321));
  module_gen_grant_carry instance_gen_grant_carry_4(.gen_grant_carry_c(ab_BIT_0___h2137),
						    .gen_grant_carry_r(select_requests[2]),
						    .gen_grant_carry_p(arb_token_BIT_2___h1757),
						    .gen_grant_carry(ab__h2028));
  assign NOT_gen_grant_carry_2_BIT_1_3_2_AND_NOT_gen_gr_ETC___d36 =
	     !ab__h1115[1] && !ab__h2028[1] && !ab__h1130[1] &&
	     !ab__h2321[1] &&
	     (ab__h1145[1] || ab__h2560[1]) ;
  assign ab_BIT_0___h1545 = ab__h1145[0] ;
  assign ab_BIT_0___h1652 = ab__h1130[0] ;
  assign ab_BIT_0___h2069 = ab__h1115[0] ;
  assign ab_BIT_0___h2137 = ab__h2321[0] ;
  assign ab_BIT_0___h2376 = ab__h2560[0] ;
  assign arb_token_BIT_0___h1543 = arb_token[0] ;
  assign arb_token_BIT_1___h1650 = arb_token[1] ;
  assign arb_token_BIT_2___h1757 = arb_token[2] ;

  // handling of inlined registers

  always@(posedge CLK)
  begin
    if (!RST_N)
      begin
        arb_token <= `BSV_ASSIGNMENT_DELAY 3'd1;
      end
    else
      begin
        if (arb_token$EN) arb_token <= `BSV_ASSIGNMENT_DELAY arb_token$D_IN;
      end
  end

  // synopsys translate_off
  `ifdef BSV_NO_INITIAL_BLOCKS
  `else // not BSV_NO_INITIAL_BLOCKS
  initial
  begin
    arb_token = 3'h2;
  end
  `endif // BSV_NO_INITIAL_BLOCKS
  // synopsys translate_on
endmodule  // mkInputArbiter
