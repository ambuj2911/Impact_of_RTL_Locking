set moduleName sha256_update
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {sha256_update}
set C_modelType { int 288 }
set C_modelArgList {
	{ ctx_data_0 int 8 regular {array 16 { 2 1 } 1 1 }  }
	{ ctx_data_1 int 8 regular {array 16 { 2 1 } 1 1 }  }
	{ ctx_data_2 int 8 regular {array 16 { 2 1 } 1 1 }  }
	{ ctx_data_3 int 8 regular {array 16 { 2 1 } 1 1 }  }
	{ ctx_datalen_read int 32 regular  }
	{ p_read1 int 32 regular  }
	{ p_read2 int 32 regular  }
	{ p_read3 int 32 regular  }
	{ p_read4 int 32 regular  }
	{ p_read5 int 32 regular  }
	{ p_read6 int 32 regular  }
	{ p_read7 int 32 regular  }
	{ p_read8 int 32 regular  }
	{ data int 8 regular {array 64 { 1 3 } 1 1 }  }
	{ len int 32 regular  }
	{ rtl_key_r int 32 regular {pointer 0} {global 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "ctx_data_0", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE"} , 
 	{ "Name" : "ctx_data_1", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE"} , 
 	{ "Name" : "ctx_data_2", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE"} , 
 	{ "Name" : "ctx_data_3", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE"} , 
 	{ "Name" : "ctx_datalen_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "p_read1", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "p_read2", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "p_read3", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "p_read4", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "p_read5", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "p_read6", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "p_read7", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "p_read8", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "data", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "len", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "rtl_key_r", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "rtl_key","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 288} ]}
# RTL Port declarations: 
set portNum 61
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ ctx_data_0_address0 sc_out sc_lv 4 signal 0 } 
	{ ctx_data_0_ce0 sc_out sc_logic 1 signal 0 } 
	{ ctx_data_0_we0 sc_out sc_logic 1 signal 0 } 
	{ ctx_data_0_d0 sc_out sc_lv 8 signal 0 } 
	{ ctx_data_0_q0 sc_in sc_lv 8 signal 0 } 
	{ ctx_data_0_address1 sc_out sc_lv 4 signal 0 } 
	{ ctx_data_0_ce1 sc_out sc_logic 1 signal 0 } 
	{ ctx_data_0_q1 sc_in sc_lv 8 signal 0 } 
	{ ctx_data_1_address0 sc_out sc_lv 4 signal 1 } 
	{ ctx_data_1_ce0 sc_out sc_logic 1 signal 1 } 
	{ ctx_data_1_we0 sc_out sc_logic 1 signal 1 } 
	{ ctx_data_1_d0 sc_out sc_lv 8 signal 1 } 
	{ ctx_data_1_q0 sc_in sc_lv 8 signal 1 } 
	{ ctx_data_1_address1 sc_out sc_lv 4 signal 1 } 
	{ ctx_data_1_ce1 sc_out sc_logic 1 signal 1 } 
	{ ctx_data_1_q1 sc_in sc_lv 8 signal 1 } 
	{ ctx_data_2_address0 sc_out sc_lv 4 signal 2 } 
	{ ctx_data_2_ce0 sc_out sc_logic 1 signal 2 } 
	{ ctx_data_2_we0 sc_out sc_logic 1 signal 2 } 
	{ ctx_data_2_d0 sc_out sc_lv 8 signal 2 } 
	{ ctx_data_2_q0 sc_in sc_lv 8 signal 2 } 
	{ ctx_data_2_address1 sc_out sc_lv 4 signal 2 } 
	{ ctx_data_2_ce1 sc_out sc_logic 1 signal 2 } 
	{ ctx_data_2_q1 sc_in sc_lv 8 signal 2 } 
	{ ctx_data_3_address0 sc_out sc_lv 4 signal 3 } 
	{ ctx_data_3_ce0 sc_out sc_logic 1 signal 3 } 
	{ ctx_data_3_we0 sc_out sc_logic 1 signal 3 } 
	{ ctx_data_3_d0 sc_out sc_lv 8 signal 3 } 
	{ ctx_data_3_q0 sc_in sc_lv 8 signal 3 } 
	{ ctx_data_3_address1 sc_out sc_lv 4 signal 3 } 
	{ ctx_data_3_ce1 sc_out sc_logic 1 signal 3 } 
	{ ctx_data_3_q1 sc_in sc_lv 8 signal 3 } 
	{ ctx_datalen_read sc_in sc_lv 32 signal 4 } 
	{ p_read1 sc_in sc_lv 32 signal 5 } 
	{ p_read2 sc_in sc_lv 32 signal 6 } 
	{ p_read3 sc_in sc_lv 32 signal 7 } 
	{ p_read4 sc_in sc_lv 32 signal 8 } 
	{ p_read5 sc_in sc_lv 32 signal 9 } 
	{ p_read6 sc_in sc_lv 32 signal 10 } 
	{ p_read7 sc_in sc_lv 32 signal 11 } 
	{ p_read8 sc_in sc_lv 32 signal 12 } 
	{ data_address0 sc_out sc_lv 6 signal 13 } 
	{ data_ce0 sc_out sc_logic 1 signal 13 } 
	{ data_q0 sc_in sc_lv 8 signal 13 } 
	{ len sc_in sc_lv 32 signal 14 } 
	{ rtl_key_r sc_in sc_lv 32 signal 15 } 
	{ ap_return_0 sc_out sc_lv 32 signal -1 } 
	{ ap_return_1 sc_out sc_lv 32 signal -1 } 
	{ ap_return_2 sc_out sc_lv 32 signal -1 } 
	{ ap_return_3 sc_out sc_lv 32 signal -1 } 
	{ ap_return_4 sc_out sc_lv 32 signal -1 } 
	{ ap_return_5 sc_out sc_lv 32 signal -1 } 
	{ ap_return_6 sc_out sc_lv 32 signal -1 } 
	{ ap_return_7 sc_out sc_lv 32 signal -1 } 
	{ ap_return_8 sc_out sc_lv 32 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "ctx_data_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "ctx_data_0", "role": "address0" }} , 
 	{ "name": "ctx_data_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctx_data_0", "role": "ce0" }} , 
 	{ "name": "ctx_data_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctx_data_0", "role": "we0" }} , 
 	{ "name": "ctx_data_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ctx_data_0", "role": "d0" }} , 
 	{ "name": "ctx_data_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ctx_data_0", "role": "q0" }} , 
 	{ "name": "ctx_data_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "ctx_data_0", "role": "address1" }} , 
 	{ "name": "ctx_data_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctx_data_0", "role": "ce1" }} , 
 	{ "name": "ctx_data_0_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ctx_data_0", "role": "q1" }} , 
 	{ "name": "ctx_data_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "ctx_data_1", "role": "address0" }} , 
 	{ "name": "ctx_data_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctx_data_1", "role": "ce0" }} , 
 	{ "name": "ctx_data_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctx_data_1", "role": "we0" }} , 
 	{ "name": "ctx_data_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ctx_data_1", "role": "d0" }} , 
 	{ "name": "ctx_data_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ctx_data_1", "role": "q0" }} , 
 	{ "name": "ctx_data_1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "ctx_data_1", "role": "address1" }} , 
 	{ "name": "ctx_data_1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctx_data_1", "role": "ce1" }} , 
 	{ "name": "ctx_data_1_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ctx_data_1", "role": "q1" }} , 
 	{ "name": "ctx_data_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "ctx_data_2", "role": "address0" }} , 
 	{ "name": "ctx_data_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctx_data_2", "role": "ce0" }} , 
 	{ "name": "ctx_data_2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctx_data_2", "role": "we0" }} , 
 	{ "name": "ctx_data_2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ctx_data_2", "role": "d0" }} , 
 	{ "name": "ctx_data_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ctx_data_2", "role": "q0" }} , 
 	{ "name": "ctx_data_2_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "ctx_data_2", "role": "address1" }} , 
 	{ "name": "ctx_data_2_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctx_data_2", "role": "ce1" }} , 
 	{ "name": "ctx_data_2_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ctx_data_2", "role": "q1" }} , 
 	{ "name": "ctx_data_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "ctx_data_3", "role": "address0" }} , 
 	{ "name": "ctx_data_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctx_data_3", "role": "ce0" }} , 
 	{ "name": "ctx_data_3_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctx_data_3", "role": "we0" }} , 
 	{ "name": "ctx_data_3_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ctx_data_3", "role": "d0" }} , 
 	{ "name": "ctx_data_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ctx_data_3", "role": "q0" }} , 
 	{ "name": "ctx_data_3_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "ctx_data_3", "role": "address1" }} , 
 	{ "name": "ctx_data_3_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctx_data_3", "role": "ce1" }} , 
 	{ "name": "ctx_data_3_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ctx_data_3", "role": "q1" }} , 
 	{ "name": "ctx_datalen_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ctx_datalen_read", "role": "default" }} , 
 	{ "name": "p_read1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p_read1", "role": "default" }} , 
 	{ "name": "p_read2", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p_read2", "role": "default" }} , 
 	{ "name": "p_read3", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p_read3", "role": "default" }} , 
 	{ "name": "p_read4", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p_read4", "role": "default" }} , 
 	{ "name": "p_read5", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p_read5", "role": "default" }} , 
 	{ "name": "p_read6", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p_read6", "role": "default" }} , 
 	{ "name": "p_read7", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p_read7", "role": "default" }} , 
 	{ "name": "p_read8", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p_read8", "role": "default" }} , 
 	{ "name": "data_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data", "role": "address0" }} , 
 	{ "name": "data_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data", "role": "ce0" }} , 
 	{ "name": "data_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "data", "role": "q0" }} , 
 	{ "name": "len", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "len", "role": "default" }} , 
 	{ "name": "rtl_key_r", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rtl_key_r", "role": "default" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }} , 
 	{ "name": "ap_return_2", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_2", "role": "default" }} , 
 	{ "name": "ap_return_3", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_3", "role": "default" }} , 
 	{ "name": "ap_return_4", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_4", "role": "default" }} , 
 	{ "name": "ap_return_5", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_5", "role": "default" }} , 
 	{ "name": "ap_return_6", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_6", "role": "default" }} , 
 	{ "name": "ap_return_7", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_7", "role": "default" }} , 
 	{ "name": "ap_return_8", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_8", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "sha256_update",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "141",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "ctx_data_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_sha256_transform_fu_248", "Port" : "data_0"}]},
			{"Name" : "ctx_data_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_sha256_transform_fu_248", "Port" : "data_1"}]},
			{"Name" : "ctx_data_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_sha256_transform_fu_248", "Port" : "data_2"}]},
			{"Name" : "ctx_data_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_sha256_transform_fu_248", "Port" : "data_3"}]},
			{"Name" : "ctx_datalen_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I"},
			{"Name" : "data", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "len", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_sha256_transform_fu_248", "Port" : "rtl_key_r"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248", "Parent" : "0", "Child" : ["2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45"],
		"CDFG" : "sha256_transform",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "8",
		"VariableLatency" : "0", "ExactLatency" : "131", "EstimateLatencyMin" : "131", "EstimateLatencyMax" : "131",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "ctx_state_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "ctx_state_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "ctx_state_2_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "ctx_state_3_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "ctx_state_4_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "ctx_state_5_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "ctx_state_6_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "ctx_state_7_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "data_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "data_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "data_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_MAJ_fu_885", "Port" : "rtl_key_r"},
					{"ID" : "9", "SubInstance" : "grp_MAJ_fu_930", "Port" : "rtl_key_r"},
					{"ID" : "11", "SubInstance" : "grp_EP1_fu_947", "Port" : "rtl_key_r"},
					{"ID" : "13", "SubInstance" : "grp_EP1_fu_961", "Port" : "rtl_key_r"},
					{"ID" : "17", "SubInstance" : "grp_EP1_fu_989", "Port" : "rtl_key_r"},
					{"ID" : "19", "SubInstance" : "grp_EP0_fu_1004", "Port" : "rtl_key_r"},
					{"ID" : "2", "SubInstance" : "grp_MAJ_fu_864", "Port" : "rtl_key_r"},
					{"ID" : "18", "SubInstance" : "grp_EP0_fu_996", "Port" : "rtl_key_r"},
					{"ID" : "21", "SubInstance" : "grp_EP0_fu_1018", "Port" : "rtl_key_r"},
					{"ID" : "14", "SubInstance" : "grp_EP1_fu_968", "Port" : "rtl_key_r"},
					{"ID" : "15", "SubInstance" : "grp_EP1_fu_975", "Port" : "rtl_key_r"},
					{"ID" : "10", "SubInstance" : "grp_EP1_fu_939", "Port" : "rtl_key_r"},
					{"ID" : "5", "SubInstance" : "grp_MAJ_fu_894", "Port" : "rtl_key_r"},
					{"ID" : "8", "SubInstance" : "grp_MAJ_fu_921", "Port" : "rtl_key_r"},
					{"ID" : "16", "SubInstance" : "grp_EP1_fu_982", "Port" : "rtl_key_r"},
					{"ID" : "6", "SubInstance" : "grp_MAJ_fu_903", "Port" : "rtl_key_r"},
					{"ID" : "12", "SubInstance" : "grp_EP1_fu_954", "Port" : "rtl_key_r"},
					{"ID" : "3", "SubInstance" : "grp_MAJ_fu_876", "Port" : "rtl_key_r"},
					{"ID" : "22", "SubInstance" : "grp_EP0_fu_1025", "Port" : "rtl_key_r"},
					{"ID" : "7", "SubInstance" : "grp_MAJ_fu_912", "Port" : "rtl_key_r"},
					{"ID" : "20", "SubInstance" : "grp_EP0_fu_1011", "Port" : "rtl_key_r"},
					{"ID" : "36", "SubInstance" : "grp_SIG0_fu_1123", "Port" : "rtl_key_r"},
					{"ID" : "37", "SubInstance" : "grp_SIG0_fu_1130", "Port" : "rtl_key_r"},
					{"ID" : "39", "SubInstance" : "grp_CH_fu_1149", "Port" : "rtl_key_r"},
					{"ID" : "26", "SubInstance" : "grp_SIG1_fu_1053", "Port" : "rtl_key_r"},
					{"ID" : "28", "SubInstance" : "grp_SIG1_fu_1067", "Port" : "rtl_key_r"},
					{"ID" : "30", "SubInstance" : "grp_SIG1_fu_1081", "Port" : "rtl_key_r"},
					{"ID" : "32", "SubInstance" : "grp_SIG0_fu_1095", "Port" : "rtl_key_r"},
					{"ID" : "38", "SubInstance" : "grp_CH_fu_1137", "Port" : "rtl_key_r"},
					{"ID" : "44", "SubInstance" : "grp_CH_fu_1194", "Port" : "rtl_key_r"},
					{"ID" : "33", "SubInstance" : "grp_SIG0_fu_1102", "Port" : "rtl_key_r"},
					{"ID" : "24", "SubInstance" : "grp_EP0_fu_1039", "Port" : "rtl_key_r"},
					{"ID" : "43", "SubInstance" : "grp_CH_fu_1185", "Port" : "rtl_key_r"},
					{"ID" : "40", "SubInstance" : "grp_CH_fu_1158", "Port" : "rtl_key_r"},
					{"ID" : "42", "SubInstance" : "grp_CH_fu_1176", "Port" : "rtl_key_r"},
					{"ID" : "25", "SubInstance" : "grp_EP0_fu_1046", "Port" : "rtl_key_r"},
					{"ID" : "29", "SubInstance" : "grp_SIG1_fu_1074", "Port" : "rtl_key_r"},
					{"ID" : "35", "SubInstance" : "grp_SIG0_fu_1116", "Port" : "rtl_key_r"},
					{"ID" : "34", "SubInstance" : "grp_SIG0_fu_1109", "Port" : "rtl_key_r"},
					{"ID" : "23", "SubInstance" : "grp_EP0_fu_1032", "Port" : "rtl_key_r"},
					{"ID" : "27", "SubInstance" : "grp_SIG1_fu_1060", "Port" : "rtl_key_r"},
					{"ID" : "31", "SubInstance" : "grp_SIG1_fu_1088", "Port" : "rtl_key_r"},
					{"ID" : "45", "SubInstance" : "grp_CH_fu_1203", "Port" : "rtl_key_r"},
					{"ID" : "41", "SubInstance" : "grp_CH_fu_1167", "Port" : "rtl_key_r"}]}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_MAJ_fu_864", "Parent" : "1",
		"CDFG" : "MAJ",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "y", "Type" : "None", "Direction" : "I"},
			{"Name" : "z", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_MAJ_fu_876", "Parent" : "1",
		"CDFG" : "MAJ",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "y", "Type" : "None", "Direction" : "I"},
			{"Name" : "z", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_MAJ_fu_885", "Parent" : "1",
		"CDFG" : "MAJ",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "y", "Type" : "None", "Direction" : "I"},
			{"Name" : "z", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_MAJ_fu_894", "Parent" : "1",
		"CDFG" : "MAJ",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "y", "Type" : "None", "Direction" : "I"},
			{"Name" : "z", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_MAJ_fu_903", "Parent" : "1",
		"CDFG" : "MAJ",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "y", "Type" : "None", "Direction" : "I"},
			{"Name" : "z", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_MAJ_fu_912", "Parent" : "1",
		"CDFG" : "MAJ",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "y", "Type" : "None", "Direction" : "I"},
			{"Name" : "z", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_MAJ_fu_921", "Parent" : "1",
		"CDFG" : "MAJ",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "y", "Type" : "None", "Direction" : "I"},
			{"Name" : "z", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_MAJ_fu_930", "Parent" : "1",
		"CDFG" : "MAJ",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "y", "Type" : "None", "Direction" : "I"},
			{"Name" : "z", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_EP1_fu_939", "Parent" : "1",
		"CDFG" : "EP1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_EP1_fu_947", "Parent" : "1",
		"CDFG" : "EP1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_EP1_fu_954", "Parent" : "1",
		"CDFG" : "EP1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_EP1_fu_961", "Parent" : "1",
		"CDFG" : "EP1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_EP1_fu_968", "Parent" : "1",
		"CDFG" : "EP1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_EP1_fu_975", "Parent" : "1",
		"CDFG" : "EP1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_EP1_fu_982", "Parent" : "1",
		"CDFG" : "EP1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_EP1_fu_989", "Parent" : "1",
		"CDFG" : "EP1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_EP0_fu_996", "Parent" : "1",
		"CDFG" : "EP0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_EP0_fu_1004", "Parent" : "1",
		"CDFG" : "EP0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_EP0_fu_1011", "Parent" : "1",
		"CDFG" : "EP0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_EP0_fu_1018", "Parent" : "1",
		"CDFG" : "EP0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_EP0_fu_1025", "Parent" : "1",
		"CDFG" : "EP0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_EP0_fu_1032", "Parent" : "1",
		"CDFG" : "EP0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_EP0_fu_1039", "Parent" : "1",
		"CDFG" : "EP0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_EP0_fu_1046", "Parent" : "1",
		"CDFG" : "EP0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_SIG1_fu_1053", "Parent" : "1",
		"CDFG" : "SIG1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_SIG1_fu_1060", "Parent" : "1",
		"CDFG" : "SIG1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_SIG1_fu_1067", "Parent" : "1",
		"CDFG" : "SIG1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_SIG1_fu_1074", "Parent" : "1",
		"CDFG" : "SIG1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_SIG1_fu_1081", "Parent" : "1",
		"CDFG" : "SIG1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_SIG1_fu_1088", "Parent" : "1",
		"CDFG" : "SIG1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_SIG0_fu_1095", "Parent" : "1",
		"CDFG" : "SIG0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_SIG0_fu_1102", "Parent" : "1",
		"CDFG" : "SIG0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_SIG0_fu_1109", "Parent" : "1",
		"CDFG" : "SIG0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_SIG0_fu_1116", "Parent" : "1",
		"CDFG" : "SIG0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_SIG0_fu_1123", "Parent" : "1",
		"CDFG" : "SIG0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_SIG0_fu_1130", "Parent" : "1",
		"CDFG" : "SIG0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_CH_fu_1137", "Parent" : "1",
		"CDFG" : "CH",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "y", "Type" : "None", "Direction" : "I"},
			{"Name" : "z", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_CH_fu_1149", "Parent" : "1",
		"CDFG" : "CH",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "y", "Type" : "None", "Direction" : "I"},
			{"Name" : "z", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_CH_fu_1158", "Parent" : "1",
		"CDFG" : "CH",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "y", "Type" : "None", "Direction" : "I"},
			{"Name" : "z", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_CH_fu_1167", "Parent" : "1",
		"CDFG" : "CH",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "y", "Type" : "None", "Direction" : "I"},
			{"Name" : "z", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_CH_fu_1176", "Parent" : "1",
		"CDFG" : "CH",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "y", "Type" : "None", "Direction" : "I"},
			{"Name" : "z", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_CH_fu_1185", "Parent" : "1",
		"CDFG" : "CH",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "y", "Type" : "None", "Direction" : "I"},
			{"Name" : "z", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_CH_fu_1194", "Parent" : "1",
		"CDFG" : "CH",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "y", "Type" : "None", "Direction" : "I"},
			{"Name" : "z", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha256_transform_fu_248.grp_CH_fu_1203", "Parent" : "1",
		"CDFG" : "CH",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "y", "Type" : "None", "Direction" : "I"},
			{"Name" : "z", "Type" : "None", "Direction" : "I"},
			{"Name" : "rtl_key_r", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	sha256_update {
		ctx_data_0 {Type IO LastRead 8 FirstWrite -1}
		ctx_data_1 {Type IO LastRead 8 FirstWrite -1}
		ctx_data_2 {Type IO LastRead 8 FirstWrite -1}
		ctx_data_3 {Type IO LastRead 8 FirstWrite -1}
		ctx_datalen_read {Type I LastRead 0 FirstWrite -1}
		p_read1 {Type I LastRead 0 FirstWrite -1}
		p_read2 {Type I LastRead 0 FirstWrite -1}
		p_read3 {Type I LastRead 0 FirstWrite -1}
		p_read4 {Type I LastRead 0 FirstWrite -1}
		p_read5 {Type I LastRead 0 FirstWrite -1}
		p_read6 {Type I LastRead 0 FirstWrite -1}
		p_read7 {Type I LastRead 0 FirstWrite -1}
		p_read8 {Type I LastRead 0 FirstWrite -1}
		data {Type I LastRead 1 FirstWrite -1}
		len {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	sha256_transform {
		ctx_state_0_read {Type I LastRead 0 FirstWrite -1}
		ctx_state_1_read {Type I LastRead 0 FirstWrite -1}
		ctx_state_2_read {Type I LastRead 0 FirstWrite -1}
		ctx_state_3_read {Type I LastRead 2 FirstWrite -1}
		ctx_state_4_read {Type I LastRead 0 FirstWrite -1}
		ctx_state_5_read {Type I LastRead 0 FirstWrite -1}
		ctx_state_6_read {Type I LastRead 0 FirstWrite -1}
		ctx_state_7_read {Type I LastRead 2 FirstWrite -1}
		data_0 {Type I LastRead 8 FirstWrite -1}
		data_1 {Type I LastRead 8 FirstWrite -1}
		data_2 {Type I LastRead 8 FirstWrite -1}
		data_3 {Type I LastRead 8 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	MAJ {
		x {Type I LastRead 0 FirstWrite -1}
		y {Type I LastRead 0 FirstWrite -1}
		z {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	MAJ {
		x {Type I LastRead 0 FirstWrite -1}
		y {Type I LastRead 0 FirstWrite -1}
		z {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	MAJ {
		x {Type I LastRead 0 FirstWrite -1}
		y {Type I LastRead 0 FirstWrite -1}
		z {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	MAJ {
		x {Type I LastRead 0 FirstWrite -1}
		y {Type I LastRead 0 FirstWrite -1}
		z {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	MAJ {
		x {Type I LastRead 0 FirstWrite -1}
		y {Type I LastRead 0 FirstWrite -1}
		z {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	MAJ {
		x {Type I LastRead 0 FirstWrite -1}
		y {Type I LastRead 0 FirstWrite -1}
		z {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	MAJ {
		x {Type I LastRead 0 FirstWrite -1}
		y {Type I LastRead 0 FirstWrite -1}
		z {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	MAJ {
		x {Type I LastRead 0 FirstWrite -1}
		y {Type I LastRead 0 FirstWrite -1}
		z {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	EP1 {
		x {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	EP1 {
		x {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	EP1 {
		x {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	EP1 {
		x {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	EP1 {
		x {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	EP1 {
		x {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	EP1 {
		x {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	EP1 {
		x {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	EP0 {
		x {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	EP0 {
		x {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	EP0 {
		x {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	EP0 {
		x {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	EP0 {
		x {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	EP0 {
		x {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	EP0 {
		x {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	EP0 {
		x {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	SIG1 {
		x {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	SIG1 {
		x {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	SIG1 {
		x {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	SIG1 {
		x {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	SIG1 {
		x {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	SIG1 {
		x {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	SIG0 {
		x {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	SIG0 {
		x {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	SIG0 {
		x {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	SIG0 {
		x {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	SIG0 {
		x {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	SIG0 {
		x {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	CH {
		x {Type I LastRead 0 FirstWrite -1}
		y {Type I LastRead 0 FirstWrite -1}
		z {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	CH {
		x {Type I LastRead 0 FirstWrite -1}
		y {Type I LastRead 0 FirstWrite -1}
		z {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	CH {
		x {Type I LastRead 0 FirstWrite -1}
		y {Type I LastRead 0 FirstWrite -1}
		z {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	CH {
		x {Type I LastRead 0 FirstWrite -1}
		y {Type I LastRead 0 FirstWrite -1}
		z {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	CH {
		x {Type I LastRead 0 FirstWrite -1}
		y {Type I LastRead 0 FirstWrite -1}
		z {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	CH {
		x {Type I LastRead 0 FirstWrite -1}
		y {Type I LastRead 0 FirstWrite -1}
		z {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	CH {
		x {Type I LastRead 0 FirstWrite -1}
		y {Type I LastRead 0 FirstWrite -1}
		z {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}
	CH {
		x {Type I LastRead 0 FirstWrite -1}
		y {Type I LastRead 0 FirstWrite -1}
		z {Type I LastRead 0 FirstWrite -1}
		rtl_key_r {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1", "Max" : "141"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "141"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	ctx_data_0 { ap_memory {  { ctx_data_0_address0 mem_address 1 4 }  { ctx_data_0_ce0 mem_ce 1 1 }  { ctx_data_0_we0 mem_we 1 1 }  { ctx_data_0_d0 mem_din 1 8 }  { ctx_data_0_q0 mem_dout 0 8 }  { ctx_data_0_address1 MemPortADDR2 1 4 }  { ctx_data_0_ce1 MemPortCE2 1 1 }  { ctx_data_0_q1 MemPortDOUT2 0 8 } } }
	ctx_data_1 { ap_memory {  { ctx_data_1_address0 mem_address 1 4 }  { ctx_data_1_ce0 mem_ce 1 1 }  { ctx_data_1_we0 mem_we 1 1 }  { ctx_data_1_d0 mem_din 1 8 }  { ctx_data_1_q0 mem_dout 0 8 }  { ctx_data_1_address1 MemPortADDR2 1 4 }  { ctx_data_1_ce1 MemPortCE2 1 1 }  { ctx_data_1_q1 MemPortDOUT2 0 8 } } }
	ctx_data_2 { ap_memory {  { ctx_data_2_address0 mem_address 1 4 }  { ctx_data_2_ce0 mem_ce 1 1 }  { ctx_data_2_we0 mem_we 1 1 }  { ctx_data_2_d0 mem_din 1 8 }  { ctx_data_2_q0 mem_dout 0 8 }  { ctx_data_2_address1 MemPortADDR2 1 4 }  { ctx_data_2_ce1 MemPortCE2 1 1 }  { ctx_data_2_q1 MemPortDOUT2 0 8 } } }
	ctx_data_3 { ap_memory {  { ctx_data_3_address0 mem_address 1 4 }  { ctx_data_3_ce0 mem_ce 1 1 }  { ctx_data_3_we0 mem_we 1 1 }  { ctx_data_3_d0 mem_din 1 8 }  { ctx_data_3_q0 mem_dout 0 8 }  { ctx_data_3_address1 MemPortADDR2 1 4 }  { ctx_data_3_ce1 MemPortCE2 1 1 }  { ctx_data_3_q1 MemPortDOUT2 0 8 } } }
	ctx_datalen_read { ap_none {  { ctx_datalen_read in_data 0 32 } } }
	p_read1 { ap_none {  { p_read1 in_data 0 32 } } }
	p_read2 { ap_none {  { p_read2 in_data 0 32 } } }
	p_read3 { ap_none {  { p_read3 in_data 0 32 } } }
	p_read4 { ap_none {  { p_read4 in_data 0 32 } } }
	p_read5 { ap_none {  { p_read5 in_data 0 32 } } }
	p_read6 { ap_none {  { p_read6 in_data 0 32 } } }
	p_read7 { ap_none {  { p_read7 in_data 0 32 } } }
	p_read8 { ap_none {  { p_read8 in_data 0 32 } } }
	data { ap_memory {  { data_address0 mem_address 1 6 }  { data_ce0 mem_ce 1 1 }  { data_q0 mem_dout 0 8 } } }
	len { ap_none {  { len in_data 0 32 } } }
	rtl_key_r { ap_none {  { rtl_key_r in_data 0 32 } } }
}
