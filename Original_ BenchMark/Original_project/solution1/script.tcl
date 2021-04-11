############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project Original_project
set_top sha256
add_files sha256.c
add_files sha256_impl.c
add_files -tb sha256_tb.c
open_solution "solution1"
set_part {xc7z020clg484-1} -tool vivado
create_clock -period 10 -name default
#source "./Original_project/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
