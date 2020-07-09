########## Python script Parameters for automatic partitioning #############

import re
routers = [0, 1, 2, 3]	# Total No. of router in partitioned network
part = [0, 1, 2] 	# No. of router in this partitioned network
part_no = 0 		# Partition part No.
ports_per_router = 5 	# No. of ports in each router of partitioned network
flit_data_width = 16 	# Data width
vc_bits = 1
dest_bits = 2		# destination width depending on no. of ports
data_width = 2
hex_filename = <Routing_table_<filename. Hex>
outside_in =  [[0 ,3],[1 ,3]] # Define the input  port cuts
outside_out = [[0 ,1],[1 ,1]] # Define the output port cuts

######### This script partition's the given network and instantiate ########
########### all the necessary Quasi-SERDES link interfaces using wire ######
####################### to appropriate counterpart #########################