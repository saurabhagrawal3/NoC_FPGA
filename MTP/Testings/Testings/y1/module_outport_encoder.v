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
// On Thu Jun  5 09:11:16 EDT 2014
//
// Method conflict info:
// Method: outport_encoder
// Conflict-free: outport_encoder
//
//
// Ports:
// Name                         I/O  size props
// outport_encoder                O     4
// outport_encoder_vec            I     5
//
// Combinational paths from inputs to outputs:
//   outport_encoder_vec -> outport_encoder
//
//

`ifdef BSV_ASSIGNMENT_DELAY
`else
`define BSV_ASSIGNMENT_DELAY
`endif

module module_outport_encoder(outport_encoder_vec,
			      outport_encoder);
  // value method outport_encoder
  input  [4 : 0] outport_encoder_vec;
  output [3 : 0] outport_encoder;

  // signals for module outputs
  wire [3 : 0] outport_encoder;

  // value method outport_encoder
  assign outport_encoder =
	     { outport_encoder_vec[0] || outport_encoder_vec[1] ||
	       outport_encoder_vec[2] ||
	       outport_encoder_vec[3] ||
	       outport_encoder_vec[4],
	       outport_encoder_vec[0] ?
		 3'd0 :
		 (outport_encoder_vec[1] ?
		    3'd1 :
		    (outport_encoder_vec[2] ?
		       3'd2 :
		       (outport_encoder_vec[3] ? 3'd3 : 3'd4))) } ;
endmodule  // module_outport_encoder

