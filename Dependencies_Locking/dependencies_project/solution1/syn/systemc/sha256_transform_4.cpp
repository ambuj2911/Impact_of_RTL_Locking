#include "sha256_transform.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void sha256_transform::thread_ap_phi_mux_c_1_28_phi_fu_2594_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_28_phi_fu_2594_p4 = b_1_27_reg_2542.read();
    } else {
        ap_phi_mux_c_1_28_phi_fu_2594_p4 = ap_phi_reg_pp0_iter7_c_1_28_reg_2590.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_29_phi_fu_2655_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_29_phi_fu_2655_p4 = b_1_28_reg_2603.read();
    } else {
        ap_phi_mux_c_1_29_phi_fu_2655_p4 = ap_phi_reg_pp0_iter7_c_1_29_reg_2651.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_2_phi_fu_1008_p4() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_2_phi_fu_1008_p4 = b_1_1_reg_956.read();
    } else {
        ap_phi_mux_c_1_2_phi_fu_1008_p4 = ap_const_lv32_0;
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_30_phi_fu_2716_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_30_phi_fu_2716_p4 = b_1_29_reg_2664.read();
    } else {
        ap_phi_mux_c_1_30_phi_fu_2716_p4 = ap_phi_reg_pp0_iter7_c_1_30_reg_2712.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_31_phi_fu_2777_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_31_phi_fu_2777_p4 = b_1_30_reg_2725.read();
    } else {
        ap_phi_mux_c_1_31_phi_fu_2777_p4 = ap_phi_reg_pp0_iter8_c_1_31_reg_2773.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_33_phi_fu_2899_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_33_phi_fu_2899_p4 = b_1_32_reg_2847.read();
    } else {
        ap_phi_mux_c_1_33_phi_fu_2899_p4 = ap_phi_reg_pp0_iter8_c_1_33_reg_2895.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_34_phi_fu_2960_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        ap_phi_mux_c_1_34_phi_fu_2960_p4 = b_1_33_reg_2908.read();
    } else {
        ap_phi_mux_c_1_34_phi_fu_2960_p4 = ap_phi_reg_pp0_iter9_c_1_34_reg_2956.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_35_phi_fu_3021_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_35_phi_fu_3021_p4 = b_1_34_reg_2969.read();
    } else {
        ap_phi_mux_c_1_35_phi_fu_3021_p4 = ap_phi_reg_pp0_iter9_c_1_35_reg_3017.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_36_phi_fu_3082_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_36_phi_fu_3082_p4 = b_1_35_reg_3030.read();
    } else {
        ap_phi_mux_c_1_36_phi_fu_3082_p4 = ap_phi_reg_pp0_iter9_c_1_36_reg_3078.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_37_phi_fu_3143_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_37_phi_fu_3143_p4 = b_1_36_reg_3091.read();
    } else {
        ap_phi_mux_c_1_37_phi_fu_3143_p4 = ap_phi_reg_pp0_iter9_c_1_37_reg_3139.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_38_phi_fu_3204_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ap_phi_mux_c_1_38_phi_fu_3204_p4 = b_1_37_reg_3152.read();
    } else {
        ap_phi_mux_c_1_38_phi_fu_3204_p4 = ap_phi_reg_pp0_iter10_c_1_38_reg_3200.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_39_phi_fu_3265_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_39_phi_fu_3265_p4 = b_1_38_reg_3213.read();
    } else {
        ap_phi_mux_c_1_39_phi_fu_3265_p4 = ap_phi_reg_pp0_iter10_c_1_39_reg_3261.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_3_phi_fu_1069_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_3_phi_fu_1069_p4 = b_1_2_reg_1017.read();
    } else {
        ap_phi_mux_c_1_3_phi_fu_1069_p4 = ap_phi_reg_pp0_iter1_c_1_3_reg_1065.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_40_phi_fu_3326_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_40_phi_fu_3326_p4 = b_1_39_reg_3274.read();
    } else {
        ap_phi_mux_c_1_40_phi_fu_3326_p4 = ap_phi_reg_pp0_iter10_c_1_40_reg_3322.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_41_phi_fu_3387_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_41_phi_fu_3387_p4 = b_1_40_reg_3335.read();
    } else {
        ap_phi_mux_c_1_41_phi_fu_3387_p4 = ap_phi_reg_pp0_iter10_c_1_41_reg_3383.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_42_phi_fu_3448_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ap_phi_mux_c_1_42_phi_fu_3448_p4 = b_1_41_reg_3396.read();
    } else {
        ap_phi_mux_c_1_42_phi_fu_3448_p4 = ap_phi_reg_pp0_iter11_c_1_42_reg_3444.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_43_phi_fu_3509_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_43_phi_fu_3509_p4 = b_1_42_reg_3457.read();
    } else {
        ap_phi_mux_c_1_43_phi_fu_3509_p4 = ap_phi_reg_pp0_iter11_c_1_43_reg_3505.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_44_phi_fu_3570_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_44_phi_fu_3570_p4 = b_1_43_reg_3518.read();
    } else {
        ap_phi_mux_c_1_44_phi_fu_3570_p4 = ap_phi_reg_pp0_iter11_c_1_44_reg_3566.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_45_phi_fu_3631_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_45_phi_fu_3631_p4 = b_1_44_reg_3579.read();
    } else {
        ap_phi_mux_c_1_45_phi_fu_3631_p4 = ap_phi_reg_pp0_iter11_c_1_45_reg_3627.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_46_phi_fu_3692_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        ap_phi_mux_c_1_46_phi_fu_3692_p4 = b_1_45_reg_3640.read();
    } else {
        ap_phi_mux_c_1_46_phi_fu_3692_p4 = ap_phi_reg_pp0_iter12_c_1_46_reg_3688.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_47_phi_fu_3753_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_47_phi_fu_3753_p4 = b_1_46_reg_3701.read();
    } else {
        ap_phi_mux_c_1_47_phi_fu_3753_p4 = ap_phi_reg_pp0_iter12_c_1_47_reg_3749.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_48_phi_fu_3814_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_48_phi_fu_3814_p4 = b_1_47_reg_3762.read();
    } else {
        ap_phi_mux_c_1_48_phi_fu_3814_p4 = ap_phi_reg_pp0_iter12_c_1_48_reg_3810.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_49_phi_fu_3875_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_49_phi_fu_3875_p4 = b_1_48_reg_3823.read();
    } else {
        ap_phi_mux_c_1_49_phi_fu_3875_p4 = ap_phi_reg_pp0_iter12_c_1_49_reg_3871.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_4_phi_fu_1130_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_4_phi_fu_1130_p4 = b_1_3_reg_1078.read();
    } else {
        ap_phi_mux_c_1_4_phi_fu_1130_p4 = ap_phi_reg_pp0_iter1_c_1_4_reg_1126.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_50_phi_fu_3936_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()))) {
        ap_phi_mux_c_1_50_phi_fu_3936_p4 = b_1_49_reg_3884.read();
    } else {
        ap_phi_mux_c_1_50_phi_fu_3936_p4 = ap_phi_reg_pp0_iter13_c_1_50_reg_3932.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_51_phi_fu_3997_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_51_phi_fu_3997_p4 = b_1_50_reg_3945.read();
    } else {
        ap_phi_mux_c_1_51_phi_fu_3997_p4 = ap_phi_reg_pp0_iter13_c_1_51_reg_3993.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_52_phi_fu_4058_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_52_phi_fu_4058_p4 = b_1_51_reg_4006.read();
    } else {
        ap_phi_mux_c_1_52_phi_fu_4058_p4 = ap_phi_reg_pp0_iter13_c_1_52_reg_4054.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_53_phi_fu_4119_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_53_phi_fu_4119_p4 = b_1_52_reg_4067.read();
    } else {
        ap_phi_mux_c_1_53_phi_fu_4119_p4 = ap_phi_reg_pp0_iter13_c_1_53_reg_4115.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_54_phi_fu_4180_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        ap_phi_mux_c_1_54_phi_fu_4180_p4 = b_1_53_reg_4128.read();
    } else {
        ap_phi_mux_c_1_54_phi_fu_4180_p4 = ap_phi_reg_pp0_iter14_c_1_54_reg_4176.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_55_phi_fu_4241_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_55_phi_fu_4241_p4 = b_1_54_reg_4189.read();
    } else {
        ap_phi_mux_c_1_55_phi_fu_4241_p4 = ap_phi_reg_pp0_iter14_c_1_55_reg_4237.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_56_phi_fu_4302_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_56_phi_fu_4302_p4 = b_1_55_reg_4250.read();
    } else {
        ap_phi_mux_c_1_56_phi_fu_4302_p4 = ap_phi_reg_pp0_iter14_c_1_56_reg_4298.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_57_phi_fu_4363_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_57_phi_fu_4363_p4 = b_1_56_reg_4311.read();
    } else {
        ap_phi_mux_c_1_57_phi_fu_4363_p4 = ap_phi_reg_pp0_iter14_c_1_57_reg_4359.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_58_phi_fu_4424_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()))) {
        ap_phi_mux_c_1_58_phi_fu_4424_p4 = b_1_57_reg_4372.read();
    } else {
        ap_phi_mux_c_1_58_phi_fu_4424_p4 = ap_phi_reg_pp0_iter15_c_1_58_reg_4420.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_59_phi_fu_4485_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter15_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_59_phi_fu_4485_p4 = b_1_58_reg_4433.read();
    } else {
        ap_phi_mux_c_1_59_phi_fu_4485_p4 = ap_phi_reg_pp0_iter15_c_1_59_reg_4481.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_5_phi_fu_1191_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_5_phi_fu_1191_p4 = b_1_4_reg_1139.read();
    } else {
        ap_phi_mux_c_1_5_phi_fu_1191_p4 = ap_phi_reg_pp0_iter1_c_1_5_reg_1187.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_60_phi_fu_4546_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter15_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_60_phi_fu_4546_p4 = b_1_59_reg_4494.read();
    } else {
        ap_phi_mux_c_1_60_phi_fu_4546_p4 = ap_phi_reg_pp0_iter15_c_1_60_reg_4542.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_61_phi_fu_4607_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter15_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_61_phi_fu_4607_p4 = b_1_60_reg_4555.read();
    } else {
        ap_phi_mux_c_1_61_phi_fu_4607_p4 = ap_phi_reg_pp0_iter15_c_1_61_reg_4603.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_63_phi_fu_4726_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter16_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_63_phi_fu_4726_p4 = b_1_62_reg_4676.read();
    } else {
        ap_phi_mux_c_1_63_phi_fu_4726_p4 = ap_phi_reg_pp0_iter16_c_1_63_reg_4722.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_6_phi_fu_1252_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_6_phi_fu_1252_p4 = b_1_5_reg_1200.read();
    } else {
        ap_phi_mux_c_1_6_phi_fu_1252_p4 = ap_phi_reg_pp0_iter1_c_1_6_reg_1248.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_7_phi_fu_1313_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_7_phi_fu_1313_p4 = b_1_6_reg_1261.read();
    } else {
        ap_phi_mux_c_1_7_phi_fu_1313_p4 = ap_phi_reg_pp0_iter2_c_1_7_reg_1309.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_8_phi_fu_1374_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_8_phi_fu_1374_p4 = b_1_7_reg_1322.read();
    } else {
        ap_phi_mux_c_1_8_phi_fu_1374_p4 = ap_phi_reg_pp0_iter2_c_1_8_reg_1370.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_9_phi_fu_1435_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_9_phi_fu_1435_p4 = b_1_8_reg_1383.read();
    } else {
        ap_phi_mux_c_1_9_phi_fu_1435_p4 = ap_phi_reg_pp0_iter2_c_1_9_reg_1431.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_0_phi_fu_879_p4() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_0_phi_fu_879_p4 = add_ln114_reg_9444.read();
    } else {
        ap_phi_mux_e_1_0_phi_fu_879_p4 = ap_phi_reg_pp0_iter0_e_1_0_reg_876.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_10_phi_fu_1484_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_10_phi_fu_1484_p4 = add_ln114_10_reg_10434.read();
    } else {
        ap_phi_mux_e_1_10_phi_fu_1484_p4 = ap_phi_reg_pp0_iter2_e_1_10_reg_1481.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_11_phi_fu_1545_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_11_phi_fu_1545_p4 = add_ln114_11_reg_10517.read();
    } else {
        ap_phi_mux_e_1_11_phi_fu_1545_p4 = ap_phi_reg_pp0_iter3_e_1_11_reg_1542.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_12_phi_fu_1606_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_12_phi_fu_1606_p4 = add_ln114_12_reg_10581.read();
    } else {
        ap_phi_mux_e_1_12_phi_fu_1606_p4 = ap_phi_reg_pp0_iter3_e_1_12_reg_1603.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_13_phi_fu_1667_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_13_phi_fu_1667_p4 = add_ln114_13_reg_10640.read();
    } else {
        ap_phi_mux_e_1_13_phi_fu_1667_p4 = ap_phi_reg_pp0_iter3_e_1_13_reg_1664.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_14_phi_fu_1728_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_14_phi_fu_1728_p4 = add_ln114_14_reg_10696.read();
    } else {
        ap_phi_mux_e_1_14_phi_fu_1728_p4 = ap_phi_reg_pp0_iter3_e_1_14_reg_1725.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_15_phi_fu_1789_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_15_phi_fu_1789_p4 = add_ln114_15_reg_10731.read();
    } else {
        ap_phi_mux_e_1_15_phi_fu_1789_p4 = ap_phi_reg_pp0_iter4_e_1_15_reg_1786.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_16_phi_fu_1850_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_16_phi_fu_1850_p4 = add_ln114_16_reg_10751.read();
    } else {
        ap_phi_mux_e_1_16_phi_fu_1850_p4 = ap_phi_reg_pp0_iter4_e_1_16_reg_1847.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_17_phi_fu_1911_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_17_phi_fu_1911_p4 = add_ln114_17_reg_10766.read();
    } else {
        ap_phi_mux_e_1_17_phi_fu_1911_p4 = ap_phi_reg_pp0_iter4_e_1_17_reg_1908.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_18_phi_fu_1972_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_18_phi_fu_1972_p4 = add_ln114_18_reg_10781.read();
    } else {
        ap_phi_mux_e_1_18_phi_fu_1972_p4 = ap_phi_reg_pp0_iter4_e_1_18_reg_1969.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_19_phi_fu_2033_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_19_phi_fu_2033_p4 = add_ln114_19_reg_10796.read();
    } else {
        ap_phi_mux_e_1_19_phi_fu_2033_p4 = ap_phi_reg_pp0_iter5_e_1_19_reg_2030.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_1_phi_fu_936_p4() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_1_phi_fu_936_p4 = add_ln114_1_reg_9583.read();
    } else {
        ap_phi_mux_e_1_1_phi_fu_936_p4 = ap_phi_reg_pp0_iter0_e_1_1_reg_933.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_20_phi_fu_2094_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_20_phi_fu_2094_p4 = add_ln114_20_reg_10811.read();
    } else {
        ap_phi_mux_e_1_20_phi_fu_2094_p4 = ap_phi_reg_pp0_iter5_e_1_20_reg_2091.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_21_phi_fu_2155_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_21_phi_fu_2155_p4 = add_ln114_21_reg_10826.read();
    } else {
        ap_phi_mux_e_1_21_phi_fu_2155_p4 = ap_phi_reg_pp0_iter5_e_1_21_reg_2152.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_22_phi_fu_2216_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_22_phi_fu_2216_p4 = add_ln114_22_reg_10841.read();
    } else {
        ap_phi_mux_e_1_22_phi_fu_2216_p4 = ap_phi_reg_pp0_iter5_e_1_22_reg_2213.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_23_phi_fu_2277_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_23_phi_fu_2277_p4 = add_ln114_23_reg_10856.read();
    } else {
        ap_phi_mux_e_1_23_phi_fu_2277_p4 = ap_phi_reg_pp0_iter6_e_1_23_reg_2274.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_24_phi_fu_2338_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_24_phi_fu_2338_p4 = add_ln114_24_reg_10871.read();
    } else {
        ap_phi_mux_e_1_24_phi_fu_2338_p4 = ap_phi_reg_pp0_iter6_e_1_24_reg_2335.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_25_phi_fu_2399_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_25_phi_fu_2399_p4 = add_ln114_25_reg_10886.read();
    } else {
        ap_phi_mux_e_1_25_phi_fu_2399_p4 = ap_phi_reg_pp0_iter6_e_1_25_reg_2396.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_26_phi_fu_2460_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_26_phi_fu_2460_p4 = add_ln114_26_reg_10901.read();
    } else {
        ap_phi_mux_e_1_26_phi_fu_2460_p4 = ap_phi_reg_pp0_iter6_e_1_26_reg_2457.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_27_phi_fu_2521_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_27_phi_fu_2521_p4 = add_ln114_27_reg_10916.read();
    } else {
        ap_phi_mux_e_1_27_phi_fu_2521_p4 = ap_phi_reg_pp0_iter7_e_1_27_reg_2518.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_28_phi_fu_2582_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_28_phi_fu_2582_p4 = add_ln114_28_reg_10931.read();
    } else {
        ap_phi_mux_e_1_28_phi_fu_2582_p4 = ap_phi_reg_pp0_iter7_e_1_28_reg_2579.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_29_phi_fu_2643_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_29_phi_fu_2643_p4 = add_ln114_29_reg_10946.read();
    } else {
        ap_phi_mux_e_1_29_phi_fu_2643_p4 = ap_phi_reg_pp0_iter7_e_1_29_reg_2640.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_2_phi_fu_996_p4() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_2_phi_fu_996_p4 = add_ln114_2_reg_9725.read();
    } else {
        ap_phi_mux_e_1_2_phi_fu_996_p4 = ap_phi_reg_pp0_iter0_e_1_2_reg_993.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_30_phi_fu_2704_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_30_phi_fu_2704_p4 = add_ln114_30_reg_10961.read();
    } else {
        ap_phi_mux_e_1_30_phi_fu_2704_p4 = ap_phi_reg_pp0_iter7_e_1_30_reg_2701.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_31_phi_fu_2765_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_31_phi_fu_2765_p4 = add_ln114_31_reg_10976.read();
    } else {
        ap_phi_mux_e_1_31_phi_fu_2765_p4 = ap_phi_reg_pp0_iter8_e_1_31_reg_2762.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_33_phi_fu_2887_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_33_phi_fu_2887_p4 = add_ln114_33_reg_11011.read();
    } else {
        ap_phi_mux_e_1_33_phi_fu_2887_p4 = ap_phi_reg_pp0_iter8_e_1_33_reg_2884.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_34_phi_fu_2948_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        ap_phi_mux_e_1_34_phi_fu_2948_p4 = add_ln114_34_reg_11026.read();
    } else {
        ap_phi_mux_e_1_34_phi_fu_2948_p4 = ap_phi_reg_pp0_iter9_e_1_34_reg_2945.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_35_phi_fu_3009_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_35_phi_fu_3009_p4 = add_ln114_35_reg_11041.read();
    } else {
        ap_phi_mux_e_1_35_phi_fu_3009_p4 = ap_phi_reg_pp0_iter9_e_1_35_reg_3006.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_36_phi_fu_3070_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_36_phi_fu_3070_p4 = add_ln114_36_reg_11056.read();
    } else {
        ap_phi_mux_e_1_36_phi_fu_3070_p4 = ap_phi_reg_pp0_iter9_e_1_36_reg_3067.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_37_phi_fu_3131_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_37_phi_fu_3131_p4 = add_ln114_37_reg_11071.read();
    } else {
        ap_phi_mux_e_1_37_phi_fu_3131_p4 = ap_phi_reg_pp0_iter9_e_1_37_reg_3128.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_38_phi_fu_3192_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ap_phi_mux_e_1_38_phi_fu_3192_p4 = add_ln114_38_reg_11086.read();
    } else {
        ap_phi_mux_e_1_38_phi_fu_3192_p4 = ap_phi_reg_pp0_iter10_e_1_38_reg_3189.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_39_phi_fu_3253_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_39_phi_fu_3253_p4 = add_ln114_39_reg_11101.read();
    } else {
        ap_phi_mux_e_1_39_phi_fu_3253_p4 = ap_phi_reg_pp0_iter10_e_1_39_reg_3250.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_3_phi_fu_1057_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_3_phi_fu_1057_p4 = add_ln114_3_reg_9838.read();
    } else {
        ap_phi_mux_e_1_3_phi_fu_1057_p4 = ap_phi_reg_pp0_iter1_e_1_3_reg_1054.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_40_phi_fu_3314_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_40_phi_fu_3314_p4 = add_ln114_40_reg_11116.read();
    } else {
        ap_phi_mux_e_1_40_phi_fu_3314_p4 = ap_phi_reg_pp0_iter10_e_1_40_reg_3311.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_41_phi_fu_3375_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_41_phi_fu_3375_p4 = add_ln114_41_reg_11131.read();
    } else {
        ap_phi_mux_e_1_41_phi_fu_3375_p4 = ap_phi_reg_pp0_iter10_e_1_41_reg_3372.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_42_phi_fu_3436_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ap_phi_mux_e_1_42_phi_fu_3436_p4 = add_ln114_42_reg_11146.read();
    } else {
        ap_phi_mux_e_1_42_phi_fu_3436_p4 = ap_phi_reg_pp0_iter11_e_1_42_reg_3433.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_43_phi_fu_3497_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_43_phi_fu_3497_p4 = add_ln114_43_reg_11161.read();
    } else {
        ap_phi_mux_e_1_43_phi_fu_3497_p4 = ap_phi_reg_pp0_iter11_e_1_43_reg_3494.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_44_phi_fu_3558_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_44_phi_fu_3558_p4 = add_ln114_44_reg_11176.read();
    } else {
        ap_phi_mux_e_1_44_phi_fu_3558_p4 = ap_phi_reg_pp0_iter11_e_1_44_reg_3555.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_45_phi_fu_3619_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_45_phi_fu_3619_p4 = add_ln114_45_reg_11191.read();
    } else {
        ap_phi_mux_e_1_45_phi_fu_3619_p4 = ap_phi_reg_pp0_iter11_e_1_45_reg_3616.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_46_phi_fu_3680_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        ap_phi_mux_e_1_46_phi_fu_3680_p4 = add_ln114_46_reg_11206.read();
    } else {
        ap_phi_mux_e_1_46_phi_fu_3680_p4 = ap_phi_reg_pp0_iter12_e_1_46_reg_3677.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_47_phi_fu_3741_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_47_phi_fu_3741_p4 = add_ln114_47_reg_11226.read();
    } else {
        ap_phi_mux_e_1_47_phi_fu_3741_p4 = ap_phi_reg_pp0_iter12_e_1_47_reg_3738.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_48_phi_fu_3802_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_48_phi_fu_3802_p4 = add_ln114_48_reg_11241.read();
    } else {
        ap_phi_mux_e_1_48_phi_fu_3802_p4 = ap_phi_reg_pp0_iter12_e_1_48_reg_3799.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_49_phi_fu_3863_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_49_phi_fu_3863_p4 = add_ln114_49_reg_11256.read();
    } else {
        ap_phi_mux_e_1_49_phi_fu_3863_p4 = ap_phi_reg_pp0_iter12_e_1_49_reg_3860.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_4_phi_fu_1118_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_4_phi_fu_1118_p4 = add_ln114_4_reg_9936.read();
    } else {
        ap_phi_mux_e_1_4_phi_fu_1118_p4 = ap_phi_reg_pp0_iter1_e_1_4_reg_1115.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_50_phi_fu_3924_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()))) {
        ap_phi_mux_e_1_50_phi_fu_3924_p4 = add_ln114_50_reg_11271.read();
    } else {
        ap_phi_mux_e_1_50_phi_fu_3924_p4 = ap_phi_reg_pp0_iter13_e_1_50_reg_3921.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_51_phi_fu_3985_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_51_phi_fu_3985_p4 = add_ln114_51_reg_11286.read();
    } else {
        ap_phi_mux_e_1_51_phi_fu_3985_p4 = ap_phi_reg_pp0_iter13_e_1_51_reg_3982.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_52_phi_fu_4046_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_52_phi_fu_4046_p4 = add_ln114_52_reg_11301.read();
    } else {
        ap_phi_mux_e_1_52_phi_fu_4046_p4 = ap_phi_reg_pp0_iter13_e_1_52_reg_4043.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_53_phi_fu_4107_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_53_phi_fu_4107_p4 = add_ln114_53_reg_11316.read();
    } else {
        ap_phi_mux_e_1_53_phi_fu_4107_p4 = ap_phi_reg_pp0_iter13_e_1_53_reg_4104.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_54_phi_fu_4168_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        ap_phi_mux_e_1_54_phi_fu_4168_p4 = add_ln114_54_reg_11331.read();
    } else {
        ap_phi_mux_e_1_54_phi_fu_4168_p4 = ap_phi_reg_pp0_iter14_e_1_54_reg_4165.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_55_phi_fu_4229_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_55_phi_fu_4229_p4 = add_ln114_55_reg_11346.read();
    } else {
        ap_phi_mux_e_1_55_phi_fu_4229_p4 = ap_phi_reg_pp0_iter14_e_1_55_reg_4226.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_56_phi_fu_4290_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_56_phi_fu_4290_p4 = add_ln114_56_reg_11361.read();
    } else {
        ap_phi_mux_e_1_56_phi_fu_4290_p4 = ap_phi_reg_pp0_iter14_e_1_56_reg_4287.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_57_phi_fu_4351_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_57_phi_fu_4351_p4 = add_ln114_57_reg_11376.read();
    } else {
        ap_phi_mux_e_1_57_phi_fu_4351_p4 = ap_phi_reg_pp0_iter14_e_1_57_reg_4348.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_58_phi_fu_4412_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()))) {
        ap_phi_mux_e_1_58_phi_fu_4412_p4 = add_ln114_58_reg_11391.read();
    } else {
        ap_phi_mux_e_1_58_phi_fu_4412_p4 = ap_phi_reg_pp0_iter15_e_1_58_reg_4409.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_59_phi_fu_4473_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter15_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_59_phi_fu_4473_p4 = add_ln114_59_reg_11406.read();
    } else {
        ap_phi_mux_e_1_59_phi_fu_4473_p4 = ap_phi_reg_pp0_iter15_e_1_59_reg_4470.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_5_phi_fu_1179_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_5_phi_fu_1179_p4 = add_ln114_5_reg_10019.read();
    } else {
        ap_phi_mux_e_1_5_phi_fu_1179_p4 = ap_phi_reg_pp0_iter1_e_1_5_reg_1176.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_60_phi_fu_4534_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter15_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_60_phi_fu_4534_p4 = add_ln114_60_reg_11421.read();
    } else {
        ap_phi_mux_e_1_60_phi_fu_4534_p4 = ap_phi_reg_pp0_iter15_e_1_60_reg_4531.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_61_phi_fu_4595_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter15_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_61_phi_fu_4595_p4 = add_ln114_61_fu_9052_p2.read();
    } else {
        ap_phi_mux_e_1_61_phi_fu_4595_p4 = ap_phi_reg_pp0_iter15_e_1_61_reg_4592.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_63_phi_fu_4715_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter16_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_63_phi_fu_4715_p4 = add_ln114_63_fu_9133_p2.read();
    } else {
        ap_phi_mux_e_1_63_phi_fu_4715_p4 = ap_phi_reg_pp0_iter16_e_1_63_reg_4712.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_6_phi_fu_1240_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_6_phi_fu_1240_p4 = add_ln114_6_reg_10102.read();
    } else {
        ap_phi_mux_e_1_6_phi_fu_1240_p4 = ap_phi_reg_pp0_iter1_e_1_6_reg_1237.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_7_phi_fu_1301_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_7_phi_fu_1301_p4 = add_ln114_7_reg_10185.read();
    } else {
        ap_phi_mux_e_1_7_phi_fu_1301_p4 = ap_phi_reg_pp0_iter2_e_1_7_reg_1298.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_8_phi_fu_1362_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_8_phi_fu_1362_p4 = add_ln114_8_reg_10268.read();
    } else {
        ap_phi_mux_e_1_8_phi_fu_1362_p4 = ap_phi_reg_pp0_iter2_e_1_8_reg_1359.read();
    }
}

void sha256_transform::thread_ap_phi_mux_e_1_9_phi_fu_1423_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_e_1_9_phi_fu_1423_p4 = add_ln114_9_reg_10351.read();
    } else {
        ap_phi_mux_e_1_9_phi_fu_1423_p4 = ap_phi_reg_pp0_iter2_e_1_9_reg_1420.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_0_phi_fu_869_p4() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_0_phi_fu_869_p4 = ctx_state_4_read_1_reg_9234.read();
    } else {
        ap_phi_mux_f_1_0_phi_fu_869_p4 = ap_phi_reg_pp0_iter0_f_1_0_reg_866.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_10_phi_fu_1472_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_10_phi_fu_1472_p4 = e_1_9_reg_1420.read();
    } else {
        ap_phi_mux_f_1_10_phi_fu_1472_p4 = ap_phi_reg_pp0_iter2_f_1_10_reg_1469.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_11_phi_fu_1533_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_11_phi_fu_1533_p4 = e_1_10_reg_1481.read();
    } else {
        ap_phi_mux_f_1_11_phi_fu_1533_p4 = ap_phi_reg_pp0_iter3_f_1_11_reg_1530.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_12_phi_fu_1594_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_12_phi_fu_1594_p4 = e_1_11_reg_1542.read();
    } else {
        ap_phi_mux_f_1_12_phi_fu_1594_p4 = ap_phi_reg_pp0_iter3_f_1_12_reg_1591.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_13_phi_fu_1655_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_13_phi_fu_1655_p4 = e_1_12_reg_1603.read();
    } else {
        ap_phi_mux_f_1_13_phi_fu_1655_p4 = ap_phi_reg_pp0_iter3_f_1_13_reg_1652.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_14_phi_fu_1716_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_14_phi_fu_1716_p4 = e_1_13_reg_1664.read();
    } else {
        ap_phi_mux_f_1_14_phi_fu_1716_p4 = ap_phi_reg_pp0_iter3_f_1_14_reg_1713.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_15_phi_fu_1777_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_15_phi_fu_1777_p4 = e_1_14_reg_1725.read();
    } else {
        ap_phi_mux_f_1_15_phi_fu_1777_p4 = ap_phi_reg_pp0_iter4_f_1_15_reg_1774.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_16_phi_fu_1838_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_16_phi_fu_1838_p4 = e_1_15_reg_1786.read();
    } else {
        ap_phi_mux_f_1_16_phi_fu_1838_p4 = ap_phi_reg_pp0_iter4_f_1_16_reg_1835.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_17_phi_fu_1899_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_17_phi_fu_1899_p4 = e_1_16_reg_1847.read();
    } else {
        ap_phi_mux_f_1_17_phi_fu_1899_p4 = ap_phi_reg_pp0_iter4_f_1_17_reg_1896.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_18_phi_fu_1960_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_18_phi_fu_1960_p4 = e_1_17_reg_1908.read();
    } else {
        ap_phi_mux_f_1_18_phi_fu_1960_p4 = ap_phi_reg_pp0_iter4_f_1_18_reg_1957.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_19_phi_fu_2021_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_19_phi_fu_2021_p4 = e_1_18_reg_1969.read();
    } else {
        ap_phi_mux_f_1_19_phi_fu_2021_p4 = ap_phi_reg_pp0_iter5_f_1_19_reg_2018.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_1_phi_fu_925_p4() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_1_phi_fu_925_p4 = e_1_0_reg_876.read();
    } else {
        ap_phi_mux_f_1_1_phi_fu_925_p4 = ap_phi_reg_pp0_iter0_f_1_1_reg_922.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_20_phi_fu_2082_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_20_phi_fu_2082_p4 = e_1_19_reg_2030.read();
    } else {
        ap_phi_mux_f_1_20_phi_fu_2082_p4 = ap_phi_reg_pp0_iter5_f_1_20_reg_2079.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_21_phi_fu_2143_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_21_phi_fu_2143_p4 = e_1_20_reg_2091.read();
    } else {
        ap_phi_mux_f_1_21_phi_fu_2143_p4 = ap_phi_reg_pp0_iter5_f_1_21_reg_2140.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_22_phi_fu_2204_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_22_phi_fu_2204_p4 = e_1_21_reg_2152.read();
    } else {
        ap_phi_mux_f_1_22_phi_fu_2204_p4 = ap_phi_reg_pp0_iter5_f_1_22_reg_2201.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_23_phi_fu_2265_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_23_phi_fu_2265_p4 = e_1_22_reg_2213.read();
    } else {
        ap_phi_mux_f_1_23_phi_fu_2265_p4 = ap_phi_reg_pp0_iter6_f_1_23_reg_2262.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_24_phi_fu_2326_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_24_phi_fu_2326_p4 = e_1_23_reg_2274.read();
    } else {
        ap_phi_mux_f_1_24_phi_fu_2326_p4 = ap_phi_reg_pp0_iter6_f_1_24_reg_2323.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_25_phi_fu_2387_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_25_phi_fu_2387_p4 = e_1_24_reg_2335.read();
    } else {
        ap_phi_mux_f_1_25_phi_fu_2387_p4 = ap_phi_reg_pp0_iter6_f_1_25_reg_2384.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_26_phi_fu_2448_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_26_phi_fu_2448_p4 = e_1_25_reg_2396.read();
    } else {
        ap_phi_mux_f_1_26_phi_fu_2448_p4 = ap_phi_reg_pp0_iter6_f_1_26_reg_2445.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_27_phi_fu_2509_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_27_phi_fu_2509_p4 = e_1_26_reg_2457.read();
    } else {
        ap_phi_mux_f_1_27_phi_fu_2509_p4 = ap_phi_reg_pp0_iter7_f_1_27_reg_2506.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_28_phi_fu_2570_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_28_phi_fu_2570_p4 = e_1_27_reg_2518.read();
    } else {
        ap_phi_mux_f_1_28_phi_fu_2570_p4 = ap_phi_reg_pp0_iter7_f_1_28_reg_2567.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_29_phi_fu_2631_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_29_phi_fu_2631_p4 = e_1_28_reg_2579.read();
    } else {
        ap_phi_mux_f_1_29_phi_fu_2631_p4 = ap_phi_reg_pp0_iter7_f_1_29_reg_2628.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_2_phi_fu_984_p4() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_2_phi_fu_984_p4 = e_1_1_reg_933.read();
    } else {
        ap_phi_mux_f_1_2_phi_fu_984_p4 = ap_phi_reg_pp0_iter0_f_1_2_reg_981.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_30_phi_fu_2692_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_30_phi_fu_2692_p4 = e_1_29_reg_2640.read();
    } else {
        ap_phi_mux_f_1_30_phi_fu_2692_p4 = ap_phi_reg_pp0_iter7_f_1_30_reg_2689.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_31_phi_fu_2753_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_31_phi_fu_2753_p4 = e_1_30_reg_2701.read();
    } else {
        ap_phi_mux_f_1_31_phi_fu_2753_p4 = ap_phi_reg_pp0_iter8_f_1_31_reg_2750.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_33_phi_fu_2875_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_33_phi_fu_2875_p4 = e_1_32_reg_2823.read();
    } else {
        ap_phi_mux_f_1_33_phi_fu_2875_p4 = ap_phi_reg_pp0_iter8_f_1_33_reg_2872.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_34_phi_fu_2936_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        ap_phi_mux_f_1_34_phi_fu_2936_p4 = e_1_33_reg_2884.read();
    } else {
        ap_phi_mux_f_1_34_phi_fu_2936_p4 = ap_phi_reg_pp0_iter9_f_1_34_reg_2933.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_35_phi_fu_2997_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_35_phi_fu_2997_p4 = e_1_34_reg_2945.read();
    } else {
        ap_phi_mux_f_1_35_phi_fu_2997_p4 = ap_phi_reg_pp0_iter9_f_1_35_reg_2994.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_36_phi_fu_3058_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_36_phi_fu_3058_p4 = e_1_35_reg_3006.read();
    } else {
        ap_phi_mux_f_1_36_phi_fu_3058_p4 = ap_phi_reg_pp0_iter9_f_1_36_reg_3055.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_37_phi_fu_3119_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_37_phi_fu_3119_p4 = e_1_36_reg_3067.read();
    } else {
        ap_phi_mux_f_1_37_phi_fu_3119_p4 = ap_phi_reg_pp0_iter9_f_1_37_reg_3116.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_38_phi_fu_3180_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ap_phi_mux_f_1_38_phi_fu_3180_p4 = e_1_37_reg_3128.read();
    } else {
        ap_phi_mux_f_1_38_phi_fu_3180_p4 = ap_phi_reg_pp0_iter10_f_1_38_reg_3177.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_39_phi_fu_3241_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_39_phi_fu_3241_p4 = e_1_38_reg_3189.read();
    } else {
        ap_phi_mux_f_1_39_phi_fu_3241_p4 = ap_phi_reg_pp0_iter10_f_1_39_reg_3238.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_3_phi_fu_1045_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_3_phi_fu_1045_p4 = e_1_2_reg_993.read();
    } else {
        ap_phi_mux_f_1_3_phi_fu_1045_p4 = ap_phi_reg_pp0_iter1_f_1_3_reg_1042.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_40_phi_fu_3302_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_40_phi_fu_3302_p4 = e_1_39_reg_3250.read();
    } else {
        ap_phi_mux_f_1_40_phi_fu_3302_p4 = ap_phi_reg_pp0_iter10_f_1_40_reg_3299.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_41_phi_fu_3363_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_41_phi_fu_3363_p4 = e_1_40_reg_3311.read();
    } else {
        ap_phi_mux_f_1_41_phi_fu_3363_p4 = ap_phi_reg_pp0_iter10_f_1_41_reg_3360.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_42_phi_fu_3424_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ap_phi_mux_f_1_42_phi_fu_3424_p4 = e_1_41_reg_3372.read();
    } else {
        ap_phi_mux_f_1_42_phi_fu_3424_p4 = ap_phi_reg_pp0_iter11_f_1_42_reg_3421.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_43_phi_fu_3485_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_43_phi_fu_3485_p4 = e_1_42_reg_3433.read();
    } else {
        ap_phi_mux_f_1_43_phi_fu_3485_p4 = ap_phi_reg_pp0_iter11_f_1_43_reg_3482.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_44_phi_fu_3546_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_44_phi_fu_3546_p4 = e_1_43_reg_3494.read();
    } else {
        ap_phi_mux_f_1_44_phi_fu_3546_p4 = ap_phi_reg_pp0_iter11_f_1_44_reg_3543.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_45_phi_fu_3607_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_45_phi_fu_3607_p4 = e_1_44_reg_3555.read();
    } else {
        ap_phi_mux_f_1_45_phi_fu_3607_p4 = ap_phi_reg_pp0_iter11_f_1_45_reg_3604.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_46_phi_fu_3668_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        ap_phi_mux_f_1_46_phi_fu_3668_p4 = e_1_45_reg_3616.read();
    } else {
        ap_phi_mux_f_1_46_phi_fu_3668_p4 = ap_phi_reg_pp0_iter12_f_1_46_reg_3665.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_47_phi_fu_3729_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_47_phi_fu_3729_p4 = e_1_46_reg_3677.read();
    } else {
        ap_phi_mux_f_1_47_phi_fu_3729_p4 = ap_phi_reg_pp0_iter12_f_1_47_reg_3726.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_48_phi_fu_3790_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_48_phi_fu_3790_p4 = e_1_47_reg_3738.read();
    } else {
        ap_phi_mux_f_1_48_phi_fu_3790_p4 = ap_phi_reg_pp0_iter12_f_1_48_reg_3787.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_49_phi_fu_3851_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_49_phi_fu_3851_p4 = e_1_48_reg_3799.read();
    } else {
        ap_phi_mux_f_1_49_phi_fu_3851_p4 = ap_phi_reg_pp0_iter12_f_1_49_reg_3848.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_4_phi_fu_1106_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_4_phi_fu_1106_p4 = e_1_3_reg_1054.read();
    } else {
        ap_phi_mux_f_1_4_phi_fu_1106_p4 = ap_phi_reg_pp0_iter1_f_1_4_reg_1103.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_50_phi_fu_3912_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()))) {
        ap_phi_mux_f_1_50_phi_fu_3912_p4 = e_1_49_reg_3860.read();
    } else {
        ap_phi_mux_f_1_50_phi_fu_3912_p4 = ap_phi_reg_pp0_iter13_f_1_50_reg_3909.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_51_phi_fu_3973_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_51_phi_fu_3973_p4 = e_1_50_reg_3921.read();
    } else {
        ap_phi_mux_f_1_51_phi_fu_3973_p4 = ap_phi_reg_pp0_iter13_f_1_51_reg_3970.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_52_phi_fu_4034_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_52_phi_fu_4034_p4 = e_1_51_reg_3982.read();
    } else {
        ap_phi_mux_f_1_52_phi_fu_4034_p4 = ap_phi_reg_pp0_iter13_f_1_52_reg_4031.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_53_phi_fu_4095_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_53_phi_fu_4095_p4 = e_1_52_reg_4043.read();
    } else {
        ap_phi_mux_f_1_53_phi_fu_4095_p4 = ap_phi_reg_pp0_iter13_f_1_53_reg_4092.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_54_phi_fu_4156_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        ap_phi_mux_f_1_54_phi_fu_4156_p4 = e_1_53_reg_4104.read();
    } else {
        ap_phi_mux_f_1_54_phi_fu_4156_p4 = ap_phi_reg_pp0_iter14_f_1_54_reg_4153.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_55_phi_fu_4217_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_55_phi_fu_4217_p4 = e_1_54_reg_4165.read();
    } else {
        ap_phi_mux_f_1_55_phi_fu_4217_p4 = ap_phi_reg_pp0_iter14_f_1_55_reg_4214.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_56_phi_fu_4278_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_56_phi_fu_4278_p4 = e_1_55_reg_4226.read();
    } else {
        ap_phi_mux_f_1_56_phi_fu_4278_p4 = ap_phi_reg_pp0_iter14_f_1_56_reg_4275.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_57_phi_fu_4339_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_57_phi_fu_4339_p4 = e_1_56_reg_4287.read();
    } else {
        ap_phi_mux_f_1_57_phi_fu_4339_p4 = ap_phi_reg_pp0_iter14_f_1_57_reg_4336.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_58_phi_fu_4400_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()))) {
        ap_phi_mux_f_1_58_phi_fu_4400_p4 = e_1_57_reg_4348.read();
    } else {
        ap_phi_mux_f_1_58_phi_fu_4400_p4 = ap_phi_reg_pp0_iter15_f_1_58_reg_4397.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_59_phi_fu_4461_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter15_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_59_phi_fu_4461_p4 = e_1_58_reg_4409.read();
    } else {
        ap_phi_mux_f_1_59_phi_fu_4461_p4 = ap_phi_reg_pp0_iter15_f_1_59_reg_4458.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_5_phi_fu_1167_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_5_phi_fu_1167_p4 = e_1_4_reg_1115.read();
    } else {
        ap_phi_mux_f_1_5_phi_fu_1167_p4 = ap_phi_reg_pp0_iter1_f_1_5_reg_1164.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_60_phi_fu_4522_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter15_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_60_phi_fu_4522_p4 = e_1_59_reg_4470.read();
    } else {
        ap_phi_mux_f_1_60_phi_fu_4522_p4 = ap_phi_reg_pp0_iter15_f_1_60_reg_4519.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_61_phi_fu_4583_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter15_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_61_phi_fu_4583_p4 = e_1_60_reg_4531.read();
    } else {
        ap_phi_mux_f_1_61_phi_fu_4583_p4 = ap_phi_reg_pp0_iter15_f_1_61_reg_4580.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_63_phi_fu_4704_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter16_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_63_phi_fu_4704_p4 = e_1_62_reg_4653.read();
    } else {
        ap_phi_mux_f_1_63_phi_fu_4704_p4 = ap_phi_reg_pp0_iter16_f_1_63_reg_4701.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_6_phi_fu_1228_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_6_phi_fu_1228_p4 = e_1_5_reg_1176.read();
    } else {
        ap_phi_mux_f_1_6_phi_fu_1228_p4 = ap_phi_reg_pp0_iter1_f_1_6_reg_1225.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_7_phi_fu_1289_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_7_phi_fu_1289_p4 = e_1_6_reg_1237.read();
    } else {
        ap_phi_mux_f_1_7_phi_fu_1289_p4 = ap_phi_reg_pp0_iter2_f_1_7_reg_1286.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_8_phi_fu_1350_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_8_phi_fu_1350_p4 = e_1_7_reg_1298.read();
    } else {
        ap_phi_mux_f_1_8_phi_fu_1350_p4 = ap_phi_reg_pp0_iter2_f_1_8_reg_1347.read();
    }
}

void sha256_transform::thread_ap_phi_mux_f_1_9_phi_fu_1411_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_1_9_phi_fu_1411_p4 = e_1_8_reg_1359.read();
    } else {
        ap_phi_mux_f_1_9_phi_fu_1411_p4 = ap_phi_reg_pp0_iter2_f_1_9_reg_1408.read();
    }
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_0_reg_910() {
    ap_phi_reg_pp0_iter0_a_1_0_reg_910 = ap_const_lv32_0;
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_10_reg_1518() {
    ap_phi_reg_pp0_iter0_a_1_10_reg_1518 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_11_reg_1579() {
    ap_phi_reg_pp0_iter0_a_1_11_reg_1579 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_12_reg_1640() {
    ap_phi_reg_pp0_iter0_a_1_12_reg_1640 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_13_reg_1701() {
    ap_phi_reg_pp0_iter0_a_1_13_reg_1701 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_14_reg_1762() {
    ap_phi_reg_pp0_iter0_a_1_14_reg_1762 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_15_reg_1823() {
    ap_phi_reg_pp0_iter0_a_1_15_reg_1823 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_16_reg_1884() {
    ap_phi_reg_pp0_iter0_a_1_16_reg_1884 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_17_reg_1945() {
    ap_phi_reg_pp0_iter0_a_1_17_reg_1945 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_18_reg_2006() {
    ap_phi_reg_pp0_iter0_a_1_18_reg_2006 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_19_reg_2067() {
    ap_phi_reg_pp0_iter0_a_1_19_reg_2067 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_1_reg_969() {
    ap_phi_reg_pp0_iter0_a_1_1_reg_969 = ap_const_lv32_0;
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_20_reg_2128() {
    ap_phi_reg_pp0_iter0_a_1_20_reg_2128 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_21_reg_2189() {
    ap_phi_reg_pp0_iter0_a_1_21_reg_2189 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_22_reg_2250() {
    ap_phi_reg_pp0_iter0_a_1_22_reg_2250 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_23_reg_2311() {
    ap_phi_reg_pp0_iter0_a_1_23_reg_2311 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_24_reg_2372() {
    ap_phi_reg_pp0_iter0_a_1_24_reg_2372 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_25_reg_2433() {
    ap_phi_reg_pp0_iter0_a_1_25_reg_2433 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_26_reg_2494() {
    ap_phi_reg_pp0_iter0_a_1_26_reg_2494 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_27_reg_2555() {
    ap_phi_reg_pp0_iter0_a_1_27_reg_2555 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_28_reg_2616() {
    ap_phi_reg_pp0_iter0_a_1_28_reg_2616 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_29_reg_2677() {
    ap_phi_reg_pp0_iter0_a_1_29_reg_2677 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_2_reg_1030() {
    ap_phi_reg_pp0_iter0_a_1_2_reg_1030 = ap_const_lv32_0;
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_30_reg_2738() {
    ap_phi_reg_pp0_iter0_a_1_30_reg_2738 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_31_reg_2799() {
    ap_phi_reg_pp0_iter0_a_1_31_reg_2799 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_32_reg_2860() {
    ap_phi_reg_pp0_iter0_a_1_32_reg_2860 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_33_reg_2921() {
    ap_phi_reg_pp0_iter0_a_1_33_reg_2921 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_34_reg_2982() {
    ap_phi_reg_pp0_iter0_a_1_34_reg_2982 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_35_reg_3043() {
    ap_phi_reg_pp0_iter0_a_1_35_reg_3043 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_36_reg_3104() {
    ap_phi_reg_pp0_iter0_a_1_36_reg_3104 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_37_reg_3165() {
    ap_phi_reg_pp0_iter0_a_1_37_reg_3165 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_38_reg_3226() {
    ap_phi_reg_pp0_iter0_a_1_38_reg_3226 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_39_reg_3287() {
    ap_phi_reg_pp0_iter0_a_1_39_reg_3287 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_3_reg_1091() {
    ap_phi_reg_pp0_iter0_a_1_3_reg_1091 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_40_reg_3348() {
    ap_phi_reg_pp0_iter0_a_1_40_reg_3348 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_41_reg_3409() {
    ap_phi_reg_pp0_iter0_a_1_41_reg_3409 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_42_reg_3470() {
    ap_phi_reg_pp0_iter0_a_1_42_reg_3470 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_43_reg_3531() {
    ap_phi_reg_pp0_iter0_a_1_43_reg_3531 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_44_reg_3592() {
    ap_phi_reg_pp0_iter0_a_1_44_reg_3592 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_45_reg_3653() {
    ap_phi_reg_pp0_iter0_a_1_45_reg_3653 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_46_reg_3714() {
    ap_phi_reg_pp0_iter0_a_1_46_reg_3714 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_47_reg_3775() {
    ap_phi_reg_pp0_iter0_a_1_47_reg_3775 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_48_reg_3836() {
    ap_phi_reg_pp0_iter0_a_1_48_reg_3836 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_49_reg_3897() {
    ap_phi_reg_pp0_iter0_a_1_49_reg_3897 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_4_reg_1152() {
    ap_phi_reg_pp0_iter0_a_1_4_reg_1152 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_50_reg_3958() {
    ap_phi_reg_pp0_iter0_a_1_50_reg_3958 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_51_reg_4019() {
    ap_phi_reg_pp0_iter0_a_1_51_reg_4019 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_52_reg_4080() {
    ap_phi_reg_pp0_iter0_a_1_52_reg_4080 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_53_reg_4141() {
    ap_phi_reg_pp0_iter0_a_1_53_reg_4141 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_54_reg_4202() {
    ap_phi_reg_pp0_iter0_a_1_54_reg_4202 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_55_reg_4263() {
    ap_phi_reg_pp0_iter0_a_1_55_reg_4263 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_56_reg_4324() {
    ap_phi_reg_pp0_iter0_a_1_56_reg_4324 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_57_reg_4385() {
    ap_phi_reg_pp0_iter0_a_1_57_reg_4385 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_58_reg_4446() {
    ap_phi_reg_pp0_iter0_a_1_58_reg_4446 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_59_reg_4507() {
    ap_phi_reg_pp0_iter0_a_1_59_reg_4507 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_5_reg_1213() {
    ap_phi_reg_pp0_iter0_a_1_5_reg_1213 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_60_reg_4568() {
    ap_phi_reg_pp0_iter0_a_1_60_reg_4568 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_61_reg_4629() {
    ap_phi_reg_pp0_iter0_a_1_61_reg_4629 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_62_reg_4689() {
    ap_phi_reg_pp0_iter0_a_1_62_reg_4689 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_63_reg_4746() {
    ap_phi_reg_pp0_iter0_a_1_63_reg_4746 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_6_reg_1274() {
    ap_phi_reg_pp0_iter0_a_1_6_reg_1274 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_7_reg_1335() {
    ap_phi_reg_pp0_iter0_a_1_7_reg_1335 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_8_reg_1396() {
    ap_phi_reg_pp0_iter0_a_1_8_reg_1396 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_a_1_9_reg_1457() {
    ap_phi_reg_pp0_iter0_a_1_9_reg_1457 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_0_reg_898() {
    ap_phi_reg_pp0_iter0_b_1_0_reg_898 = ap_const_lv32_0;
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_10_reg_1505() {
    ap_phi_reg_pp0_iter0_b_1_10_reg_1505 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_11_reg_1566() {
    ap_phi_reg_pp0_iter0_b_1_11_reg_1566 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_12_reg_1627() {
    ap_phi_reg_pp0_iter0_b_1_12_reg_1627 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_13_reg_1688() {
    ap_phi_reg_pp0_iter0_b_1_13_reg_1688 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_14_reg_1749() {
    ap_phi_reg_pp0_iter0_b_1_14_reg_1749 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_15_reg_1810() {
    ap_phi_reg_pp0_iter0_b_1_15_reg_1810 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_16_reg_1871() {
    ap_phi_reg_pp0_iter0_b_1_16_reg_1871 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_17_reg_1932() {
    ap_phi_reg_pp0_iter0_b_1_17_reg_1932 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_18_reg_1993() {
    ap_phi_reg_pp0_iter0_b_1_18_reg_1993 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_19_reg_2054() {
    ap_phi_reg_pp0_iter0_b_1_19_reg_2054 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_1_reg_956() {
    ap_phi_reg_pp0_iter0_b_1_1_reg_956 = ap_const_lv32_0;
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_20_reg_2115() {
    ap_phi_reg_pp0_iter0_b_1_20_reg_2115 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_21_reg_2176() {
    ap_phi_reg_pp0_iter0_b_1_21_reg_2176 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_22_reg_2237() {
    ap_phi_reg_pp0_iter0_b_1_22_reg_2237 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_23_reg_2298() {
    ap_phi_reg_pp0_iter0_b_1_23_reg_2298 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_24_reg_2359() {
    ap_phi_reg_pp0_iter0_b_1_24_reg_2359 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_25_reg_2420() {
    ap_phi_reg_pp0_iter0_b_1_25_reg_2420 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_26_reg_2481() {
    ap_phi_reg_pp0_iter0_b_1_26_reg_2481 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_27_reg_2542() {
    ap_phi_reg_pp0_iter0_b_1_27_reg_2542 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_28_reg_2603() {
    ap_phi_reg_pp0_iter0_b_1_28_reg_2603 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_29_reg_2664() {
    ap_phi_reg_pp0_iter0_b_1_29_reg_2664 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_2_reg_1017() {
    ap_phi_reg_pp0_iter0_b_1_2_reg_1017 = ap_const_lv32_0;
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_30_reg_2725() {
    ap_phi_reg_pp0_iter0_b_1_30_reg_2725 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_31_reg_2786() {
    ap_phi_reg_pp0_iter0_b_1_31_reg_2786 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_32_reg_2847() {
    ap_phi_reg_pp0_iter0_b_1_32_reg_2847 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_33_reg_2908() {
    ap_phi_reg_pp0_iter0_b_1_33_reg_2908 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_34_reg_2969() {
    ap_phi_reg_pp0_iter0_b_1_34_reg_2969 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_35_reg_3030() {
    ap_phi_reg_pp0_iter0_b_1_35_reg_3030 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_36_reg_3091() {
    ap_phi_reg_pp0_iter0_b_1_36_reg_3091 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_37_reg_3152() {
    ap_phi_reg_pp0_iter0_b_1_37_reg_3152 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_38_reg_3213() {
    ap_phi_reg_pp0_iter0_b_1_38_reg_3213 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_39_reg_3274() {
    ap_phi_reg_pp0_iter0_b_1_39_reg_3274 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_3_reg_1078() {
    ap_phi_reg_pp0_iter0_b_1_3_reg_1078 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_40_reg_3335() {
    ap_phi_reg_pp0_iter0_b_1_40_reg_3335 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_41_reg_3396() {
    ap_phi_reg_pp0_iter0_b_1_41_reg_3396 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_42_reg_3457() {
    ap_phi_reg_pp0_iter0_b_1_42_reg_3457 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_43_reg_3518() {
    ap_phi_reg_pp0_iter0_b_1_43_reg_3518 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_44_reg_3579() {
    ap_phi_reg_pp0_iter0_b_1_44_reg_3579 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_45_reg_3640() {
    ap_phi_reg_pp0_iter0_b_1_45_reg_3640 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_46_reg_3701() {
    ap_phi_reg_pp0_iter0_b_1_46_reg_3701 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_47_reg_3762() {
    ap_phi_reg_pp0_iter0_b_1_47_reg_3762 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_48_reg_3823() {
    ap_phi_reg_pp0_iter0_b_1_48_reg_3823 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_49_reg_3884() {
    ap_phi_reg_pp0_iter0_b_1_49_reg_3884 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_4_reg_1139() {
    ap_phi_reg_pp0_iter0_b_1_4_reg_1139 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_50_reg_3945() {
    ap_phi_reg_pp0_iter0_b_1_50_reg_3945 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_51_reg_4006() {
    ap_phi_reg_pp0_iter0_b_1_51_reg_4006 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_52_reg_4067() {
    ap_phi_reg_pp0_iter0_b_1_52_reg_4067 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_53_reg_4128() {
    ap_phi_reg_pp0_iter0_b_1_53_reg_4128 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_54_reg_4189() {
    ap_phi_reg_pp0_iter0_b_1_54_reg_4189 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_55_reg_4250() {
    ap_phi_reg_pp0_iter0_b_1_55_reg_4250 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_56_reg_4311() {
    ap_phi_reg_pp0_iter0_b_1_56_reg_4311 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_57_reg_4372() {
    ap_phi_reg_pp0_iter0_b_1_57_reg_4372 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_58_reg_4433() {
    ap_phi_reg_pp0_iter0_b_1_58_reg_4433 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_59_reg_4494() {
    ap_phi_reg_pp0_iter0_b_1_59_reg_4494 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_5_reg_1200() {
    ap_phi_reg_pp0_iter0_b_1_5_reg_1200 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_60_reg_4555() {
    ap_phi_reg_pp0_iter0_b_1_60_reg_4555 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_61_reg_4616() {
    ap_phi_reg_pp0_iter0_b_1_61_reg_4616 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_62_reg_4676() {
    ap_phi_reg_pp0_iter0_b_1_62_reg_4676 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_63_reg_4734() {
    ap_phi_reg_pp0_iter0_b_1_63_reg_4734 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_6_reg_1261() {
    ap_phi_reg_pp0_iter0_b_1_6_reg_1261 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_7_reg_1322() {
    ap_phi_reg_pp0_iter0_b_1_7_reg_1322 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_8_reg_1383() {
    ap_phi_reg_pp0_iter0_b_1_8_reg_1383 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_b_1_9_reg_1444() {
    ap_phi_reg_pp0_iter0_b_1_9_reg_1444 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_0_reg_886() {
    ap_phi_reg_pp0_iter0_c_1_0_reg_886 = ap_const_lv32_0;
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_10_reg_1492() {
    ap_phi_reg_pp0_iter0_c_1_10_reg_1492 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_11_reg_1553() {
    ap_phi_reg_pp0_iter0_c_1_11_reg_1553 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_12_reg_1614() {
    ap_phi_reg_pp0_iter0_c_1_12_reg_1614 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_13_reg_1675() {
    ap_phi_reg_pp0_iter0_c_1_13_reg_1675 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_14_reg_1736() {
    ap_phi_reg_pp0_iter0_c_1_14_reg_1736 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_15_reg_1797() {
    ap_phi_reg_pp0_iter0_c_1_15_reg_1797 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_16_reg_1858() {
    ap_phi_reg_pp0_iter0_c_1_16_reg_1858 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_17_reg_1919() {
    ap_phi_reg_pp0_iter0_c_1_17_reg_1919 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_18_reg_1980() {
    ap_phi_reg_pp0_iter0_c_1_18_reg_1980 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_19_reg_2041() {
    ap_phi_reg_pp0_iter0_c_1_19_reg_2041 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_1_reg_943() {
    ap_phi_reg_pp0_iter0_c_1_1_reg_943 = ap_const_lv32_0;
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_20_reg_2102() {
    ap_phi_reg_pp0_iter0_c_1_20_reg_2102 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_21_reg_2163() {
    ap_phi_reg_pp0_iter0_c_1_21_reg_2163 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_22_reg_2224() {
    ap_phi_reg_pp0_iter0_c_1_22_reg_2224 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_23_reg_2285() {
    ap_phi_reg_pp0_iter0_c_1_23_reg_2285 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_24_reg_2346() {
    ap_phi_reg_pp0_iter0_c_1_24_reg_2346 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_25_reg_2407() {
    ap_phi_reg_pp0_iter0_c_1_25_reg_2407 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_26_reg_2468() {
    ap_phi_reg_pp0_iter0_c_1_26_reg_2468 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_27_reg_2529() {
    ap_phi_reg_pp0_iter0_c_1_27_reg_2529 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_28_reg_2590() {
    ap_phi_reg_pp0_iter0_c_1_28_reg_2590 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_29_reg_2651() {
    ap_phi_reg_pp0_iter0_c_1_29_reg_2651 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_2_reg_1004() {
    ap_phi_reg_pp0_iter0_c_1_2_reg_1004 = ap_const_lv32_0;
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_30_reg_2712() {
    ap_phi_reg_pp0_iter0_c_1_30_reg_2712 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_31_reg_2773() {
    ap_phi_reg_pp0_iter0_c_1_31_reg_2773 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_32_reg_2834() {
    ap_phi_reg_pp0_iter0_c_1_32_reg_2834 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_33_reg_2895() {
    ap_phi_reg_pp0_iter0_c_1_33_reg_2895 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_34_reg_2956() {
    ap_phi_reg_pp0_iter0_c_1_34_reg_2956 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_35_reg_3017() {
    ap_phi_reg_pp0_iter0_c_1_35_reg_3017 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_36_reg_3078() {
    ap_phi_reg_pp0_iter0_c_1_36_reg_3078 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_37_reg_3139() {
    ap_phi_reg_pp0_iter0_c_1_37_reg_3139 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_38_reg_3200() {
    ap_phi_reg_pp0_iter0_c_1_38_reg_3200 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_39_reg_3261() {
    ap_phi_reg_pp0_iter0_c_1_39_reg_3261 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_3_reg_1065() {
    ap_phi_reg_pp0_iter0_c_1_3_reg_1065 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_40_reg_3322() {
    ap_phi_reg_pp0_iter0_c_1_40_reg_3322 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_41_reg_3383() {
    ap_phi_reg_pp0_iter0_c_1_41_reg_3383 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_42_reg_3444() {
    ap_phi_reg_pp0_iter0_c_1_42_reg_3444 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_43_reg_3505() {
    ap_phi_reg_pp0_iter0_c_1_43_reg_3505 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_44_reg_3566() {
    ap_phi_reg_pp0_iter0_c_1_44_reg_3566 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_45_reg_3627() {
    ap_phi_reg_pp0_iter0_c_1_45_reg_3627 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_46_reg_3688() {
    ap_phi_reg_pp0_iter0_c_1_46_reg_3688 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_47_reg_3749() {
    ap_phi_reg_pp0_iter0_c_1_47_reg_3749 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_48_reg_3810() {
    ap_phi_reg_pp0_iter0_c_1_48_reg_3810 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_49_reg_3871() {
    ap_phi_reg_pp0_iter0_c_1_49_reg_3871 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_4_reg_1126() {
    ap_phi_reg_pp0_iter0_c_1_4_reg_1126 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_50_reg_3932() {
    ap_phi_reg_pp0_iter0_c_1_50_reg_3932 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_51_reg_3993() {
    ap_phi_reg_pp0_iter0_c_1_51_reg_3993 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_52_reg_4054() {
    ap_phi_reg_pp0_iter0_c_1_52_reg_4054 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_53_reg_4115() {
    ap_phi_reg_pp0_iter0_c_1_53_reg_4115 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_54_reg_4176() {
    ap_phi_reg_pp0_iter0_c_1_54_reg_4176 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_55_reg_4237() {
    ap_phi_reg_pp0_iter0_c_1_55_reg_4237 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_56_reg_4298() {
    ap_phi_reg_pp0_iter0_c_1_56_reg_4298 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_57_reg_4359() {
    ap_phi_reg_pp0_iter0_c_1_57_reg_4359 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_58_reg_4420() {
    ap_phi_reg_pp0_iter0_c_1_58_reg_4420 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_59_reg_4481() {
    ap_phi_reg_pp0_iter0_c_1_59_reg_4481 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_5_reg_1187() {
    ap_phi_reg_pp0_iter0_c_1_5_reg_1187 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_60_reg_4542() {
    ap_phi_reg_pp0_iter0_c_1_60_reg_4542 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_61_reg_4603() {
    ap_phi_reg_pp0_iter0_c_1_61_reg_4603 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_62_reg_4664() {
    ap_phi_reg_pp0_iter0_c_1_62_reg_4664 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_63_reg_4722() {
    ap_phi_reg_pp0_iter0_c_1_63_reg_4722 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_6_reg_1248() {
    ap_phi_reg_pp0_iter0_c_1_6_reg_1248 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_7_reg_1309() {
    ap_phi_reg_pp0_iter0_c_1_7_reg_1309 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_8_reg_1370() {
    ap_phi_reg_pp0_iter0_c_1_8_reg_1370 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_c_1_9_reg_1431() {
    ap_phi_reg_pp0_iter0_c_1_9_reg_1431 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_10_reg_1481() {
    ap_phi_reg_pp0_iter0_e_1_10_reg_1481 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_11_reg_1542() {
    ap_phi_reg_pp0_iter0_e_1_11_reg_1542 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_12_reg_1603() {
    ap_phi_reg_pp0_iter0_e_1_12_reg_1603 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_13_reg_1664() {
    ap_phi_reg_pp0_iter0_e_1_13_reg_1664 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_14_reg_1725() {
    ap_phi_reg_pp0_iter0_e_1_14_reg_1725 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_15_reg_1786() {
    ap_phi_reg_pp0_iter0_e_1_15_reg_1786 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_16_reg_1847() {
    ap_phi_reg_pp0_iter0_e_1_16_reg_1847 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_17_reg_1908() {
    ap_phi_reg_pp0_iter0_e_1_17_reg_1908 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_18_reg_1969() {
    ap_phi_reg_pp0_iter0_e_1_18_reg_1969 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_19_reg_2030() {
    ap_phi_reg_pp0_iter0_e_1_19_reg_2030 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_20_reg_2091() {
    ap_phi_reg_pp0_iter0_e_1_20_reg_2091 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_21_reg_2152() {
    ap_phi_reg_pp0_iter0_e_1_21_reg_2152 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_22_reg_2213() {
    ap_phi_reg_pp0_iter0_e_1_22_reg_2213 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_23_reg_2274() {
    ap_phi_reg_pp0_iter0_e_1_23_reg_2274 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_24_reg_2335() {
    ap_phi_reg_pp0_iter0_e_1_24_reg_2335 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_25_reg_2396() {
    ap_phi_reg_pp0_iter0_e_1_25_reg_2396 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_26_reg_2457() {
    ap_phi_reg_pp0_iter0_e_1_26_reg_2457 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_27_reg_2518() {
    ap_phi_reg_pp0_iter0_e_1_27_reg_2518 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_28_reg_2579() {
    ap_phi_reg_pp0_iter0_e_1_28_reg_2579 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_29_reg_2640() {
    ap_phi_reg_pp0_iter0_e_1_29_reg_2640 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_30_reg_2701() {
    ap_phi_reg_pp0_iter0_e_1_30_reg_2701 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_31_reg_2762() {
    ap_phi_reg_pp0_iter0_e_1_31_reg_2762 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_32_reg_2823() {
    ap_phi_reg_pp0_iter0_e_1_32_reg_2823 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_33_reg_2884() {
    ap_phi_reg_pp0_iter0_e_1_33_reg_2884 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_34_reg_2945() {
    ap_phi_reg_pp0_iter0_e_1_34_reg_2945 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_35_reg_3006() {
    ap_phi_reg_pp0_iter0_e_1_35_reg_3006 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_36_reg_3067() {
    ap_phi_reg_pp0_iter0_e_1_36_reg_3067 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_37_reg_3128() {
    ap_phi_reg_pp0_iter0_e_1_37_reg_3128 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_38_reg_3189() {
    ap_phi_reg_pp0_iter0_e_1_38_reg_3189 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_39_reg_3250() {
    ap_phi_reg_pp0_iter0_e_1_39_reg_3250 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_3_reg_1054() {
    ap_phi_reg_pp0_iter0_e_1_3_reg_1054 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_40_reg_3311() {
    ap_phi_reg_pp0_iter0_e_1_40_reg_3311 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_41_reg_3372() {
    ap_phi_reg_pp0_iter0_e_1_41_reg_3372 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_42_reg_3433() {
    ap_phi_reg_pp0_iter0_e_1_42_reg_3433 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_43_reg_3494() {
    ap_phi_reg_pp0_iter0_e_1_43_reg_3494 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_44_reg_3555() {
    ap_phi_reg_pp0_iter0_e_1_44_reg_3555 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_45_reg_3616() {
    ap_phi_reg_pp0_iter0_e_1_45_reg_3616 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_46_reg_3677() {
    ap_phi_reg_pp0_iter0_e_1_46_reg_3677 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_47_reg_3738() {
    ap_phi_reg_pp0_iter0_e_1_47_reg_3738 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_48_reg_3799() {
    ap_phi_reg_pp0_iter0_e_1_48_reg_3799 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_49_reg_3860() {
    ap_phi_reg_pp0_iter0_e_1_49_reg_3860 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_4_reg_1115() {
    ap_phi_reg_pp0_iter0_e_1_4_reg_1115 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_50_reg_3921() {
    ap_phi_reg_pp0_iter0_e_1_50_reg_3921 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_51_reg_3982() {
    ap_phi_reg_pp0_iter0_e_1_51_reg_3982 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_52_reg_4043() {
    ap_phi_reg_pp0_iter0_e_1_52_reg_4043 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_53_reg_4104() {
    ap_phi_reg_pp0_iter0_e_1_53_reg_4104 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_54_reg_4165() {
    ap_phi_reg_pp0_iter0_e_1_54_reg_4165 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_55_reg_4226() {
    ap_phi_reg_pp0_iter0_e_1_55_reg_4226 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_56_reg_4287() {
    ap_phi_reg_pp0_iter0_e_1_56_reg_4287 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_57_reg_4348() {
    ap_phi_reg_pp0_iter0_e_1_57_reg_4348 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_58_reg_4409() {
    ap_phi_reg_pp0_iter0_e_1_58_reg_4409 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_59_reg_4470() {
    ap_phi_reg_pp0_iter0_e_1_59_reg_4470 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_5_reg_1176() {
    ap_phi_reg_pp0_iter0_e_1_5_reg_1176 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_60_reg_4531() {
    ap_phi_reg_pp0_iter0_e_1_60_reg_4531 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_61_reg_4592() {
    ap_phi_reg_pp0_iter0_e_1_61_reg_4592 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_62_reg_4653() {
    ap_phi_reg_pp0_iter0_e_1_62_reg_4653 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_63_reg_4712() {
    ap_phi_reg_pp0_iter0_e_1_63_reg_4712 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_6_reg_1237() {
    ap_phi_reg_pp0_iter0_e_1_6_reg_1237 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_7_reg_1298() {
    ap_phi_reg_pp0_iter0_e_1_7_reg_1298 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_8_reg_1359() {
    ap_phi_reg_pp0_iter0_e_1_8_reg_1359 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_e_1_9_reg_1420() {
    ap_phi_reg_pp0_iter0_e_1_9_reg_1420 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_10_reg_1469() {
    ap_phi_reg_pp0_iter0_f_1_10_reg_1469 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_11_reg_1530() {
    ap_phi_reg_pp0_iter0_f_1_11_reg_1530 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_12_reg_1591() {
    ap_phi_reg_pp0_iter0_f_1_12_reg_1591 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_13_reg_1652() {
    ap_phi_reg_pp0_iter0_f_1_13_reg_1652 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_14_reg_1713() {
    ap_phi_reg_pp0_iter0_f_1_14_reg_1713 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_15_reg_1774() {
    ap_phi_reg_pp0_iter0_f_1_15_reg_1774 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_16_reg_1835() {
    ap_phi_reg_pp0_iter0_f_1_16_reg_1835 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_17_reg_1896() {
    ap_phi_reg_pp0_iter0_f_1_17_reg_1896 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_18_reg_1957() {
    ap_phi_reg_pp0_iter0_f_1_18_reg_1957 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_19_reg_2018() {
    ap_phi_reg_pp0_iter0_f_1_19_reg_2018 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_20_reg_2079() {
    ap_phi_reg_pp0_iter0_f_1_20_reg_2079 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_21_reg_2140() {
    ap_phi_reg_pp0_iter0_f_1_21_reg_2140 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_22_reg_2201() {
    ap_phi_reg_pp0_iter0_f_1_22_reg_2201 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_23_reg_2262() {
    ap_phi_reg_pp0_iter0_f_1_23_reg_2262 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_24_reg_2323() {
    ap_phi_reg_pp0_iter0_f_1_24_reg_2323 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_25_reg_2384() {
    ap_phi_reg_pp0_iter0_f_1_25_reg_2384 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_26_reg_2445() {
    ap_phi_reg_pp0_iter0_f_1_26_reg_2445 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_27_reg_2506() {
    ap_phi_reg_pp0_iter0_f_1_27_reg_2506 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_28_reg_2567() {
    ap_phi_reg_pp0_iter0_f_1_28_reg_2567 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_29_reg_2628() {
    ap_phi_reg_pp0_iter0_f_1_29_reg_2628 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_30_reg_2689() {
    ap_phi_reg_pp0_iter0_f_1_30_reg_2689 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_31_reg_2750() {
    ap_phi_reg_pp0_iter0_f_1_31_reg_2750 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_32_reg_2811() {
    ap_phi_reg_pp0_iter0_f_1_32_reg_2811 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_33_reg_2872() {
    ap_phi_reg_pp0_iter0_f_1_33_reg_2872 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_34_reg_2933() {
    ap_phi_reg_pp0_iter0_f_1_34_reg_2933 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_35_reg_2994() {
    ap_phi_reg_pp0_iter0_f_1_35_reg_2994 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_36_reg_3055() {
    ap_phi_reg_pp0_iter0_f_1_36_reg_3055 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_37_reg_3116() {
    ap_phi_reg_pp0_iter0_f_1_37_reg_3116 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_38_reg_3177() {
    ap_phi_reg_pp0_iter0_f_1_38_reg_3177 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_39_reg_3238() {
    ap_phi_reg_pp0_iter0_f_1_39_reg_3238 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_3_reg_1042() {
    ap_phi_reg_pp0_iter0_f_1_3_reg_1042 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_40_reg_3299() {
    ap_phi_reg_pp0_iter0_f_1_40_reg_3299 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_41_reg_3360() {
    ap_phi_reg_pp0_iter0_f_1_41_reg_3360 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_42_reg_3421() {
    ap_phi_reg_pp0_iter0_f_1_42_reg_3421 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_43_reg_3482() {
    ap_phi_reg_pp0_iter0_f_1_43_reg_3482 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_44_reg_3543() {
    ap_phi_reg_pp0_iter0_f_1_44_reg_3543 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_45_reg_3604() {
    ap_phi_reg_pp0_iter0_f_1_45_reg_3604 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_46_reg_3665() {
    ap_phi_reg_pp0_iter0_f_1_46_reg_3665 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_47_reg_3726() {
    ap_phi_reg_pp0_iter0_f_1_47_reg_3726 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_48_reg_3787() {
    ap_phi_reg_pp0_iter0_f_1_48_reg_3787 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_49_reg_3848() {
    ap_phi_reg_pp0_iter0_f_1_49_reg_3848 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_4_reg_1103() {
    ap_phi_reg_pp0_iter0_f_1_4_reg_1103 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_50_reg_3909() {
    ap_phi_reg_pp0_iter0_f_1_50_reg_3909 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_51_reg_3970() {
    ap_phi_reg_pp0_iter0_f_1_51_reg_3970 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_52_reg_4031() {
    ap_phi_reg_pp0_iter0_f_1_52_reg_4031 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_53_reg_4092() {
    ap_phi_reg_pp0_iter0_f_1_53_reg_4092 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_54_reg_4153() {
    ap_phi_reg_pp0_iter0_f_1_54_reg_4153 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_55_reg_4214() {
    ap_phi_reg_pp0_iter0_f_1_55_reg_4214 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_56_reg_4275() {
    ap_phi_reg_pp0_iter0_f_1_56_reg_4275 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_57_reg_4336() {
    ap_phi_reg_pp0_iter0_f_1_57_reg_4336 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_58_reg_4397() {
    ap_phi_reg_pp0_iter0_f_1_58_reg_4397 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_59_reg_4458() {
    ap_phi_reg_pp0_iter0_f_1_59_reg_4458 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_5_reg_1164() {
    ap_phi_reg_pp0_iter0_f_1_5_reg_1164 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_60_reg_4519() {
    ap_phi_reg_pp0_iter0_f_1_60_reg_4519 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_61_reg_4580() {
    ap_phi_reg_pp0_iter0_f_1_61_reg_4580 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_62_reg_4641() {
    ap_phi_reg_pp0_iter0_f_1_62_reg_4641 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_63_reg_4701() {
    ap_phi_reg_pp0_iter0_f_1_63_reg_4701 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_6_reg_1225() {
    ap_phi_reg_pp0_iter0_f_1_6_reg_1225 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_7_reg_1286() {
    ap_phi_reg_pp0_iter0_f_1_7_reg_1286 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_8_reg_1347() {
    ap_phi_reg_pp0_iter0_f_1_8_reg_1347 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_phi_reg_pp0_iter0_f_1_9_reg_1408() {
    ap_phi_reg_pp0_iter0_f_1_9_reg_1408 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void sha256_transform::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void sha256_transform::thread_ap_reset_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0_0to15.read()))) {
        ap_reset_idle_pp0 = ap_const_logic_1;
    } else {
        ap_reset_idle_pp0 = ap_const_logic_0;
    }
}

void sha256_transform::thread_ap_return_0() {
    ap_return_0 = add_ln143_fu_9151_p2.read();
}

void sha256_transform::thread_ap_return_1() {
    ap_return_1 = add_ln144_fu_9156_p2.read();
}

void sha256_transform::thread_ap_return_2() {
    ap_return_2 = add_ln145_fu_9161_p2.read();
}

void sha256_transform::thread_ap_return_3() {
    ap_return_3 = add_ln146_reg_11477.read();
}

void sha256_transform::thread_ap_return_4() {
    ap_return_4 = add_ln147_fu_9166_p2.read();
}

void sha256_transform::thread_ap_return_5() {
    ap_return_5 = add_ln148_fu_9171_p2.read();
}

void sha256_transform::thread_ap_return_6() {
    ap_return_6 = add_ln149_reg_11482.read();
}

void sha256_transform::thread_ap_return_7() {
    ap_return_7 = add_ln150_reg_11487.read();
}

void sha256_transform::thread_data_0_address0() {
    if (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1)) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            data_0_address0 =  (sc_lv<4>) (ap_const_lv64_E);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            data_0_address0 =  (sc_lv<4>) (ap_const_lv64_C);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            data_0_address0 =  (sc_lv<4>) (ap_const_lv64_A);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            data_0_address0 =  (sc_lv<4>) (ap_const_lv64_8);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            data_0_address0 =  (sc_lv<4>) (ap_const_lv64_6);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            data_0_address0 =  (sc_lv<4>) (ap_const_lv64_4);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            data_0_address0 =  (sc_lv<4>) (ap_const_lv64_2);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            data_0_address0 =  (sc_lv<4>) (ap_const_lv64_0);
        } else {
            data_0_address0 = "XXXX";
        }
    } else {
        data_0_address0 = "XXXX";
    }
}

void sha256_transform::thread_data_0_address1() {
    if (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1)) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            data_0_address1 =  (sc_lv<4>) (ap_const_lv64_F);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            data_0_address1 =  (sc_lv<4>) (ap_const_lv64_D);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            data_0_address1 =  (sc_lv<4>) (ap_const_lv64_B);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            data_0_address1 =  (sc_lv<4>) (ap_const_lv64_9);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            data_0_address1 =  (sc_lv<4>) (ap_const_lv64_7);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            data_0_address1 =  (sc_lv<4>) (ap_const_lv64_5);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            data_0_address1 =  (sc_lv<4>) (ap_const_lv64_3);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            data_0_address1 =  (sc_lv<4>) (ap_const_lv64_1);
        } else {
            data_0_address1 = "XXXX";
        }
    } else {
        data_0_address1 = "XXXX";
    }
}

void sha256_transform::thread_data_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)))) {
        data_0_ce0 = ap_const_logic_1;
    } else {
        data_0_ce0 = ap_const_logic_0;
    }
}

void sha256_transform::thread_data_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)))) {
        data_0_ce1 = ap_const_logic_1;
    } else {
        data_0_ce1 = ap_const_logic_0;
    }
}

void sha256_transform::thread_data_1_address0() {
    if (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1)) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            data_1_address0 =  (sc_lv<4>) (ap_const_lv64_E);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            data_1_address0 =  (sc_lv<4>) (ap_const_lv64_C);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            data_1_address0 =  (sc_lv<4>) (ap_const_lv64_A);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            data_1_address0 =  (sc_lv<4>) (ap_const_lv64_8);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            data_1_address0 =  (sc_lv<4>) (ap_const_lv64_6);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            data_1_address0 =  (sc_lv<4>) (ap_const_lv64_4);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            data_1_address0 =  (sc_lv<4>) (ap_const_lv64_2);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            data_1_address0 =  (sc_lv<4>) (ap_const_lv64_0);
        } else {
            data_1_address0 = "XXXX";
        }
    } else {
        data_1_address0 = "XXXX";
    }
}

void sha256_transform::thread_data_1_address1() {
    if (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1)) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            data_1_address1 =  (sc_lv<4>) (ap_const_lv64_F);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            data_1_address1 =  (sc_lv<4>) (ap_const_lv64_D);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            data_1_address1 =  (sc_lv<4>) (ap_const_lv64_B);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            data_1_address1 =  (sc_lv<4>) (ap_const_lv64_9);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            data_1_address1 =  (sc_lv<4>) (ap_const_lv64_7);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            data_1_address1 =  (sc_lv<4>) (ap_const_lv64_5);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            data_1_address1 =  (sc_lv<4>) (ap_const_lv64_3);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            data_1_address1 =  (sc_lv<4>) (ap_const_lv64_1);
        } else {
            data_1_address1 = "XXXX";
        }
    } else {
        data_1_address1 = "XXXX";
    }
}

void sha256_transform::thread_data_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)))) {
        data_1_ce0 = ap_const_logic_1;
    } else {
        data_1_ce0 = ap_const_logic_0;
    }
}

void sha256_transform::thread_data_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)))) {
        data_1_ce1 = ap_const_logic_1;
    } else {
        data_1_ce1 = ap_const_logic_0;
    }
}

void sha256_transform::thread_data_2_address0() {
    if (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1)) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            data_2_address0 =  (sc_lv<4>) (ap_const_lv64_E);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            data_2_address0 =  (sc_lv<4>) (ap_const_lv64_C);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            data_2_address0 =  (sc_lv<4>) (ap_const_lv64_A);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            data_2_address0 =  (sc_lv<4>) (ap_const_lv64_8);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            data_2_address0 =  (sc_lv<4>) (ap_const_lv64_6);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            data_2_address0 =  (sc_lv<4>) (ap_const_lv64_4);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            data_2_address0 =  (sc_lv<4>) (ap_const_lv64_2);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            data_2_address0 =  (sc_lv<4>) (ap_const_lv64_0);
        } else {
            data_2_address0 = "XXXX";
        }
    } else {
        data_2_address0 = "XXXX";
    }
}

void sha256_transform::thread_data_2_address1() {
    if (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1)) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            data_2_address1 =  (sc_lv<4>) (ap_const_lv64_F);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            data_2_address1 =  (sc_lv<4>) (ap_const_lv64_D);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            data_2_address1 =  (sc_lv<4>) (ap_const_lv64_B);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            data_2_address1 =  (sc_lv<4>) (ap_const_lv64_9);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            data_2_address1 =  (sc_lv<4>) (ap_const_lv64_7);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            data_2_address1 =  (sc_lv<4>) (ap_const_lv64_5);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            data_2_address1 =  (sc_lv<4>) (ap_const_lv64_3);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            data_2_address1 =  (sc_lv<4>) (ap_const_lv64_1);
        } else {
            data_2_address1 = "XXXX";
        }
    } else {
        data_2_address1 = "XXXX";
    }
}

void sha256_transform::thread_data_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)))) {
        data_2_ce0 = ap_const_logic_1;
    } else {
        data_2_ce0 = ap_const_logic_0;
    }
}

void sha256_transform::thread_data_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)))) {
        data_2_ce1 = ap_const_logic_1;
    } else {
        data_2_ce1 = ap_const_logic_0;
    }
}

void sha256_transform::thread_data_3_address0() {
    if (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1)) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            data_3_address0 =  (sc_lv<4>) (ap_const_lv64_E);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            data_3_address0 =  (sc_lv<4>) (ap_const_lv64_C);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            data_3_address0 =  (sc_lv<4>) (ap_const_lv64_A);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            data_3_address0 =  (sc_lv<4>) (ap_const_lv64_8);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            data_3_address0 =  (sc_lv<4>) (ap_const_lv64_6);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            data_3_address0 =  (sc_lv<4>) (ap_const_lv64_4);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            data_3_address0 =  (sc_lv<4>) (ap_const_lv64_2);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            data_3_address0 =  (sc_lv<4>) (ap_const_lv64_0);
        } else {
            data_3_address0 = "XXXX";
        }
    } else {
        data_3_address0 = "XXXX";
    }
}

void sha256_transform::thread_data_3_address1() {
    if (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1)) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            data_3_address1 =  (sc_lv<4>) (ap_const_lv64_F);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            data_3_address1 =  (sc_lv<4>) (ap_const_lv64_D);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            data_3_address1 =  (sc_lv<4>) (ap_const_lv64_B);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            data_3_address1 =  (sc_lv<4>) (ap_const_lv64_9);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            data_3_address1 =  (sc_lv<4>) (ap_const_lv64_7);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            data_3_address1 =  (sc_lv<4>) (ap_const_lv64_5);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            data_3_address1 =  (sc_lv<4>) (ap_const_lv64_3);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            data_3_address1 =  (sc_lv<4>) (ap_const_lv64_1);
        } else {
            data_3_address1 = "XXXX";
        }
    } else {
        data_3_address1 = "XXXX";
    }
}

void sha256_transform::thread_data_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)))) {
        data_3_ce0 = ap_const_logic_1;
    } else {
        data_3_ce0 = ap_const_logic_0;
    }
}

void sha256_transform::thread_data_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)))) {
        data_3_ce1 = ap_const_logic_1;
    } else {
        data_3_ce1 = ap_const_logic_0;
    }
}

void sha256_transform::thread_grp_CH_fu_4757_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_4757_x = ap_phi_mux_e_1_35_phi_fu_3009_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_4757_x = ap_phi_mux_e_1_33_phi_fu_2887_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_4757_x = ap_phi_reg_pp0_iter8_e_1_32_reg_2823.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_4757_x = ap_phi_mux_e_1_3_phi_fu_1057_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_4757_x = ap_phi_mux_e_1_2_phi_fu_996_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_4757_x = ap_phi_mux_e_1_1_phi_fu_936_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_4757_x = ap_phi_mux_e_1_0_phi_fu_879_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(trunc_ln104_fu_5620_p1.read(), ap_const_lv1_1))) {
        grp_CH_fu_4757_x = ctx_state_4_read.read();
    } else {
        grp_CH_fu_4757_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_4757_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_4757_y = ap_phi_mux_f_1_35_phi_fu_2997_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_4757_y = ap_phi_mux_f_1_33_phi_fu_2875_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_4757_y = ap_phi_reg_pp0_iter8_f_1_32_reg_2811.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_4757_y = ap_phi_mux_f_1_3_phi_fu_1045_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_4757_y = ap_phi_mux_f_1_2_phi_fu_984_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_4757_y = ap_phi_mux_f_1_1_phi_fu_925_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_4757_y = ap_phi_mux_f_1_0_phi_fu_869_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(trunc_ln104_fu_5620_p1.read(), ap_const_lv1_1))) {
        grp_CH_fu_4757_y = ctx_state_5_read.read();
    } else {
        grp_CH_fu_4757_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_4757_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_4757_z = f_1_34_reg_2933.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_4757_z = f_1_32_reg_2811.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_4757_z = f_1_31_reg_2750.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_4757_z = f_1_2_reg_981.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_4757_z = f_1_1_reg_922.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_4757_z = f_1_0_reg_866.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_4757_z = ctx_state_5_read_1_reg_9227.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(trunc_ln104_fu_5620_p1.read(), ap_const_lv1_1))) {
        grp_CH_fu_4757_z = ctx_state_6_read.read();
    } else {
        grp_CH_fu_4757_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_4778_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_4778_x = ap_phi_mux_e_1_39_phi_fu_3253_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_4778_x = ap_phi_mux_e_1_37_phi_fu_3131_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_4778_x = ap_phi_mux_e_1_36_phi_fu_3070_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        grp_CH_fu_4778_x = ap_phi_mux_e_1_34_phi_fu_2948_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_4778_x = ap_phi_mux_e_1_7_phi_fu_1301_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_4778_x = ap_phi_mux_e_1_6_phi_fu_1240_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_4778_x = ap_phi_mux_e_1_5_phi_fu_1179_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_4778_x = ap_phi_mux_e_1_4_phi_fu_1118_p4.read();
    } else {
        grp_CH_fu_4778_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_4778_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_4778_y = ap_phi_mux_f_1_39_phi_fu_3241_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_4778_y = ap_phi_mux_f_1_37_phi_fu_3119_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_4778_y = ap_phi_mux_f_1_36_phi_fu_3058_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        grp_CH_fu_4778_y = ap_phi_mux_f_1_34_phi_fu_2936_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_4778_y = ap_phi_mux_f_1_7_phi_fu_1289_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_4778_y = ap_phi_mux_f_1_6_phi_fu_1228_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_4778_y = ap_phi_mux_f_1_5_phi_fu_1167_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_4778_y = ap_phi_mux_f_1_4_phi_fu_1106_p4.read();
    } else {
        grp_CH_fu_4778_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_4778_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_4778_z = f_1_38_reg_3177.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_4778_z = f_1_36_reg_3055.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_4778_z = f_1_35_reg_2994.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        grp_CH_fu_4778_z = f_1_33_reg_2872.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_4778_z = f_1_6_reg_1225.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_4778_z = f_1_5_reg_1164.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_4778_z = f_1_4_reg_1103.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_4778_z = f_1_3_reg_1042.read();
    } else {
        grp_CH_fu_4778_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_4797_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_4797_x = ap_phi_mux_e_1_43_phi_fu_3497_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_4797_x = ap_phi_mux_e_1_41_phi_fu_3375_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_4797_x = ap_phi_mux_e_1_40_phi_fu_3314_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        grp_CH_fu_4797_x = ap_phi_mux_e_1_38_phi_fu_3192_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_4797_x = ap_phi_mux_e_1_11_phi_fu_1545_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_4797_x = ap_phi_mux_e_1_10_phi_fu_1484_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_4797_x = ap_phi_mux_e_1_9_phi_fu_1423_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_4797_x = ap_phi_mux_e_1_8_phi_fu_1362_p4.read();
    } else {
        grp_CH_fu_4797_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_4797_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_4797_y = ap_phi_mux_f_1_43_phi_fu_3485_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_4797_y = ap_phi_mux_f_1_41_phi_fu_3363_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_4797_y = ap_phi_mux_f_1_40_phi_fu_3302_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        grp_CH_fu_4797_y = ap_phi_mux_f_1_38_phi_fu_3180_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_4797_y = ap_phi_mux_f_1_11_phi_fu_1533_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_4797_y = ap_phi_mux_f_1_10_phi_fu_1472_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_4797_y = ap_phi_mux_f_1_9_phi_fu_1411_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_4797_y = ap_phi_mux_f_1_8_phi_fu_1350_p4.read();
    } else {
        grp_CH_fu_4797_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_4797_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_4797_z = f_1_42_reg_3421.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_4797_z = f_1_40_reg_3299.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_4797_z = f_1_39_reg_3238.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        grp_CH_fu_4797_z = f_1_37_reg_3116.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_4797_z = f_1_10_reg_1469.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_4797_z = f_1_9_reg_1408.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_4797_z = f_1_8_reg_1347.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_4797_z = f_1_7_reg_1286.read();
    } else {
        grp_CH_fu_4797_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_4816_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_4816_x = ap_phi_mux_e_1_47_phi_fu_3741_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_4816_x = ap_phi_mux_e_1_45_phi_fu_3619_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_4816_x = ap_phi_mux_e_1_44_phi_fu_3558_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        grp_CH_fu_4816_x = ap_phi_mux_e_1_42_phi_fu_3436_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_4816_x = ap_phi_mux_e_1_15_phi_fu_1789_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_4816_x = ap_phi_mux_e_1_14_phi_fu_1728_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_4816_x = ap_phi_mux_e_1_13_phi_fu_1667_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_4816_x = ap_phi_mux_e_1_12_phi_fu_1606_p4.read();
    } else {
        grp_CH_fu_4816_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_4816_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_4816_y = ap_phi_mux_f_1_47_phi_fu_3729_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_4816_y = ap_phi_mux_f_1_45_phi_fu_3607_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_4816_y = ap_phi_mux_f_1_44_phi_fu_3546_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        grp_CH_fu_4816_y = ap_phi_mux_f_1_42_phi_fu_3424_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_4816_y = ap_phi_mux_f_1_15_phi_fu_1777_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_4816_y = ap_phi_mux_f_1_14_phi_fu_1716_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_4816_y = ap_phi_mux_f_1_13_phi_fu_1655_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_4816_y = ap_phi_mux_f_1_12_phi_fu_1594_p4.read();
    } else {
        grp_CH_fu_4816_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_4816_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_4816_z = f_1_46_reg_3665.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_4816_z = f_1_44_reg_3543.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_4816_z = f_1_43_reg_3482.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        grp_CH_fu_4816_z = f_1_41_reg_3360.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_4816_z = f_1_14_reg_1713.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_4816_z = f_1_13_reg_1652.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_4816_z = f_1_12_reg_1591.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_4816_z = f_1_11_reg_1530.read();
    } else {
        grp_CH_fu_4816_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_4835_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_4835_x = ap_phi_mux_e_1_51_phi_fu_3985_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_4835_x = ap_phi_mux_e_1_49_phi_fu_3863_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_4835_x = ap_phi_mux_e_1_48_phi_fu_3802_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        grp_CH_fu_4835_x = ap_phi_mux_e_1_46_phi_fu_3680_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_4835_x = ap_phi_mux_e_1_19_phi_fu_2033_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_4835_x = ap_phi_mux_e_1_18_phi_fu_1972_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_4835_x = ap_phi_mux_e_1_17_phi_fu_1911_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_4835_x = ap_phi_mux_e_1_16_phi_fu_1850_p4.read();
    } else {
        grp_CH_fu_4835_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_4835_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_4835_y = ap_phi_mux_f_1_51_phi_fu_3973_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_4835_y = ap_phi_mux_f_1_49_phi_fu_3851_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_4835_y = ap_phi_mux_f_1_48_phi_fu_3790_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        grp_CH_fu_4835_y = ap_phi_mux_f_1_46_phi_fu_3668_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_4835_y = ap_phi_mux_f_1_19_phi_fu_2021_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_4835_y = ap_phi_mux_f_1_18_phi_fu_1960_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_4835_y = ap_phi_mux_f_1_17_phi_fu_1899_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_4835_y = ap_phi_mux_f_1_16_phi_fu_1838_p4.read();
    } else {
        grp_CH_fu_4835_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_4835_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_4835_z = f_1_50_reg_3909.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_4835_z = f_1_48_reg_3787.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_4835_z = f_1_47_reg_3726.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        grp_CH_fu_4835_z = f_1_45_reg_3604.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_4835_z = f_1_18_reg_1957.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_4835_z = f_1_17_reg_1896.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_4835_z = f_1_16_reg_1835.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_4835_z = f_1_15_reg_1774.read();
    } else {
        grp_CH_fu_4835_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_4854_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_4854_x = ap_phi_mux_e_1_55_phi_fu_4229_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_4854_x = ap_phi_mux_e_1_53_phi_fu_4107_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_4854_x = ap_phi_mux_e_1_52_phi_fu_4046_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()))) {
        grp_CH_fu_4854_x = ap_phi_mux_e_1_50_phi_fu_3924_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_4854_x = ap_phi_mux_e_1_23_phi_fu_2277_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_4854_x = ap_phi_mux_e_1_22_phi_fu_2216_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_4854_x = ap_phi_mux_e_1_21_phi_fu_2155_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_4854_x = ap_phi_mux_e_1_20_phi_fu_2094_p4.read();
    } else {
        grp_CH_fu_4854_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_4854_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_4854_y = ap_phi_mux_f_1_55_phi_fu_4217_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_4854_y = ap_phi_mux_f_1_53_phi_fu_4095_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_4854_y = ap_phi_mux_f_1_52_phi_fu_4034_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()))) {
        grp_CH_fu_4854_y = ap_phi_mux_f_1_50_phi_fu_3912_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_4854_y = ap_phi_mux_f_1_23_phi_fu_2265_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_4854_y = ap_phi_mux_f_1_22_phi_fu_2204_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_4854_y = ap_phi_mux_f_1_21_phi_fu_2143_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_4854_y = ap_phi_mux_f_1_20_phi_fu_2082_p4.read();
    } else {
        grp_CH_fu_4854_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_4854_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_4854_z = f_1_54_reg_4153.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_4854_z = f_1_52_reg_4031.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_4854_z = f_1_51_reg_3970.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()))) {
        grp_CH_fu_4854_z = f_1_49_reg_3848.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_4854_z = f_1_22_reg_2201.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_4854_z = f_1_21_reg_2140.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_4854_z = f_1_20_reg_2079.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_4854_z = f_1_19_reg_2018.read();
    } else {
        grp_CH_fu_4854_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_4873_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter15_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_4873_x = ap_phi_mux_e_1_59_phi_fu_4473_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_4873_x = ap_phi_mux_e_1_57_phi_fu_4351_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_4873_x = ap_phi_mux_e_1_56_phi_fu_4290_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        grp_CH_fu_4873_x = ap_phi_mux_e_1_54_phi_fu_4168_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_4873_x = ap_phi_mux_e_1_27_phi_fu_2521_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_4873_x = ap_phi_mux_e_1_26_phi_fu_2460_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_4873_x = ap_phi_mux_e_1_25_phi_fu_2399_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_4873_x = ap_phi_mux_e_1_24_phi_fu_2338_p4.read();
    } else {
        grp_CH_fu_4873_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_4873_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter15_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_4873_y = ap_phi_mux_f_1_59_phi_fu_4461_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_4873_y = ap_phi_mux_f_1_57_phi_fu_4339_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_4873_y = ap_phi_mux_f_1_56_phi_fu_4278_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        grp_CH_fu_4873_y = ap_phi_mux_f_1_54_phi_fu_4156_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_4873_y = ap_phi_mux_f_1_27_phi_fu_2509_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_4873_y = ap_phi_mux_f_1_26_phi_fu_2448_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_4873_y = ap_phi_mux_f_1_25_phi_fu_2387_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_4873_y = ap_phi_mux_f_1_24_phi_fu_2326_p4.read();
    } else {
        grp_CH_fu_4873_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_4873_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter15_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_4873_z = f_1_58_reg_4397.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_4873_z = f_1_56_reg_4275.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_4873_z = f_1_55_reg_4214.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        grp_CH_fu_4873_z = f_1_53_reg_4092.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_4873_z = f_1_26_reg_2445.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_4873_z = f_1_25_reg_2384.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_4873_z = f_1_24_reg_2323.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_4873_z = f_1_23_reg_2262.read();
    } else {
        grp_CH_fu_4873_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_4892_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter16_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_4892_x = e_1_62_reg_4653.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter15_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_4892_x = ap_phi_mux_e_1_61_phi_fu_4595_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter15_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_4892_x = ap_phi_mux_e_1_60_phi_fu_4534_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()))) {
        grp_CH_fu_4892_x = ap_phi_mux_e_1_58_phi_fu_4412_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_4892_x = ap_phi_mux_e_1_31_phi_fu_2765_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_4892_x = ap_phi_mux_e_1_30_phi_fu_2704_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_4892_x = ap_phi_mux_e_1_29_phi_fu_2643_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_4892_x = ap_phi_mux_e_1_28_phi_fu_2582_p4.read();
    } else {
        grp_CH_fu_4892_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_4892_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter16_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_4892_y = f_1_62_reg_4641.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter15_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_4892_y = ap_phi_mux_f_1_61_phi_fu_4583_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter15_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_4892_y = ap_phi_mux_f_1_60_phi_fu_4522_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()))) {
        grp_CH_fu_4892_y = ap_phi_mux_f_1_58_phi_fu_4400_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_4892_y = ap_phi_mux_f_1_31_phi_fu_2753_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_4892_y = ap_phi_mux_f_1_30_phi_fu_2692_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_4892_y = ap_phi_mux_f_1_29_phi_fu_2631_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_4892_y = ap_phi_mux_f_1_28_phi_fu_2570_p4.read();
    } else {
        grp_CH_fu_4892_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_4892_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter16_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_4892_z = f_1_61_reg_4580.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter15_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_4892_z = f_1_60_reg_4519.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter15_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_4892_z = f_1_59_reg_4458.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()))) {
        grp_CH_fu_4892_z = f_1_57_reg_4336.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_4892_z = f_1_30_reg_2689.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_4892_z = f_1_29_reg_2628.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_4892_z = f_1_28_reg_2567.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_4892_z = f_1_27_reg_2506.read();
    } else {
        grp_CH_fu_4892_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP0_fu_5356_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5356_x = ap_phi_mux_a_1_35_phi_fu_3047_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5356_x = ap_phi_mux_a_1_33_phi_fu_2925_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5356_x = ap_phi_reg_pp0_iter8_a_1_32_reg_2860.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5356_x = ap_phi_mux_a_1_3_phi_fu_1095_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5356_x = ap_phi_mux_a_1_2_phi_fu_1034_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5356_x = ap_phi_mux_a_1_1_phi_fu_973_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5356_x = ap_phi_mux_a_1_0_phi_fu_914_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(trunc_ln104_fu_5620_p1.read(), ap_const_lv1_1))) {
        grp_EP0_fu_5356_x = ctx_state_0_read.read();
    } else {
        grp_EP0_fu_5356_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP0_fu_5366_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5366_x = ap_phi_mux_a_1_39_phi_fu_3291_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5366_x = ap_phi_mux_a_1_37_phi_fu_3169_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5366_x = ap_phi_mux_a_1_36_phi_fu_3108_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        grp_EP0_fu_5366_x = ap_phi_mux_a_1_34_phi_fu_2986_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5366_x = ap_phi_mux_a_1_7_phi_fu_1339_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5366_x = ap_phi_mux_a_1_6_phi_fu_1278_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5366_x = ap_phi_mux_a_1_5_phi_fu_1217_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5366_x = ap_phi_mux_a_1_4_phi_fu_1156_p4.read();
    } else {
        grp_EP0_fu_5366_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP0_fu_5375_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5375_x = ap_phi_mux_a_1_43_phi_fu_3535_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5375_x = ap_phi_mux_a_1_41_phi_fu_3413_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5375_x = ap_phi_mux_a_1_40_phi_fu_3352_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        grp_EP0_fu_5375_x = ap_phi_mux_a_1_38_phi_fu_3230_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5375_x = ap_phi_mux_a_1_11_phi_fu_1583_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5375_x = ap_phi_mux_a_1_10_phi_fu_1522_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5375_x = ap_phi_mux_a_1_9_phi_fu_1461_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5375_x = ap_phi_mux_a_1_8_phi_fu_1400_p4.read();
    } else {
        grp_EP0_fu_5375_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP0_fu_5384_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5384_x = ap_phi_mux_a_1_47_phi_fu_3779_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5384_x = ap_phi_mux_a_1_45_phi_fu_3657_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5384_x = ap_phi_mux_a_1_44_phi_fu_3596_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        grp_EP0_fu_5384_x = ap_phi_mux_a_1_42_phi_fu_3474_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5384_x = ap_phi_mux_a_1_15_phi_fu_1827_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5384_x = ap_phi_mux_a_1_14_phi_fu_1766_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5384_x = ap_phi_mux_a_1_13_phi_fu_1705_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5384_x = ap_phi_mux_a_1_12_phi_fu_1644_p4.read();
    } else {
        grp_EP0_fu_5384_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP0_fu_5393_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5393_x = ap_phi_mux_a_1_51_phi_fu_4023_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5393_x = ap_phi_mux_a_1_49_phi_fu_3901_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5393_x = ap_phi_mux_a_1_48_phi_fu_3840_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        grp_EP0_fu_5393_x = ap_phi_mux_a_1_46_phi_fu_3718_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5393_x = ap_phi_mux_a_1_19_phi_fu_2071_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5393_x = ap_phi_mux_a_1_18_phi_fu_2010_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5393_x = ap_phi_mux_a_1_17_phi_fu_1949_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5393_x = ap_phi_mux_a_1_16_phi_fu_1888_p4.read();
    } else {
        grp_EP0_fu_5393_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP0_fu_5402_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5402_x = ap_phi_mux_a_1_55_phi_fu_4267_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5402_x = ap_phi_mux_a_1_53_phi_fu_4145_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5402_x = ap_phi_mux_a_1_52_phi_fu_4084_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()))) {
        grp_EP0_fu_5402_x = ap_phi_mux_a_1_50_phi_fu_3962_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5402_x = ap_phi_mux_a_1_23_phi_fu_2315_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5402_x = ap_phi_mux_a_1_22_phi_fu_2254_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5402_x = ap_phi_mux_a_1_21_phi_fu_2193_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5402_x = ap_phi_mux_a_1_20_phi_fu_2132_p4.read();
    } else {
        grp_EP0_fu_5402_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP0_fu_5411_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter15_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5411_x = ap_phi_mux_a_1_59_phi_fu_4511_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5411_x = ap_phi_mux_a_1_57_phi_fu_4389_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5411_x = ap_phi_mux_a_1_56_phi_fu_4328_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        grp_EP0_fu_5411_x = ap_phi_mux_a_1_54_phi_fu_4206_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5411_x = ap_phi_mux_a_1_27_phi_fu_2559_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5411_x = ap_phi_mux_a_1_26_phi_fu_2498_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5411_x = ap_phi_mux_a_1_25_phi_fu_2437_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5411_x = ap_phi_mux_a_1_24_phi_fu_2376_p4.read();
    } else {
        grp_EP0_fu_5411_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP0_fu_5420_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter16_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5420_x = ap_phi_reg_pp0_iter16_a_1_62_reg_4689.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter15_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5420_x = ap_phi_mux_a_1_61_phi_fu_4633_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter15_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5420_x = ap_phi_mux_a_1_60_phi_fu_4572_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()))) {
        grp_EP0_fu_5420_x = ap_phi_mux_a_1_58_phi_fu_4450_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5420_x = ap_phi_mux_a_1_31_phi_fu_2803_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5420_x = ap_phi_mux_a_1_30_phi_fu_2742_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5420_x = ap_phi_mux_a_1_29_phi_fu_2681_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP0_fu_5420_x = ap_phi_mux_a_1_28_phi_fu_2620_p4.read();
    } else {
        grp_EP0_fu_5420_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP1_fu_5252_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5252_x = ap_phi_mux_e_1_35_phi_fu_3009_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5252_x = ap_phi_mux_e_1_33_phi_fu_2887_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5252_x = ap_phi_reg_pp0_iter8_e_1_32_reg_2823.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5252_x = ap_phi_mux_e_1_3_phi_fu_1057_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5252_x = ap_phi_mux_e_1_2_phi_fu_996_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5252_x = ap_phi_mux_e_1_1_phi_fu_936_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5252_x = ap_phi_mux_e_1_0_phi_fu_879_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(trunc_ln104_fu_5620_p1.read(), ap_const_lv1_1))) {
        grp_EP1_fu_5252_x = ctx_state_4_read.read();
    } else {
        grp_EP1_fu_5252_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP1_fu_5262_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5262_x = ap_phi_mux_e_1_39_phi_fu_3253_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5262_x = ap_phi_mux_e_1_37_phi_fu_3131_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5262_x = ap_phi_mux_e_1_36_phi_fu_3070_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        grp_EP1_fu_5262_x = ap_phi_mux_e_1_34_phi_fu_2948_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5262_x = ap_phi_mux_e_1_7_phi_fu_1301_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5262_x = ap_phi_mux_e_1_6_phi_fu_1240_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5262_x = ap_phi_mux_e_1_5_phi_fu_1179_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5262_x = ap_phi_mux_e_1_4_phi_fu_1118_p4.read();
    } else {
        grp_EP1_fu_5262_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP1_fu_5271_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5271_x = ap_phi_mux_e_1_43_phi_fu_3497_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5271_x = ap_phi_mux_e_1_41_phi_fu_3375_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5271_x = ap_phi_mux_e_1_40_phi_fu_3314_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        grp_EP1_fu_5271_x = ap_phi_mux_e_1_38_phi_fu_3192_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5271_x = ap_phi_mux_e_1_11_phi_fu_1545_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5271_x = ap_phi_mux_e_1_10_phi_fu_1484_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5271_x = ap_phi_mux_e_1_9_phi_fu_1423_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5271_x = ap_phi_mux_e_1_8_phi_fu_1362_p4.read();
    } else {
        grp_EP1_fu_5271_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP1_fu_5280_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5280_x = ap_phi_mux_e_1_47_phi_fu_3741_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5280_x = ap_phi_mux_e_1_45_phi_fu_3619_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5280_x = ap_phi_mux_e_1_44_phi_fu_3558_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        grp_EP1_fu_5280_x = ap_phi_mux_e_1_42_phi_fu_3436_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5280_x = ap_phi_mux_e_1_15_phi_fu_1789_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5280_x = ap_phi_mux_e_1_14_phi_fu_1728_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5280_x = ap_phi_mux_e_1_13_phi_fu_1667_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5280_x = ap_phi_mux_e_1_12_phi_fu_1606_p4.read();
    } else {
        grp_EP1_fu_5280_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP1_fu_5289_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5289_x = ap_phi_mux_e_1_51_phi_fu_3985_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5289_x = ap_phi_mux_e_1_49_phi_fu_3863_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5289_x = ap_phi_mux_e_1_48_phi_fu_3802_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        grp_EP1_fu_5289_x = ap_phi_mux_e_1_46_phi_fu_3680_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5289_x = ap_phi_mux_e_1_19_phi_fu_2033_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5289_x = ap_phi_mux_e_1_18_phi_fu_1972_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5289_x = ap_phi_mux_e_1_17_phi_fu_1911_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5289_x = ap_phi_mux_e_1_16_phi_fu_1850_p4.read();
    } else {
        grp_EP1_fu_5289_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP1_fu_5298_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5298_x = ap_phi_mux_e_1_55_phi_fu_4229_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5298_x = ap_phi_mux_e_1_53_phi_fu_4107_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5298_x = ap_phi_mux_e_1_52_phi_fu_4046_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()))) {
        grp_EP1_fu_5298_x = ap_phi_mux_e_1_50_phi_fu_3924_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5298_x = ap_phi_mux_e_1_23_phi_fu_2277_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5298_x = ap_phi_mux_e_1_22_phi_fu_2216_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5298_x = ap_phi_mux_e_1_21_phi_fu_2155_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5298_x = ap_phi_mux_e_1_20_phi_fu_2094_p4.read();
    } else {
        grp_EP1_fu_5298_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP1_fu_5307_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter15_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5307_x = ap_phi_mux_e_1_59_phi_fu_4473_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5307_x = ap_phi_mux_e_1_57_phi_fu_4351_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5307_x = ap_phi_mux_e_1_56_phi_fu_4290_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        grp_EP1_fu_5307_x = ap_phi_mux_e_1_54_phi_fu_4168_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5307_x = ap_phi_mux_e_1_27_phi_fu_2521_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5307_x = ap_phi_mux_e_1_26_phi_fu_2460_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5307_x = ap_phi_mux_e_1_25_phi_fu_2399_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5307_x = ap_phi_mux_e_1_24_phi_fu_2338_p4.read();
    } else {
        grp_EP1_fu_5307_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP1_fu_5316_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter16_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5316_x = e_1_62_reg_4653.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter15_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5316_x = ap_phi_mux_e_1_61_phi_fu_4595_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter15_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5316_x = ap_phi_mux_e_1_60_phi_fu_4534_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()))) {
        grp_EP1_fu_5316_x = ap_phi_mux_e_1_58_phi_fu_4412_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5316_x = ap_phi_mux_e_1_31_phi_fu_2765_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5316_x = ap_phi_mux_e_1_30_phi_fu_2704_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5316_x = ap_phi_mux_e_1_29_phi_fu_2643_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP1_fu_5316_x = ap_phi_mux_e_1_28_phi_fu_2582_p4.read();
    } else {
        grp_EP1_fu_5316_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_5004_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5004_x = ap_phi_mux_a_1_35_phi_fu_3047_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5004_x = ap_phi_mux_a_1_33_phi_fu_2925_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5004_x = ap_phi_reg_pp0_iter8_a_1_32_reg_2860.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5004_x = ap_phi_mux_a_1_3_phi_fu_1095_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5004_x = ap_phi_mux_a_1_2_phi_fu_1034_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5004_x = ap_phi_mux_a_1_1_phi_fu_973_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5004_x = ap_phi_mux_a_1_0_phi_fu_914_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(trunc_ln104_fu_5620_p1.read(), ap_const_lv1_1))) {
        grp_MAJ_fu_5004_x = ctx_state_0_read.read();
    } else {
        grp_MAJ_fu_5004_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_5004_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5004_y = ap_phi_mux_b_1_35_phi_fu_3034_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5004_y = ap_phi_mux_b_1_33_phi_fu_2912_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5004_y = ap_phi_reg_pp0_iter8_b_1_32_reg_2847.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5004_y = ap_phi_mux_b_1_3_phi_fu_1082_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5004_y = ap_phi_mux_b_1_2_phi_fu_1021_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5004_y = ap_phi_mux_b_1_1_phi_fu_960_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5004_y = ap_phi_mux_b_1_0_phi_fu_902_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(trunc_ln104_fu_5620_p1.read(), ap_const_lv1_1))) {
        grp_MAJ_fu_5004_y = ctx_state_1_read.read();
    } else {
        grp_MAJ_fu_5004_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_5004_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5004_z = ap_phi_mux_c_1_35_phi_fu_3021_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5004_z = ap_phi_mux_c_1_33_phi_fu_2899_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5004_z = ap_phi_reg_pp0_iter8_c_1_32_reg_2834.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5004_z = ap_phi_mux_c_1_3_phi_fu_1069_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5004_z = ap_phi_mux_c_1_2_phi_fu_1008_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5004_z = ap_phi_mux_c_1_1_phi_fu_947_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5004_z = ap_phi_mux_c_1_0_phi_fu_890_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(trunc_ln104_fu_5620_p1.read(), ap_const_lv1_1))) {
        grp_MAJ_fu_5004_z = ctx_state_2_read.read();
    } else {
        grp_MAJ_fu_5004_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_5026_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5026_x = ap_phi_mux_a_1_39_phi_fu_3291_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5026_x = ap_phi_mux_a_1_37_phi_fu_3169_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5026_x = ap_phi_mux_a_1_36_phi_fu_3108_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        grp_MAJ_fu_5026_x = ap_phi_mux_a_1_34_phi_fu_2986_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5026_x = ap_phi_mux_a_1_7_phi_fu_1339_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5026_x = ap_phi_mux_a_1_6_phi_fu_1278_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5026_x = ap_phi_mux_a_1_5_phi_fu_1217_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5026_x = ap_phi_mux_a_1_4_phi_fu_1156_p4.read();
    } else {
        grp_MAJ_fu_5026_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_5026_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5026_y = ap_phi_mux_b_1_39_phi_fu_3278_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5026_y = ap_phi_mux_b_1_37_phi_fu_3156_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5026_y = ap_phi_mux_b_1_36_phi_fu_3095_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        grp_MAJ_fu_5026_y = ap_phi_mux_b_1_34_phi_fu_2973_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5026_y = ap_phi_mux_b_1_7_phi_fu_1326_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5026_y = ap_phi_mux_b_1_6_phi_fu_1265_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5026_y = ap_phi_mux_b_1_5_phi_fu_1204_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5026_y = ap_phi_mux_b_1_4_phi_fu_1143_p4.read();
    } else {
        grp_MAJ_fu_5026_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_5026_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5026_z = ap_phi_mux_c_1_39_phi_fu_3265_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5026_z = ap_phi_mux_c_1_37_phi_fu_3143_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5026_z = ap_phi_mux_c_1_36_phi_fu_3082_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        grp_MAJ_fu_5026_z = ap_phi_mux_c_1_34_phi_fu_2960_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5026_z = ap_phi_mux_c_1_7_phi_fu_1313_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5026_z = ap_phi_mux_c_1_6_phi_fu_1252_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5026_z = ap_phi_mux_c_1_5_phi_fu_1191_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5026_z = ap_phi_mux_c_1_4_phi_fu_1130_p4.read();
    } else {
        grp_MAJ_fu_5026_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_5045_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5045_x = ap_phi_mux_a_1_43_phi_fu_3535_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5045_x = ap_phi_mux_a_1_41_phi_fu_3413_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5045_x = ap_phi_mux_a_1_40_phi_fu_3352_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        grp_MAJ_fu_5045_x = ap_phi_mux_a_1_38_phi_fu_3230_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5045_x = ap_phi_mux_a_1_11_phi_fu_1583_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5045_x = ap_phi_mux_a_1_10_phi_fu_1522_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5045_x = ap_phi_mux_a_1_9_phi_fu_1461_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5045_x = ap_phi_mux_a_1_8_phi_fu_1400_p4.read();
    } else {
        grp_MAJ_fu_5045_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_5045_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5045_y = ap_phi_mux_b_1_43_phi_fu_3522_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5045_y = ap_phi_mux_b_1_41_phi_fu_3400_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5045_y = ap_phi_mux_b_1_40_phi_fu_3339_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        grp_MAJ_fu_5045_y = ap_phi_mux_b_1_38_phi_fu_3217_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5045_y = ap_phi_mux_b_1_11_phi_fu_1570_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5045_y = ap_phi_mux_b_1_10_phi_fu_1509_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5045_y = ap_phi_mux_b_1_9_phi_fu_1448_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5045_y = ap_phi_mux_b_1_8_phi_fu_1387_p4.read();
    } else {
        grp_MAJ_fu_5045_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_5045_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5045_z = ap_phi_mux_c_1_43_phi_fu_3509_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5045_z = ap_phi_mux_c_1_41_phi_fu_3387_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5045_z = ap_phi_mux_c_1_40_phi_fu_3326_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter9_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        grp_MAJ_fu_5045_z = ap_phi_mux_c_1_38_phi_fu_3204_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5045_z = ap_phi_mux_c_1_11_phi_fu_1557_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5045_z = ap_phi_mux_c_1_10_phi_fu_1496_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5045_z = ap_phi_mux_c_1_9_phi_fu_1435_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5045_z = ap_phi_mux_c_1_8_phi_fu_1374_p4.read();
    } else {
        grp_MAJ_fu_5045_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_5064_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5064_x = ap_phi_mux_a_1_47_phi_fu_3779_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5064_x = ap_phi_mux_a_1_45_phi_fu_3657_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5064_x = ap_phi_mux_a_1_44_phi_fu_3596_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        grp_MAJ_fu_5064_x = ap_phi_mux_a_1_42_phi_fu_3474_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5064_x = ap_phi_mux_a_1_15_phi_fu_1827_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5064_x = ap_phi_mux_a_1_14_phi_fu_1766_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5064_x = ap_phi_mux_a_1_13_phi_fu_1705_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5064_x = ap_phi_mux_a_1_12_phi_fu_1644_p4.read();
    } else {
        grp_MAJ_fu_5064_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_5064_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5064_y = ap_phi_mux_b_1_47_phi_fu_3766_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5064_y = ap_phi_mux_b_1_45_phi_fu_3644_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5064_y = ap_phi_mux_b_1_44_phi_fu_3583_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        grp_MAJ_fu_5064_y = ap_phi_mux_b_1_42_phi_fu_3461_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5064_y = ap_phi_mux_b_1_15_phi_fu_1814_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5064_y = ap_phi_mux_b_1_14_phi_fu_1753_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5064_y = ap_phi_mux_b_1_13_phi_fu_1692_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5064_y = ap_phi_mux_b_1_12_phi_fu_1631_p4.read();
    } else {
        grp_MAJ_fu_5064_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_5064_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5064_z = ap_phi_mux_c_1_47_phi_fu_3753_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5064_z = ap_phi_mux_c_1_45_phi_fu_3631_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5064_z = ap_phi_mux_c_1_44_phi_fu_3570_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter10_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        grp_MAJ_fu_5064_z = ap_phi_mux_c_1_42_phi_fu_3448_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5064_z = ap_phi_mux_c_1_15_phi_fu_1801_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5064_z = ap_phi_mux_c_1_14_phi_fu_1740_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5064_z = ap_phi_mux_c_1_13_phi_fu_1679_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5064_z = ap_phi_mux_c_1_12_phi_fu_1618_p4.read();
    } else {
        grp_MAJ_fu_5064_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_5083_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5083_x = ap_phi_mux_a_1_51_phi_fu_4023_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5083_x = ap_phi_mux_a_1_49_phi_fu_3901_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5083_x = ap_phi_mux_a_1_48_phi_fu_3840_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        grp_MAJ_fu_5083_x = ap_phi_mux_a_1_46_phi_fu_3718_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5083_x = ap_phi_mux_a_1_19_phi_fu_2071_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5083_x = ap_phi_mux_a_1_18_phi_fu_2010_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5083_x = ap_phi_mux_a_1_17_phi_fu_1949_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5083_x = ap_phi_mux_a_1_16_phi_fu_1888_p4.read();
    } else {
        grp_MAJ_fu_5083_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_5083_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5083_y = ap_phi_mux_b_1_51_phi_fu_4010_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5083_y = ap_phi_mux_b_1_49_phi_fu_3888_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5083_y = ap_phi_mux_b_1_48_phi_fu_3827_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        grp_MAJ_fu_5083_y = ap_phi_mux_b_1_46_phi_fu_3705_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5083_y = ap_phi_mux_b_1_19_phi_fu_2058_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5083_y = ap_phi_mux_b_1_18_phi_fu_1997_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5083_y = ap_phi_mux_b_1_17_phi_fu_1936_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5083_y = ap_phi_mux_b_1_16_phi_fu_1875_p4.read();
    } else {
        grp_MAJ_fu_5083_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_5083_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5083_z = ap_phi_mux_c_1_51_phi_fu_3997_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5083_z = ap_phi_mux_c_1_49_phi_fu_3875_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5083_z = ap_phi_mux_c_1_48_phi_fu_3814_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter11_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        grp_MAJ_fu_5083_z = ap_phi_mux_c_1_46_phi_fu_3692_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5083_z = ap_phi_mux_c_1_19_phi_fu_2045_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5083_z = ap_phi_mux_c_1_18_phi_fu_1984_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5083_z = ap_phi_mux_c_1_17_phi_fu_1923_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter4_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5083_z = ap_phi_mux_c_1_16_phi_fu_1862_p4.read();
    } else {
        grp_MAJ_fu_5083_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_5102_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5102_x = ap_phi_mux_a_1_55_phi_fu_4267_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5102_x = ap_phi_mux_a_1_53_phi_fu_4145_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5102_x = ap_phi_mux_a_1_52_phi_fu_4084_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()))) {
        grp_MAJ_fu_5102_x = ap_phi_mux_a_1_50_phi_fu_3962_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5102_x = ap_phi_mux_a_1_23_phi_fu_2315_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5102_x = ap_phi_mux_a_1_22_phi_fu_2254_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5102_x = ap_phi_mux_a_1_21_phi_fu_2193_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5102_x = ap_phi_mux_a_1_20_phi_fu_2132_p4.read();
    } else {
        grp_MAJ_fu_5102_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_5102_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5102_y = ap_phi_mux_b_1_55_phi_fu_4254_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5102_y = ap_phi_mux_b_1_53_phi_fu_4132_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5102_y = ap_phi_mux_b_1_52_phi_fu_4071_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()))) {
        grp_MAJ_fu_5102_y = ap_phi_mux_b_1_50_phi_fu_3949_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5102_y = ap_phi_mux_b_1_23_phi_fu_2302_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5102_y = ap_phi_mux_b_1_22_phi_fu_2241_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5102_y = ap_phi_mux_b_1_21_phi_fu_2180_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5102_y = ap_phi_mux_b_1_20_phi_fu_2119_p4.read();
    } else {
        grp_MAJ_fu_5102_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_5102_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5102_z = ap_phi_mux_c_1_55_phi_fu_4241_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5102_z = ap_phi_mux_c_1_53_phi_fu_4119_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5102_z = ap_phi_mux_c_1_52_phi_fu_4058_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter12_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()))) {
        grp_MAJ_fu_5102_z = ap_phi_mux_c_1_50_phi_fu_3936_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5102_z = ap_phi_mux_c_1_23_phi_fu_2289_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5102_z = ap_phi_mux_c_1_22_phi_fu_2228_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5102_z = ap_phi_mux_c_1_21_phi_fu_2167_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter5_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5102_z = ap_phi_mux_c_1_20_phi_fu_2106_p4.read();
    } else {
        grp_MAJ_fu_5102_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_5121_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter15_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5121_x = ap_phi_mux_a_1_59_phi_fu_4511_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5121_x = ap_phi_mux_a_1_57_phi_fu_4389_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5121_x = ap_phi_mux_a_1_56_phi_fu_4328_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        grp_MAJ_fu_5121_x = ap_phi_mux_a_1_54_phi_fu_4206_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5121_x = ap_phi_mux_a_1_27_phi_fu_2559_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5121_x = ap_phi_mux_a_1_26_phi_fu_2498_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5121_x = ap_phi_mux_a_1_25_phi_fu_2437_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5121_x = ap_phi_mux_a_1_24_phi_fu_2376_p4.read();
    } else {
        grp_MAJ_fu_5121_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_5121_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter15_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5121_y = ap_phi_mux_b_1_59_phi_fu_4498_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5121_y = ap_phi_mux_b_1_57_phi_fu_4376_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5121_y = ap_phi_mux_b_1_56_phi_fu_4315_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        grp_MAJ_fu_5121_y = ap_phi_mux_b_1_54_phi_fu_4193_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5121_y = ap_phi_mux_b_1_27_phi_fu_2546_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5121_y = ap_phi_mux_b_1_26_phi_fu_2485_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5121_y = ap_phi_mux_b_1_25_phi_fu_2424_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5121_y = ap_phi_mux_b_1_24_phi_fu_2363_p4.read();
    } else {
        grp_MAJ_fu_5121_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_5121_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter15_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5121_z = ap_phi_mux_c_1_59_phi_fu_4485_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5121_z = ap_phi_mux_c_1_57_phi_fu_4363_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5121_z = ap_phi_mux_c_1_56_phi_fu_4302_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter13_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        grp_MAJ_fu_5121_z = ap_phi_mux_c_1_54_phi_fu_4180_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5121_z = ap_phi_mux_c_1_27_phi_fu_2533_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5121_z = ap_phi_mux_c_1_26_phi_fu_2472_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5121_z = ap_phi_mux_c_1_25_phi_fu_2411_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter6_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5121_z = ap_phi_mux_c_1_24_phi_fu_2350_p4.read();
    } else {
        grp_MAJ_fu_5121_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_5140_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter16_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5140_x = ap_phi_reg_pp0_iter16_a_1_62_reg_4689.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter15_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5140_x = ap_phi_mux_a_1_61_phi_fu_4633_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter15_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5140_x = ap_phi_mux_a_1_60_phi_fu_4572_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()))) {
        grp_MAJ_fu_5140_x = ap_phi_mux_a_1_58_phi_fu_4450_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5140_x = ap_phi_mux_a_1_31_phi_fu_2803_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5140_x = ap_phi_mux_a_1_30_phi_fu_2742_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5140_x = ap_phi_mux_a_1_29_phi_fu_2681_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5140_x = ap_phi_mux_a_1_28_phi_fu_2620_p4.read();
    } else {
        grp_MAJ_fu_5140_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_5140_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter16_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5140_y = ap_phi_reg_pp0_iter16_b_1_62_reg_4676.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter15_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5140_y = ap_phi_mux_b_1_61_phi_fu_4620_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter15_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5140_y = ap_phi_mux_b_1_60_phi_fu_4559_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()))) {
        grp_MAJ_fu_5140_y = ap_phi_mux_b_1_58_phi_fu_4437_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5140_y = ap_phi_mux_b_1_31_phi_fu_2790_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5140_y = ap_phi_mux_b_1_30_phi_fu_2729_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5140_y = ap_phi_mux_b_1_29_phi_fu_2668_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5140_y = ap_phi_mux_b_1_28_phi_fu_2607_p4.read();
    } else {
        grp_MAJ_fu_5140_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_5140_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter16_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5140_z = ap_phi_reg_pp0_iter16_c_1_62_reg_4664.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter15_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5140_z = ap_phi_mux_c_1_61_phi_fu_4607_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter15_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5140_z = ap_phi_mux_c_1_60_phi_fu_4546_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter14_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()))) {
        grp_MAJ_fu_5140_z = ap_phi_mux_c_1_58_phi_fu_4424_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5140_z = ap_phi_mux_c_1_31_phi_fu_2777_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5140_z = ap_phi_mux_c_1_30_phi_fu_2716_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5140_z = ap_phi_mux_c_1_29_phi_fu_2655_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln104_reg_9300_pp0_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_5140_z = ap_phi_mux_c_1_28_phi_fu_2594_p4.read();
    } else {
        grp_MAJ_fu_5140_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG0_fu_5460_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_SIG0_fu_5460_x = m_14_fu_5933_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5460_x = m_12_fu_5896_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5460_x = m_10_fu_5841_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5460_x = m_8_fu_5805_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5460_x = m_6_fu_5752_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5460_x = m_4_fu_5715_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5460_x = m_2_fu_5660_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5460_x = m_1_fu_5636_p5.read();
    } else {
        grp_SIG0_fu_5460_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG0_fu_5465_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5465_x = m_16_fu_6004_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_SIG0_fu_5465_x = m_15_fu_5947_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5465_x = m_13_fu_5909_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5465_x = m_11_fu_5854_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5465_x = m_9_fu_5818_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5465_x = m_7_fu_5765_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5465_x = m_5_fu_5728_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5465_x = m_3_fu_5673_p5.read();
    } else {
        grp_SIG0_fu_5465_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG0_fu_5470_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_SIG0_fu_5470_x = m_30_fu_6356_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5470_x = m_28_fu_6313_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5470_x = m_26_fu_6252_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5470_x = m_24_fu_6209_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5470_x = m_22_fu_6148_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5470_x = m_20_fu_6105_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5470_x = m_18_fu_6047_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5470_x = m_17_fu_6015_p2.read();
    } else {
        grp_SIG0_fu_5470_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG0_fu_5475_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5475_x = m_32_fu_6417_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_SIG0_fu_5475_x = m_31_fu_6367_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5475_x = m_29_fu_6324_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5475_x = m_27_fu_6263_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5475_x = m_25_fu_6220_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5475_x = m_23_fu_6159_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5475_x = m_21_fu_6116_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5475_x = m_19_fu_6058_p2.read();
    } else {
        grp_SIG0_fu_5475_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG0_fu_5480_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_SIG0_fu_5480_x = m_46_fu_6772_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5480_x = m_44_fu_6729_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5480_x = m_42_fu_6668_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5480_x = m_40_fu_6625_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5480_x = m_38_fu_6564_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5480_x = m_36_fu_6521_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5480_x = m_34_fu_6460_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5480_x = m_33_fu_6428_p2.read();
    } else {
        grp_SIG0_fu_5480_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG0_fu_5485_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5485_x = m_48_fu_6833_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_SIG0_fu_5485_x = m_47_fu_6783_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5485_x = m_45_fu_6740_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5485_x = m_43_fu_6679_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5485_x = m_41_fu_6636_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5485_x = m_39_fu_6575_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5485_x = m_37_fu_6532_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_5485_x = m_35_fu_6471_p2.read();
    } else {
        grp_SIG0_fu_5485_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG1_fu_5490_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5490_x = m_28_fu_6313_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5490_x = m_26_fu_6252_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5490_x = m_24_fu_6209_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5490_x = m_22_fu_6148_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5490_x = m_20_fu_6105_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5490_x = m_18_fu_6047_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5490_x = m_16_fu_6004_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5490_x = m_14_fu_5933_p5.read();
        } else {
            grp_SIG1_fu_5490_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_SIG1_fu_5490_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG1_fu_5495_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5495_x = m_29_fu_6324_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5495_x = m_27_fu_6263_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5495_x = m_25_fu_6220_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5495_x = m_23_fu_6159_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5495_x = m_21_fu_6116_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5495_x = m_19_fu_6058_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5495_x = m_17_fu_6015_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5495_x = m_15_fu_5947_p5.read();
        } else {
            grp_SIG1_fu_5495_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_SIG1_fu_5495_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG1_fu_5500_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5500_x = m_44_fu_6729_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5500_x = m_42_fu_6668_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5500_x = m_40_fu_6625_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5500_x = m_38_fu_6564_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5500_x = m_36_fu_6521_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5500_x = m_34_fu_6460_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5500_x = m_32_fu_6417_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5500_x = m_30_fu_6356_p2.read();
        } else {
            grp_SIG1_fu_5500_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_SIG1_fu_5500_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG1_fu_5505_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5505_x = m_45_fu_6740_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5505_x = m_43_fu_6679_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5505_x = m_41_fu_6636_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5505_x = m_39_fu_6575_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5505_x = m_37_fu_6532_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5505_x = m_35_fu_6471_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5505_x = m_33_fu_6428_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5505_x = m_31_fu_6367_p2.read();
        } else {
            grp_SIG1_fu_5505_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_SIG1_fu_5505_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG1_fu_5510_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5510_x = m_60_fu_7134_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5510_x = m_58_fu_7075_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5510_x = m_56_fu_7034_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5510_x = m_54_fu_6975_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5510_x = m_52_fu_6934_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5510_x = m_50_fu_6875_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5510_x = m_48_fu_6833_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5510_x = m_46_fu_6772_p2.read();
        } else {
            grp_SIG1_fu_5510_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_SIG1_fu_5510_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG1_fu_5515_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5515_x = m_61_fu_7144_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5515_x = m_59_fu_7085_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5515_x = m_57_fu_7044_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5515_x = m_55_fu_6985_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5515_x = m_53_fu_6944_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5515_x = m_51_fu_6885_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5515_x = m_49_fu_6844_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_5515_x = m_47_fu_6783_p2.read();
        } else {
            grp_SIG1_fu_5515_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_SIG1_fu_5515_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_m_0_fu_5624_p5() {
    m_0_fu_5624_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q0.read(), data_1_q0.read()), data_2_q0.read()), data_3_q0.read());
}

void sha256_transform::thread_m_10_fu_5841_p5() {
    m_10_fu_5841_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q0.read(), data_1_q0.read()), data_2_q0.read()), data_3_q0.read());
}

void sha256_transform::thread_m_11_fu_5854_p5() {
    m_11_fu_5854_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q1.read(), data_1_q1.read()), data_2_q1.read()), data_3_q1.read());
}

void sha256_transform::thread_m_12_fu_5896_p5() {
    m_12_fu_5896_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q0.read(), data_1_q0.read()), data_2_q0.read()), data_3_q0.read());
}

void sha256_transform::thread_m_13_fu_5909_p5() {
    m_13_fu_5909_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q1.read(), data_1_q1.read()), data_2_q1.read()), data_3_q1.read());
}

void sha256_transform::thread_m_14_fu_5933_p5() {
    m_14_fu_5933_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q0.read(), data_1_q0.read()), data_2_q0.read()), data_3_q0.read());
}

void sha256_transform::thread_m_15_fu_5947_p5() {
    m_15_fu_5947_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q1.read(), data_1_q1.read()), data_2_q1.read()), data_3_q1.read());
}

void sha256_transform::thread_m_16_fu_6004_p2() {
    m_16_fu_6004_p2 = (!add_ln91_reg_9818.read().is_01() || !add_ln91_1_fu_6000_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_reg_9818.read()) + sc_biguint<32>(add_ln91_1_fu_6000_p2.read()));
}

void sha256_transform::thread_m_17_fu_6015_p2() {
    m_17_fu_6015_p2 = (!add_ln91_3_reg_9823.read().is_01() || !add_ln91_4_fu_6011_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_3_reg_9823.read()) + sc_biguint<32>(add_ln91_4_fu_6011_p2.read()));
}

void sha256_transform::thread_m_18_fu_6047_p2() {
    m_18_fu_6047_p2 = (!add_ln91_6_reg_9862.read().is_01() || !add_ln91_7_fu_6043_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_6_reg_9862.read()) + sc_biguint<32>(add_ln91_7_fu_6043_p2.read()));
}

void sha256_transform::thread_m_19_fu_6058_p2() {
    m_19_fu_6058_p2 = (!add_ln91_9_reg_9867.read().is_01() || !add_ln91_10_fu_6054_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_9_reg_9867.read()) + sc_biguint<32>(add_ln91_10_fu_6054_p2.read()));
}

void sha256_transform::thread_m_1_fu_5636_p5() {
    m_1_fu_5636_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q1.read(), data_1_q1.read()), data_2_q1.read()), data_3_q1.read());
}

void sha256_transform::thread_m_20_fu_6105_p2() {
    m_20_fu_6105_p2 = (!add_ln91_12_reg_9916.read().is_01() || !add_ln91_13_fu_6101_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_12_reg_9916.read()) + sc_biguint<32>(add_ln91_13_fu_6101_p2.read()));
}

void sha256_transform::thread_m_21_fu_6116_p2() {
    m_21_fu_6116_p2 = (!add_ln91_15_reg_9921.read().is_01() || !add_ln91_16_fu_6112_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_15_reg_9921.read()) + sc_biguint<32>(add_ln91_16_fu_6112_p2.read()));
}

void sha256_transform::thread_m_22_fu_6148_p2() {
    m_22_fu_6148_p2 = (!add_ln91_18_reg_9960.read().is_01() || !add_ln91_19_fu_6144_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_18_reg_9960.read()) + sc_biguint<32>(add_ln91_19_fu_6144_p2.read()));
}

void sha256_transform::thread_m_23_fu_6159_p2() {
    m_23_fu_6159_p2 = (!add_ln91_21_reg_9965.read().is_01() || !add_ln91_22_fu_6155_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_21_reg_9965.read()) + sc_biguint<32>(add_ln91_22_fu_6155_p2.read()));
}

void sha256_transform::thread_m_24_fu_6209_p2() {
    m_24_fu_6209_p2 = (!add_ln91_24_reg_9999.read().is_01() || !add_ln91_25_fu_6205_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_24_reg_9999.read()) + sc_biguint<32>(add_ln91_25_fu_6205_p2.read()));
}

void sha256_transform::thread_m_25_fu_6220_p2() {
    m_25_fu_6220_p2 = (!add_ln91_27_reg_10004.read().is_01() || !add_ln91_28_fu_6216_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_27_reg_10004.read()) + sc_biguint<32>(add_ln91_28_fu_6216_p2.read()));
}

void sha256_transform::thread_m_26_fu_6252_p2() {
    m_26_fu_6252_p2 = (!add_ln91_30_reg_10043.read().is_01() || !add_ln91_31_fu_6248_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_30_reg_10043.read()) + sc_biguint<32>(add_ln91_31_fu_6248_p2.read()));
}

void sha256_transform::thread_m_27_fu_6263_p2() {
    m_27_fu_6263_p2 = (!add_ln91_33_reg_10048.read().is_01() || !add_ln91_34_fu_6259_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_33_reg_10048.read()) + sc_biguint<32>(add_ln91_34_fu_6259_p2.read()));
}

void sha256_transform::thread_m_28_fu_6313_p2() {
    m_28_fu_6313_p2 = (!add_ln91_36_reg_10082.read().is_01() || !add_ln91_37_fu_6309_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_36_reg_10082.read()) + sc_biguint<32>(add_ln91_37_fu_6309_p2.read()));
}

void sha256_transform::thread_m_29_fu_6324_p2() {
    m_29_fu_6324_p2 = (!add_ln91_39_reg_10087.read().is_01() || !add_ln91_40_fu_6320_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_39_reg_10087.read()) + sc_biguint<32>(add_ln91_40_fu_6320_p2.read()));
}

void sha256_transform::thread_m_2_fu_5660_p5() {
    m_2_fu_5660_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q0.read(), data_1_q0.read()), data_2_q0.read()), data_3_q0.read());
}

void sha256_transform::thread_m_30_fu_6356_p2() {
    m_30_fu_6356_p2 = (!add_ln91_42_reg_10126.read().is_01() || !add_ln91_43_fu_6352_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_42_reg_10126.read()) + sc_biguint<32>(add_ln91_43_fu_6352_p2.read()));
}

void sha256_transform::thread_m_31_fu_6367_p2() {
    m_31_fu_6367_p2 = (!add_ln91_45_reg_10131.read().is_01() || !add_ln91_46_fu_6363_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_45_reg_10131.read()) + sc_biguint<32>(add_ln91_46_fu_6363_p2.read()));
}

void sha256_transform::thread_m_32_fu_6417_p2() {
    m_32_fu_6417_p2 = (!add_ln91_48_reg_10165.read().is_01() || !add_ln91_49_fu_6413_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_48_reg_10165.read()) + sc_biguint<32>(add_ln91_49_fu_6413_p2.read()));
}

void sha256_transform::thread_m_33_fu_6428_p2() {
    m_33_fu_6428_p2 = (!add_ln91_51_reg_10170.read().is_01() || !add_ln91_52_fu_6424_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_51_reg_10170.read()) + sc_biguint<32>(add_ln91_52_fu_6424_p2.read()));
}

void sha256_transform::thread_m_34_fu_6460_p2() {
    m_34_fu_6460_p2 = (!add_ln91_54_reg_10209.read().is_01() || !add_ln91_55_fu_6456_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_54_reg_10209.read()) + sc_biguint<32>(add_ln91_55_fu_6456_p2.read()));
}

void sha256_transform::thread_m_35_fu_6471_p2() {
    m_35_fu_6471_p2 = (!add_ln91_57_reg_10214.read().is_01() || !add_ln91_58_fu_6467_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_57_reg_10214.read()) + sc_biguint<32>(add_ln91_58_fu_6467_p2.read()));
}

void sha256_transform::thread_m_36_fu_6521_p2() {
    m_36_fu_6521_p2 = (!add_ln91_60_reg_10248.read().is_01() || !add_ln91_61_fu_6517_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_60_reg_10248.read()) + sc_biguint<32>(add_ln91_61_fu_6517_p2.read()));
}

void sha256_transform::thread_m_37_fu_6532_p2() {
    m_37_fu_6532_p2 = (!add_ln91_63_reg_10253.read().is_01() || !add_ln91_64_fu_6528_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_63_reg_10253.read()) + sc_biguint<32>(add_ln91_64_fu_6528_p2.read()));
}

void sha256_transform::thread_m_38_fu_6564_p2() {
    m_38_fu_6564_p2 = (!add_ln91_66_reg_10292.read().is_01() || !add_ln91_67_fu_6560_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_66_reg_10292.read()) + sc_biguint<32>(add_ln91_67_fu_6560_p2.read()));
}

void sha256_transform::thread_m_39_fu_6575_p2() {
    m_39_fu_6575_p2 = (!add_ln91_69_reg_10297.read().is_01() || !add_ln91_70_fu_6571_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_69_reg_10297.read()) + sc_biguint<32>(add_ln91_70_fu_6571_p2.read()));
}

void sha256_transform::thread_m_3_fu_5673_p5() {
    m_3_fu_5673_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q1.read(), data_1_q1.read()), data_2_q1.read()), data_3_q1.read());
}

void sha256_transform::thread_m_40_fu_6625_p2() {
    m_40_fu_6625_p2 = (!add_ln91_72_reg_10331.read().is_01() || !add_ln91_73_fu_6621_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_72_reg_10331.read()) + sc_biguint<32>(add_ln91_73_fu_6621_p2.read()));
}

void sha256_transform::thread_m_41_fu_6636_p2() {
    m_41_fu_6636_p2 = (!add_ln91_75_reg_10336.read().is_01() || !add_ln91_76_fu_6632_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_75_reg_10336.read()) + sc_biguint<32>(add_ln91_76_fu_6632_p2.read()));
}

void sha256_transform::thread_m_42_fu_6668_p2() {
    m_42_fu_6668_p2 = (!add_ln91_78_reg_10375.read().is_01() || !add_ln91_79_fu_6664_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_78_reg_10375.read()) + sc_biguint<32>(add_ln91_79_fu_6664_p2.read()));
}

void sha256_transform::thread_m_43_fu_6679_p2() {
    m_43_fu_6679_p2 = (!add_ln91_81_reg_10380.read().is_01() || !add_ln91_82_fu_6675_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_81_reg_10380.read()) + sc_biguint<32>(add_ln91_82_fu_6675_p2.read()));
}

void sha256_transform::thread_m_44_fu_6729_p2() {
    m_44_fu_6729_p2 = (!add_ln91_84_reg_10414.read().is_01() || !add_ln91_85_fu_6725_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_84_reg_10414.read()) + sc_biguint<32>(add_ln91_85_fu_6725_p2.read()));
}

void sha256_transform::thread_m_45_fu_6740_p2() {
    m_45_fu_6740_p2 = (!add_ln91_87_reg_10419.read().is_01() || !add_ln91_88_fu_6736_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_87_reg_10419.read()) + sc_biguint<32>(add_ln91_88_fu_6736_p2.read()));
}

void sha256_transform::thread_m_46_fu_6772_p2() {
    m_46_fu_6772_p2 = (!add_ln91_90_reg_10458.read().is_01() || !add_ln91_91_fu_6768_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_90_reg_10458.read()) + sc_biguint<32>(add_ln91_91_fu_6768_p2.read()));
}

void sha256_transform::thread_m_47_fu_6783_p2() {
    m_47_fu_6783_p2 = (!add_ln91_93_reg_10463.read().is_01() || !add_ln91_94_fu_6779_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_93_reg_10463.read()) + sc_biguint<32>(add_ln91_94_fu_6779_p2.read()));
}

void sha256_transform::thread_m_48_fu_6833_p2() {
    m_48_fu_6833_p2 = (!add_ln91_96_reg_10497.read().is_01() || !add_ln91_97_fu_6829_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_96_reg_10497.read()) + sc_biguint<32>(add_ln91_97_fu_6829_p2.read()));
}

void sha256_transform::thread_m_49_fu_6844_p2() {
    m_49_fu_6844_p2 = (!add_ln91_99_reg_10502.read().is_01() || !add_ln91_100_fu_6840_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_99_reg_10502.read()) + sc_biguint<32>(add_ln91_100_fu_6840_p2.read()));
}

void sha256_transform::thread_m_4_fu_5715_p5() {
    m_4_fu_5715_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q0.read(), data_1_q0.read()), data_2_q0.read()), data_3_q0.read());
}

void sha256_transform::thread_m_50_fu_6875_p2() {
    m_50_fu_6875_p2 = (!add_ln91_102_reg_10539.read().is_01() || !add_ln91_103_fu_6871_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_102_reg_10539.read()) + sc_biguint<32>(add_ln91_103_fu_6871_p2.read()));
}

void sha256_transform::thread_m_51_fu_6885_p2() {
    m_51_fu_6885_p2 = (!add_ln91_105_reg_10544.read().is_01() || !add_ln91_106_fu_6881_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_105_reg_10544.read()) + sc_biguint<32>(add_ln91_106_fu_6881_p2.read()));
}

void sha256_transform::thread_m_52_fu_6934_p2() {
    m_52_fu_6934_p2 = (!add_ln91_108_reg_10571.read().is_01() || !add_ln91_109_fu_6930_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_108_reg_10571.read()) + sc_biguint<32>(add_ln91_109_fu_6930_p2.read()));
}

void sha256_transform::thread_m_53_fu_6944_p2() {
    m_53_fu_6944_p2 = (!add_ln91_111_reg_10576.read().is_01() || !add_ln91_112_fu_6940_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_111_reg_10576.read()) + sc_biguint<32>(add_ln91_112_fu_6940_p2.read()));
}

void sha256_transform::thread_m_54_fu_6975_p2() {
    m_54_fu_6975_p2 = (!add_ln91_114_reg_10603.read().is_01() || !add_ln91_115_fu_6971_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_114_reg_10603.read()) + sc_biguint<32>(add_ln91_115_fu_6971_p2.read()));
}

void sha256_transform::thread_m_55_fu_6985_p2() {
    m_55_fu_6985_p2 = (!add_ln91_117_reg_10608.read().is_01() || !add_ln91_118_fu_6981_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_117_reg_10608.read()) + sc_biguint<32>(add_ln91_118_fu_6981_p2.read()));
}

void sha256_transform::thread_m_56_fu_7034_p2() {
    m_56_fu_7034_p2 = (!add_ln91_120_reg_10630.read().is_01() || !add_ln91_121_fu_7030_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_120_reg_10630.read()) + sc_biguint<32>(add_ln91_121_fu_7030_p2.read()));
}

void sha256_transform::thread_m_57_fu_7044_p2() {
    m_57_fu_7044_p2 = (!add_ln91_123_reg_10635.read().is_01() || !add_ln91_124_fu_7040_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_123_reg_10635.read()) + sc_biguint<32>(add_ln91_124_fu_7040_p2.read()));
}

void sha256_transform::thread_m_58_fu_7075_p2() {
    m_58_fu_7075_p2 = (!add_ln91_126_reg_10661.read().is_01() || !add_ln91_127_fu_7071_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_126_reg_10661.read()) + sc_biguint<32>(add_ln91_127_fu_7071_p2.read()));
}

void sha256_transform::thread_m_59_fu_7085_p2() {
    m_59_fu_7085_p2 = (!add_ln91_129_reg_10666.read().is_01() || !add_ln91_130_fu_7081_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_129_reg_10666.read()) + sc_biguint<32>(add_ln91_130_fu_7081_p2.read()));
}

void sha256_transform::thread_m_5_fu_5728_p5() {
    m_5_fu_5728_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q1.read(), data_1_q1.read()), data_2_q1.read()), data_3_q1.read());
}

void sha256_transform::thread_m_60_fu_7134_p2() {
    m_60_fu_7134_p2 = (!add_ln91_132_reg_10686.read().is_01() || !add_ln91_133_fu_7130_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_132_reg_10686.read()) + sc_biguint<32>(add_ln91_133_fu_7130_p2.read()));
}

void sha256_transform::thread_m_61_fu_7144_p2() {
    m_61_fu_7144_p2 = (!add_ln91_135_reg_10691.read().is_01() || !add_ln91_136_fu_7140_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln91_135_reg_10691.read()) + sc_biguint<32>(add_ln91_136_fu_7140_p2.read()));
}

void sha256_transform::thread_m_6_fu_5752_p5() {
    m_6_fu_5752_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q0.read(), data_1_q0.read()), data_2_q0.read()), data_3_q0.read());
}

void sha256_transform::thread_m_7_fu_5765_p5() {
    m_7_fu_5765_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q1.read(), data_1_q1.read()), data_2_q1.read()), data_3_q1.read());
}

void sha256_transform::thread_m_8_fu_5805_p5() {
    m_8_fu_5805_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q0.read(), data_1_q0.read()), data_2_q0.read()), data_3_q0.read());
}

void sha256_transform::thread_m_9_fu_5818_p5() {
    m_9_fu_5818_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q1.read(), data_1_q1.read()), data_2_q1.read()), data_3_q1.read());
}

void sha256_transform::thread_trunc_ln104_fu_5620_p1() {
    trunc_ln104_fu_5620_p1 = dp_key_r.read().range(1-1, 0);
}

}

