########## Python script Parameters for automatic partitioning #############
import re
routers = [0, 1, 2, 3]	# Total No. of router in partitioned network
part_0 = [0, 2] 	# Number of router in partition 0
part_1 = [1, 3] 	# Number of router in partition 1
part_no_0 = 0 		# Partition part Number 0.
part_no_0 = 0 		# Partition part Number 1.
ports_per_router = 5 	# Number of ports in each router
flit_data_width = 16 	# Data width
vc_bits = 1
dest_bits = 2		# Number of destination nodes 
data_width = 2
hex_filename = <Routing_table_<filename. Hex>
outside_in =  [[0 ,3],[1 ,3]] # Define the input  port cuts
outside_out = [[0 ,1],[1 ,1]] # Define the output port cuts
######### This script partition's the given network and instantiates #######
########### all the necessary inter-chip link interfaces using wire ########
####################### at specified router position #######################