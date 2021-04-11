// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _SIG1_HH_
#define _SIG1_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct SIG1 : public sc_module {
    // Port declarations 3
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > x;
    sc_out< sc_lv<32> > ap_return;


    // Module declarations
    SIG1(sc_module_name name);
    SC_HAS_PROCESS(SIG1);

    ~SIG1();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<17> > trunc_ln51_fu_38_p1;
    sc_signal< sc_lv<15> > lshr_ln_fu_28_p4;
    sc_signal< sc_lv<19> > trunc_ln51_1_fu_60_p1;
    sc_signal< sc_lv<13> > lshr_ln51_1_fu_50_p4;
    sc_signal< sc_lv<22> > lshr_ln4_fu_72_p4;
    sc_signal< sc_lv<32> > zext_ln75_fu_82_p1;
    sc_signal< sc_lv<32> > or_ln51_1_fu_64_p3;
    sc_signal< sc_lv<32> > xor_ln75_fu_86_p2;
    sc_signal< sc_lv<32> > or_ln_fu_42_p3;
    static const sc_logic ap_const_logic_1;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_logic ap_const_logic_0;
    // Thread declarations
    void thread_ap_ready();
    void thread_ap_return();
    void thread_lshr_ln4_fu_72_p4();
    void thread_lshr_ln51_1_fu_50_p4();
    void thread_lshr_ln_fu_28_p4();
    void thread_or_ln51_1_fu_64_p3();
    void thread_or_ln_fu_42_p3();
    void thread_trunc_ln51_1_fu_60_p1();
    void thread_trunc_ln51_fu_38_p1();
    void thread_xor_ln75_fu_86_p2();
    void thread_zext_ln75_fu_82_p1();
};

}

using namespace ap_rtl;

#endif
