// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module sha256_update (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        ctx_data_0_address0,
        ctx_data_0_ce0,
        ctx_data_0_we0,
        ctx_data_0_d0,
        ctx_data_0_q0,
        ctx_data_0_address1,
        ctx_data_0_ce1,
        ctx_data_0_q1,
        ctx_data_1_address0,
        ctx_data_1_ce0,
        ctx_data_1_we0,
        ctx_data_1_d0,
        ctx_data_1_q0,
        ctx_data_1_address1,
        ctx_data_1_ce1,
        ctx_data_1_q1,
        ctx_data_2_address0,
        ctx_data_2_ce0,
        ctx_data_2_we0,
        ctx_data_2_d0,
        ctx_data_2_q0,
        ctx_data_2_address1,
        ctx_data_2_ce1,
        ctx_data_2_q1,
        ctx_data_3_address0,
        ctx_data_3_ce0,
        ctx_data_3_we0,
        ctx_data_3_d0,
        ctx_data_3_q0,
        ctx_data_3_address1,
        ctx_data_3_ce1,
        ctx_data_3_q1,
        ctx_datalen_read,
        p_read1,
        p_read2,
        p_read3,
        p_read4,
        p_read5,
        p_read6,
        p_read7,
        p_read8,
        data_address0,
        data_ce0,
        data_q0,
        len,
        ap_return_0,
        ap_return_1,
        ap_return_2,
        ap_return_3,
        ap_return_4,
        ap_return_5,
        ap_return_6,
        ap_return_7,
        ap_return_8
);

parameter    ap_ST_fsm_state1 = 108'd1;
parameter    ap_ST_fsm_state2 = 108'd2;
parameter    ap_ST_fsm_state3 = 108'd4;
parameter    ap_ST_fsm_state4 = 108'd8;
parameter    ap_ST_fsm_state5 = 108'd16;
parameter    ap_ST_fsm_state6 = 108'd32;
parameter    ap_ST_fsm_state7 = 108'd64;
parameter    ap_ST_fsm_state8 = 108'd128;
parameter    ap_ST_fsm_state9 = 108'd256;
parameter    ap_ST_fsm_state10 = 108'd512;
parameter    ap_ST_fsm_state11 = 108'd1024;
parameter    ap_ST_fsm_state12 = 108'd2048;
parameter    ap_ST_fsm_state13 = 108'd4096;
parameter    ap_ST_fsm_state14 = 108'd8192;
parameter    ap_ST_fsm_state15 = 108'd16384;
parameter    ap_ST_fsm_state16 = 108'd32768;
parameter    ap_ST_fsm_state17 = 108'd65536;
parameter    ap_ST_fsm_state18 = 108'd131072;
parameter    ap_ST_fsm_state19 = 108'd262144;
parameter    ap_ST_fsm_state20 = 108'd524288;
parameter    ap_ST_fsm_state21 = 108'd1048576;
parameter    ap_ST_fsm_state22 = 108'd2097152;
parameter    ap_ST_fsm_state23 = 108'd4194304;
parameter    ap_ST_fsm_state24 = 108'd8388608;
parameter    ap_ST_fsm_state25 = 108'd16777216;
parameter    ap_ST_fsm_state26 = 108'd33554432;
parameter    ap_ST_fsm_state27 = 108'd67108864;
parameter    ap_ST_fsm_state28 = 108'd134217728;
parameter    ap_ST_fsm_state29 = 108'd268435456;
parameter    ap_ST_fsm_state30 = 108'd536870912;
parameter    ap_ST_fsm_state31 = 108'd1073741824;
parameter    ap_ST_fsm_state32 = 108'd2147483648;
parameter    ap_ST_fsm_state33 = 108'd4294967296;
parameter    ap_ST_fsm_state34 = 108'd8589934592;
parameter    ap_ST_fsm_state35 = 108'd17179869184;
parameter    ap_ST_fsm_state36 = 108'd34359738368;
parameter    ap_ST_fsm_state37 = 108'd68719476736;
parameter    ap_ST_fsm_state38 = 108'd137438953472;
parameter    ap_ST_fsm_state39 = 108'd274877906944;
parameter    ap_ST_fsm_state40 = 108'd549755813888;
parameter    ap_ST_fsm_state41 = 108'd1099511627776;
parameter    ap_ST_fsm_state42 = 108'd2199023255552;
parameter    ap_ST_fsm_state43 = 108'd4398046511104;
parameter    ap_ST_fsm_state44 = 108'd8796093022208;
parameter    ap_ST_fsm_state45 = 108'd17592186044416;
parameter    ap_ST_fsm_state46 = 108'd35184372088832;
parameter    ap_ST_fsm_state47 = 108'd70368744177664;
parameter    ap_ST_fsm_state48 = 108'd140737488355328;
parameter    ap_ST_fsm_state49 = 108'd281474976710656;
parameter    ap_ST_fsm_state50 = 108'd562949953421312;
parameter    ap_ST_fsm_state51 = 108'd1125899906842624;
parameter    ap_ST_fsm_state52 = 108'd2251799813685248;
parameter    ap_ST_fsm_state53 = 108'd4503599627370496;
parameter    ap_ST_fsm_state54 = 108'd9007199254740992;
parameter    ap_ST_fsm_state55 = 108'd18014398509481984;
parameter    ap_ST_fsm_state56 = 108'd36028797018963968;
parameter    ap_ST_fsm_state57 = 108'd72057594037927936;
parameter    ap_ST_fsm_state58 = 108'd144115188075855872;
parameter    ap_ST_fsm_state59 = 108'd288230376151711744;
parameter    ap_ST_fsm_state60 = 108'd576460752303423488;
parameter    ap_ST_fsm_state61 = 108'd1152921504606846976;
parameter    ap_ST_fsm_state62 = 108'd2305843009213693952;
parameter    ap_ST_fsm_state63 = 108'd4611686018427387904;
parameter    ap_ST_fsm_state64 = 108'd9223372036854775808;
parameter    ap_ST_fsm_state65 = 108'd18446744073709551616;
parameter    ap_ST_fsm_state66 = 108'd36893488147419103232;
parameter    ap_ST_fsm_state67 = 108'd73786976294838206464;
parameter    ap_ST_fsm_state68 = 108'd147573952589676412928;
parameter    ap_ST_fsm_state69 = 108'd295147905179352825856;
parameter    ap_ST_fsm_state70 = 108'd590295810358705651712;
parameter    ap_ST_fsm_state71 = 108'd1180591620717411303424;
parameter    ap_ST_fsm_state72 = 108'd2361183241434822606848;
parameter    ap_ST_fsm_state73 = 108'd4722366482869645213696;
parameter    ap_ST_fsm_state74 = 108'd9444732965739290427392;
parameter    ap_ST_fsm_state75 = 108'd18889465931478580854784;
parameter    ap_ST_fsm_state76 = 108'd37778931862957161709568;
parameter    ap_ST_fsm_state77 = 108'd75557863725914323419136;
parameter    ap_ST_fsm_state78 = 108'd151115727451828646838272;
parameter    ap_ST_fsm_state79 = 108'd302231454903657293676544;
parameter    ap_ST_fsm_state80 = 108'd604462909807314587353088;
parameter    ap_ST_fsm_state81 = 108'd1208925819614629174706176;
parameter    ap_ST_fsm_state82 = 108'd2417851639229258349412352;
parameter    ap_ST_fsm_state83 = 108'd4835703278458516698824704;
parameter    ap_ST_fsm_state84 = 108'd9671406556917033397649408;
parameter    ap_ST_fsm_state85 = 108'd19342813113834066795298816;
parameter    ap_ST_fsm_state86 = 108'd38685626227668133590597632;
parameter    ap_ST_fsm_state87 = 108'd77371252455336267181195264;
parameter    ap_ST_fsm_state88 = 108'd154742504910672534362390528;
parameter    ap_ST_fsm_state89 = 108'd309485009821345068724781056;
parameter    ap_ST_fsm_state90 = 108'd618970019642690137449562112;
parameter    ap_ST_fsm_state91 = 108'd1237940039285380274899124224;
parameter    ap_ST_fsm_state92 = 108'd2475880078570760549798248448;
parameter    ap_ST_fsm_state93 = 108'd4951760157141521099596496896;
parameter    ap_ST_fsm_state94 = 108'd9903520314283042199192993792;
parameter    ap_ST_fsm_state95 = 108'd19807040628566084398385987584;
parameter    ap_ST_fsm_state96 = 108'd39614081257132168796771975168;
parameter    ap_ST_fsm_state97 = 108'd79228162514264337593543950336;
parameter    ap_ST_fsm_state98 = 108'd158456325028528675187087900672;
parameter    ap_ST_fsm_state99 = 108'd316912650057057350374175801344;
parameter    ap_ST_fsm_state100 = 108'd633825300114114700748351602688;
parameter    ap_ST_fsm_state101 = 108'd1267650600228229401496703205376;
parameter    ap_ST_fsm_state102 = 108'd2535301200456458802993406410752;
parameter    ap_ST_fsm_state103 = 108'd5070602400912917605986812821504;
parameter    ap_ST_fsm_state104 = 108'd10141204801825835211973625643008;
parameter    ap_ST_fsm_state105 = 108'd20282409603651670423947251286016;
parameter    ap_ST_fsm_state106 = 108'd40564819207303340847894502572032;
parameter    ap_ST_fsm_state107 = 108'd81129638414606681695789005144064;
parameter    ap_ST_fsm_state108 = 108'd162259276829213363391578010288128;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [3:0] ctx_data_0_address0;
output   ctx_data_0_ce0;
output   ctx_data_0_we0;
output  [7:0] ctx_data_0_d0;
input  [7:0] ctx_data_0_q0;
output  [3:0] ctx_data_0_address1;
output   ctx_data_0_ce1;
input  [7:0] ctx_data_0_q1;
output  [3:0] ctx_data_1_address0;
output   ctx_data_1_ce0;
output   ctx_data_1_we0;
output  [7:0] ctx_data_1_d0;
input  [7:0] ctx_data_1_q0;
output  [3:0] ctx_data_1_address1;
output   ctx_data_1_ce1;
input  [7:0] ctx_data_1_q1;
output  [3:0] ctx_data_2_address0;
output   ctx_data_2_ce0;
output   ctx_data_2_we0;
output  [7:0] ctx_data_2_d0;
input  [7:0] ctx_data_2_q0;
output  [3:0] ctx_data_2_address1;
output   ctx_data_2_ce1;
input  [7:0] ctx_data_2_q1;
output  [3:0] ctx_data_3_address0;
output   ctx_data_3_ce0;
output   ctx_data_3_we0;
output  [7:0] ctx_data_3_d0;
input  [7:0] ctx_data_3_q0;
output  [3:0] ctx_data_3_address1;
output   ctx_data_3_ce1;
input  [7:0] ctx_data_3_q1;
input  [31:0] ctx_datalen_read;
input  [31:0] p_read1;
input  [31:0] p_read2;
input  [31:0] p_read3;
input  [31:0] p_read4;
input  [31:0] p_read5;
input  [31:0] p_read6;
input  [31:0] p_read7;
input  [31:0] p_read8;
output  [5:0] data_address0;
output   data_ce0;
input  [7:0] data_q0;
input  [31:0] len;
output  [31:0] ap_return_0;
output  [31:0] ap_return_1;
output  [31:0] ap_return_2;
output  [31:0] ap_return_3;
output  [31:0] ap_return_4;
output  [31:0] ap_return_5;
output  [31:0] ap_return_6;
output  [31:0] ap_return_7;
output  [31:0] ap_return_8;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[3:0] ctx_data_0_address0;
reg ctx_data_0_ce0;
reg ctx_data_0_we0;
reg ctx_data_0_ce1;
reg[3:0] ctx_data_1_address0;
reg ctx_data_1_ce0;
reg ctx_data_1_we0;
reg ctx_data_1_ce1;
reg[3:0] ctx_data_2_address0;
reg ctx_data_2_ce0;
reg ctx_data_2_we0;
reg ctx_data_2_ce1;
reg[3:0] ctx_data_3_address0;
reg ctx_data_3_ce0;
reg ctx_data_3_we0;
reg ctx_data_3_ce1;
reg data_ce0;

(* fsm_encoding = "none" *) reg   [107:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [6:0] empty_fu_301_p1;
reg   [6:0] empty_reg_596;
wire   [6:0] i_fu_355_p2;
reg   [6:0] i_reg_604;
wire    ap_CS_fsm_state2;
wire   [0:0] icmp_ln127_fu_350_p2;
wire   [0:0] icmp_ln131_fu_451_p2;
reg   [0:0] icmp_ln131_reg_617;
wire    ap_CS_fsm_state3;
wire    ap_CS_fsm_state9;
reg   [31:0] ctx_state_0_ret_reg_631;
wire    ap_CS_fsm_state107;
reg   [31:0] ctx_state_1_ret_reg_636;
reg   [31:0] ctx_state_2_ret_reg_641;
reg   [31:0] ctx_state_3_ret_reg_646;
reg   [31:0] ctx_state_4_ret_reg_651;
reg   [31:0] ctx_state_5_ret_reg_656;
reg   [31:0] ctx_state_6_ret_reg_661;
reg   [31:0] ctx_state_7_ret_reg_666;
wire    grp_sha256_transform_fu_246_ap_start;
wire    grp_sha256_transform_fu_246_ap_done;
wire    grp_sha256_transform_fu_246_ap_idle;
wire    grp_sha256_transform_fu_246_ap_ready;
wire   [3:0] grp_sha256_transform_fu_246_data_0_address0;
wire    grp_sha256_transform_fu_246_data_0_ce0;
wire   [3:0] grp_sha256_transform_fu_246_data_0_address1;
wire    grp_sha256_transform_fu_246_data_0_ce1;
wire   [3:0] grp_sha256_transform_fu_246_data_1_address0;
wire    grp_sha256_transform_fu_246_data_1_ce0;
wire   [3:0] grp_sha256_transform_fu_246_data_1_address1;
wire    grp_sha256_transform_fu_246_data_1_ce1;
wire   [3:0] grp_sha256_transform_fu_246_data_2_address0;
wire    grp_sha256_transform_fu_246_data_2_ce0;
wire   [3:0] grp_sha256_transform_fu_246_data_2_address1;
wire    grp_sha256_transform_fu_246_data_2_ce1;
wire   [3:0] grp_sha256_transform_fu_246_data_3_address0;
wire    grp_sha256_transform_fu_246_data_3_ce0;
wire   [3:0] grp_sha256_transform_fu_246_data_3_address1;
wire    grp_sha256_transform_fu_246_data_3_ce1;
wire   [31:0] grp_sha256_transform_fu_246_ap_return_0;
wire   [31:0] grp_sha256_transform_fu_246_ap_return_1;
wire   [31:0] grp_sha256_transform_fu_246_ap_return_2;
wire   [31:0] grp_sha256_transform_fu_246_ap_return_3;
wire   [31:0] grp_sha256_transform_fu_246_ap_return_4;
wire   [31:0] grp_sha256_transform_fu_246_ap_return_5;
wire   [31:0] grp_sha256_transform_fu_246_ap_return_6;
wire   [31:0] grp_sha256_transform_fu_246_ap_return_7;
reg   [6:0] i_0_reg_235;
wire    ap_CS_fsm_state108;
reg    grp_sha256_transform_fu_246_ap_start_reg;
wire    ap_CS_fsm_state8;
reg   [107:0] ap_NS_fsm;
wire    ap_NS_fsm_state9;
wire    ap_CS_fsm_state10;
wire    ap_CS_fsm_state11;
wire    ap_CS_fsm_state12;
wire    ap_CS_fsm_state13;
wire    ap_CS_fsm_state14;
wire    ap_CS_fsm_state15;
wire    ap_CS_fsm_state16;
wire    ap_CS_fsm_state17;
wire   [63:0] zext_ln129_fu_361_p1;
wire   [63:0] zext_ln129_1_fu_434_p1;
reg   [31:0] ctx_datalen_0_fu_70;
wire   [31:0] add_ln130_fu_445_p2;
reg   [31:0] ctx_state_7_0_fu_74;
reg   [31:0] ctx_state_6_0_fu_78;
reg   [31:0] ctx_state_5_0_fu_82;
reg   [31:0] ctx_state_4_0_fu_86;
reg   [31:0] ctx_state_3_0_fu_90;
reg   [31:0] ctx_state_2_0_fu_94;
reg   [31:0] ctx_state_1_0_fu_98;
reg   [31:0] ctx_state_0_0_fu_102;
wire   [1:0] trunc_ln129_fu_420_p1;
wire   [29:0] lshr_ln_fu_424_p4;

// power-on initialization
initial begin
#0 ap_CS_fsm = 108'd1;
#0 grp_sha256_transform_fu_246_ap_start_reg = 1'b0;
end

sha256_transform grp_sha256_transform_fu_246(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_sha256_transform_fu_246_ap_start),
    .ap_done(grp_sha256_transform_fu_246_ap_done),
    .ap_idle(grp_sha256_transform_fu_246_ap_idle),
    .ap_ready(grp_sha256_transform_fu_246_ap_ready),
    .ap_ce(1'b1),
    .ctx_state_0_read(ctx_state_0_0_fu_102),
    .ctx_state_1_read(ctx_state_1_0_fu_98),
    .ctx_state_2_read(ctx_state_2_0_fu_94),
    .ctx_state_3_read(ctx_state_3_0_fu_90),
    .ctx_state_4_read(ctx_state_4_0_fu_86),
    .ctx_state_5_read(ctx_state_5_0_fu_82),
    .ctx_state_6_read(ctx_state_6_0_fu_78),
    .ctx_state_7_read(ctx_state_7_0_fu_74),
    .data_0_address0(grp_sha256_transform_fu_246_data_0_address0),
    .data_0_ce0(grp_sha256_transform_fu_246_data_0_ce0),
    .data_0_q0(ctx_data_0_q0),
    .data_0_address1(grp_sha256_transform_fu_246_data_0_address1),
    .data_0_ce1(grp_sha256_transform_fu_246_data_0_ce1),
    .data_0_q1(ctx_data_0_q1),
    .data_1_address0(grp_sha256_transform_fu_246_data_1_address0),
    .data_1_ce0(grp_sha256_transform_fu_246_data_1_ce0),
    .data_1_q0(ctx_data_1_q0),
    .data_1_address1(grp_sha256_transform_fu_246_data_1_address1),
    .data_1_ce1(grp_sha256_transform_fu_246_data_1_ce1),
    .data_1_q1(ctx_data_1_q1),
    .data_2_address0(grp_sha256_transform_fu_246_data_2_address0),
    .data_2_ce0(grp_sha256_transform_fu_246_data_2_ce0),
    .data_2_q0(ctx_data_2_q0),
    .data_2_address1(grp_sha256_transform_fu_246_data_2_address1),
    .data_2_ce1(grp_sha256_transform_fu_246_data_2_ce1),
    .data_2_q1(ctx_data_2_q1),
    .data_3_address0(grp_sha256_transform_fu_246_data_3_address0),
    .data_3_ce0(grp_sha256_transform_fu_246_data_3_ce0),
    .data_3_q0(ctx_data_3_q0),
    .data_3_address1(grp_sha256_transform_fu_246_data_3_address1),
    .data_3_ce1(grp_sha256_transform_fu_246_data_3_ce1),
    .data_3_q1(ctx_data_3_q1),
    .ap_return_0(grp_sha256_transform_fu_246_ap_return_0),
    .ap_return_1(grp_sha256_transform_fu_246_ap_return_1),
    .ap_return_2(grp_sha256_transform_fu_246_ap_return_2),
    .ap_return_3(grp_sha256_transform_fu_246_ap_return_3),
    .ap_return_4(grp_sha256_transform_fu_246_ap_return_4),
    .ap_return_5(grp_sha256_transform_fu_246_ap_return_5),
    .ap_return_6(grp_sha256_transform_fu_246_ap_return_6),
    .ap_return_7(grp_sha256_transform_fu_246_ap_return_7)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_sha256_transform_fu_246_ap_start_reg <= 1'b0;
    end else begin
        if (((1'b1 == ap_NS_fsm_state9) & (1'b1 == ap_CS_fsm_state8))) begin
            grp_sha256_transform_fu_246_ap_start_reg <= 1'b1;
        end else if ((grp_sha256_transform_fu_246_ap_ready == 1'b1)) begin
            grp_sha256_transform_fu_246_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln131_fu_451_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        ctx_datalen_0_fu_70 <= 32'd0;
    end else if (((icmp_ln131_fu_451_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        ctx_datalen_0_fu_70 <= add_ln130_fu_445_p2;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        ctx_datalen_0_fu_70 <= ctx_datalen_read;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln131_reg_617 == 1'd1) & (1'b1 == ap_CS_fsm_state108))) begin
        ctx_state_0_0_fu_102 <= ctx_state_0_ret_reg_631;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        ctx_state_0_0_fu_102 <= p_read1;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln131_reg_617 == 1'd1) & (1'b1 == ap_CS_fsm_state108))) begin
        ctx_state_1_0_fu_98 <= ctx_state_1_ret_reg_636;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        ctx_state_1_0_fu_98 <= p_read2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln131_reg_617 == 1'd1) & (1'b1 == ap_CS_fsm_state108))) begin
        ctx_state_2_0_fu_94 <= ctx_state_2_ret_reg_641;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        ctx_state_2_0_fu_94 <= p_read3;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln131_reg_617 == 1'd1) & (1'b1 == ap_CS_fsm_state108))) begin
        ctx_state_3_0_fu_90 <= ctx_state_3_ret_reg_646;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        ctx_state_3_0_fu_90 <= p_read4;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln131_reg_617 == 1'd1) & (1'b1 == ap_CS_fsm_state108))) begin
        ctx_state_4_0_fu_86 <= ctx_state_4_ret_reg_651;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        ctx_state_4_0_fu_86 <= p_read5;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln131_reg_617 == 1'd1) & (1'b1 == ap_CS_fsm_state108))) begin
        ctx_state_5_0_fu_82 <= ctx_state_5_ret_reg_656;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        ctx_state_5_0_fu_82 <= p_read6;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln131_reg_617 == 1'd1) & (1'b1 == ap_CS_fsm_state108))) begin
        ctx_state_6_0_fu_78 <= ctx_state_6_ret_reg_661;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        ctx_state_6_0_fu_78 <= p_read7;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln131_reg_617 == 1'd1) & (1'b1 == ap_CS_fsm_state108))) begin
        ctx_state_7_0_fu_74 <= ctx_state_7_ret_reg_666;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        ctx_state_7_0_fu_74 <= p_read8;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state108)) begin
        i_0_reg_235 <= i_reg_604;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        i_0_reg_235 <= 7'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state107)) begin
        ctx_state_0_ret_reg_631 <= grp_sha256_transform_fu_246_ap_return_0;
        ctx_state_1_ret_reg_636 <= grp_sha256_transform_fu_246_ap_return_1;
        ctx_state_2_ret_reg_641 <= grp_sha256_transform_fu_246_ap_return_2;
        ctx_state_3_ret_reg_646 <= grp_sha256_transform_fu_246_ap_return_3;
        ctx_state_4_ret_reg_651 <= grp_sha256_transform_fu_246_ap_return_4;
        ctx_state_5_ret_reg_656 <= grp_sha256_transform_fu_246_ap_return_5;
        ctx_state_6_ret_reg_661 <= grp_sha256_transform_fu_246_ap_return_6;
        ctx_state_7_ret_reg_666 <= grp_sha256_transform_fu_246_ap_return_7;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        empty_reg_596 <= empty_fu_301_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_reg_604 <= i_fu_355_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        icmp_ln131_reg_617 <= icmp_ln131_fu_451_p2;
    end
end

always @ (*) begin
    if ((((icmp_ln127_fu_350_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln127_fu_350_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        ctx_data_0_address0 = zext_ln129_1_fu_434_p1;
    end else if (((1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9))) begin
        ctx_data_0_address0 = grp_sha256_transform_fu_246_data_0_address0;
    end else begin
        ctx_data_0_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        ctx_data_0_ce0 = 1'b1;
    end else if (((1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9))) begin
        ctx_data_0_ce0 = grp_sha256_transform_fu_246_data_0_ce0;
    end else begin
        ctx_data_0_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9))) begin
        ctx_data_0_ce1 = grp_sha256_transform_fu_246_data_0_ce1;
    end else begin
        ctx_data_0_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((trunc_ln129_fu_420_p1 == 2'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        ctx_data_0_we0 = 1'b1;
    end else begin
        ctx_data_0_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        ctx_data_1_address0 = zext_ln129_1_fu_434_p1;
    end else if (((1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9))) begin
        ctx_data_1_address0 = grp_sha256_transform_fu_246_data_1_address0;
    end else begin
        ctx_data_1_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        ctx_data_1_ce0 = 1'b1;
    end else if (((1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9))) begin
        ctx_data_1_ce0 = grp_sha256_transform_fu_246_data_1_ce0;
    end else begin
        ctx_data_1_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9))) begin
        ctx_data_1_ce1 = grp_sha256_transform_fu_246_data_1_ce1;
    end else begin
        ctx_data_1_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((trunc_ln129_fu_420_p1 == 2'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        ctx_data_1_we0 = 1'b1;
    end else begin
        ctx_data_1_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        ctx_data_2_address0 = zext_ln129_1_fu_434_p1;
    end else if (((1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9))) begin
        ctx_data_2_address0 = grp_sha256_transform_fu_246_data_2_address0;
    end else begin
        ctx_data_2_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        ctx_data_2_ce0 = 1'b1;
    end else if (((1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9))) begin
        ctx_data_2_ce0 = grp_sha256_transform_fu_246_data_2_ce0;
    end else begin
        ctx_data_2_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9))) begin
        ctx_data_2_ce1 = grp_sha256_transform_fu_246_data_2_ce1;
    end else begin
        ctx_data_2_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((trunc_ln129_fu_420_p1 == 2'd2) & (1'b1 == ap_CS_fsm_state3))) begin
        ctx_data_2_we0 = 1'b1;
    end else begin
        ctx_data_2_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        ctx_data_3_address0 = zext_ln129_1_fu_434_p1;
    end else if (((1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9))) begin
        ctx_data_3_address0 = grp_sha256_transform_fu_246_data_3_address0;
    end else begin
        ctx_data_3_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        ctx_data_3_ce0 = 1'b1;
    end else if (((1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9))) begin
        ctx_data_3_ce0 = grp_sha256_transform_fu_246_data_3_ce0;
    end else begin
        ctx_data_3_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9))) begin
        ctx_data_3_ce1 = grp_sha256_transform_fu_246_data_3_ce1;
    end else begin
        ctx_data_3_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((trunc_ln129_fu_420_p1 == 2'd3) & (1'b1 == ap_CS_fsm_state3))) begin
        ctx_data_3_we0 = 1'b1;
    end else begin
        ctx_data_3_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        data_ce0 = 1'b1;
    end else begin
        data_ce0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((icmp_ln127_fu_350_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((icmp_ln131_fu_451_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state108;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state12;
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state13;
        end
        ap_ST_fsm_state13 : begin
            ap_NS_fsm = ap_ST_fsm_state14;
        end
        ap_ST_fsm_state14 : begin
            ap_NS_fsm = ap_ST_fsm_state15;
        end
        ap_ST_fsm_state15 : begin
            ap_NS_fsm = ap_ST_fsm_state16;
        end
        ap_ST_fsm_state16 : begin
            ap_NS_fsm = ap_ST_fsm_state17;
        end
        ap_ST_fsm_state17 : begin
            ap_NS_fsm = ap_ST_fsm_state18;
        end
        ap_ST_fsm_state18 : begin
            ap_NS_fsm = ap_ST_fsm_state19;
        end
        ap_ST_fsm_state19 : begin
            ap_NS_fsm = ap_ST_fsm_state20;
        end
        ap_ST_fsm_state20 : begin
            ap_NS_fsm = ap_ST_fsm_state21;
        end
        ap_ST_fsm_state21 : begin
            ap_NS_fsm = ap_ST_fsm_state22;
        end
        ap_ST_fsm_state22 : begin
            ap_NS_fsm = ap_ST_fsm_state23;
        end
        ap_ST_fsm_state23 : begin
            ap_NS_fsm = ap_ST_fsm_state24;
        end
        ap_ST_fsm_state24 : begin
            ap_NS_fsm = ap_ST_fsm_state25;
        end
        ap_ST_fsm_state25 : begin
            ap_NS_fsm = ap_ST_fsm_state26;
        end
        ap_ST_fsm_state26 : begin
            ap_NS_fsm = ap_ST_fsm_state27;
        end
        ap_ST_fsm_state27 : begin
            ap_NS_fsm = ap_ST_fsm_state28;
        end
        ap_ST_fsm_state28 : begin
            ap_NS_fsm = ap_ST_fsm_state29;
        end
        ap_ST_fsm_state29 : begin
            ap_NS_fsm = ap_ST_fsm_state30;
        end
        ap_ST_fsm_state30 : begin
            ap_NS_fsm = ap_ST_fsm_state31;
        end
        ap_ST_fsm_state31 : begin
            ap_NS_fsm = ap_ST_fsm_state32;
        end
        ap_ST_fsm_state32 : begin
            ap_NS_fsm = ap_ST_fsm_state33;
        end
        ap_ST_fsm_state33 : begin
            ap_NS_fsm = ap_ST_fsm_state34;
        end
        ap_ST_fsm_state34 : begin
            ap_NS_fsm = ap_ST_fsm_state35;
        end
        ap_ST_fsm_state35 : begin
            ap_NS_fsm = ap_ST_fsm_state36;
        end
        ap_ST_fsm_state36 : begin
            ap_NS_fsm = ap_ST_fsm_state37;
        end
        ap_ST_fsm_state37 : begin
            ap_NS_fsm = ap_ST_fsm_state38;
        end
        ap_ST_fsm_state38 : begin
            ap_NS_fsm = ap_ST_fsm_state39;
        end
        ap_ST_fsm_state39 : begin
            ap_NS_fsm = ap_ST_fsm_state40;
        end
        ap_ST_fsm_state40 : begin
            ap_NS_fsm = ap_ST_fsm_state41;
        end
        ap_ST_fsm_state41 : begin
            ap_NS_fsm = ap_ST_fsm_state42;
        end
        ap_ST_fsm_state42 : begin
            ap_NS_fsm = ap_ST_fsm_state43;
        end
        ap_ST_fsm_state43 : begin
            ap_NS_fsm = ap_ST_fsm_state44;
        end
        ap_ST_fsm_state44 : begin
            ap_NS_fsm = ap_ST_fsm_state45;
        end
        ap_ST_fsm_state45 : begin
            ap_NS_fsm = ap_ST_fsm_state46;
        end
        ap_ST_fsm_state46 : begin
            ap_NS_fsm = ap_ST_fsm_state47;
        end
        ap_ST_fsm_state47 : begin
            ap_NS_fsm = ap_ST_fsm_state48;
        end
        ap_ST_fsm_state48 : begin
            ap_NS_fsm = ap_ST_fsm_state49;
        end
        ap_ST_fsm_state49 : begin
            ap_NS_fsm = ap_ST_fsm_state50;
        end
        ap_ST_fsm_state50 : begin
            ap_NS_fsm = ap_ST_fsm_state51;
        end
        ap_ST_fsm_state51 : begin
            ap_NS_fsm = ap_ST_fsm_state52;
        end
        ap_ST_fsm_state52 : begin
            ap_NS_fsm = ap_ST_fsm_state53;
        end
        ap_ST_fsm_state53 : begin
            ap_NS_fsm = ap_ST_fsm_state54;
        end
        ap_ST_fsm_state54 : begin
            ap_NS_fsm = ap_ST_fsm_state55;
        end
        ap_ST_fsm_state55 : begin
            ap_NS_fsm = ap_ST_fsm_state56;
        end
        ap_ST_fsm_state56 : begin
            ap_NS_fsm = ap_ST_fsm_state57;
        end
        ap_ST_fsm_state57 : begin
            ap_NS_fsm = ap_ST_fsm_state58;
        end
        ap_ST_fsm_state58 : begin
            ap_NS_fsm = ap_ST_fsm_state59;
        end
        ap_ST_fsm_state59 : begin
            ap_NS_fsm = ap_ST_fsm_state60;
        end
        ap_ST_fsm_state60 : begin
            ap_NS_fsm = ap_ST_fsm_state61;
        end
        ap_ST_fsm_state61 : begin
            ap_NS_fsm = ap_ST_fsm_state62;
        end
        ap_ST_fsm_state62 : begin
            ap_NS_fsm = ap_ST_fsm_state63;
        end
        ap_ST_fsm_state63 : begin
            ap_NS_fsm = ap_ST_fsm_state64;
        end
        ap_ST_fsm_state64 : begin
            ap_NS_fsm = ap_ST_fsm_state65;
        end
        ap_ST_fsm_state65 : begin
            ap_NS_fsm = ap_ST_fsm_state66;
        end
        ap_ST_fsm_state66 : begin
            ap_NS_fsm = ap_ST_fsm_state67;
        end
        ap_ST_fsm_state67 : begin
            ap_NS_fsm = ap_ST_fsm_state68;
        end
        ap_ST_fsm_state68 : begin
            ap_NS_fsm = ap_ST_fsm_state69;
        end
        ap_ST_fsm_state69 : begin
            ap_NS_fsm = ap_ST_fsm_state70;
        end
        ap_ST_fsm_state70 : begin
            ap_NS_fsm = ap_ST_fsm_state71;
        end
        ap_ST_fsm_state71 : begin
            ap_NS_fsm = ap_ST_fsm_state72;
        end
        ap_ST_fsm_state72 : begin
            ap_NS_fsm = ap_ST_fsm_state73;
        end
        ap_ST_fsm_state73 : begin
            ap_NS_fsm = ap_ST_fsm_state74;
        end
        ap_ST_fsm_state74 : begin
            ap_NS_fsm = ap_ST_fsm_state75;
        end
        ap_ST_fsm_state75 : begin
            ap_NS_fsm = ap_ST_fsm_state76;
        end
        ap_ST_fsm_state76 : begin
            ap_NS_fsm = ap_ST_fsm_state77;
        end
        ap_ST_fsm_state77 : begin
            ap_NS_fsm = ap_ST_fsm_state78;
        end
        ap_ST_fsm_state78 : begin
            ap_NS_fsm = ap_ST_fsm_state79;
        end
        ap_ST_fsm_state79 : begin
            ap_NS_fsm = ap_ST_fsm_state80;
        end
        ap_ST_fsm_state80 : begin
            ap_NS_fsm = ap_ST_fsm_state81;
        end
        ap_ST_fsm_state81 : begin
            ap_NS_fsm = ap_ST_fsm_state82;
        end
        ap_ST_fsm_state82 : begin
            ap_NS_fsm = ap_ST_fsm_state83;
        end
        ap_ST_fsm_state83 : begin
            ap_NS_fsm = ap_ST_fsm_state84;
        end
        ap_ST_fsm_state84 : begin
            ap_NS_fsm = ap_ST_fsm_state85;
        end
        ap_ST_fsm_state85 : begin
            ap_NS_fsm = ap_ST_fsm_state86;
        end
        ap_ST_fsm_state86 : begin
            ap_NS_fsm = ap_ST_fsm_state87;
        end
        ap_ST_fsm_state87 : begin
            ap_NS_fsm = ap_ST_fsm_state88;
        end
        ap_ST_fsm_state88 : begin
            ap_NS_fsm = ap_ST_fsm_state89;
        end
        ap_ST_fsm_state89 : begin
            ap_NS_fsm = ap_ST_fsm_state90;
        end
        ap_ST_fsm_state90 : begin
            ap_NS_fsm = ap_ST_fsm_state91;
        end
        ap_ST_fsm_state91 : begin
            ap_NS_fsm = ap_ST_fsm_state92;
        end
        ap_ST_fsm_state92 : begin
            ap_NS_fsm = ap_ST_fsm_state93;
        end
        ap_ST_fsm_state93 : begin
            ap_NS_fsm = ap_ST_fsm_state94;
        end
        ap_ST_fsm_state94 : begin
            ap_NS_fsm = ap_ST_fsm_state95;
        end
        ap_ST_fsm_state95 : begin
            ap_NS_fsm = ap_ST_fsm_state96;
        end
        ap_ST_fsm_state96 : begin
            ap_NS_fsm = ap_ST_fsm_state97;
        end
        ap_ST_fsm_state97 : begin
            ap_NS_fsm = ap_ST_fsm_state98;
        end
        ap_ST_fsm_state98 : begin
            ap_NS_fsm = ap_ST_fsm_state99;
        end
        ap_ST_fsm_state99 : begin
            ap_NS_fsm = ap_ST_fsm_state100;
        end
        ap_ST_fsm_state100 : begin
            ap_NS_fsm = ap_ST_fsm_state101;
        end
        ap_ST_fsm_state101 : begin
            ap_NS_fsm = ap_ST_fsm_state102;
        end
        ap_ST_fsm_state102 : begin
            ap_NS_fsm = ap_ST_fsm_state103;
        end
        ap_ST_fsm_state103 : begin
            ap_NS_fsm = ap_ST_fsm_state104;
        end
        ap_ST_fsm_state104 : begin
            ap_NS_fsm = ap_ST_fsm_state105;
        end
        ap_ST_fsm_state105 : begin
            ap_NS_fsm = ap_ST_fsm_state106;
        end
        ap_ST_fsm_state106 : begin
            ap_NS_fsm = ap_ST_fsm_state107;
        end
        ap_ST_fsm_state107 : begin
            ap_NS_fsm = ap_ST_fsm_state108;
        end
        ap_ST_fsm_state108 : begin
            ap_NS_fsm = ap_ST_fsm_state2;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln130_fu_445_p2 = (ctx_datalen_0_fu_70 + 32'd1);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state107 = ap_CS_fsm[32'd106];

assign ap_CS_fsm_state108 = ap_CS_fsm[32'd107];

assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_state12 = ap_CS_fsm[32'd11];

assign ap_CS_fsm_state13 = ap_CS_fsm[32'd12];

assign ap_CS_fsm_state14 = ap_CS_fsm[32'd13];

assign ap_CS_fsm_state15 = ap_CS_fsm[32'd14];

assign ap_CS_fsm_state16 = ap_CS_fsm[32'd15];

assign ap_CS_fsm_state17 = ap_CS_fsm[32'd16];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign ap_NS_fsm_state9 = ap_NS_fsm[32'd8];

assign ap_return_0 = ctx_datalen_0_fu_70;

assign ap_return_1 = ctx_state_0_0_fu_102;

assign ap_return_2 = ctx_state_1_0_fu_98;

assign ap_return_3 = ctx_state_2_0_fu_94;

assign ap_return_4 = ctx_state_3_0_fu_90;

assign ap_return_5 = ctx_state_4_0_fu_86;

assign ap_return_6 = ctx_state_5_0_fu_82;

assign ap_return_7 = ctx_state_6_0_fu_78;

assign ap_return_8 = ctx_state_7_0_fu_74;

assign ctx_data_0_address1 = grp_sha256_transform_fu_246_data_0_address1;

assign ctx_data_0_d0 = data_q0;

assign ctx_data_1_address1 = grp_sha256_transform_fu_246_data_1_address1;

assign ctx_data_1_d0 = data_q0;

assign ctx_data_2_address1 = grp_sha256_transform_fu_246_data_2_address1;

assign ctx_data_2_d0 = data_q0;

assign ctx_data_3_address1 = grp_sha256_transform_fu_246_data_3_address1;

assign ctx_data_3_d0 = data_q0;

assign data_address0 = zext_ln129_fu_361_p1;

assign empty_fu_301_p1 = len[6:0];

assign grp_sha256_transform_fu_246_ap_start = grp_sha256_transform_fu_246_ap_start_reg;

assign i_fu_355_p2 = (i_0_reg_235 + 7'd1);

assign icmp_ln127_fu_350_p2 = ((i_0_reg_235 == empty_reg_596) ? 1'b1 : 1'b0);

assign icmp_ln131_fu_451_p2 = ((add_ln130_fu_445_p2 == 32'd64) ? 1'b1 : 1'b0);

assign lshr_ln_fu_424_p4 = {{ctx_datalen_0_fu_70[31:2]}};

assign trunc_ln129_fu_420_p1 = ctx_datalen_0_fu_70[1:0];

assign zext_ln129_1_fu_434_p1 = lshr_ln_fu_424_p4;

assign zext_ln129_fu_361_p1 = i_0_reg_235;

endmodule //sha256_update
