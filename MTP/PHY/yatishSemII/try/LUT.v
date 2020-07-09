`include "connect_parameters.v"
`include "matrix_vector_mult_parameters.v"


module LUT( clk, write_enable, address, input_data, output_data);
	  
   parameter file_name = "/data/preprocessed_1.data";
   localparam RAM_WIDTH = `RAM_WIDTH;
   localparam RAM_ADDR_BITS = `RAM_ADDR_BITS;
   
//   (* RAM_STYLE="{AUTO | BLOCK |  DISTRIBUTED}" *)
//   (* RAM_STYLE="{DISTRIBUTED}" *)
//   RAM_STYLE="DISTRIBUTED"; 
   
   input clk;
   input write_enable;
   input [RAM_ADDR_BITS-1:0] address;
   input [RAM_WIDTH-1:0] input_data;
   output reg [RAM_WIDTH-1:0] output_data;
   
   reg [RAM_WIDTH-1:0] RAM_1R1W [(2**RAM_ADDR_BITS)-1:0];
 
 //  The following code is only necessary if you wish to initialize the RAM 
   //  contents via an external file ($readmemb for binary data)
   initial
      $readmemb(file_name, RAM_1R1W , 0, (2**RAM_ADDR_BITS)-1);

   
   always @(posedge clk) begin
   output_data <= RAM_1R1W[address];
         if (write_enable)
           RAM_1R1W[address] <= input_data;
   end
//   assign output_data = RAM_1R1W[address];
   
endmodule
