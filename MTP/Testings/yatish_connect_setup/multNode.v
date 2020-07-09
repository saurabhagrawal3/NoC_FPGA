`include "connect_parameters.v"
`include "matrix_vector_mult_parameters.v"

module multNode(reset, clk, getID, max_iteration, getVertex, flit_in, getFlit, rcvReady, canSend, flit_out, putFlit, 
				LUT_address, LUT_output_data, vertex, done);

  localparam addr_width = `ADDR_WIDTH;//$clog2(`NUM_USER_RECV_PORTS);
  localparam flit_port_width = 2 /*valid and tail bits*/+ `FLIT_DATA_WIDTH + addr_width + 1;
  //localparam credit_port_width = 1 + vc_bits; // 1 valid bit
  localparam credit_port_width = `NUM_VCS; // 1 valid bit
  localparam RAM_WIDTH = `RAM_WIDTH; 
  localparam RAM_ADDR_BITS = `RAM_ADDR_BITS; 
  localparam vertex_width = `VERTEX_WIDTH; 
//  localparam addr_width = 6;
  localparam num_nodes = `NUM_NODES;
  localparam num_parts = `NUM_PARTS;
//  localparam extra_bits = 2;
//  localparam vertex_width = `vertex_width; 
  localparam folding_factor = `FOLDING_FACTOR;
  localparam folding_bits = `FOLDING_BITS;  
//  localparam max_iter = 1;
  localparam max_cycle = 3540;
  
//  localparam vc_bits = 1;//(`NUM_VCS > 1) ? $clog2(`NUM_VCS) : 1;
  localparam vc_bits = 1;
  localparam extra_bits = `FLIT_DATA_WIDTH + 1 - vertex_width - vc_bits - addr_width;
  
  reg [31:0] cycle;
  
//  localparam num_nodes = `NODES_PER_PROCESSOR;
  
  input [RAM_WIDTH-1:0] LUT_output_data;
  output reg [RAM_ADDR_BITS-1:0] LUT_address;
   
  input reset, clk;
  input [flit_port_width-1:0] flit_in;
  input getFlit;
  input [addr_width-1:0] getID;
  input [(folding_factor*vertex_width)-1:0] getVertex;
  input canSend;
  input [15:0] max_iteration;
  output reg rcvReady;
  output reg [flit_port_width-1:0] flit_out;
  output putFlit;
  output reg done;

  output reg [(folding_factor*vertex_width)-1:0] vertex;
  wire [(folding_factor*vertex_width)-1:0] next_vertex;
  reg [(folding_factor*vertex_width)-1:0] temp_vertex;
  wire [(folding_factor*vertex_width)-1:0] init_vertex;
  
  wire [extra_bits-1:0] part_no;
  
  reg [RAM_WIDTH-1:0] output_data;
  reg [3:0] state;
  reg [addr_width+folding_bits-1:0] dest;
  reg [addr_width-1:0] myID;
  
  reg [2*folding_bits+addr_width:0] recv_count, send_count; 
  reg [2*folding_bits:0] my_count;
  reg [vc_bits-1:0]   vc;
  
  reg [(folding_factor*vertex_width)-1:0] curr_vertex;
  reg flag;
  
  reg [15:0] iter;
  reg display_iter_time;

  
  genvar i;
  generate
  for (i=0; i<folding_factor; i=i+1) 
  begin:m
	assign next_vertex[(i+1)*vertex_width-1:i*vertex_width] = (i == flit_in[vertex_width + extra_bits - 1:vertex_width]) ? (vertex[(i+1)*vertex_width-1:i*vertex_width] ^ flit_in[vertex_width-1:0]) : vertex[(i+1)*vertex_width-1:i*vertex_width];
	
	assign init_vertex[(i+1)*vertex_width-1:i*vertex_width] = (i == dest[addr_width+folding_bits-1:addr_width]) ? (vertex[(i+1)*vertex_width-1:i*vertex_width] ^ LUT_output_data) : vertex[(i+1)*vertex_width-1:i*vertex_width];
  end	
  endgenerate

  
    assign putFlit = ((((state == 1) && (flag == 0)) || (state == 4)) && (canSend == 1));
  
  assign part_no = {1'b0, dest[addr_width+folding_bits-1:addr_width]};
  
  //assign out_part = vertex;

  always @ (posedge reset, posedge clk)
  begin
     if(reset)
	 begin
		 myID <= getID;
		 rcvReady <= 0;
		 flit_out <= 0;
		 state <= 0;
		 vc <= 0; 
		 send_count <= 0;
		 recv_count <= 0;
		 my_count <= 0;
		 LUT_address <= (getVertex[vertex_width-1:0] << (addr_width + folding_bits)) + getID;
		 temp_vertex <= getVertex;
		 //curr_vertex <= getVertex;
		 vertex <= 0;
		 cycle <= 0;
		 send_count <= 0;
		 dest <= getID;
		 flag <= 1;
		 done <= 0;
		 iter <= 0;
		 display_iter_time <= 1;
	//		 part_no <= 0;
	end

	else
	 begin
		if (cycle <= max_cycle)
			cycle <= cycle + 1;
		if (flit_in[flit_port_width-1]) // valid flit 
		begin
				// if (flit_in[12:7] == 1)
				// $display("@%0d : Ejecting flit %x at receive port %0d sent by node %0d part no and %d vertex: %0d", cycle, flit_in[3:0], myID, flit_in[12:7], flit_in[6:4], vertex);
				//if (myID == 63)
					//$display("@%0d : Ejecting flit %x at receive port %0d sent by node %0d part no %d and vertex: %x", cycle, flit_in, myID, flit_in[flit_port_width-3:flit_port_width-1-addr_width], flit_in[vertex_width + extra_bits - 1:vertex_width], vertex);
//				vertex <= vertex ^ flit_in[vertex_width-1:0];
				vertex <= next_vertex;
				recv_count <= recv_count + 1;
		end
		
		if(state == 0)
		begin
			if ((!flit_in[flit_port_width-1]) && (flag == 0)) 
			begin
   			    if (myID == 63)
					  $display("@%0d :Vertex is: %0d", cycle, LUT_output_data);
				LUT_address[addr_width + folding_bits - 1: 0] <= LUT_address[addr_width + folding_bits - 1: 0] + 1;
				vertex <= init_vertex;
				dest <= (dest + 1);// % num_nodes;
				rcvReady <= 1;
				state <= 1;
				send_count <= send_count + 1;
				my_count <= my_count + 1;
				//recv_count <= recv_count + 1;
				flag <= 1;
			end
			else if (flag == 1)
				flag <= 0;
		end
		
		else if(state == 1)
		begin
			if ((putFlit == 1) && (flag == 0))// && (myID == 63))
			begin
				flag <= 1;
				LUT_address[addr_width + folding_bits - 1: 0] <= LUT_address[addr_width + folding_bits - 1: 0] + 1;
				dest <= (dest + 1);// % num_nodes;
				send_count <= send_count + 1; 
				flit_out <= {1'b1 /*valid*/, 1'b1 /*tail*/, dest[addr_width-1:0], vc, myID, part_no, LUT_output_data};
				if (myID == 63)
					$display("@%0d: %0d sending %0d to %d part no %0d and address: %0d", cycle, myID, LUT_output_data, dest[5:0], part_no, LUT_address);
	
				if (send_count[folding_bits+addr_width-1:0] == (num_parts - 1)) 
				begin
					state <= 3;
					temp_vertex <= {temp_vertex[vertex_width-1:0], temp_vertex[(folding_factor*vertex_width)-1:vertex_width]};
//					part_no <= part_no + 1;
					rcvReady <= 0;
					// if (dest[5:0] == 0)
					// $display("%0d sending %0d to %d part no %0d and address: %x", myID, LUT_output_data, dest[5:0], part_no, LUT_address);
				 end
				else if(send_count[addr_width-1:0] == (num_nodes - 1))
				begin
					state <= 2;
					flag <= 1;
					rcvReady <= 0;
				end
				else
				begin
					rcvReady <= 1;
				end
			end
			else if (flag == 1)
			begin
				if (send_count < recv_count + + my_count +`FLIT_BUFFER_DEPTH - 1)
					flag <= 0;
			end
		end
		if(state == 2)
		begin
			if ((!flit_in[flit_port_width-1]) && (flag  == 0)) 
			begin
				state <= 1;
				send_count <= send_count + 1;
				my_count <= my_count + 1;
				vertex <= init_vertex;
				LUT_address[addr_width + folding_bits - 1: 0] <= LUT_address[addr_width + folding_bits - 1: 0] + 1;
				dest <= dest + 1;
				flag <= 1;
				// recv_count <= recv_count + 1;
				//rcvReady <= 1;
				if (myID == 63)
					 $display("@%0d :Part no is %0d and Vertex is: %0d", cycle, send_count[2*folding_bits+addr_width-1:folding_bits+addr_width], LUT_output_data);
			end
			else if (flag  == 1)
			begin
				flag <= 0;
			end
			
		end
		if(state == 3)
		begin
			if (send_count[2*folding_bits+addr_width:folding_bits+addr_width] < folding_factor)
			begin
				// if (myID == 3)
				// $display("@%0d : Vertex new: %d, temp vertex is %0d", cycle, temp_vertex[vertex_width-1:0], temp_vertex);
			
				LUT_address <= (temp_vertex[vertex_width-1:0] << (addr_width + folding_bits)) + getID + (send_count[2*folding_bits+addr_width-1:folding_bits+addr_width] << (folding_bits + vertex_width + addr_width));
				state <= 0;
				flag <= 1;
				rcvReady <= 0;
			end
			else
			begin
				state <= 4;
				rcvReady <= 1;
				// if (myID == 3)
					// $display("@%0d :Done!! Dest is: %0d and LUT_data is: %0d and receive count is %0d", cycle, dest, LUT_output_data, recv_count);
			end
		end
		if (state == 4)
		begin	
			if(putFlit == 1)
			begin	
				state <= 5;
				iter <= iter + 1;
			end
		end
		if (state == 5)
		begin
			if ((cycle > max_cycle) && (iter < max_iteration))
			begin
				 rcvReady <= 0;
				 flit_out <= 0;
				 state <= 0;
				 vc <= 0; 
				 send_count <= 0;
				 recv_count <= 0;
				 my_count <= 0;
				 LUT_address <= (vertex[vertex_width-1:0] << (addr_width + folding_bits)) + myID;
				 temp_vertex <= vertex;
				 vertex <= 0;
				 cycle <= 0;
				 dest <= myID;
				 flag <= 1;
				 done <= 0;
			end
			else if((cycle > max_cycle) && (iter >= max_iteration))
			begin
				done <= 1;
			end

			if((display_iter_time == 1) && (iter == 1) && (recv_count >= num_nodes*folding_factor*folding_factor - folding_factor*folding_factor))
			begin	
				display_iter_time <= 0;
				$display("@%0d: Node %0d done!", cycle, myID);

			end
		end
  end
end	

		

endmodule
