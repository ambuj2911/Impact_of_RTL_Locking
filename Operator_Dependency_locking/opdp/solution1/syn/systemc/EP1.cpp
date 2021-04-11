// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "EP1.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic EP1::ap_const_logic_1 = sc_dt::Log_1;
const bool EP1::ap_const_boolean_1 = true;
const sc_lv<1> EP1::ap_const_lv1_0 = "0";
const sc_lv<1> EP1::ap_const_lv1_1 = "1";
const sc_lv<32> EP1::ap_const_lv32_2 = "10";
const sc_lv<32> EP1::ap_const_lv32_6 = "110";
const sc_lv<32> EP1::ap_const_lv32_1C = "11100";
const sc_lv<32> EP1::ap_const_lv32_1F = "11111";
const sc_lv<32> EP1::ap_const_lv32_4 = "100";
const sc_lv<32> EP1::ap_const_lv32_16 = "10110";
const sc_lv<32> EP1::ap_const_lv32_A = "1010";
const sc_lv<32> EP1::ap_const_lv32_1A = "11010";
const sc_lv<32> EP1::ap_const_lv32_15 = "10101";
const sc_lv<32> EP1::ap_const_lv32_B = "1011";
const sc_lv<32> EP1::ap_const_lv32_7 = "111";
const sc_lv<32> EP1::ap_const_lv32_19 = "11001";
const sc_logic EP1::ap_const_logic_0 = sc_dt::Log_0;

EP1::EP1(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_phi_mux_p_0_phi_fu_81_p4);
    sensitive << ( xor_ln181_fu_211_p2 );
    sensitive << ( tmp_fu_91_p3 );
    sensitive << ( xor_ln186_1_fu_380_p2 );

    SC_METHOD(thread_ap_ready);

    SC_METHOD(thread_ap_return);
    sensitive << ( ap_phi_mux_p_0_phi_fu_81_p4 );

    SC_METHOD(thread_lshr_ln53_7_fu_163_p4);
    sensitive << ( x );

    SC_METHOD(thread_lshr_ln53_8_fu_222_p4);
    sensitive << ( x );

    SC_METHOD(thread_lshr_ln53_9_fu_274_p4);
    sensitive << ( x );

    SC_METHOD(thread_lshr_ln53_s_fu_326_p4);
    sensitive << ( x );

    SC_METHOD(thread_lshr_ln57_7_fu_181_p4);
    sensitive << ( x );

    SC_METHOD(thread_lshr_ln57_8_fu_240_p4);
    sensitive << ( x );

    SC_METHOD(thread_lshr_ln57_9_fu_292_p4);
    sensitive << ( x );

    SC_METHOD(thread_lshr_ln57_s_fu_344_p4);
    sensitive << ( x );

    SC_METHOD(thread_lshr_ln9_fu_129_p4);
    sensitive << ( x );

    SC_METHOD(thread_lshr_ln_fu_111_p4);
    sensitive << ( x );

    SC_METHOD(thread_or_ln3_fu_143_p3);
    sensitive << ( trunc_ln57_9_fu_139_p1 );
    sensitive << ( lshr_ln9_fu_129_p4 );

    SC_METHOD(thread_or_ln53_7_fu_173_p3);
    sensitive << ( trunc_ln53_10_fu_159_p1 );
    sensitive << ( lshr_ln53_7_fu_163_p4 );

    SC_METHOD(thread_or_ln53_8_fu_232_p3);
    sensitive << ( trunc_ln53_fu_218_p1 );
    sensitive << ( lshr_ln53_8_fu_222_p4 );

    SC_METHOD(thread_or_ln53_9_fu_284_p3);
    sensitive << ( trunc_ln53_7_fu_270_p1 );
    sensitive << ( lshr_ln53_9_fu_274_p4 );

    SC_METHOD(thread_or_ln53_s_fu_336_p3);
    sensitive << ( trunc_ln53_8_fu_322_p1 );
    sensitive << ( lshr_ln53_s_fu_326_p4 );

    SC_METHOD(thread_or_ln57_7_fu_195_p3);
    sensitive << ( trunc_ln57_10_fu_191_p1 );
    sensitive << ( lshr_ln57_7_fu_181_p4 );

    SC_METHOD(thread_or_ln57_8_fu_254_p3);
    sensitive << ( trunc_ln57_fu_250_p1 );
    sensitive << ( lshr_ln57_8_fu_240_p4 );

    SC_METHOD(thread_or_ln57_9_fu_306_p3);
    sensitive << ( trunc_ln57_7_fu_302_p1 );
    sensitive << ( lshr_ln57_9_fu_292_p4 );

    SC_METHOD(thread_or_ln57_s_fu_358_p3);
    sensitive << ( trunc_ln57_8_fu_354_p1 );
    sensitive << ( lshr_ln57_s_fu_344_p4 );

    SC_METHOD(thread_or_ln_fu_121_p3);
    sensitive << ( trunc_ln53_9_fu_107_p1 );
    sensitive << ( lshr_ln_fu_111_p4 );

    SC_METHOD(thread_select_ln51_10_fu_366_p3);
    sensitive << ( tmp_4_fu_99_p3 );
    sensitive << ( or_ln57_s_fu_358_p3 );
    sensitive << ( or_ln53_s_fu_336_p3 );

    SC_METHOD(thread_select_ln51_7_fu_203_p3);
    sensitive << ( tmp_4_fu_99_p3 );
    sensitive << ( or_ln57_7_fu_195_p3 );
    sensitive << ( or_ln53_7_fu_173_p3 );

    SC_METHOD(thread_select_ln51_8_fu_262_p3);
    sensitive << ( tmp_4_fu_99_p3 );
    sensitive << ( or_ln57_8_fu_254_p3 );
    sensitive << ( or_ln53_8_fu_232_p3 );

    SC_METHOD(thread_select_ln51_9_fu_314_p3);
    sensitive << ( tmp_4_fu_99_p3 );
    sensitive << ( or_ln57_9_fu_306_p3 );
    sensitive << ( or_ln53_9_fu_284_p3 );

    SC_METHOD(thread_select_ln51_fu_151_p3);
    sensitive << ( tmp_4_fu_99_p3 );
    sensitive << ( or_ln3_fu_143_p3 );
    sensitive << ( or_ln_fu_121_p3 );

    SC_METHOD(thread_tmp_4_fu_99_p3);
    sensitive << ( rtl_key_r );

    SC_METHOD(thread_tmp_fu_91_p3);
    sensitive << ( rtl_key_r );

    SC_METHOD(thread_trunc_ln53_10_fu_159_p1);
    sensitive << ( x );

    SC_METHOD(thread_trunc_ln53_7_fu_270_p1);
    sensitive << ( x );

    SC_METHOD(thread_trunc_ln53_8_fu_322_p1);
    sensitive << ( x );

    SC_METHOD(thread_trunc_ln53_9_fu_107_p1);
    sensitive << ( x );

    SC_METHOD(thread_trunc_ln53_fu_218_p1);
    sensitive << ( x );

    SC_METHOD(thread_trunc_ln57_10_fu_191_p1);
    sensitive << ( x );

    SC_METHOD(thread_trunc_ln57_7_fu_302_p1);
    sensitive << ( x );

    SC_METHOD(thread_trunc_ln57_8_fu_354_p1);
    sensitive << ( x );

    SC_METHOD(thread_trunc_ln57_9_fu_139_p1);
    sensitive << ( x );

    SC_METHOD(thread_trunc_ln57_fu_250_p1);
    sensitive << ( x );

    SC_METHOD(thread_xor_ln181_fu_211_p2);
    sensitive << ( select_ln51_7_fu_203_p3 );
    sensitive << ( select_ln51_fu_151_p3 );

    SC_METHOD(thread_xor_ln186_1_fu_380_p2);
    sensitive << ( xor_ln186_fu_374_p2 );
    sensitive << ( select_ln51_9_fu_314_p3 );

    SC_METHOD(thread_xor_ln186_fu_374_p2);
    sensitive << ( select_ln51_8_fu_262_p3 );
    sensitive << ( select_ln51_10_fu_366_p3 );

    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "EP1_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, x, "(port)x");
    sc_trace(mVcdFile, rtl_key_r, "(port)rtl_key_r");
    sc_trace(mVcdFile, ap_return, "(port)ap_return");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, xor_ln181_fu_211_p2, "xor_ln181_fu_211_p2");
    sc_trace(mVcdFile, ap_phi_mux_p_0_phi_fu_81_p4, "ap_phi_mux_p_0_phi_fu_81_p4");
    sc_trace(mVcdFile, tmp_fu_91_p3, "tmp_fu_91_p3");
    sc_trace(mVcdFile, xor_ln186_1_fu_380_p2, "xor_ln186_1_fu_380_p2");
    sc_trace(mVcdFile, trunc_ln53_9_fu_107_p1, "trunc_ln53_9_fu_107_p1");
    sc_trace(mVcdFile, lshr_ln_fu_111_p4, "lshr_ln_fu_111_p4");
    sc_trace(mVcdFile, trunc_ln57_9_fu_139_p1, "trunc_ln57_9_fu_139_p1");
    sc_trace(mVcdFile, lshr_ln9_fu_129_p4, "lshr_ln9_fu_129_p4");
    sc_trace(mVcdFile, tmp_4_fu_99_p3, "tmp_4_fu_99_p3");
    sc_trace(mVcdFile, or_ln3_fu_143_p3, "or_ln3_fu_143_p3");
    sc_trace(mVcdFile, or_ln_fu_121_p3, "or_ln_fu_121_p3");
    sc_trace(mVcdFile, trunc_ln53_10_fu_159_p1, "trunc_ln53_10_fu_159_p1");
    sc_trace(mVcdFile, lshr_ln53_7_fu_163_p4, "lshr_ln53_7_fu_163_p4");
    sc_trace(mVcdFile, trunc_ln57_10_fu_191_p1, "trunc_ln57_10_fu_191_p1");
    sc_trace(mVcdFile, lshr_ln57_7_fu_181_p4, "lshr_ln57_7_fu_181_p4");
    sc_trace(mVcdFile, or_ln57_7_fu_195_p3, "or_ln57_7_fu_195_p3");
    sc_trace(mVcdFile, or_ln53_7_fu_173_p3, "or_ln53_7_fu_173_p3");
    sc_trace(mVcdFile, select_ln51_7_fu_203_p3, "select_ln51_7_fu_203_p3");
    sc_trace(mVcdFile, select_ln51_fu_151_p3, "select_ln51_fu_151_p3");
    sc_trace(mVcdFile, trunc_ln53_fu_218_p1, "trunc_ln53_fu_218_p1");
    sc_trace(mVcdFile, lshr_ln53_8_fu_222_p4, "lshr_ln53_8_fu_222_p4");
    sc_trace(mVcdFile, trunc_ln57_fu_250_p1, "trunc_ln57_fu_250_p1");
    sc_trace(mVcdFile, lshr_ln57_8_fu_240_p4, "lshr_ln57_8_fu_240_p4");
    sc_trace(mVcdFile, or_ln57_8_fu_254_p3, "or_ln57_8_fu_254_p3");
    sc_trace(mVcdFile, or_ln53_8_fu_232_p3, "or_ln53_8_fu_232_p3");
    sc_trace(mVcdFile, trunc_ln53_7_fu_270_p1, "trunc_ln53_7_fu_270_p1");
    sc_trace(mVcdFile, lshr_ln53_9_fu_274_p4, "lshr_ln53_9_fu_274_p4");
    sc_trace(mVcdFile, trunc_ln57_7_fu_302_p1, "trunc_ln57_7_fu_302_p1");
    sc_trace(mVcdFile, lshr_ln57_9_fu_292_p4, "lshr_ln57_9_fu_292_p4");
    sc_trace(mVcdFile, or_ln57_9_fu_306_p3, "or_ln57_9_fu_306_p3");
    sc_trace(mVcdFile, or_ln53_9_fu_284_p3, "or_ln53_9_fu_284_p3");
    sc_trace(mVcdFile, trunc_ln53_8_fu_322_p1, "trunc_ln53_8_fu_322_p1");
    sc_trace(mVcdFile, lshr_ln53_s_fu_326_p4, "lshr_ln53_s_fu_326_p4");
    sc_trace(mVcdFile, trunc_ln57_8_fu_354_p1, "trunc_ln57_8_fu_354_p1");
    sc_trace(mVcdFile, lshr_ln57_s_fu_344_p4, "lshr_ln57_s_fu_344_p4");
    sc_trace(mVcdFile, or_ln57_s_fu_358_p3, "or_ln57_s_fu_358_p3");
    sc_trace(mVcdFile, or_ln53_s_fu_336_p3, "or_ln53_s_fu_336_p3");
    sc_trace(mVcdFile, select_ln51_8_fu_262_p3, "select_ln51_8_fu_262_p3");
    sc_trace(mVcdFile, select_ln51_10_fu_366_p3, "select_ln51_10_fu_366_p3");
    sc_trace(mVcdFile, xor_ln186_fu_374_p2, "xor_ln186_fu_374_p2");
    sc_trace(mVcdFile, select_ln51_9_fu_314_p3, "select_ln51_9_fu_314_p3");
#endif

    }
}

EP1::~EP1() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void EP1::thread_ap_phi_mux_p_0_phi_fu_81_p4() {
    if (esl_seteq<1,1,1>(tmp_fu_91_p3.read(), ap_const_lv1_1)) {
        ap_phi_mux_p_0_phi_fu_81_p4 = xor_ln186_1_fu_380_p2.read();
    } else if (esl_seteq<1,1,1>(tmp_fu_91_p3.read(), ap_const_lv1_0)) {
        ap_phi_mux_p_0_phi_fu_81_p4 = xor_ln181_fu_211_p2.read();
    } else {
        ap_phi_mux_p_0_phi_fu_81_p4 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void EP1::thread_ap_ready() {
    ap_ready = ap_const_logic_1;
}

void EP1::thread_ap_return() {
    ap_return = ap_phi_mux_p_0_phi_fu_81_p4.read();
}

void EP1::thread_lshr_ln53_7_fu_163_p4() {
    lshr_ln53_7_fu_163_p4 = x.read().range(31, 22);
}

void EP1::thread_lshr_ln53_8_fu_222_p4() {
    lshr_ln53_8_fu_222_p4 = x.read().range(31, 26);
}

void EP1::thread_lshr_ln53_9_fu_274_p4() {
    lshr_ln53_9_fu_274_p4 = x.read().range(31, 21);
}

void EP1::thread_lshr_ln53_s_fu_326_p4() {
    lshr_ln53_s_fu_326_p4 = x.read().range(31, 7);
}

void EP1::thread_lshr_ln57_7_fu_181_p4() {
    lshr_ln57_7_fu_181_p4 = x.read().range(31, 10);
}

void EP1::thread_lshr_ln57_8_fu_240_p4() {
    lshr_ln57_8_fu_240_p4 = x.read().range(31, 6);
}

void EP1::thread_lshr_ln57_9_fu_292_p4() {
    lshr_ln57_9_fu_292_p4 = x.read().range(31, 11);
}

void EP1::thread_lshr_ln57_s_fu_344_p4() {
    lshr_ln57_s_fu_344_p4 = x.read().range(31, 25);
}

void EP1::thread_lshr_ln9_fu_129_p4() {
    lshr_ln9_fu_129_p4 = x.read().range(31, 4);
}

void EP1::thread_lshr_ln_fu_111_p4() {
    lshr_ln_fu_111_p4 = x.read().range(31, 28);
}

void EP1::thread_or_ln3_fu_143_p3() {
    or_ln3_fu_143_p3 = esl_concat<4,28>(trunc_ln57_9_fu_139_p1.read(), lshr_ln9_fu_129_p4.read());
}

void EP1::thread_or_ln53_7_fu_173_p3() {
    or_ln53_7_fu_173_p3 = esl_concat<22,10>(trunc_ln53_10_fu_159_p1.read(), lshr_ln53_7_fu_163_p4.read());
}

void EP1::thread_or_ln53_8_fu_232_p3() {
    or_ln53_8_fu_232_p3 = esl_concat<26,6>(trunc_ln53_fu_218_p1.read(), lshr_ln53_8_fu_222_p4.read());
}

void EP1::thread_or_ln53_9_fu_284_p3() {
    or_ln53_9_fu_284_p3 = esl_concat<21,11>(trunc_ln53_7_fu_270_p1.read(), lshr_ln53_9_fu_274_p4.read());
}

void EP1::thread_or_ln53_s_fu_336_p3() {
    or_ln53_s_fu_336_p3 = esl_concat<7,25>(trunc_ln53_8_fu_322_p1.read(), lshr_ln53_s_fu_326_p4.read());
}

void EP1::thread_or_ln57_7_fu_195_p3() {
    or_ln57_7_fu_195_p3 = esl_concat<10,22>(trunc_ln57_10_fu_191_p1.read(), lshr_ln57_7_fu_181_p4.read());
}

void EP1::thread_or_ln57_8_fu_254_p3() {
    or_ln57_8_fu_254_p3 = esl_concat<6,26>(trunc_ln57_fu_250_p1.read(), lshr_ln57_8_fu_240_p4.read());
}

void EP1::thread_or_ln57_9_fu_306_p3() {
    or_ln57_9_fu_306_p3 = esl_concat<11,21>(trunc_ln57_7_fu_302_p1.read(), lshr_ln57_9_fu_292_p4.read());
}

void EP1::thread_or_ln57_s_fu_358_p3() {
    or_ln57_s_fu_358_p3 = esl_concat<25,7>(trunc_ln57_8_fu_354_p1.read(), lshr_ln57_s_fu_344_p4.read());
}

void EP1::thread_or_ln_fu_121_p3() {
    or_ln_fu_121_p3 = esl_concat<28,4>(trunc_ln53_9_fu_107_p1.read(), lshr_ln_fu_111_p4.read());
}

void EP1::thread_select_ln51_10_fu_366_p3() {
    select_ln51_10_fu_366_p3 = (!tmp_4_fu_99_p3.read()[0].is_01())? sc_lv<32>(): ((tmp_4_fu_99_p3.read()[0].to_bool())? or_ln57_s_fu_358_p3.read(): or_ln53_s_fu_336_p3.read());
}

void EP1::thread_select_ln51_7_fu_203_p3() {
    select_ln51_7_fu_203_p3 = (!tmp_4_fu_99_p3.read()[0].is_01())? sc_lv<32>(): ((tmp_4_fu_99_p3.read()[0].to_bool())? or_ln57_7_fu_195_p3.read(): or_ln53_7_fu_173_p3.read());
}

void EP1::thread_select_ln51_8_fu_262_p3() {
    select_ln51_8_fu_262_p3 = (!tmp_4_fu_99_p3.read()[0].is_01())? sc_lv<32>(): ((tmp_4_fu_99_p3.read()[0].to_bool())? or_ln57_8_fu_254_p3.read(): or_ln53_8_fu_232_p3.read());
}

void EP1::thread_select_ln51_9_fu_314_p3() {
    select_ln51_9_fu_314_p3 = (!tmp_4_fu_99_p3.read()[0].is_01())? sc_lv<32>(): ((tmp_4_fu_99_p3.read()[0].to_bool())? or_ln57_9_fu_306_p3.read(): or_ln53_9_fu_284_p3.read());
}

void EP1::thread_select_ln51_fu_151_p3() {
    select_ln51_fu_151_p3 = (!tmp_4_fu_99_p3.read()[0].is_01())? sc_lv<32>(): ((tmp_4_fu_99_p3.read()[0].to_bool())? or_ln3_fu_143_p3.read(): or_ln_fu_121_p3.read());
}

void EP1::thread_tmp_4_fu_99_p3() {
    tmp_4_fu_99_p3 = rtl_key_r.read().range(6, 6);
}

void EP1::thread_tmp_fu_91_p3() {
    tmp_fu_91_p3 = rtl_key_r.read().range(2, 2);
}

void EP1::thread_trunc_ln53_10_fu_159_p1() {
    trunc_ln53_10_fu_159_p1 = x.read().range(22-1, 0);
}

void EP1::thread_trunc_ln53_7_fu_270_p1() {
    trunc_ln53_7_fu_270_p1 = x.read().range(21-1, 0);
}

void EP1::thread_trunc_ln53_8_fu_322_p1() {
    trunc_ln53_8_fu_322_p1 = x.read().range(7-1, 0);
}

void EP1::thread_trunc_ln53_9_fu_107_p1() {
    trunc_ln53_9_fu_107_p1 = x.read().range(28-1, 0);
}

void EP1::thread_trunc_ln53_fu_218_p1() {
    trunc_ln53_fu_218_p1 = x.read().range(26-1, 0);
}

void EP1::thread_trunc_ln57_10_fu_191_p1() {
    trunc_ln57_10_fu_191_p1 = x.read().range(10-1, 0);
}

void EP1::thread_trunc_ln57_7_fu_302_p1() {
    trunc_ln57_7_fu_302_p1 = x.read().range(11-1, 0);
}

void EP1::thread_trunc_ln57_8_fu_354_p1() {
    trunc_ln57_8_fu_354_p1 = x.read().range(25-1, 0);
}

void EP1::thread_trunc_ln57_9_fu_139_p1() {
    trunc_ln57_9_fu_139_p1 = x.read().range(4-1, 0);
}

void EP1::thread_trunc_ln57_fu_250_p1() {
    trunc_ln57_fu_250_p1 = x.read().range(6-1, 0);
}

void EP1::thread_xor_ln181_fu_211_p2() {
    xor_ln181_fu_211_p2 = (select_ln51_7_fu_203_p3.read() ^ select_ln51_fu_151_p3.read());
}

void EP1::thread_xor_ln186_1_fu_380_p2() {
    xor_ln186_1_fu_380_p2 = (xor_ln186_fu_374_p2.read() ^ select_ln51_9_fu_314_p3.read());
}

void EP1::thread_xor_ln186_fu_374_p2() {
    xor_ln186_fu_374_p2 = (select_ln51_8_fu_262_p3.read() ^ select_ln51_10_fu_366_p3.read());
}

}

