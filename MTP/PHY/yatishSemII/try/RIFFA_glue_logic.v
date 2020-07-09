`timescale 1ns/1ns

//`include "connect_parameters.v"
`include "matrix_vector_mult_parameters.v"


module chnl_tester
(
	input CLK,
	input down_clk,
	input RST,
	output CHNL_RX_CLK, 
	input CHNL_RX, 
	output CHNL_RX_ACK, 
	input CHNL_RX_LAST, 
	input [31:0] CHNL_RX_LEN, 
	input [30:0] CHNL_RX_OFF, 
	input [63:0] CHNL_RX_DATA, 
	input CHNL_RX_DATA_VALID, 
	output CHNL_RX_DATA_REN,
	
	output CHNL_TX_CLK, 
	output CHNL_TX, 
	input CHNL_TX_ACK, 
	output CHNL_TX_LAST, 
	output [31:0] CHNL_TX_LEN, 
	output [30:0] CHNL_TX_OFF, 
	output [63:0] CHNL_TX_DATA, 
	output CHNL_TX_DATA_VALID, 
	input CHNL_TX_DATA_REN
);

localparam VECTOR_SIZE = `VECTOR_SIZE;
localparam NUM_WORDS = `NUM_WORDS;
localparam C_PCI_DATA_WIDTH = 64;

//reg [63:0] rData[0:127];
wire [63:0] tData;
reg [63:0] tDatareg = 0;
reg [31:0] rLen=0;
wire [31:0] tLen;
reg [31:0] rCount=0,tCount=0;
reg [1:0] rState=0;
//reg [1:0] tState=0;
reg sendreg=0,compute=0;
wire send;
reg [30:0] offset = 31'd0;


reg rst;
reg recv_iter;
wire [VECTOR_SIZE-1:0] data_in;
reg [VECTOR_SIZE-1:0] data_input;
wire [VECTOR_SIZE-1:0] data_o;
reg [VECTOR_SIZE-1:0] data_out;


reg [63:0] iter;
wire [15:0] max_iteration;


assign CHNL_RX_CLK = down_clk;
assign CHNL_RX_ACK = (rState == 2'd1);
assign CHNL_RX_DATA_REN = (rState == 2'd1);

assign CHNL_TX_CLK = down_clk;
assign CHNL_TX = (rState == 2'd3);
assign CHNL_TX_LAST = 1'd1;
assign CHNL_TX_LEN = rLen; // in words
assign CHNL_TX_OFF = offset;
assign CHNL_TX_DATA = data_out[VECTOR_SIZE-1:VECTOR_SIZE-C_PCI_DATA_WIDTH];//tDatareg;
assign CHNL_TX_DATA_VALID = (rState == 2'd3);

assign max_iteration = iter[15:0];
assign data_in = data_input;

always @(posedge down_clk or posedge RST) begin
	if (RST) begin
		rLen <=  0;
		rCount <= 0;
		rState <= 0;
		tCount <= 0;
		sendreg <= 0;
		offset <= 0;
		iter <= 1;
		data_input <= 0;
	end
	else begin
		case (rState)
		2'd0: begin // Wait for start of RX, save length
			if (CHNL_RX ) begin
				rLen <=  CHNL_RX_LEN;
				rCount <=  0;
				offset <=  CHNL_RX_OFF;
				recv_iter <= 1'b1;
				rState <=  2'd1;
			end
		end
		
		2'd1: begin // Wait for last data in RX, save value
			if (CHNL_RX_DATA_VALID) 
			begin
				// rData[(rCount/(64/32))+10] <=  CHNL_RX_DATA;
				if(recv_iter == 1)
				begin
					iter <= CHNL_RX_DATA;
					recv_iter <= 1'b0;
				end
				else
				begin
					//data_input <= CHNL_RX_DATA;
					data_input <= {data_input[VECTOR_SIZE-C_PCI_DATA_WIDTH-1:0], CHNL_RX_DATA};
				end
				rCount <=  rCount + (64/32);
			end
			if (rCount >= rLen)
			begin
				rState <=  2'd2;
				compute <= 1;
			end
		end
		2'd2: begin // Prepare for TX
			compute <= 0;
			sendreg <= send;
			if(sendreg==1'd1)begin
				tCount <=  (64/32);
				rState <=  2'd3;
				data_out <= data_o;
				//tDatareg <= tData;		
			end
		end
		2'd3: begin // Start TX with save length and data value
			if (CHNL_TX_DATA_REN & CHNL_TX_DATA_VALID) begin
				tDatareg <= tData;
				data_out <= {data_out[VECTOR_SIZE-C_PCI_DATA_WIDTH-1:0], {C_PCI_DATA_WIDTH{1'b0}}};
				tCount <=  tCount + (64/32);
				if (tCount >= NUM_WORDS)
					rState <=  2'd0;
			end
		end
		endcase
	end
end


mult_top m0(
   .reset(compute),
   .clk(down_clk),
   .max_iteration(max_iteration),
   .data_in(data_in),
   .data_o(data_o),
   .done(send)
  );


endmodule

