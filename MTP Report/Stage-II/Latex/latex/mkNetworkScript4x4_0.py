import re
########## PARAMETERS ###############
routers =  [0 ,1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,10 ,11 ,12 ,13 ,14 ,15]
part = [0 ,1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,10 ,11 ,12 ,13 ,14]
part_no = 0
ports_per_router = 5
flit_data_width = 11
vc_bits = 1
dest_bits = 4
data_width = 2
#hex_filename = "mesh_4RTs_2VCs_8BD_16DW_SepIFRoundRobinAlloc_2RTsPerRow_2RTsPerCol_routing"
hex_filename = "mesh_16RTs_2VCs_8BD_9DW_SepIFRoundRobinAlloc_4RTsPerRow_4RTsPerCol_routing"
flit_port_width = 2 + flit_data_width + vc_bits + dest_bits 
size_part = len(part)
topology_dict = {i: [[-1,-1] for j in range(ports_per_router)] for i in part}
inside = []
outside_in = [[11 ,2],[14 ,1]]
outside_out = [[14 ,3],[11 ,4]]
cuts = [1 ,2]
ports = []
unused_in = []
unused_out = []

for i in part:
	for j in range(ports_per_router):
		unused_in.append([i ,j])
		unused_out.append([i ,j])
def construct_dict():
    with open('mkNetworkSimple.v', 'r') as content_file:
		content = content_file.read()
	for i in routers:
		for j in range(ports_per_router):
			if(i > 0):
				if(j > 0):
					str='assign(.*) net_routers_routeTable_%d_rt_ifc_banks_banks_rf_%d\$ADDR_1(.*)                          \n(.*)' %(i ,j)
				else:
					str = 'assign(.*) net_routers_routeTable_%d_rt_ifc_banks_banks_rf\$ADDR_1(.*)                             \n(.*)' %(i)
			else:
				if(j > 0):
					str = 'assign(.*) net_routers_routeTable_rt_ifc_banks_banks_rf_%d\$ADDR_1(.*)                             \n(.*)' %(j)
				else:
					str = 'assign(.*) net_routers_routeTable_rt_ifc_banks_banks_rf\$ADDR_1(.*)                                 \n(.*)'
			searchObj = re.search( str , content , re.M|re.I)
			if searchObj:
				obj = re.search( ';', searchObj.group(2), re.M|re.I)
				if obj:
					print i ,j
				else:
					obj2 = re.search( 'send_ports_(.*)_putFlit_flit_in', searchObj.group(3), re.M|re.I)
					if obj2:
						if(i in part):
							topology_dict[i][j] = [-1 , int(obj2.group(1))]
							ports.append([[i ,j],int(obj2.group(1))])
							unused_in.remove([i ,j])
							unused_out.remove([i ,j])
					else:
						node = 0
						port = 0
						obj3 = re.search( '(.*)router_core_(.*)\$(.*)', searchObj.group(3), re.M|re.I)
						if obj3:
							node = int(obj3.group(2))
							print i , j , obj3.group(2), obj3.group(3)
						obj4 = re.search( '(.*)\$out_ports_(.*)_(.*)', searchObj.group(3), re.M|re.I)
						if obj4:
							port = int(obj4.group(2))
						if ((i in part) and (node in part)): 
							topology_dict[i][j] = [node , port]
							inside.append([[i , j], [node , port]])
							unused_in.remove([i ,j])
							unused_out.remove([node ,port])
						elif (i in part):
							topology_dict[i][j] = [node , port]
							unused_in.remove([i ,j])
						elif (node in part):
							unused_out.remove([node ,port])
def str1():
	str = "`ifdef BSV_ASSIGNMENT_DELAY \n`else \n`define BSV_ASSIGNMENT_DELAY \n`endif \n\nmodule mkNetworkSimple_%d \n(\n\tCLK,\n" %(part_no)
	return str
def str2(i):
	str = "\n\tsend_ports_%d_putFlit_flit_in, \n\tEN_send_ports_%d_putFlit, \n\tEN_send_ports_%d_getCredits ,    \n \tsend_ports_%d_getCredits,\n" %(i ,i ,i ,i)
	return str
def str3(i):
	str = "\n\tEN_recv_ports_%d_getFlit,\n\trecv_ports_%d_getFlit , \n\trecv_ports_%d_putCredits_cr_in , \n\tEN_recv_ports_%d_putCredits,\n" %(i ,i ,i ,i)
	return str
def str4_i(i ,j):
	str = "\n\tser_in_%d_%d," %(i ,j)
	return str
def str4_o(i ,j):
	str = "\n\tser_out_%d_%d," %(i ,j)
	return str
def str5_i(i ,j):
	str = " [%d:0] ser_in_%d_%d;\n" %(7 ,i ,j)
	return str
def str5_o(i ,j):
	str = " [%d:0] ser_out_%d_%d;\n" %(7 ,i ,j)
	return str
def str6(i):
	str = "\n//action method send_ports_%d_putFlit\ninput [%d : 0] send_ports_%d_putFlit_flit_in;\ninput EN_send_ports_%d_putFlit;\n//actionvalue method send_ports_%d_getCredits\ninput EN_send_ports_%d_getCredits;\noutput [1 : 0] send_ports_%d_getCredits;\n//actionvalue method recv_ports_%d_getFlit\ninput EN_recv_ports_%d_getFlit;\noutput [%d : 0] recv_ports_%d_getFlit;\n//action method recv_ports_%d_putCredits \ninput [1 : 0] recv_ports_%d_putCredits_cr_in;\ninput EN_recv_ports_%d_putCredits;\n" %(i ,flit_port_width-1 ,i ,i ,i ,i ,i ,i ,i ,flit_port_width-1 ,i ,i ,i ,i)
	return str
def str7(i ,j): 
	str = "\n//ports of submodule net_routers_routeTable_%d_rt_ifc_banks_banks_rf_%d\nwire [%d : 0] net_routers_routeTable_%d_rt_ifc_banks_banks_rf_%d$ADDR_1 , net_routers_routeTable_%d_rt_ifc_banks_banks_rf_%d$ADDR_IN;\nwire [%d:0] net_routers_routeTable_%d_rt_ifc_banks_banks_rf_%d$D_IN , net_routers_routeTable_%d_rt_ifc_banks_banks_rf_%d$D_OUT_1;\nwire net_routers_routeTable_%d_rt_ifc_banks_banks_rf_%d$WE;\n" %(i ,j ,dest_bits-1 ,i ,j ,i ,j ,data_width ,i ,j ,i ,j ,i ,j)
	return str
def str8(i ,j):
	str = "\nwire [%d : 0] net_routers_router_core_%d$in_ports_%d_putRoutedFlit_flit_in; \nwire [%d : 0] net_routers_router_core_%d$out_ports_%d_getFlit; \nwire [1 : 0] net_routers_router_core_%d$in_ports_%d_getCredits; \nwire [1 : 0] net_routers_router_core_%d$out_ports_%d_putCredits_cr_in; \nwire net_routers_router_core_%d$EN_in_ports_%d_getCredits; \nwire net_routers_router_core_%d$EN_in_ports_%d_putRoutedFlit; \nwire net_routers_router_core_%d$EN_out_ports_%d_getFlit; \nwire net_routers_router_core_%d$EN_out_ports_%d_putCredits;\n" %(flit_port_width+data_width ,i ,j ,flit_port_width-1 ,i ,j ,i ,j ,i ,j ,i ,j ,i ,j ,i ,j ,i ,j)
	return str
def str10(j ,i):
	str = "\n\nphy phyNode_%d \n(\n\t// Physical link control signals \n\t.read_req_received(read_req_received_port_%d),\t\t\t// From physical link  \n\t.read_ready(read_ready_port_%d),\t\t\t\t\t// To physical link  \n\t.write_ready_ack(write_ready_ack_port_%d),\t\t\t// From physical link  \n\t.write_req_send(write_req_send_port_%d),\t\t\t\t// To physical link \n \n\t// Physical link data lines  \n\t.serial_data_in(ser_in_%d_%d),\t\t\t\t// From physical link 8-bit serial_data_in  \n\t.serial_data_out(ser_out_%d_%d),\t\t\t// To physical link 8-bit serial_data_out \n \n\t// Network node data lines  \n\t.input_data_from_router(tx_data_%d_%d),\t\t// From network node 8-bit serial_data_input  \n\t.output_data_to_router(rx_data_%d_%d),\t\t// To network node 8-bit serial_data_output \n \n\t// Network node control signals \n\t.en_recv_to_router_port(tx_busy_%d_%d),\t\t// Data ready to be received from network node \n\t.en_send_to_router_port(new_rx_data_%d_%d),\t\t// Send data request from network node\n\n\t// System Clock \n\t.clk(CLK),\n\t.rst_n(RST_N)\n);" %(i ,i ,i ,i ,i ,j ,i ,j ,i+2 ,j ,i+2 ,j ,i ,j ,i+2 ,j ,i)
	return str
def str13(i ,j):
	str = "\n\nassign tx_data_%d_%d = {net_routers_router_core_%d$out_ports_%d_getFlit};\nassign new_tx_data_%d_%d = net_routers_router_core_%d$out_ports_%d_getFlit[%d];\n //node-router interfacing port" %(i ,j ,i ,j ,i ,j ,i ,j ,flit_port_width-1)
	return str
def str14(i ,j):
	str = "\nRegFileLoadSyn \n#( \n\t/*file*/ \""+hex_filename+"_%d.hex\", \n\t/*addr_width*/ 32'd%d,\n\t/*data_width*/ 32'd%d, \n\t/*lo*/ 32'd0,\n\t/*hi*/ 32'd%d,\n\t/*binary*/ 32'd0\n)\nnet_routers_routeTable_%d_rt_ifc_banks_banks_rf_%d \n(\n\t.CLK(CLK), \n\t.RST_N(RST_N),\n\t .ADDR_1(net_routers_routeTable_%d_rt_ifc_banks_banks_rf_%d$ADDR_1), \n\t.ADDR_IN(net_routers_routeTable_%d_rt_ifc_banks_banks_rf_%d$ADDR_IN), \n\t.D_IN(net_routers_routeTable_%d_rt_ifc_banks_banks_rf_%d$D_IN), \n\t.WE(net_routers_routeTable_%d_rt_ifc_banks_banks_rf_%d$WE)"%(i ,dest_bits ,data_width+1 ,2**dest_bits-1 ,i ,j ,i ,j ,i ,j ,i ,j ,i ,j)
	str2 = ",\n\t.D_OUT_1(net_routers_routeTable_%d_rt_ifc_banks_banks_rf_%d$D_OUT_1)\n);" %(i ,j)
	for elem in unused_in:
		if ([elem[0],elem[1]] == [i ,j]):
			str2 = ",\n\t.D_OUT_1()\n);"
	return str+str2
def str15(i ,j):
	str ="\n\t.in_ports_%d_putRoutedFlit_flit_in(net_routers_router_core_%d$in_ports_%d_putRoutedFlit_flit_in),\n\t.out_ports_%d_putCredits_cr_in(net_routers_router_core_%d$out_ports_%d_putCredits_cr_in),\n\t.EN_in_ports_%d_putRoutedFlit(net_routers_router_core_%d$EN_in_ports_%d_putRoutedFlit),\n\t.EN_in_ports_%d_getCredits(net_routers_router_core_%d$EN_in_ports_%d_getCredits),\n\t.EN_out_ports_%d_getFlit(net_routers_router_core_%d$EN_out_ports_%d_getFlit),\n\t.EN_out_ports_%d_putCredits(net_routers_router_core_%d$EN_out_ports_%d_putCredits),\n" %(j ,i ,j ,j ,i ,j ,j ,i ,j ,j ,i ,j ,j ,i ,j ,j ,i ,j)
	str2 = "\n\t.in_ports_%d_getCredits(net_routers_router_core_%d$in_ports_%d_getCredits)," %(j ,i ,j)
	str3 = "\n\t.out_ports_%d_getFlit(net_routers_router_core_%d$out_ports_%d_getFlit)," %(j ,i ,j)
	if [i ,j] in unused_in:
		str2 = "\n\t.in_ports_%d_getCredits(),"  %(j)
	if [i ,j] in unused_out:
		str3 = "\n\t.out_ports_%d_getFlit()," %(j)
	return str + str2 + str3
def str16(i): 
	str = "\n\n//submodule net_routers_routeTable_%d_rt_ifc_banks_banks_rf_%d\nassign net_routers_routeTable_%d_rt_ifc_banks_banks_rf_0$ADDR_1 = send_ports_%d_putFlit_flit_in[%d:%d];\nassign net_routers_routeTable_%d_rt_ifc_banks_banks_rf_0$ADDR_IN = 0;\nassign net_routers_routeTable_%d_rt_ifc_banks_banks_rf_0$D_IN = 0;\nassign net_routers_routeTable_%d_rt_ifc_banks_banks_rf_0$WE = 1'b0;" %(i  ,i  ,i  ,i  ,flit_data_width+vc_bits+dest_bits-1 ,flit_data_width+vc_bits ,i ,i ,i)
	return str
def str17_i(i):
	str = "\n \n//submodule net_routers_routeTable_%d_rt_ifc_banks_banks_rf_%d\nassign net_routers_routeTable_%d_rt_ifc_banks_banks_rf_%d$ADDR_1 = net_routers_router_core_%d$out_ports_%d_getFlit[%d:%d];\nassign net_routers_routeTable_%d_rt_ifc_banks_banks_rf_%d$ADDR_IN = 0;\nassign net_routers_routeTable_%d_rt_ifc_banks_banks_rf_%d$D_IN = 0;\nassign net_routers_routeTable_%d_rt_ifc_banks_banks_rf_%d$WE = 1'b0;"%( i[0][0], i[0][1], i[0][0], i[0][1], i[1][0], i[1][1],flit_data_width+vc_bits+dest_bits-1 ,flit_data_width+vc_bits , i[0][0], i[0][1], i[0][0], i[0][1], i[0][0], i[0][1])
	return str
def str17_o(i ,j):
	str = "\n \n//submodule net_routers_routeTable_%d_rt_ifc_banks_banks_rf_%d\nassign net_routers_routeTable_%d_rt_ifc_banks_banks_rf_%d$ADDR_1 = rx_data_%d_%d[%d:%d];\nassign net_routers_routeTable_%d_rt_ifc_banks_banks_rf_%d$ADDR_IN = 0;\nassign net_routers_routeTable_%d_rt_ifc_banks_banks_rf_%d$D_IN = 0;\nassign net_routers_routeTable_%d_rt_ifc_banks_banks_rf_%d$WE = 1'b0;" %( i , j , i , j , i , j , flit_data_width+vc_bits+dest_bits-1 , flit_data_width+vc_bits , i , j , i , j , i  ,j)
	return str
def str17_u(i ,j):
	str = "\n\nassign net_routers_routeTable_%d_rt_ifc_banks_banks_rf_%d$ADDR_1 = 0;\nassign net_routers_routeTable_%d_rt_ifc_banks_banks_rf_%d$ADDR_IN = 0;\nassign net_routers_routeTable_%d_rt_ifc_banks_banks_rf_%d$D_IN = 0;\nassign net_routers_routeTable_%d_rt_ifc_banks_banks_rf_%d$WE = 0;\nassign net_routers_router_core_%d$in_ports_%d_putRoutedFlit_flit_in = 0;" %(i ,j ,i ,j ,i ,j ,i ,j ,i ,j)
	return str
def str18_i(i):			
	str = "\n \n//submodule net_routers_router_core_%d\nassign net_routers_router_core_%d$in_ports_%d_putRoutedFlit_flit_in = \n\t { net_routers_router_core_%d$out_ports_%d_getFlit, \n\tnet_routers_routeTable_%d_rt_ifc_banks_banks_rf_%d$D_OUT_1 };\nassign net_routers_router_core_%d$EN_in_ports_%d_putRoutedFlit = 1;\nassign net_routers_router_core_%d$EN_in_ports_%d_getCredits = 1; \nassign net_routers_router_core_%d$out_ports_%d_putCredits_cr_in = net_routers_router_core_%d$in_ports_%d_getCredits;\nassign net_routers_router_core_%d$EN_out_ports_%d_getFlit = 1;\nassign net_routers_router_core_%d$EN_out_ports_%d_putCredits = 1;" %(  i[0][0],  i[0][0],  i[0][1],  i[1][0],  i[1][1],  i[0][0],  i[0][1],  i[0][0],  i[0][1],  i[0][0],  i[0][1],  i[1][0],  i[1][1],  i[0][0],  i[0][1],  i[1][0],  i[1][1],  i[1][0],  i[1][1])
	return str
def str18_o_i(i):			
	str = "\n \n // submodule net_routers_router_core_%d\nassign net_routers_router_core_%d$in_ports_%d_putRoutedFlit_flit_in =\n{rx_data_%d_%d ,net_routers_routeTable_%d_rt_ifc_banks_banks_rf_%d$D_OUT_1 };\nassign net_routers_router_core_%d$EN_in_ports_%d_putRoutedFlit = 1;\nassign net_routers_router_core_%d$EN_in_ports_%d_getCredits = 1'b1;"%(  i[0],  i[0],  i[1],  i[0],  i[1],  i[0],  i[1],  i[0],  i[1], i[0], i[1])  
	return str
def str18_o_o(i):			
	str = "\n \n// submodule net_routers_router_core_%d\nassign net_routers_router_core_%d$out_ports_%d_putCredits_cr_in = {1'b0 , (tx_busy_%d_%d)};\nassign net_routers_router_core_%d$EN_out_ports_%d_getFlit = 1'b1;\nassign net_routers_router_core_%d$EN_out_ports_%d_putCredits = 1'b1;" %( i[0], i[0], i[1], i[0], i[1], i[0], i[1], i[0], i[1])
	return str
def str18_p(i):			
	str = "\n\nassign net_routers_router_core_%d$in_ports_%d_putRoutedFlit_flit_in = \n\t {send_ports_%d_putFlit_flit_in , \n\tnet_routers_routeTable_%d_rt_ifc_banks_banks_rf_%d$D_OUT_1}; \nassign net_routers_router_core_%d$EN_in_ports_%d_putRoutedFlit = EN_send_ports_%d_putFlit; \nassign net_routers_router_core_%d$EN_in_ports_%d_getCredits = EN_send_ports_%d_getCredits; \nassign net_routers_router_core_%d$out_ports_%d_putCredits_cr_in = recv_ports_%d_putCredits_cr_in; \nassign net_routers_router_core_%d$EN_out_ports_%d_getFlit = EN_recv_ports_%d_getFlit;\nassign net_routers_router_core_%d$EN_out_ports_%d_putCredits = EN_recv_ports_%d_putCredits;" %( i[0][0], i[0][1], i[1], i[0][0], i[0][1], i[0][0], i[0][1], i[1], i[0][0], i[0][1], i[1], i[0][0], i[0][1], i[1], i[0][0], i[0][1], i[1], i[0][0], i[0][1], i[1])
	return str
def str18_u_o(i):			
	str = "\n\nassign net_routers_router_core_%d$out_ports_%d_putCredits_cr_in = 0;" %( i[0], i[1])
	return str
def str18_u_i(i):			
	str = "\n\nassign net_routers_router_core_%d$EN_in_ports_%d_putRoutedFlit = 0;\nassign net_routers_router_core_%d$EN_in_ports_%d_getCredits = 0;" %( i[0], i[1], i[0], i[1])
	return str
def str21(i):
	str = "\n\t\tif (RST_N)\n\t\t\tif (EN_send_ports_%d_putFlit && send_ports_%d_putFlit_flit_in[%d])\n\t\t\t\t$write(\"\");" %(i ,i ,flit_port_width-1)
	return str
def str22(i ,j):
	str = "\n\t\tif (RST_N)\n\t\t\tif (net_routers_router_core_%d$out_ports_%d_getFlit[%d])\n\t\t\t\t$write(\"\");" %(i ,j ,flit_port_width-1)
	return str
def main():	
	construct_dict()
	file = open("mkNetworkSimple_%d.v" %(part_no), "w")
	file.write(str1())
	for i in ports:
		file.write(str2( i[1]))
	for i in ports:
		file.write(str3( i[1]))
	for i in outside_in:
		file.write(str4_i( i[0], i[1]))
		print ( i[0], i[1])
	for i in outside_out:
		file.write(str4_o( i[0], i[1]))
	for i in cuts:
		file.write("\n \n\t read_req_received_port_%d, \n\tread_ready_port_%d,\n\t write_ready_ack_port_%d,\n\t write_req_send_port_%d,\n"%(i ,i ,i ,i))
	for i in ports:
		file.write("\n\trecv_ports_info_%d_getRecvPortID," %( i[1]))
	file.write("\n\tRST_N \n);\n \n")
	file.write("input CLK , RST_N;\n \n")
	for i in outside_in:
		file.write("input ")
		file.write(str5_i( i[0], i[1]))
	for i in outside_out:
		file.write("output")
		file.write(str5_o( i[0], i[1]))
	for i in cuts:
		file.write("\ninput  read_req_received_port_%d;\noutput read_ready_port_%d;\ninput  write_ready_ack_port_%d;\noutput write_req_send_port_%d;\n"%(i ,i ,i ,i))		
	for i in ports:
		file.write(str6( i[1]))	
	for i in ports:
		file.write("\noutput [%d : 0] recv_ports_info_%d_getRecvPortID;" %(dest_bits-1 , i[1]))
	file.write("\n")
	for i in part:
		for j in range(ports_per_router):
			file.write(str7(i ,j))
	for i in part:
		file.write("\n//ports of submodule net_routers_router_core_%d" %(i))
		for j in range(ports_per_router):
			file.write(str8(i ,j))
	for i in ports:
		file.write("\nwire [%d : 0] recv_ports_%d_getFlit;" %(flit_port_width-1 , i[1]))
	file.write("\n")
	for i in ports:
		file.write("\nwire [ 1 : 0] send_ports_%d_getCredits;" %( i[1]))
	file.write("\n")
	for i in cuts:
		file.write("\n wire read_req_received_port_%d; \n wire read_ready_port_%d; \n wire write_ready_ack_port_%d; \n wire write_req_send_port_%d;\n"%(i ,i ,i ,i))
	file.write("\n")
	for i in outside_in:
		file.write("wire")
		file.write(str5_i( i[0], i[1]))
	for i in outside_out:
		file.write("wire")
		file.write(str5_o( i[0], i[1]))
	for i in ports:
		file.write("\n \n//actionvalue method send_ports_%d_getCredits \nassign send_ports_%d_getCredits = net_routers_router_core_%d$in_ports_%d_getCredits;" %( i[1], i[1], i[0][0], i[0][1]))
		file.write("\n \n//actionvalue method recv_ports_%d_getFlit \nassign recv_ports_%d_getFlit = net_routers_router_core_%d$out_ports_%d_getFlit;" %( i[1], i[1], i[0][0], i[0][1]))
		file.write("\n \n//value method recv_ports_info_%d_getRecvPortID \nassign recv_ports_info_%d_getRecvPortID = %d; \n" %( i[1], i[1], i[1]))
	for i in outside_in:
		file.write("\n\nwire new_rx_data_%d_%d;" %( i[0], i[1]))
		file.write("\nwire [%d:0] rx_data_%d_%d;" %(flit_port_width-1 , i[0], i[1]) )
	for i in outside_out:
		file.write("\n\nwire tx_busy_%d_%d , new_tx_data_%d_%d;" %( i[0], i[1], i[0], i[1]))
		file.write("\nwire [%d:0] tx_data_%d_%d;" %(flit_port_width-1 , i[0], i[1]) )
	for i in outside_in:
		file.write(str10( i[0],  i[1]))
	for i in outside_out:
		file.write(str13( i[0],  i[1]))
	for i in outside_in:
		file.write("\n\nassign net_routers_router_core_%d$EN_out_ports_%d_putCredits = 1'd1;\nassign net_routers_router_core_%d$EN_out_ports_%d_getFlit = 1'd1;" %( i[0], i[1], i[0], i[1]))
	for i in part:
		for j in range(ports_per_router):
			file.write(str14(i ,j))
	for i in part:
		file.write("\n \n//submodule net_routers_router_core_%d \nmkIQRouterCoreSimple net_routers_router_core_%d \n(\n\t.CLK(CLK)," %(i ,i))
		for j in range(ports_per_router):
			file.write(str15(i ,j))
		file.write("\n\t.RST_N(RST_N)\n);\n \n")
	for i in part:
		file.write(str16(i))	
	for i in inside:
		file.write(str17_i(i))
	for i in outside_in:
		file.write(str17_o( i[0], i[1]))
	for i in unused_in:
		file.write(str17_u( i[0], i[1]))
	for i in inside:
		file.write(str18_i(i))
	for i in outside_in:
		file.write(str18_o_i(i))
	for i in outside_out:
		file.write(str18_o_o(i))
	for i in unused_out:
		file.write(str18_u_o(i))
	for i in unused_in:
		file.write(str18_u_i(i))
	for i in ports:
		file.write(str18_p(i))
	file.write("\n \n\nalways@(negedge CLK)\n\t  begin \n\t    #0;")
	for i in ports:
		file.write(str21( i[1]))
	for i in inside:
		file.write(str22( i[1][0], i[1][1]))
	for i in outside_out:
		file.write(str22( i[0], i[1]))
	file.write("\n\tend\nendmodule  // mkNetworkSimple")
	file.close()
main()
