#include "sha256_transform.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void sha256_transform::thread_add_ln101_100_fu_6840_p2() {
    add_ln101_100_fu_6840_p2 = (!m_33_reg_10202.read().is_01() || !m_42_reg_10400.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_33_reg_10202.read()) + sc_biguint<32>(m_42_reg_10400.read()));
}

void sha256_transform::thread_add_ln101_102_fu_6850_p2() {
    add_ln101_102_fu_6850_p2 = (!tmp_1_33_reg_10263.read().is_01() || !grp_SIG1_fu_5510_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_33_reg_10263.read()) + sc_biguint<32>(grp_SIG1_fu_5510_ap_return.read()));
}

void sha256_transform::thread_add_ln101_103_fu_6871_p2() {
    add_ln101_103_fu_6871_p2 = (!m_34_reg_10234.read().is_01() || !m_43_reg_10407.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_34_reg_10234.read()) + sc_biguint<32>(m_43_reg_10407.read()));
}

void sha256_transform::thread_add_ln101_105_fu_6855_p2() {
    add_ln101_105_fu_6855_p2 = (!tmp_1_34_reg_10302.read().is_01() || !grp_SIG1_fu_5515_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_34_reg_10302.read()) + sc_biguint<32>(grp_SIG1_fu_5515_ap_return.read()));
}

void sha256_transform::thread_add_ln101_106_fu_6881_p2() {
    add_ln101_106_fu_6881_p2 = (!m_35_reg_10241.read().is_01() || !m_44_reg_10444.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_35_reg_10241.read()) + sc_biguint<32>(m_44_reg_10444.read()));
}

void sha256_transform::thread_add_ln101_108_fu_6891_p2() {
    add_ln101_108_fu_6891_p2 = (!tmp_1_35_reg_10307.read().is_01() || !grp_SIG1_fu_5510_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_35_reg_10307.read()) + sc_biguint<32>(grp_SIG1_fu_5510_ap_return.read()));
}

void sha256_transform::thread_add_ln101_109_fu_6930_p2() {
    add_ln101_109_fu_6930_p2 = (!m_36_reg_10278.read().is_01() || !m_45_reg_10451.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_36_reg_10278.read()) + sc_biguint<32>(m_45_reg_10451.read()));
}

void sha256_transform::thread_add_ln101_10_fu_6054_p2() {
    add_ln101_10_fu_6054_p2 = (!m_3_reg_9388.read().is_01() || !m_12_reg_9735.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_3_reg_9388.read()) + sc_biguint<32>(m_12_reg_9735.read()));
}

void sha256_transform::thread_add_ln101_111_fu_6896_p2() {
    add_ln101_111_fu_6896_p2 = (!tmp_1_36_reg_10341.read().is_01() || !grp_SIG1_fu_5515_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_36_reg_10341.read()) + sc_biguint<32>(grp_SIG1_fu_5515_ap_return.read()));
}

void sha256_transform::thread_add_ln101_112_fu_6940_p2() {
    add_ln101_112_fu_6940_p2 = (!m_37_reg_10285.read().is_01() || !m_46_reg_10483.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_37_reg_10285.read()) + sc_biguint<32>(m_46_reg_10483.read()));
}

void sha256_transform::thread_add_ln101_114_fu_6950_p2() {
    add_ln101_114_fu_6950_p2 = (!tmp_1_37_reg_10346.read().is_01() || !grp_SIG1_fu_5510_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_37_reg_10346.read()) + sc_biguint<32>(grp_SIG1_fu_5510_ap_return.read()));
}

void sha256_transform::thread_add_ln101_115_fu_6971_p2() {
    add_ln101_115_fu_6971_p2 = (!m_38_reg_10317.read().is_01() || !m_47_reg_10490.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_38_reg_10317.read()) + sc_biguint<32>(m_47_reg_10490.read()));
}

void sha256_transform::thread_add_ln101_117_fu_6955_p2() {
    add_ln101_117_fu_6955_p2 = (!tmp_1_38_reg_10385.read().is_01() || !grp_SIG1_fu_5515_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_38_reg_10385.read()) + sc_biguint<32>(grp_SIG1_fu_5515_ap_return.read()));
}

void sha256_transform::thread_add_ln101_118_fu_6981_p2() {
    add_ln101_118_fu_6981_p2 = (!m_39_reg_10324.read().is_01() || !m_48_reg_10527.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_39_reg_10324.read()) + sc_biguint<32>(m_48_reg_10527.read()));
}

void sha256_transform::thread_add_ln101_120_fu_6991_p2() {
    add_ln101_120_fu_6991_p2 = (!tmp_1_39_reg_10390.read().is_01() || !grp_SIG1_fu_5510_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_39_reg_10390.read()) + sc_biguint<32>(grp_SIG1_fu_5510_ap_return.read()));
}

void sha256_transform::thread_add_ln101_121_fu_7030_p2() {
    add_ln101_121_fu_7030_p2 = (!m_40_reg_10361.read().is_01() || !m_49_reg_10533.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_40_reg_10361.read()) + sc_biguint<32>(m_49_reg_10533.read()));
}

void sha256_transform::thread_add_ln101_123_fu_6996_p2() {
    add_ln101_123_fu_6996_p2 = (!tmp_1_40_reg_10424.read().is_01() || !grp_SIG1_fu_5515_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_40_reg_10424.read()) + sc_biguint<32>(grp_SIG1_fu_5515_ap_return.read()));
}

void sha256_transform::thread_add_ln101_124_fu_7040_p2() {
    add_ln101_124_fu_7040_p2 = (!m_41_reg_10368.read().is_01() || !m_50_reg_10559.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_41_reg_10368.read()) + sc_biguint<32>(m_50_reg_10559.read()));
}

void sha256_transform::thread_add_ln101_126_fu_7050_p2() {
    add_ln101_126_fu_7050_p2 = (!tmp_1_41_reg_10429.read().is_01() || !grp_SIG1_fu_5510_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_41_reg_10429.read()) + sc_biguint<32>(grp_SIG1_fu_5510_ap_return.read()));
}

void sha256_transform::thread_add_ln101_127_fu_7071_p2() {
    add_ln101_127_fu_7071_p2 = (!m_42_reg_10400.read().is_01() || !m_51_reg_10565.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_42_reg_10400.read()) + sc_biguint<32>(m_51_reg_10565.read()));
}

void sha256_transform::thread_add_ln101_129_fu_7055_p2() {
    add_ln101_129_fu_7055_p2 = (!tmp_1_42_reg_10468.read().is_01() || !grp_SIG1_fu_5515_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_42_reg_10468.read()) + sc_biguint<32>(grp_SIG1_fu_5515_ap_return.read()));
}

void sha256_transform::thread_add_ln101_12_fu_6065_p2() {
    add_ln101_12_fu_6065_p2 = (!tmp_1_4_reg_9511.read().is_01() || !grp_SIG1_fu_5490_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_4_reg_9511.read()) + sc_biguint<32>(grp_SIG1_fu_5490_ap_return.read()));
}

void sha256_transform::thread_add_ln101_130_fu_7081_p2() {
    add_ln101_130_fu_7081_p2 = (!m_43_reg_10407.read().is_01() || !m_52_reg_10591.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_43_reg_10407.read()) + sc_biguint<32>(m_52_reg_10591.read()));
}

void sha256_transform::thread_add_ln101_132_fu_7091_p2() {
    add_ln101_132_fu_7091_p2 = (!tmp_1_43_reg_10473.read().is_01() || !grp_SIG1_fu_5510_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_43_reg_10473.read()) + sc_biguint<32>(grp_SIG1_fu_5510_ap_return.read()));
}

void sha256_transform::thread_add_ln101_133_fu_7130_p2() {
    add_ln101_133_fu_7130_p2 = (!m_44_reg_10444.read().is_01() || !m_53_reg_10597.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_44_reg_10444.read()) + sc_biguint<32>(m_53_reg_10597.read()));
}

void sha256_transform::thread_add_ln101_135_fu_7096_p2() {
    add_ln101_135_fu_7096_p2 = (!tmp_1_44_reg_10507.read().is_01() || !grp_SIG1_fu_5515_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_44_reg_10507.read()) + sc_biguint<32>(grp_SIG1_fu_5515_ap_return.read()));
}

void sha256_transform::thread_add_ln101_136_fu_7140_p2() {
    add_ln101_136_fu_7140_p2 = (!m_45_reg_10451.read().is_01() || !m_54_reg_10618.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_45_reg_10451.read()) + sc_biguint<32>(m_54_reg_10618.read()));
}

void sha256_transform::thread_add_ln101_13_fu_6101_p2() {
    add_ln101_13_fu_6101_p2 = (!m_4_reg_9454.read().is_01() || !m_13_reg_9742.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_4_reg_9454.read()) + sc_biguint<32>(m_13_reg_9742.read()));
}

void sha256_transform::thread_add_ln101_15_fu_6070_p2() {
    add_ln101_15_fu_6070_p2 = (!tmp_1_5_reg_9573.read().is_01() || !grp_SIG1_fu_5495_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_5_reg_9573.read()) + sc_biguint<32>(grp_SIG1_fu_5495_ap_return.read()));
}

void sha256_transform::thread_add_ln101_16_fu_6112_p2() {
    add_ln101_16_fu_6112_p2 = (!m_5_reg_9460.read().is_01() || !m_14_reg_9804.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_5_reg_9460.read()) + sc_biguint<32>(m_14_reg_9804.read()));
}

void sha256_transform::thread_add_ln101_18_fu_6123_p2() {
    add_ln101_18_fu_6123_p2 = (!tmp_1_6_reg_9578.read().is_01() || !grp_SIG1_fu_5490_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_6_reg_9578.read()) + sc_biguint<32>(grp_SIG1_fu_5490_ap_return.read()));
}

void sha256_transform::thread_add_ln101_19_fu_6144_p2() {
    add_ln101_19_fu_6144_p2 = (!m_6_reg_9521.read().is_01() || !m_15_reg_9811.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_6_reg_9521.read()) + sc_biguint<32>(m_15_reg_9811.read()));
}

void sha256_transform::thread_add_ln101_1_fu_6000_p2() {
    add_ln101_1_fu_6000_p2 = (!m_0_reg_9309.read().is_01() || !m_9_reg_9599.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_0_reg_9309.read()) + sc_biguint<32>(m_9_reg_9599.read()));
}

void sha256_transform::thread_add_ln101_21_fu_6128_p2() {
    add_ln101_21_fu_6128_p2 = (!tmp_1_7_reg_9646.read().is_01() || !grp_SIG1_fu_5495_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_7_reg_9646.read()) + sc_biguint<32>(grp_SIG1_fu_5495_ap_return.read()));
}

void sha256_transform::thread_add_ln101_22_fu_6155_p2() {
    add_ln101_22_fu_6155_p2 = (!m_7_reg_9527.read().is_01() || !m_16_reg_9848.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_7_reg_9527.read()) + sc_biguint<32>(m_16_reg_9848.read()));
}

void sha256_transform::thread_add_ln101_24_fu_6166_p2() {
    add_ln101_24_fu_6166_p2 = (!tmp_1_8_reg_9651.read().is_01() || !grp_SIG1_fu_5490_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_8_reg_9651.read()) + sc_biguint<32>(grp_SIG1_fu_5490_ap_return.read()));
}

void sha256_transform::thread_add_ln101_25_fu_6205_p2() {
    add_ln101_25_fu_6205_p2 = (!m_8_reg_9593.read().is_01() || !m_17_reg_9855.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_8_reg_9593.read()) + sc_biguint<32>(m_17_reg_9855.read()));
}

void sha256_transform::thread_add_ln101_27_fu_6171_p2() {
    add_ln101_27_fu_6171_p2 = (!tmp_1_9_reg_9715.read().is_01() || !grp_SIG1_fu_5495_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_9_reg_9715.read()) + sc_biguint<32>(grp_SIG1_fu_5495_ap_return.read()));
}

void sha256_transform::thread_add_ln101_28_fu_6216_p2() {
    add_ln101_28_fu_6216_p2 = (!m_9_reg_9599.read().is_01() || !m_18_reg_9902.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_9_reg_9599.read()) + sc_biguint<32>(m_18_reg_9902.read()));
}

void sha256_transform::thread_add_ln101_30_fu_6227_p2() {
    add_ln101_30_fu_6227_p2 = (!tmp_1_s_reg_9720.read().is_01() || !grp_SIG1_fu_5490_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_s_reg_9720.read()) + sc_biguint<32>(grp_SIG1_fu_5490_ap_return.read()));
}

void sha256_transform::thread_add_ln101_31_fu_6248_p2() {
    add_ln101_31_fu_6248_p2 = (!m_10_reg_9661.read().is_01() || !m_19_reg_9909.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_10_reg_9661.read()) + sc_biguint<32>(m_19_reg_9909.read()));
}

void sha256_transform::thread_add_ln101_33_fu_6232_p2() {
    add_ln101_33_fu_6232_p2 = (!tmp_1_10_reg_9789.read().is_01() || !grp_SIG1_fu_5495_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_10_reg_9789.read()) + sc_biguint<32>(grp_SIG1_fu_5495_ap_return.read()));
}

void sha256_transform::thread_add_ln101_34_fu_6259_p2() {
    add_ln101_34_fu_6259_p2 = (!m_11_reg_9668.read().is_01() || !m_20_reg_9946.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_11_reg_9668.read()) + sc_biguint<32>(m_20_reg_9946.read()));
}

void sha256_transform::thread_add_ln101_36_fu_6270_p2() {
    add_ln101_36_fu_6270_p2 = (!tmp_1_11_reg_9794.read().is_01() || !grp_SIG1_fu_5490_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_11_reg_9794.read()) + sc_biguint<32>(grp_SIG1_fu_5490_ap_return.read()));
}

void sha256_transform::thread_add_ln101_37_fu_6309_p2() {
    add_ln101_37_fu_6309_p2 = (!m_12_reg_9735.read().is_01() || !m_21_reg_9953.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_12_reg_9735.read()) + sc_biguint<32>(m_21_reg_9953.read()));
}

void sha256_transform::thread_add_ln101_39_fu_6275_p2() {
    add_ln101_39_fu_6275_p2 = (!tmp_1_12_reg_9828.read().is_01() || !grp_SIG1_fu_5495_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_12_reg_9828.read()) + sc_biguint<32>(grp_SIG1_fu_5495_ap_return.read()));
}

void sha256_transform::thread_add_ln101_3_fu_5966_p2() {
    add_ln101_3_fu_5966_p2 = (!tmp_1_1_reg_9434.read().is_01() || !grp_SIG1_fu_5495_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_1_reg_9434.read()) + sc_biguint<32>(grp_SIG1_fu_5495_ap_return.read()));
}

void sha256_transform::thread_add_ln101_40_fu_6320_p2() {
    add_ln101_40_fu_6320_p2 = (!m_13_reg_9742.read().is_01() || !m_22_reg_9985.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_13_reg_9742.read()) + sc_biguint<32>(m_22_reg_9985.read()));
}

void sha256_transform::thread_add_ln101_42_fu_6331_p2() {
    add_ln101_42_fu_6331_p2 = (!tmp_1_13_reg_9833.read().is_01() || !grp_SIG1_fu_5490_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_13_reg_9833.read()) + sc_biguint<32>(grp_SIG1_fu_5490_ap_return.read()));
}

void sha256_transform::thread_add_ln101_43_fu_6352_p2() {
    add_ln101_43_fu_6352_p2 = (!m_14_reg_9804.read().is_01() || !m_23_reg_9992.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_14_reg_9804.read()) + sc_biguint<32>(m_23_reg_9992.read()));
}

void sha256_transform::thread_add_ln101_45_fu_6336_p2() {
    add_ln101_45_fu_6336_p2 = (!tmp_1_14_reg_9872.read().is_01() || !grp_SIG1_fu_5495_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_14_reg_9872.read()) + sc_biguint<32>(grp_SIG1_fu_5495_ap_return.read()));
}

void sha256_transform::thread_add_ln101_46_fu_6363_p2() {
    add_ln101_46_fu_6363_p2 = (!m_15_reg_9811.read().is_01() || !m_24_reg_10029.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_15_reg_9811.read()) + sc_biguint<32>(m_24_reg_10029.read()));
}

void sha256_transform::thread_add_ln101_48_fu_6374_p2() {
    add_ln101_48_fu_6374_p2 = (!tmp_1_15_reg_9877.read().is_01() || !grp_SIG1_fu_5500_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_15_reg_9877.read()) + sc_biguint<32>(grp_SIG1_fu_5500_ap_return.read()));
}

void sha256_transform::thread_add_ln101_49_fu_6413_p2() {
    add_ln101_49_fu_6413_p2 = (!m_16_reg_9848.read().is_01() || !m_25_reg_10036.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_16_reg_9848.read()) + sc_biguint<32>(m_25_reg_10036.read()));
}

void sha256_transform::thread_add_ln101_4_fu_6011_p2() {
    add_ln101_4_fu_6011_p2 = (!m_1_reg_9314.read().is_01() || !m_10_reg_9661.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_1_reg_9314.read()) + sc_biguint<32>(m_10_reg_9661.read()));
}

void sha256_transform::thread_add_ln101_51_fu_6379_p2() {
    add_ln101_51_fu_6379_p2 = (!tmp_1_16_reg_9926.read().is_01() || !grp_SIG1_fu_5505_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_16_reg_9926.read()) + sc_biguint<32>(grp_SIG1_fu_5505_ap_return.read()));
}

void sha256_transform::thread_add_ln101_52_fu_6424_p2() {
    add_ln101_52_fu_6424_p2 = (!m_17_reg_9855.read().is_01() || !m_26_reg_10068.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_17_reg_9855.read()) + sc_biguint<32>(m_26_reg_10068.read()));
}

void sha256_transform::thread_add_ln101_54_fu_6435_p2() {
    add_ln101_54_fu_6435_p2 = (!tmp_1_17_reg_9931.read().is_01() || !grp_SIG1_fu_5500_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_17_reg_9931.read()) + sc_biguint<32>(grp_SIG1_fu_5500_ap_return.read()));
}

void sha256_transform::thread_add_ln101_55_fu_6456_p2() {
    add_ln101_55_fu_6456_p2 = (!m_18_reg_9902.read().is_01() || !m_27_reg_10075.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_18_reg_9902.read()) + sc_biguint<32>(m_27_reg_10075.read()));
}

void sha256_transform::thread_add_ln101_57_fu_6440_p2() {
    add_ln101_57_fu_6440_p2 = (!tmp_1_18_reg_9970.read().is_01() || !grp_SIG1_fu_5505_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_18_reg_9970.read()) + sc_biguint<32>(grp_SIG1_fu_5505_ap_return.read()));
}

void sha256_transform::thread_add_ln101_58_fu_6467_p2() {
    add_ln101_58_fu_6467_p2 = (!m_19_reg_9909.read().is_01() || !m_28_reg_10112.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_19_reg_9909.read()) + sc_biguint<32>(m_28_reg_10112.read()));
}

void sha256_transform::thread_add_ln101_60_fu_6478_p2() {
    add_ln101_60_fu_6478_p2 = (!tmp_1_19_reg_9975.read().is_01() || !grp_SIG1_fu_5500_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_19_reg_9975.read()) + sc_biguint<32>(grp_SIG1_fu_5500_ap_return.read()));
}

void sha256_transform::thread_add_ln101_61_fu_6517_p2() {
    add_ln101_61_fu_6517_p2 = (!m_20_reg_9946.read().is_01() || !m_29_reg_10119.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_20_reg_9946.read()) + sc_biguint<32>(m_29_reg_10119.read()));
}

void sha256_transform::thread_add_ln101_63_fu_6483_p2() {
    add_ln101_63_fu_6483_p2 = (!tmp_1_20_reg_10009.read().is_01() || !grp_SIG1_fu_5505_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_20_reg_10009.read()) + sc_biguint<32>(grp_SIG1_fu_5505_ap_return.read()));
}

void sha256_transform::thread_add_ln101_64_fu_6528_p2() {
    add_ln101_64_fu_6528_p2 = (!m_21_reg_9953.read().is_01() || !m_30_reg_10151.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_21_reg_9953.read()) + sc_biguint<32>(m_30_reg_10151.read()));
}

void sha256_transform::thread_add_ln101_66_fu_6539_p2() {
    add_ln101_66_fu_6539_p2 = (!tmp_1_21_reg_10014.read().is_01() || !grp_SIG1_fu_5500_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_21_reg_10014.read()) + sc_biguint<32>(grp_SIG1_fu_5500_ap_return.read()));
}

void sha256_transform::thread_add_ln101_67_fu_6560_p2() {
    add_ln101_67_fu_6560_p2 = (!m_22_reg_9985.read().is_01() || !m_31_reg_10158.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_22_reg_9985.read()) + sc_biguint<32>(m_31_reg_10158.read()));
}

void sha256_transform::thread_add_ln101_69_fu_6544_p2() {
    add_ln101_69_fu_6544_p2 = (!tmp_1_22_reg_10053.read().is_01() || !grp_SIG1_fu_5505_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_22_reg_10053.read()) + sc_biguint<32>(grp_SIG1_fu_5505_ap_return.read()));
}

void sha256_transform::thread_add_ln101_6_fu_6022_p2() {
    add_ln101_6_fu_6022_p2 = (!tmp_1_2_reg_9439.read().is_01() || !grp_SIG1_fu_5490_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_2_reg_9439.read()) + sc_biguint<32>(grp_SIG1_fu_5490_ap_return.read()));
}

void sha256_transform::thread_add_ln101_70_fu_6571_p2() {
    add_ln101_70_fu_6571_p2 = (!m_23_reg_9992.read().is_01() || !m_32_reg_10195.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_23_reg_9992.read()) + sc_biguint<32>(m_32_reg_10195.read()));
}

void sha256_transform::thread_add_ln101_72_fu_6582_p2() {
    add_ln101_72_fu_6582_p2 = (!tmp_1_23_reg_10058.read().is_01() || !grp_SIG1_fu_5500_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_23_reg_10058.read()) + sc_biguint<32>(grp_SIG1_fu_5500_ap_return.read()));
}

void sha256_transform::thread_add_ln101_73_fu_6621_p2() {
    add_ln101_73_fu_6621_p2 = (!m_24_reg_10029.read().is_01() || !m_33_reg_10202.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_24_reg_10029.read()) + sc_biguint<32>(m_33_reg_10202.read()));
}

void sha256_transform::thread_add_ln101_75_fu_6587_p2() {
    add_ln101_75_fu_6587_p2 = (!tmp_1_24_reg_10092.read().is_01() || !grp_SIG1_fu_5505_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_24_reg_10092.read()) + sc_biguint<32>(grp_SIG1_fu_5505_ap_return.read()));
}

void sha256_transform::thread_add_ln101_76_fu_6632_p2() {
    add_ln101_76_fu_6632_p2 = (!m_25_reg_10036.read().is_01() || !m_34_reg_10234.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_25_reg_10036.read()) + sc_biguint<32>(m_34_reg_10234.read()));
}

void sha256_transform::thread_add_ln101_78_fu_6643_p2() {
    add_ln101_78_fu_6643_p2 = (!tmp_1_25_reg_10097.read().is_01() || !grp_SIG1_fu_5500_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_25_reg_10097.read()) + sc_biguint<32>(grp_SIG1_fu_5500_ap_return.read()));
}

void sha256_transform::thread_add_ln101_79_fu_6664_p2() {
    add_ln101_79_fu_6664_p2 = (!m_26_reg_10068.read().is_01() || !m_35_reg_10241.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_26_reg_10068.read()) + sc_biguint<32>(m_35_reg_10241.read()));
}

void sha256_transform::thread_add_ln101_7_fu_6043_p2() {
    add_ln101_7_fu_6043_p2 = (!m_2_reg_9382.read().is_01() || !m_11_reg_9668.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_2_reg_9382.read()) + sc_biguint<32>(m_11_reg_9668.read()));
}

void sha256_transform::thread_add_ln101_81_fu_6648_p2() {
    add_ln101_81_fu_6648_p2 = (!tmp_1_26_reg_10136.read().is_01() || !grp_SIG1_fu_5505_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_26_reg_10136.read()) + sc_biguint<32>(grp_SIG1_fu_5505_ap_return.read()));
}

void sha256_transform::thread_add_ln101_82_fu_6675_p2() {
    add_ln101_82_fu_6675_p2 = (!m_27_reg_10075.read().is_01() || !m_36_reg_10278.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_27_reg_10075.read()) + sc_biguint<32>(m_36_reg_10278.read()));
}

void sha256_transform::thread_add_ln101_84_fu_6686_p2() {
    add_ln101_84_fu_6686_p2 = (!tmp_1_27_reg_10141.read().is_01() || !grp_SIG1_fu_5500_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_27_reg_10141.read()) + sc_biguint<32>(grp_SIG1_fu_5500_ap_return.read()));
}

void sha256_transform::thread_add_ln101_85_fu_6725_p2() {
    add_ln101_85_fu_6725_p2 = (!m_28_reg_10112.read().is_01() || !m_37_reg_10285.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_28_reg_10112.read()) + sc_biguint<32>(m_37_reg_10285.read()));
}

void sha256_transform::thread_add_ln101_87_fu_6691_p2() {
    add_ln101_87_fu_6691_p2 = (!tmp_1_28_reg_10175.read().is_01() || !grp_SIG1_fu_5505_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_28_reg_10175.read()) + sc_biguint<32>(grp_SIG1_fu_5505_ap_return.read()));
}

void sha256_transform::thread_add_ln101_88_fu_6736_p2() {
    add_ln101_88_fu_6736_p2 = (!m_29_reg_10119.read().is_01() || !m_38_reg_10317.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_29_reg_10119.read()) + sc_biguint<32>(m_38_reg_10317.read()));
}

void sha256_transform::thread_add_ln101_90_fu_6747_p2() {
    add_ln101_90_fu_6747_p2 = (!tmp_1_29_reg_10180.read().is_01() || !grp_SIG1_fu_5500_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_29_reg_10180.read()) + sc_biguint<32>(grp_SIG1_fu_5500_ap_return.read()));
}

void sha256_transform::thread_add_ln101_91_fu_6768_p2() {
    add_ln101_91_fu_6768_p2 = (!m_30_reg_10151.read().is_01() || !m_39_reg_10324.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_30_reg_10151.read()) + sc_biguint<32>(m_39_reg_10324.read()));
}

void sha256_transform::thread_add_ln101_93_fu_6752_p2() {
    add_ln101_93_fu_6752_p2 = (!tmp_1_30_reg_10219.read().is_01() || !grp_SIG1_fu_5505_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_30_reg_10219.read()) + sc_biguint<32>(grp_SIG1_fu_5505_ap_return.read()));
}

void sha256_transform::thread_add_ln101_94_fu_6779_p2() {
    add_ln101_94_fu_6779_p2 = (!m_31_reg_10158.read().is_01() || !m_40_reg_10361.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_31_reg_10158.read()) + sc_biguint<32>(m_40_reg_10361.read()));
}

void sha256_transform::thread_add_ln101_96_fu_6790_p2() {
    add_ln101_96_fu_6790_p2 = (!tmp_1_31_reg_10224.read().is_01() || !grp_SIG1_fu_5510_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_31_reg_10224.read()) + sc_biguint<32>(grp_SIG1_fu_5510_ap_return.read()));
}

void sha256_transform::thread_add_ln101_97_fu_6829_p2() {
    add_ln101_97_fu_6829_p2 = (!m_32_reg_10195.read().is_01() || !m_41_reg_10368.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_32_reg_10195.read()) + sc_biguint<32>(m_41_reg_10368.read()));
}

void sha256_transform::thread_add_ln101_99_fu_6795_p2() {
    add_ln101_99_fu_6795_p2 = (!tmp_1_32_reg_10258.read().is_01() || !grp_SIG1_fu_5515_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_32_reg_10258.read()) + sc_biguint<32>(grp_SIG1_fu_5515_ap_return.read()));
}

void sha256_transform::thread_add_ln101_9_fu_6027_p2() {
    add_ln101_9_fu_6027_p2 = (!tmp_1_3_reg_9506.read().is_01() || !grp_SIG1_fu_5495_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_3_reg_9506.read()) + sc_biguint<32>(grp_SIG1_fu_5495_ap_return.read()));
}

void sha256_transform::thread_add_ln101_fu_5961_p2() {
    add_ln101_fu_5961_p2 = (!tmp_1_reg_9360.read().is_01() || !grp_SIG1_fu_5490_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_reg_9360.read()) + sc_biguint<32>(grp_SIG1_fu_5490_ap_return.read()));
}

void sha256_transform::thread_add_ln118_100_fu_7575_p2() {
    add_ln118_100_fu_7575_p2 = (!reg_5592.read().is_01() || !ap_const_lv32_A831C66D.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5592.read()) + sc_bigint<32>(ap_const_lv32_A831C66D));
}

void sha256_transform::thread_add_ln118_101_fu_7564_p2() {
    add_ln118_101_fu_7564_p2 = (!grp_EP1_fu_5307_ap_return.read().is_01() || !m_25_reg_10036_pp0_iter5_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_5307_ap_return.read()) + sc_biguint<32>(m_25_reg_10036_pp0_iter5_reg.read()));
}

void sha256_transform::thread_add_ln118_102_fu_7569_p2() {
    add_ln118_102_fu_7569_p2 = (!add_ln118_101_fu_7564_p2.read().is_01() || !f_1_22_reg_2201.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_101_fu_7564_p2.read()) + sc_biguint<32>(f_1_22_reg_2201.read()));
}

void sha256_transform::thread_add_ln118_103_fu_7581_p2() {
    add_ln118_103_fu_7581_p2 = (!add_ln118_102_reg_10881.read().is_01() || !add_ln118_100_fu_7575_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_102_reg_10881.read()) + sc_biguint<32>(add_ln118_100_fu_7575_p2.read()));
}

void sha256_transform::thread_add_ln118_104_fu_7615_p2() {
    add_ln118_104_fu_7615_p2 = (!reg_5592.read().is_01() || !ap_const_lv32_B00327C8.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5592.read()) + sc_bigint<32>(ap_const_lv32_B00327C8));
}

void sha256_transform::thread_add_ln118_105_fu_7604_p2() {
    add_ln118_105_fu_7604_p2 = (!grp_EP1_fu_5307_ap_return.read().is_01() || !m_26_reg_10068_pp0_iter5_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_5307_ap_return.read()) + sc_biguint<32>(m_26_reg_10068_pp0_iter5_reg.read()));
}

void sha256_transform::thread_add_ln118_106_fu_7609_p2() {
    add_ln118_106_fu_7609_p2 = (!add_ln118_105_fu_7604_p2.read().is_01() || !f_1_23_reg_2262.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_105_fu_7604_p2.read()) + sc_biguint<32>(f_1_23_reg_2262.read()));
}

void sha256_transform::thread_add_ln118_107_fu_7621_p2() {
    add_ln118_107_fu_7621_p2 = (!add_ln118_106_reg_10896.read().is_01() || !add_ln118_104_fu_7615_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_106_reg_10896.read()) + sc_biguint<32>(add_ln118_104_fu_7615_p2.read()));
}

void sha256_transform::thread_add_ln118_108_fu_7655_p2() {
    add_ln118_108_fu_7655_p2 = (!reg_5592.read().is_01() || !ap_const_lv32_BF597FC7.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5592.read()) + sc_bigint<32>(ap_const_lv32_BF597FC7));
}

void sha256_transform::thread_add_ln118_109_fu_7644_p2() {
    add_ln118_109_fu_7644_p2 = (!grp_EP1_fu_5307_ap_return.read().is_01() || !m_27_reg_10075_pp0_iter6_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_5307_ap_return.read()) + sc_biguint<32>(m_27_reg_10075_pp0_iter6_reg.read()));
}

void sha256_transform::thread_add_ln118_10_fu_5836_p2() {
    add_ln118_10_fu_5836_p2 = (!add_ln118_9_fu_5831_p2.read().is_01() || !ctx_state_5_read_1_reg_9227.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_9_fu_5831_p2.read()) + sc_biguint<32>(ctx_state_5_read_1_reg_9227.read()));
}

void sha256_transform::thread_add_ln118_110_fu_7649_p2() {
    add_ln118_110_fu_7649_p2 = (!add_ln118_109_fu_7644_p2.read().is_01() || !f_1_24_reg_2323.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_109_fu_7644_p2.read()) + sc_biguint<32>(f_1_24_reg_2323.read()));
}

void sha256_transform::thread_add_ln118_111_fu_7661_p2() {
    add_ln118_111_fu_7661_p2 = (!add_ln118_110_reg_10911.read().is_01() || !add_ln118_108_fu_7655_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_110_reg_10911.read()) + sc_biguint<32>(add_ln118_108_fu_7655_p2.read()));
}

void sha256_transform::thread_add_ln118_112_fu_7695_p2() {
    add_ln118_112_fu_7695_p2 = (!reg_5592.read().is_01() || !f_1_25_reg_2384.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5592.read()) + sc_biguint<32>(f_1_25_reg_2384.read()));
}

void sha256_transform::thread_add_ln118_113_fu_7684_p2() {
    add_ln118_113_fu_7684_p2 = (!m_28_reg_10112_pp0_iter6_reg.read().is_01() || !ap_const_lv32_C6E00BF3.is_01())? sc_lv<32>(): (sc_biguint<32>(m_28_reg_10112_pp0_iter6_reg.read()) + sc_bigint<32>(ap_const_lv32_C6E00BF3));
}

void sha256_transform::thread_add_ln118_114_fu_7689_p2() {
    add_ln118_114_fu_7689_p2 = (!add_ln118_113_fu_7684_p2.read().is_01() || !grp_EP1_fu_5307_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_113_fu_7684_p2.read()) + sc_biguint<32>(grp_EP1_fu_5307_ap_return.read()));
}

void sha256_transform::thread_add_ln118_115_fu_7701_p2() {
    add_ln118_115_fu_7701_p2 = (!add_ln118_114_reg_10926.read().is_01() || !add_ln118_112_fu_7695_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_114_reg_10926.read()) + sc_biguint<32>(add_ln118_112_fu_7695_p2.read()));
}

void sha256_transform::thread_add_ln118_116_fu_7735_p2() {
    add_ln118_116_fu_7735_p2 = (!reg_5604.read().is_01() || !f_1_26_reg_2445.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5604.read()) + sc_biguint<32>(f_1_26_reg_2445.read()));
}

void sha256_transform::thread_add_ln118_117_fu_7724_p2() {
    add_ln118_117_fu_7724_p2 = (!m_29_reg_10119_pp0_iter6_reg.read().is_01() || !ap_const_lv32_D5A79147.is_01())? sc_lv<32>(): (sc_biguint<32>(m_29_reg_10119_pp0_iter6_reg.read()) + sc_bigint<32>(ap_const_lv32_D5A79147));
}

void sha256_transform::thread_add_ln118_118_fu_7729_p2() {
    add_ln118_118_fu_7729_p2 = (!add_ln118_117_fu_7724_p2.read().is_01() || !grp_EP1_fu_5316_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_117_fu_7724_p2.read()) + sc_biguint<32>(grp_EP1_fu_5316_ap_return.read()));
}

void sha256_transform::thread_add_ln118_119_fu_7741_p2() {
    add_ln118_119_fu_7741_p2 = (!add_ln118_118_reg_10941.read().is_01() || !add_ln118_116_fu_7735_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_118_reg_10941.read()) + sc_biguint<32>(add_ln118_116_fu_7735_p2.read()));
}

void sha256_transform::thread_add_ln118_11_fu_5873_p2() {
    add_ln118_11_fu_5873_p2 = (!add_ln118_10_reg_9656.read().is_01() || !add_ln118_8_fu_5867_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_10_reg_9656.read()) + sc_biguint<32>(add_ln118_8_fu_5867_p2.read()));
}

void sha256_transform::thread_add_ln118_120_fu_7775_p2() {
    add_ln118_120_fu_7775_p2 = (!reg_5604.read().is_01() || !f_1_27_reg_2506.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5604.read()) + sc_biguint<32>(f_1_27_reg_2506.read()));
}

void sha256_transform::thread_add_ln118_121_fu_7764_p2() {
    add_ln118_121_fu_7764_p2 = (!m_30_reg_10151_pp0_iter7_reg.read().is_01() || !ap_const_lv32_6CA6351.is_01())? sc_lv<32>(): (sc_biguint<32>(m_30_reg_10151_pp0_iter7_reg.read()) + sc_biguint<32>(ap_const_lv32_6CA6351));
}

void sha256_transform::thread_add_ln118_122_fu_7769_p2() {
    add_ln118_122_fu_7769_p2 = (!add_ln118_121_fu_7764_p2.read().is_01() || !grp_EP1_fu_5316_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_121_fu_7764_p2.read()) + sc_biguint<32>(grp_EP1_fu_5316_ap_return.read()));
}

void sha256_transform::thread_add_ln118_123_fu_7781_p2() {
    add_ln118_123_fu_7781_p2 = (!add_ln118_122_reg_10956.read().is_01() || !add_ln118_120_fu_7775_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_122_reg_10956.read()) + sc_biguint<32>(add_ln118_120_fu_7775_p2.read()));
}

void sha256_transform::thread_add_ln118_124_fu_7815_p2() {
    add_ln118_124_fu_7815_p2 = (!reg_5604.read().is_01() || !f_1_28_reg_2567.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5604.read()) + sc_biguint<32>(f_1_28_reg_2567.read()));
}

void sha256_transform::thread_add_ln118_125_fu_7804_p2() {
    add_ln118_125_fu_7804_p2 = (!m_31_reg_10158_pp0_iter7_reg.read().is_01() || !ap_const_lv32_14292967.is_01())? sc_lv<32>(): (sc_biguint<32>(m_31_reg_10158_pp0_iter7_reg.read()) + sc_biguint<32>(ap_const_lv32_14292967));
}

void sha256_transform::thread_add_ln118_126_fu_7809_p2() {
    add_ln118_126_fu_7809_p2 = (!add_ln118_125_fu_7804_p2.read().is_01() || !grp_EP1_fu_5316_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_125_fu_7804_p2.read()) + sc_biguint<32>(grp_EP1_fu_5316_ap_return.read()));
}

void sha256_transform::thread_add_ln118_127_fu_7821_p2() {
    add_ln118_127_fu_7821_p2 = (!add_ln118_126_reg_10971.read().is_01() || !add_ln118_124_fu_7815_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_126_reg_10971.read()) + sc_biguint<32>(add_ln118_124_fu_7815_p2.read()));
}

void sha256_transform::thread_add_ln118_128_fu_7855_p2() {
    add_ln118_128_fu_7855_p2 = (!reg_5604.read().is_01() || !f_1_29_reg_2628.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5604.read()) + sc_biguint<32>(f_1_29_reg_2628.read()));
}

void sha256_transform::thread_add_ln118_129_fu_7844_p2() {
    add_ln118_129_fu_7844_p2 = (!m_32_reg_10195_pp0_iter7_reg.read().is_01() || !ap_const_lv32_27B70A85.is_01())? sc_lv<32>(): (sc_biguint<32>(m_32_reg_10195_pp0_iter7_reg.read()) + sc_biguint<32>(ap_const_lv32_27B70A85));
}

void sha256_transform::thread_add_ln118_12_fu_5971_p2() {
    add_ln118_12_fu_5971_p2 = (!reg_5520.read().is_01() || !f_1_0_reg_866.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5520.read()) + sc_biguint<32>(f_1_0_reg_866.read()));
}

void sha256_transform::thread_add_ln118_130_fu_7849_p2() {
    add_ln118_130_fu_7849_p2 = (!add_ln118_129_fu_7844_p2.read().is_01() || !grp_EP1_fu_5316_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_129_fu_7844_p2.read()) + sc_biguint<32>(grp_EP1_fu_5316_ap_return.read()));
}

void sha256_transform::thread_add_ln118_131_fu_7861_p2() {
    add_ln118_131_fu_7861_p2 = (!add_ln118_130_reg_10986.read().is_01() || !add_ln118_128_fu_7855_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_130_reg_10986.read()) + sc_biguint<32>(add_ln118_128_fu_7855_p2.read()));
}

void sha256_transform::thread_add_ln118_132_fu_7894_p2() {
    add_ln118_132_fu_7894_p2 = (!reg_5520.read().is_01() || !f_1_30_reg_2689.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5520.read()) + sc_biguint<32>(f_1_30_reg_2689.read()));
}

void sha256_transform::thread_add_ln118_133_fu_7883_p2() {
    add_ln118_133_fu_7883_p2 = (!m_33_reg_10202_pp0_iter8_reg.read().is_01() || !ap_const_lv32_2E1B2138.is_01())? sc_lv<32>(): (sc_biguint<32>(m_33_reg_10202_pp0_iter8_reg.read()) + sc_biguint<32>(ap_const_lv32_2E1B2138));
}

void sha256_transform::thread_add_ln118_134_fu_7888_p2() {
    add_ln118_134_fu_7888_p2 = (!add_ln118_133_fu_7883_p2.read().is_01() || !grp_EP1_fu_5252_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_133_fu_7883_p2.read()) + sc_biguint<32>(grp_EP1_fu_5252_ap_return.read()));
}

void sha256_transform::thread_add_ln118_135_fu_7900_p2() {
    add_ln118_135_fu_7900_p2 = (!add_ln118_134_reg_11006.read().is_01() || !add_ln118_132_fu_7894_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_134_reg_11006.read()) + sc_biguint<32>(add_ln118_132_fu_7894_p2.read()));
}

void sha256_transform::thread_add_ln118_136_fu_7934_p2() {
    add_ln118_136_fu_7934_p2 = (!reg_5520.read().is_01() || !f_1_31_reg_2750.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5520.read()) + sc_biguint<32>(f_1_31_reg_2750.read()));
}

void sha256_transform::thread_add_ln118_137_fu_7923_p2() {
    add_ln118_137_fu_7923_p2 = (!m_34_reg_10234_pp0_iter8_reg.read().is_01() || !ap_const_lv32_4D2C6DFC.is_01())? sc_lv<32>(): (sc_biguint<32>(m_34_reg_10234_pp0_iter8_reg.read()) + sc_biguint<32>(ap_const_lv32_4D2C6DFC));
}

void sha256_transform::thread_add_ln118_138_fu_7928_p2() {
    add_ln118_138_fu_7928_p2 = (!add_ln118_137_fu_7923_p2.read().is_01() || !grp_EP1_fu_5252_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_137_fu_7923_p2.read()) + sc_biguint<32>(grp_EP1_fu_5252_ap_return.read()));
}

void sha256_transform::thread_add_ln118_139_fu_7940_p2() {
    add_ln118_139_fu_7940_p2 = (!add_ln118_138_reg_11021.read().is_01() || !add_ln118_136_fu_7934_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_138_reg_11021.read()) + sc_biguint<32>(add_ln118_136_fu_7934_p2.read()));
}

void sha256_transform::thread_add_ln118_13_fu_5922_p2() {
    add_ln118_13_fu_5922_p2 = (!m_3_reg_9388.read().is_01() || !ap_const_lv32_E9B5DBA5.is_01())? sc_lv<32>(): (sc_biguint<32>(m_3_reg_9388.read()) + sc_bigint<32>(ap_const_lv32_E9B5DBA5));
}

void sha256_transform::thread_add_ln118_140_fu_7974_p2() {
    add_ln118_140_fu_7974_p2 = (!reg_5532.read().is_01() || !f_1_32_reg_2811.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5532.read()) + sc_biguint<32>(f_1_32_reg_2811.read()));
}

void sha256_transform::thread_add_ln118_141_fu_7963_p2() {
    add_ln118_141_fu_7963_p2 = (!m_35_reg_10241_pp0_iter8_reg.read().is_01() || !ap_const_lv32_53380D13.is_01())? sc_lv<32>(): (sc_biguint<32>(m_35_reg_10241_pp0_iter8_reg.read()) + sc_biguint<32>(ap_const_lv32_53380D13));
}

void sha256_transform::thread_add_ln118_142_fu_7968_p2() {
    add_ln118_142_fu_7968_p2 = (!add_ln118_141_fu_7963_p2.read().is_01() || !grp_EP1_fu_5262_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_141_fu_7963_p2.read()) + sc_biguint<32>(grp_EP1_fu_5262_ap_return.read()));
}

void sha256_transform::thread_add_ln118_143_fu_7980_p2() {
    add_ln118_143_fu_7980_p2 = (!add_ln118_142_reg_11036.read().is_01() || !add_ln118_140_fu_7974_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_142_reg_11036.read()) + sc_biguint<32>(add_ln118_140_fu_7974_p2.read()));
}

void sha256_transform::thread_add_ln118_144_fu_8014_p2() {
    add_ln118_144_fu_8014_p2 = (!reg_5520.read().is_01() || !f_1_33_reg_2872.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5520.read()) + sc_biguint<32>(f_1_33_reg_2872.read()));
}

void sha256_transform::thread_add_ln118_145_fu_8003_p2() {
    add_ln118_145_fu_8003_p2 = (!m_36_reg_10278_pp0_iter8_reg.read().is_01() || !ap_const_lv32_650A7354.is_01())? sc_lv<32>(): (sc_biguint<32>(m_36_reg_10278_pp0_iter8_reg.read()) + sc_biguint<32>(ap_const_lv32_650A7354));
}

void sha256_transform::thread_add_ln118_146_fu_8008_p2() {
    add_ln118_146_fu_8008_p2 = (!add_ln118_145_fu_8003_p2.read().is_01() || !grp_EP1_fu_5252_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_145_fu_8003_p2.read()) + sc_biguint<32>(grp_EP1_fu_5252_ap_return.read()));
}

void sha256_transform::thread_add_ln118_147_fu_8020_p2() {
    add_ln118_147_fu_8020_p2 = (!add_ln118_146_reg_11051.read().is_01() || !add_ln118_144_fu_8014_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_146_reg_11051.read()) + sc_biguint<32>(add_ln118_144_fu_8014_p2.read()));
}

void sha256_transform::thread_add_ln118_148_fu_8054_p2() {
    add_ln118_148_fu_8054_p2 = (!reg_5532.read().is_01() || !f_1_34_reg_2933.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5532.read()) + sc_biguint<32>(f_1_34_reg_2933.read()));
}

void sha256_transform::thread_add_ln118_149_fu_8043_p2() {
    add_ln118_149_fu_8043_p2 = (!m_37_reg_10285_pp0_iter9_reg.read().is_01() || !ap_const_lv32_766A0ABB.is_01())? sc_lv<32>(): (sc_biguint<32>(m_37_reg_10285_pp0_iter9_reg.read()) + sc_biguint<32>(ap_const_lv32_766A0ABB));
}

void sha256_transform::thread_add_ln118_14_fu_5927_p2() {
    add_ln118_14_fu_5927_p2 = (!add_ln118_13_fu_5922_p2.read().is_01() || !grp_EP1_fu_5252_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_13_fu_5922_p2.read()) + sc_biguint<32>(grp_EP1_fu_5252_ap_return.read()));
}

void sha256_transform::thread_add_ln118_150_fu_8048_p2() {
    add_ln118_150_fu_8048_p2 = (!add_ln118_149_fu_8043_p2.read().is_01() || !grp_EP1_fu_5262_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_149_fu_8043_p2.read()) + sc_biguint<32>(grp_EP1_fu_5262_ap_return.read()));
}

void sha256_transform::thread_add_ln118_151_fu_8060_p2() {
    add_ln118_151_fu_8060_p2 = (!add_ln118_150_reg_11066.read().is_01() || !add_ln118_148_fu_8054_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_150_reg_11066.read()) + sc_biguint<32>(add_ln118_148_fu_8054_p2.read()));
}

void sha256_transform::thread_add_ln118_152_fu_8094_p2() {
    add_ln118_152_fu_8094_p2 = (!reg_5532.read().is_01() || !ap_const_lv32_81C2C92E.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5532.read()) + sc_bigint<32>(ap_const_lv32_81C2C92E));
}

void sha256_transform::thread_add_ln118_153_fu_8083_p2() {
    add_ln118_153_fu_8083_p2 = (!grp_EP1_fu_5262_ap_return.read().is_01() || !m_38_reg_10317_pp0_iter9_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_5262_ap_return.read()) + sc_biguint<32>(m_38_reg_10317_pp0_iter9_reg.read()));
}

void sha256_transform::thread_add_ln118_154_fu_8088_p2() {
    add_ln118_154_fu_8088_p2 = (!add_ln118_153_fu_8083_p2.read().is_01() || !f_1_35_reg_2994.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_153_fu_8083_p2.read()) + sc_biguint<32>(f_1_35_reg_2994.read()));
}

void sha256_transform::thread_add_ln118_155_fu_8100_p2() {
    add_ln118_155_fu_8100_p2 = (!add_ln118_154_reg_11081.read().is_01() || !add_ln118_152_fu_8094_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_154_reg_11081.read()) + sc_biguint<32>(add_ln118_152_fu_8094_p2.read()));
}

void sha256_transform::thread_add_ln118_156_fu_8134_p2() {
    add_ln118_156_fu_8134_p2 = (!reg_5544.read().is_01() || !ap_const_lv32_92722C85.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5544.read()) + sc_bigint<32>(ap_const_lv32_92722C85));
}

void sha256_transform::thread_add_ln118_157_fu_8123_p2() {
    add_ln118_157_fu_8123_p2 = (!grp_EP1_fu_5271_ap_return.read().is_01() || !m_39_reg_10324_pp0_iter9_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_5271_ap_return.read()) + sc_biguint<32>(m_39_reg_10324_pp0_iter9_reg.read()));
}

void sha256_transform::thread_add_ln118_158_fu_8128_p2() {
    add_ln118_158_fu_8128_p2 = (!add_ln118_157_fu_8123_p2.read().is_01() || !f_1_36_reg_3055.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_157_fu_8123_p2.read()) + sc_biguint<32>(f_1_36_reg_3055.read()));
}

void sha256_transform::thread_add_ln118_159_fu_8140_p2() {
    add_ln118_159_fu_8140_p2 = (!add_ln118_158_reg_11096.read().is_01() || !add_ln118_156_fu_8134_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_158_reg_11096.read()) + sc_biguint<32>(add_ln118_156_fu_8134_p2.read()));
}

void sha256_transform::thread_add_ln118_15_fu_5977_p2() {
    add_ln118_15_fu_5977_p2 = (!add_ln118_14_reg_9799.read().is_01() || !add_ln118_12_fu_5971_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_14_reg_9799.read()) + sc_biguint<32>(add_ln118_12_fu_5971_p2.read()));
}

void sha256_transform::thread_add_ln118_160_fu_8174_p2() {
    add_ln118_160_fu_8174_p2 = (!reg_5532.read().is_01() || !ap_const_lv32_A2BFE8A1.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5532.read()) + sc_bigint<32>(ap_const_lv32_A2BFE8A1));
}

void sha256_transform::thread_add_ln118_161_fu_8163_p2() {
    add_ln118_161_fu_8163_p2 = (!grp_EP1_fu_5262_ap_return.read().is_01() || !m_40_reg_10361_pp0_iter9_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_5262_ap_return.read()) + sc_biguint<32>(m_40_reg_10361_pp0_iter9_reg.read()));
}

void sha256_transform::thread_add_ln118_162_fu_8168_p2() {
    add_ln118_162_fu_8168_p2 = (!add_ln118_161_fu_8163_p2.read().is_01() || !f_1_37_reg_3116.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_161_fu_8163_p2.read()) + sc_biguint<32>(f_1_37_reg_3116.read()));
}

void sha256_transform::thread_add_ln118_163_fu_8180_p2() {
    add_ln118_163_fu_8180_p2 = (!add_ln118_162_reg_11111.read().is_01() || !add_ln118_160_fu_8174_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_162_reg_11111.read()) + sc_biguint<32>(add_ln118_160_fu_8174_p2.read()));
}

void sha256_transform::thread_add_ln118_164_fu_8214_p2() {
    add_ln118_164_fu_8214_p2 = (!reg_5544.read().is_01() || !ap_const_lv32_A81A664B.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5544.read()) + sc_bigint<32>(ap_const_lv32_A81A664B));
}

void sha256_transform::thread_add_ln118_165_fu_8203_p2() {
    add_ln118_165_fu_8203_p2 = (!grp_EP1_fu_5271_ap_return.read().is_01() || !m_41_reg_10368_pp0_iter9_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_5271_ap_return.read()) + sc_biguint<32>(m_41_reg_10368_pp0_iter9_reg.read()));
}

void sha256_transform::thread_add_ln118_166_fu_8208_p2() {
    add_ln118_166_fu_8208_p2 = (!add_ln118_165_fu_8203_p2.read().is_01() || !f_1_38_reg_3177.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_165_fu_8203_p2.read()) + sc_biguint<32>(f_1_38_reg_3177.read()));
}

void sha256_transform::thread_add_ln118_167_fu_8220_p2() {
    add_ln118_167_fu_8220_p2 = (!add_ln118_166_reg_11126.read().is_01() || !add_ln118_164_fu_8214_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_166_reg_11126.read()) + sc_biguint<32>(add_ln118_164_fu_8214_p2.read()));
}

void sha256_transform::thread_add_ln118_168_fu_8254_p2() {
    add_ln118_168_fu_8254_p2 = (!reg_5544.read().is_01() || !f_1_39_reg_3238.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5544.read()) + sc_biguint<32>(f_1_39_reg_3238.read()));
}

void sha256_transform::thread_add_ln118_169_fu_8243_p2() {
    add_ln118_169_fu_8243_p2 = (!m_42_reg_10400_pp0_iter9_reg.read().is_01() || !ap_const_lv32_C24B8B70.is_01())? sc_lv<32>(): (sc_biguint<32>(m_42_reg_10400_pp0_iter9_reg.read()) + sc_bigint<32>(ap_const_lv32_C24B8B70));
}

void sha256_transform::thread_add_ln118_16_fu_6075_p2() {
    add_ln118_16_fu_6075_p2 = (!tmp_3_4_reg_9882.read().is_01() || !f_1_1_reg_922.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_3_4_reg_9882.read()) + sc_biguint<32>(f_1_1_reg_922.read()));
}

void sha256_transform::thread_add_ln118_170_fu_8248_p2() {
    add_ln118_170_fu_8248_p2 = (!add_ln118_169_fu_8243_p2.read().is_01() || !grp_EP1_fu_5271_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_169_fu_8243_p2.read()) + sc_biguint<32>(grp_EP1_fu_5271_ap_return.read()));
}

void sha256_transform::thread_add_ln118_171_fu_8260_p2() {
    add_ln118_171_fu_8260_p2 = (!add_ln118_170_reg_11141.read().is_01() || !add_ln118_168_fu_8254_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_170_reg_11141.read()) + sc_biguint<32>(add_ln118_168_fu_8254_p2.read()));
}

void sha256_transform::thread_add_ln118_172_fu_8294_p2() {
    add_ln118_172_fu_8294_p2 = (!reg_5556.read().is_01() || !f_1_40_reg_3299.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5556.read()) + sc_biguint<32>(f_1_40_reg_3299.read()));
}

void sha256_transform::thread_add_ln118_173_fu_8283_p2() {
    add_ln118_173_fu_8283_p2 = (!m_43_reg_10407_pp0_iter10_reg.read().is_01() || !ap_const_lv32_C76C51A3.is_01())? sc_lv<32>(): (sc_biguint<32>(m_43_reg_10407_pp0_iter10_reg.read()) + sc_bigint<32>(ap_const_lv32_C76C51A3));
}

void sha256_transform::thread_add_ln118_174_fu_8288_p2() {
    add_ln118_174_fu_8288_p2 = (!add_ln118_173_fu_8283_p2.read().is_01() || !grp_EP1_fu_5280_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_173_fu_8283_p2.read()) + sc_biguint<32>(grp_EP1_fu_5280_ap_return.read()));
}

void sha256_transform::thread_add_ln118_175_fu_8300_p2() {
    add_ln118_175_fu_8300_p2 = (!add_ln118_174_reg_11156.read().is_01() || !add_ln118_172_fu_8294_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_174_reg_11156.read()) + sc_biguint<32>(add_ln118_172_fu_8294_p2.read()));
}

void sha256_transform::thread_add_ln118_176_fu_8334_p2() {
    add_ln118_176_fu_8334_p2 = (!reg_5544.read().is_01() || !f_1_41_reg_3360.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5544.read()) + sc_biguint<32>(f_1_41_reg_3360.read()));
}

void sha256_transform::thread_add_ln118_177_fu_8323_p2() {
    add_ln118_177_fu_8323_p2 = (!m_44_reg_10444_pp0_iter10_reg.read().is_01() || !ap_const_lv32_D192E819.is_01())? sc_lv<32>(): (sc_biguint<32>(m_44_reg_10444_pp0_iter10_reg.read()) + sc_bigint<32>(ap_const_lv32_D192E819));
}

void sha256_transform::thread_add_ln118_178_fu_8328_p2() {
    add_ln118_178_fu_8328_p2 = (!add_ln118_177_fu_8323_p2.read().is_01() || !grp_EP1_fu_5271_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_177_fu_8323_p2.read()) + sc_biguint<32>(grp_EP1_fu_5271_ap_return.read()));
}

void sha256_transform::thread_add_ln118_179_fu_8340_p2() {
    add_ln118_179_fu_8340_p2 = (!add_ln118_178_reg_11171.read().is_01() || !add_ln118_176_fu_8334_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_178_reg_11171.read()) + sc_biguint<32>(add_ln118_176_fu_8334_p2.read()));
}

void sha256_transform::thread_add_ln118_17_fu_6032_p2() {
    add_ln118_17_fu_6032_p2 = (!m_4_reg_9454.read().is_01() || !ap_const_lv32_3956C25B.is_01())? sc_lv<32>(): (sc_biguint<32>(m_4_reg_9454.read()) + sc_biguint<32>(ap_const_lv32_3956C25B));
}

void sha256_transform::thread_add_ln118_180_fu_8374_p2() {
    add_ln118_180_fu_8374_p2 = (!reg_5556.read().is_01() || !f_1_42_reg_3421.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5556.read()) + sc_biguint<32>(f_1_42_reg_3421.read()));
}

void sha256_transform::thread_add_ln118_181_fu_8363_p2() {
    add_ln118_181_fu_8363_p2 = (!m_45_reg_10451_pp0_iter10_reg.read().is_01() || !ap_const_lv32_D6990624.is_01())? sc_lv<32>(): (sc_biguint<32>(m_45_reg_10451_pp0_iter10_reg.read()) + sc_bigint<32>(ap_const_lv32_D6990624));
}

void sha256_transform::thread_add_ln118_182_fu_8368_p2() {
    add_ln118_182_fu_8368_p2 = (!add_ln118_181_fu_8363_p2.read().is_01() || !grp_EP1_fu_5280_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_181_fu_8363_p2.read()) + sc_biguint<32>(grp_EP1_fu_5280_ap_return.read()));
}

void sha256_transform::thread_add_ln118_183_fu_8380_p2() {
    add_ln118_183_fu_8380_p2 = (!add_ln118_182_reg_11186.read().is_01() || !add_ln118_180_fu_8374_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_182_reg_11186.read()) + sc_biguint<32>(add_ln118_180_fu_8374_p2.read()));
}

void sha256_transform::thread_add_ln118_184_fu_8414_p2() {
    add_ln118_184_fu_8414_p2 = (!reg_5556.read().is_01() || !f_1_43_reg_3482.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5556.read()) + sc_biguint<32>(f_1_43_reg_3482.read()));
}

void sha256_transform::thread_add_ln118_185_fu_8403_p2() {
    add_ln118_185_fu_8403_p2 = (!m_46_reg_10483_pp0_iter11_reg.read().is_01() || !ap_const_lv32_F40E3585.is_01())? sc_lv<32>(): (sc_biguint<32>(m_46_reg_10483_pp0_iter11_reg.read()) + sc_bigint<32>(ap_const_lv32_F40E3585));
}

void sha256_transform::thread_add_ln118_186_fu_8408_p2() {
    add_ln118_186_fu_8408_p2 = (!add_ln118_185_fu_8403_p2.read().is_01() || !grp_EP1_fu_5280_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_185_fu_8403_p2.read()) + sc_biguint<32>(grp_EP1_fu_5280_ap_return.read()));
}

void sha256_transform::thread_add_ln118_187_fu_8420_p2() {
    add_ln118_187_fu_8420_p2 = (!add_ln118_186_reg_11201.read().is_01() || !add_ln118_184_fu_8414_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_186_reg_11201.read()) + sc_biguint<32>(add_ln118_184_fu_8414_p2.read()));
}

void sha256_transform::thread_add_ln118_188_fu_8469_p2() {
    add_ln118_188_fu_8469_p2 = (!reg_5568.read().is_01() || !f_1_44_reg_3543.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5568.read()) + sc_biguint<32>(f_1_44_reg_3543.read()));
}

void sha256_transform::thread_add_ln118_189_fu_8443_p2() {
    add_ln118_189_fu_8443_p2 = (!m_47_reg_10490_pp0_iter11_reg.read().is_01() || !ap_const_lv32_106AA070.is_01())? sc_lv<32>(): (sc_biguint<32>(m_47_reg_10490_pp0_iter11_reg.read()) + sc_biguint<32>(ap_const_lv32_106AA070));
}

void sha256_transform::thread_add_ln118_18_fu_6037_p2() {
    add_ln118_18_fu_6037_p2 = (!add_ln118_17_fu_6032_p2.read().is_01() || !grp_EP1_fu_5252_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_17_fu_6032_p2.read()) + sc_biguint<32>(grp_EP1_fu_5252_ap_return.read()));
}

void sha256_transform::thread_add_ln118_190_fu_8448_p2() {
    add_ln118_190_fu_8448_p2 = (!add_ln118_189_fu_8443_p2.read().is_01() || !grp_EP1_fu_5289_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_189_fu_8443_p2.read()) + sc_biguint<32>(grp_EP1_fu_5289_ap_return.read()));
}

void sha256_transform::thread_add_ln118_191_fu_8475_p2() {
    add_ln118_191_fu_8475_p2 = (!add_ln118_190_reg_11216.read().is_01() || !add_ln118_188_fu_8469_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_190_reg_11216.read()) + sc_biguint<32>(add_ln118_188_fu_8469_p2.read()));
}

void sha256_transform::thread_add_ln118_192_fu_8509_p2() {
    add_ln118_192_fu_8509_p2 = (!reg_5556.read().is_01() || !f_1_45_reg_3604.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5556.read()) + sc_biguint<32>(f_1_45_reg_3604.read()));
}

void sha256_transform::thread_add_ln118_193_fu_8498_p2() {
    add_ln118_193_fu_8498_p2 = (!m_48_reg_10527_pp0_iter12_reg.read().is_01() || !ap_const_lv32_19A4C116.is_01())? sc_lv<32>(): (sc_biguint<32>(m_48_reg_10527_pp0_iter12_reg.read()) + sc_biguint<32>(ap_const_lv32_19A4C116));
}

void sha256_transform::thread_add_ln118_194_fu_8503_p2() {
    add_ln118_194_fu_8503_p2 = (!add_ln118_193_fu_8498_p2.read().is_01() || !grp_EP1_fu_5280_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_193_fu_8498_p2.read()) + sc_biguint<32>(grp_EP1_fu_5280_ap_return.read()));
}

void sha256_transform::thread_add_ln118_195_fu_8515_p2() {
    add_ln118_195_fu_8515_p2 = (!add_ln118_194_reg_11236.read().is_01() || !add_ln118_192_fu_8509_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_194_reg_11236.read()) + sc_biguint<32>(add_ln118_192_fu_8509_p2.read()));
}

void sha256_transform::thread_add_ln118_196_fu_8549_p2() {
    add_ln118_196_fu_8549_p2 = (!reg_5568.read().is_01() || !f_1_46_reg_3665.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5568.read()) + sc_biguint<32>(f_1_46_reg_3665.read()));
}

void sha256_transform::thread_add_ln118_197_fu_8538_p2() {
    add_ln118_197_fu_8538_p2 = (!m_49_reg_10533_pp0_iter12_reg.read().is_01() || !ap_const_lv32_1E376C08.is_01())? sc_lv<32>(): (sc_biguint<32>(m_49_reg_10533_pp0_iter12_reg.read()) + sc_biguint<32>(ap_const_lv32_1E376C08));
}

void sha256_transform::thread_add_ln118_198_fu_8543_p2() {
    add_ln118_198_fu_8543_p2 = (!add_ln118_197_fu_8538_p2.read().is_01() || !grp_EP1_fu_5289_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_197_fu_8538_p2.read()) + sc_biguint<32>(grp_EP1_fu_5289_ap_return.read()));
}

void sha256_transform::thread_add_ln118_199_fu_8555_p2() {
    add_ln118_199_fu_8555_p2 = (!add_ln118_198_reg_11251.read().is_01() || !add_ln118_196_fu_8549_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_198_reg_11251.read()) + sc_biguint<32>(add_ln118_196_fu_8549_p2.read()));
}

void sha256_transform::thread_add_ln118_19_fu_6080_p2() {
    add_ln118_19_fu_6080_p2 = (!add_ln118_18_reg_9887.read().is_01() || !add_ln118_16_fu_6075_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_18_reg_9887.read()) + sc_biguint<32>(add_ln118_16_fu_6075_p2.read()));
}

void sha256_transform::thread_add_ln118_1_fu_5649_p2() {
    add_ln118_1_fu_5649_p2 = (!m_0_fu_5624_p5.read().is_01() || !ap_const_lv32_428A2F98.is_01())? sc_lv<32>(): (sc_biguint<32>(m_0_fu_5624_p5.read()) + sc_biguint<32>(ap_const_lv32_428A2F98));
}

void sha256_transform::thread_add_ln118_200_fu_8589_p2() {
    add_ln118_200_fu_8589_p2 = (!reg_5568.read().is_01() || !f_1_47_reg_3726.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5568.read()) + sc_biguint<32>(f_1_47_reg_3726.read()));
}

void sha256_transform::thread_add_ln118_201_fu_8578_p2() {
    add_ln118_201_fu_8578_p2 = (!m_50_reg_10559_pp0_iter12_reg.read().is_01() || !ap_const_lv32_2748774C.is_01())? sc_lv<32>(): (sc_biguint<32>(m_50_reg_10559_pp0_iter12_reg.read()) + sc_biguint<32>(ap_const_lv32_2748774C));
}

void sha256_transform::thread_add_ln118_202_fu_8583_p2() {
    add_ln118_202_fu_8583_p2 = (!add_ln118_201_fu_8578_p2.read().is_01() || !grp_EP1_fu_5289_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_201_fu_8578_p2.read()) + sc_biguint<32>(grp_EP1_fu_5289_ap_return.read()));
}

void sha256_transform::thread_add_ln118_203_fu_8595_p2() {
    add_ln118_203_fu_8595_p2 = (!add_ln118_202_reg_11266.read().is_01() || !add_ln118_200_fu_8589_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_202_reg_11266.read()) + sc_biguint<32>(add_ln118_200_fu_8589_p2.read()));
}

void sha256_transform::thread_add_ln118_204_fu_8629_p2() {
    add_ln118_204_fu_8629_p2 = (!reg_5580.read().is_01() || !f_1_48_reg_3787.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5580.read()) + sc_biguint<32>(f_1_48_reg_3787.read()));
}

void sha256_transform::thread_add_ln118_205_fu_8618_p2() {
    add_ln118_205_fu_8618_p2 = (!m_51_reg_10565_pp0_iter12_reg.read().is_01() || !ap_const_lv32_34B0BCB5.is_01())? sc_lv<32>(): (sc_biguint<32>(m_51_reg_10565_pp0_iter12_reg.read()) + sc_biguint<32>(ap_const_lv32_34B0BCB5));
}

void sha256_transform::thread_add_ln118_206_fu_8623_p2() {
    add_ln118_206_fu_8623_p2 = (!add_ln118_205_fu_8618_p2.read().is_01() || !grp_EP1_fu_5298_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_205_fu_8618_p2.read()) + sc_biguint<32>(grp_EP1_fu_5298_ap_return.read()));
}

void sha256_transform::thread_add_ln118_207_fu_8635_p2() {
    add_ln118_207_fu_8635_p2 = (!add_ln118_206_reg_11281.read().is_01() || !add_ln118_204_fu_8629_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_206_reg_11281.read()) + sc_biguint<32>(add_ln118_204_fu_8629_p2.read()));
}

void sha256_transform::thread_add_ln118_208_fu_8669_p2() {
    add_ln118_208_fu_8669_p2 = (!reg_5568.read().is_01() || !f_1_49_reg_3848.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5568.read()) + sc_biguint<32>(f_1_49_reg_3848.read()));
}

void sha256_transform::thread_add_ln118_209_fu_8658_p2() {
    add_ln118_209_fu_8658_p2 = (!m_52_reg_10591_pp0_iter12_reg.read().is_01() || !ap_const_lv32_391C0CB3.is_01())? sc_lv<32>(): (sc_biguint<32>(m_52_reg_10591_pp0_iter12_reg.read()) + sc_biguint<32>(ap_const_lv32_391C0CB3));
}

void sha256_transform::thread_add_ln118_20_fu_6176_p2() {
    add_ln118_20_fu_6176_p2 = (!reg_5532.read().is_01() || !f_1_2_reg_981.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5532.read()) + sc_biguint<32>(f_1_2_reg_981.read()));
}

void sha256_transform::thread_add_ln118_210_fu_8663_p2() {
    add_ln118_210_fu_8663_p2 = (!add_ln118_209_fu_8658_p2.read().is_01() || !grp_EP1_fu_5289_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_209_fu_8658_p2.read()) + sc_biguint<32>(grp_EP1_fu_5289_ap_return.read()));
}

void sha256_transform::thread_add_ln118_211_fu_8675_p2() {
    add_ln118_211_fu_8675_p2 = (!add_ln118_210_reg_11296.read().is_01() || !add_ln118_208_fu_8669_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_210_reg_11296.read()) + sc_biguint<32>(add_ln118_208_fu_8669_p2.read()));
}

void sha256_transform::thread_add_ln118_212_fu_8709_p2() {
    add_ln118_212_fu_8709_p2 = (!reg_5580.read().is_01() || !f_1_50_reg_3909.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5580.read()) + sc_biguint<32>(f_1_50_reg_3909.read()));
}

void sha256_transform::thread_add_ln118_213_fu_8698_p2() {
    add_ln118_213_fu_8698_p2 = (!m_53_reg_10597_pp0_iter13_reg.read().is_01() || !ap_const_lv32_4ED8AA4A.is_01())? sc_lv<32>(): (sc_biguint<32>(m_53_reg_10597_pp0_iter13_reg.read()) + sc_biguint<32>(ap_const_lv32_4ED8AA4A));
}

void sha256_transform::thread_add_ln118_214_fu_8703_p2() {
    add_ln118_214_fu_8703_p2 = (!add_ln118_213_fu_8698_p2.read().is_01() || !grp_EP1_fu_5298_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_213_fu_8698_p2.read()) + sc_biguint<32>(grp_EP1_fu_5298_ap_return.read()));
}

void sha256_transform::thread_add_ln118_215_fu_8715_p2() {
    add_ln118_215_fu_8715_p2 = (!add_ln118_214_reg_11311.read().is_01() || !add_ln118_212_fu_8709_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_214_reg_11311.read()) + sc_biguint<32>(add_ln118_212_fu_8709_p2.read()));
}

void sha256_transform::thread_add_ln118_216_fu_8749_p2() {
    add_ln118_216_fu_8749_p2 = (!reg_5580.read().is_01() || !f_1_51_reg_3970.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5580.read()) + sc_biguint<32>(f_1_51_reg_3970.read()));
}

void sha256_transform::thread_add_ln118_217_fu_8738_p2() {
    add_ln118_217_fu_8738_p2 = (!m_54_reg_10618_pp0_iter13_reg.read().is_01() || !ap_const_lv32_5B9CCA4F.is_01())? sc_lv<32>(): (sc_biguint<32>(m_54_reg_10618_pp0_iter13_reg.read()) + sc_biguint<32>(ap_const_lv32_5B9CCA4F));
}

void sha256_transform::thread_add_ln118_218_fu_8743_p2() {
    add_ln118_218_fu_8743_p2 = (!add_ln118_217_fu_8738_p2.read().is_01() || !grp_EP1_fu_5298_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_217_fu_8738_p2.read()) + sc_biguint<32>(grp_EP1_fu_5298_ap_return.read()));
}

void sha256_transform::thread_add_ln118_219_fu_8755_p2() {
    add_ln118_219_fu_8755_p2 = (!add_ln118_218_reg_11326.read().is_01() || !add_ln118_216_fu_8749_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_218_reg_11326.read()) + sc_biguint<32>(add_ln118_216_fu_8749_p2.read()));
}

void sha256_transform::thread_add_ln118_21_fu_6133_p2() {
    add_ln118_21_fu_6133_p2 = (!m_5_reg_9460.read().is_01() || !ap_const_lv32_59F111F1.is_01())? sc_lv<32>(): (sc_biguint<32>(m_5_reg_9460.read()) + sc_biguint<32>(ap_const_lv32_59F111F1));
}

void sha256_transform::thread_add_ln118_220_fu_8789_p2() {
    add_ln118_220_fu_8789_p2 = (!reg_5592.read().is_01() || !f_1_52_reg_4031.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5592.read()) + sc_biguint<32>(f_1_52_reg_4031.read()));
}

void sha256_transform::thread_add_ln118_221_fu_8778_p2() {
    add_ln118_221_fu_8778_p2 = (!m_55_reg_10624_pp0_iter13_reg.read().is_01() || !ap_const_lv32_682E6FF3.is_01())? sc_lv<32>(): (sc_biguint<32>(m_55_reg_10624_pp0_iter13_reg.read()) + sc_biguint<32>(ap_const_lv32_682E6FF3));
}

void sha256_transform::thread_add_ln118_222_fu_8783_p2() {
    add_ln118_222_fu_8783_p2 = (!add_ln118_221_fu_8778_p2.read().is_01() || !grp_EP1_fu_5307_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_221_fu_8778_p2.read()) + sc_biguint<32>(grp_EP1_fu_5307_ap_return.read()));
}

void sha256_transform::thread_add_ln118_223_fu_8795_p2() {
    add_ln118_223_fu_8795_p2 = (!add_ln118_222_reg_11341.read().is_01() || !add_ln118_220_fu_8789_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_222_reg_11341.read()) + sc_biguint<32>(add_ln118_220_fu_8789_p2.read()));
}

void sha256_transform::thread_add_ln118_224_fu_8829_p2() {
    add_ln118_224_fu_8829_p2 = (!reg_5580.read().is_01() || !f_1_53_reg_4092.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5580.read()) + sc_biguint<32>(f_1_53_reg_4092.read()));
}

void sha256_transform::thread_add_ln118_225_fu_8818_p2() {
    add_ln118_225_fu_8818_p2 = (!m_56_reg_10650_pp0_iter13_reg.read().is_01() || !ap_const_lv32_748F82EE.is_01())? sc_lv<32>(): (sc_biguint<32>(m_56_reg_10650_pp0_iter13_reg.read()) + sc_biguint<32>(ap_const_lv32_748F82EE));
}

void sha256_transform::thread_add_ln118_226_fu_8823_p2() {
    add_ln118_226_fu_8823_p2 = (!add_ln118_225_fu_8818_p2.read().is_01() || !grp_EP1_fu_5298_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_225_fu_8818_p2.read()) + sc_biguint<32>(grp_EP1_fu_5298_ap_return.read()));
}

void sha256_transform::thread_add_ln118_227_fu_8835_p2() {
    add_ln118_227_fu_8835_p2 = (!add_ln118_226_reg_11356.read().is_01() || !add_ln118_224_fu_8829_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_226_reg_11356.read()) + sc_biguint<32>(add_ln118_224_fu_8829_p2.read()));
}

void sha256_transform::thread_add_ln118_228_fu_8869_p2() {
    add_ln118_228_fu_8869_p2 = (!reg_5592.read().is_01() || !f_1_54_reg_4153.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5592.read()) + sc_biguint<32>(f_1_54_reg_4153.read()));
}

void sha256_transform::thread_add_ln118_229_fu_8858_p2() {
    add_ln118_229_fu_8858_p2 = (!m_57_reg_10656_pp0_iter13_reg.read().is_01() || !ap_const_lv32_78A5636F.is_01())? sc_lv<32>(): (sc_biguint<32>(m_57_reg_10656_pp0_iter13_reg.read()) + sc_biguint<32>(ap_const_lv32_78A5636F));
}

void sha256_transform::thread_add_ln118_22_fu_6138_p2() {
    add_ln118_22_fu_6138_p2 = (!add_ln118_21_fu_6133_p2.read().is_01() || !grp_EP1_fu_5262_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_21_fu_6133_p2.read()) + sc_biguint<32>(grp_EP1_fu_5262_ap_return.read()));
}

void sha256_transform::thread_add_ln118_230_fu_8863_p2() {
    add_ln118_230_fu_8863_p2 = (!add_ln118_229_fu_8858_p2.read().is_01() || !grp_EP1_fu_5307_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_229_fu_8858_p2.read()) + sc_biguint<32>(grp_EP1_fu_5307_ap_return.read()));
}

void sha256_transform::thread_add_ln118_231_fu_8875_p2() {
    add_ln118_231_fu_8875_p2 = (!add_ln118_230_reg_11371.read().is_01() || !add_ln118_228_fu_8869_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_230_reg_11371.read()) + sc_biguint<32>(add_ln118_228_fu_8869_p2.read()));
}

void sha256_transform::thread_add_ln118_232_fu_8909_p2() {
    add_ln118_232_fu_8909_p2 = (!reg_5592.read().is_01() || !ap_const_lv32_84C87814.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5592.read()) + sc_bigint<32>(ap_const_lv32_84C87814));
}

void sha256_transform::thread_add_ln118_233_fu_8898_p2() {
    add_ln118_233_fu_8898_p2 = (!grp_EP1_fu_5307_ap_return.read().is_01() || !m_58_reg_10676_pp0_iter13_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_5307_ap_return.read()) + sc_biguint<32>(m_58_reg_10676_pp0_iter13_reg.read()));
}

void sha256_transform::thread_add_ln118_234_fu_8903_p2() {
    add_ln118_234_fu_8903_p2 = (!add_ln118_233_fu_8898_p2.read().is_01() || !f_1_55_reg_4214.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_233_fu_8898_p2.read()) + sc_biguint<32>(f_1_55_reg_4214.read()));
}

void sha256_transform::thread_add_ln118_235_fu_8915_p2() {
    add_ln118_235_fu_8915_p2 = (!add_ln118_234_reg_11386.read().is_01() || !add_ln118_232_fu_8909_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_234_reg_11386.read()) + sc_biguint<32>(add_ln118_232_fu_8909_p2.read()));
}

void sha256_transform::thread_add_ln118_236_fu_8949_p2() {
    add_ln118_236_fu_8949_p2 = (!reg_5604.read().is_01() || !ap_const_lv32_8CC70208.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5604.read()) + sc_bigint<32>(ap_const_lv32_8CC70208));
}

void sha256_transform::thread_add_ln118_237_fu_8938_p2() {
    add_ln118_237_fu_8938_p2 = (!grp_EP1_fu_5316_ap_return.read().is_01() || !m_59_reg_10681_pp0_iter14_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_5316_ap_return.read()) + sc_biguint<32>(m_59_reg_10681_pp0_iter14_reg.read()));
}

void sha256_transform::thread_add_ln118_238_fu_8943_p2() {
    add_ln118_238_fu_8943_p2 = (!add_ln118_237_fu_8938_p2.read().is_01() || !f_1_56_reg_4275.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_237_fu_8938_p2.read()) + sc_biguint<32>(f_1_56_reg_4275.read()));
}

void sha256_transform::thread_add_ln118_239_fu_8955_p2() {
    add_ln118_239_fu_8955_p2 = (!add_ln118_238_reg_11401.read().is_01() || !add_ln118_236_fu_8949_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_238_reg_11401.read()) + sc_biguint<32>(add_ln118_236_fu_8949_p2.read()));
}

void sha256_transform::thread_add_ln118_23_fu_6182_p2() {
    add_ln118_23_fu_6182_p2 = (!add_ln118_22_reg_9980.read().is_01() || !add_ln118_20_fu_6176_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_22_reg_9980.read()) + sc_biguint<32>(add_ln118_20_fu_6176_p2.read()));
}

void sha256_transform::thread_add_ln118_240_fu_8989_p2() {
    add_ln118_240_fu_8989_p2 = (!reg_5592.read().is_01() || !ap_const_lv32_90BEFFFA.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5592.read()) + sc_bigint<32>(ap_const_lv32_90BEFFFA));
}

void sha256_transform::thread_add_ln118_241_fu_8978_p2() {
    add_ln118_241_fu_8978_p2 = (!grp_EP1_fu_5307_ap_return.read().is_01() || !m_60_reg_10706_pp0_iter14_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_5307_ap_return.read()) + sc_biguint<32>(m_60_reg_10706_pp0_iter14_reg.read()));
}

void sha256_transform::thread_add_ln118_242_fu_8983_p2() {
    add_ln118_242_fu_8983_p2 = (!add_ln118_241_fu_8978_p2.read().is_01() || !f_1_57_reg_4336.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_241_fu_8978_p2.read()) + sc_biguint<32>(f_1_57_reg_4336.read()));
}

void sha256_transform::thread_add_ln118_243_fu_8995_p2() {
    add_ln118_243_fu_8995_p2 = (!add_ln118_242_reg_11416.read().is_01() || !add_ln118_240_fu_8989_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_242_reg_11416.read()) + sc_biguint<32>(add_ln118_240_fu_8989_p2.read()));
}

void sha256_transform::thread_add_ln118_244_fu_9029_p2() {
    add_ln118_244_fu_9029_p2 = (!reg_5604.read().is_01() || !ap_const_lv32_A4506CEB.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5604.read()) + sc_bigint<32>(ap_const_lv32_A4506CEB));
}

void sha256_transform::thread_add_ln118_245_fu_9018_p2() {
    add_ln118_245_fu_9018_p2 = (!grp_EP1_fu_5316_ap_return.read().is_01() || !m_61_reg_10711_pp0_iter14_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_5316_ap_return.read()) + sc_biguint<32>(m_61_reg_10711_pp0_iter14_reg.read()));
}

void sha256_transform::thread_add_ln118_246_fu_9023_p2() {
    add_ln118_246_fu_9023_p2 = (!add_ln118_245_fu_9018_p2.read().is_01() || !f_1_58_reg_4397.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_245_fu_9018_p2.read()) + sc_biguint<32>(f_1_58_reg_4397.read()));
}

void sha256_transform::thread_add_ln118_247_fu_9035_p2() {
    add_ln118_247_fu_9035_p2 = (!add_ln118_246_reg_11431.read().is_01() || !add_ln118_244_fu_9029_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_246_reg_11431.read()) + sc_biguint<32>(add_ln118_244_fu_9029_p2.read()));
}

void sha256_transform::thread_add_ln118_248_fu_9058_p2() {
    add_ln118_248_fu_9058_p2 = (!grp_CH_fu_4892_ap_return.read().is_01() || !ap_const_lv32_BEF9A3F7.is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_4892_ap_return.read()) + sc_bigint<32>(ap_const_lv32_BEF9A3F7));
}

void sha256_transform::thread_add_ln118_249_fu_9064_p2() {
    add_ln118_249_fu_9064_p2 = (!f_1_59_reg_4458.read().is_01() || !grp_EP1_fu_5316_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(f_1_59_reg_4458.read()) + sc_biguint<32>(grp_EP1_fu_5316_ap_return.read()));
}

void sha256_transform::thread_add_ln118_24_fu_6280_p2() {
    add_ln118_24_fu_6280_p2 = (!reg_5532.read().is_01() || !ap_const_lv32_923F82A4.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5532.read()) + sc_bigint<32>(ap_const_lv32_923F82A4));
}

void sha256_transform::thread_add_ln118_250_fu_9070_p2() {
    add_ln118_250_fu_9070_p2 = (!add_ln118_249_reg_11451.read().is_01() || !add_ln118_248_reg_11446.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_249_reg_11451.read()) + sc_biguint<32>(add_ln118_248_reg_11446.read()));
}

void sha256_transform::thread_add_ln118_251_fu_7190_p2() {
    add_ln118_251_fu_7190_p2 = (!tmp_46_reg_10716.read().is_01() || !m_55_reg_10624.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_46_reg_10716.read()) + sc_biguint<32>(m_55_reg_10624.read()));
}

void sha256_transform::thread_add_ln118_252_fu_9074_p2() {
    add_ln118_252_fu_9074_p2 = (!add_ln118_254_reg_10741_pp0_iter15_reg.read().is_01() || !add_ln118_250_fu_9070_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_254_reg_10741_pp0_iter15_reg.read()) + sc_biguint<32>(add_ln118_250_fu_9070_p2.read()));
}

void sha256_transform::thread_add_ln118_253_fu_7194_p2() {
    add_ln118_253_fu_7194_p2 = (!m_46_reg_10483.read().is_01() || !tmp_1_45_reg_10512.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_46_reg_10483.read()) + sc_biguint<32>(tmp_1_45_reg_10512.read()));
}

void sha256_transform::thread_add_ln118_254_fu_7198_p2() {
    add_ln118_254_fu_7198_p2 = (!add_ln118_253_fu_7194_p2.read().is_01() || !add_ln118_251_fu_7190_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_253_fu_7194_p2.read()) + sc_biguint<32>(add_ln118_251_fu_7190_p2.read()));
}

void sha256_transform::thread_add_ln118_255_fu_9113_p2() {
    add_ln118_255_fu_9113_p2 = (!add_ln118_261_reg_11221_pp0_iter16_reg.read().is_01() || !add_ln118_258_fu_9107_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_261_reg_11221_pp0_iter16_reg.read()) + sc_biguint<32>(add_ln118_258_fu_9107_p2.read()));
}

void sha256_transform::thread_add_ln118_256_fu_9096_p2() {
    add_ln118_256_fu_9096_p2 = (!grp_CH_fu_4892_ap_return.read().is_01() || !f_1_60_reg_4519.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_4892_ap_return.read()) + sc_biguint<32>(f_1_60_reg_4519.read()));
}

void sha256_transform::thread_add_ln118_257_fu_9102_p2() {
    add_ln118_257_fu_9102_p2 = (!grp_EP1_fu_5316_ap_return.read().is_01() || !tmp_47_reg_10721_pp0_iter15_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_5316_ap_return.read()) + sc_biguint<32>(tmp_47_reg_10721_pp0_iter15_reg.read()));
}

void sha256_transform::thread_add_ln118_258_fu_9107_p2() {
    add_ln118_258_fu_9107_p2 = (!add_ln118_257_fu_9102_p2.read().is_01() || !add_ln118_256_fu_9096_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_257_fu_9102_p2.read()) + sc_biguint<32>(add_ln118_256_fu_9096_p2.read()));
}

void sha256_transform::thread_add_ln118_259_fu_8454_p2() {
    add_ln118_259_fu_8454_p2 = (!m_56_reg_10650_pp0_iter11_reg.read().is_01() || !m_47_reg_10490_pp0_iter11_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_56_reg_10650_pp0_iter11_reg.read()) + sc_biguint<32>(m_47_reg_10490_pp0_iter11_reg.read()));
}

void sha256_transform::thread_add_ln118_25_fu_6237_p2() {
    add_ln118_25_fu_6237_p2 = (!grp_EP1_fu_5262_ap_return.read().is_01() || !m_6_reg_9521_pp0_iter1_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_5262_ap_return.read()) + sc_biguint<32>(m_6_reg_9521_pp0_iter1_reg.read()));
}

void sha256_transform::thread_add_ln118_260_fu_8458_p2() {
    add_ln118_260_fu_8458_p2 = (!tmp_1_46_reg_10549_pp0_iter11_reg.read().is_01() || !ap_const_lv32_C67178F2.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_46_reg_10549_pp0_iter11_reg.read()) + sc_bigint<32>(ap_const_lv32_C67178F2));
}

void sha256_transform::thread_add_ln118_261_fu_8463_p2() {
    add_ln118_261_fu_8463_p2 = (!add_ln118_260_fu_8458_p2.read().is_01() || !add_ln118_259_fu_8454_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_260_fu_8458_p2.read()) + sc_biguint<32>(add_ln118_259_fu_8454_p2.read()));
}

void sha256_transform::thread_add_ln118_26_fu_6242_p2() {
    add_ln118_26_fu_6242_p2 = (!add_ln118_25_fu_6237_p2.read().is_01() || !f_1_3_reg_1042.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_25_fu_6237_p2.read()) + sc_biguint<32>(f_1_3_reg_1042.read()));
}

void sha256_transform::thread_add_ln118_27_fu_6286_p2() {
    add_ln118_27_fu_6286_p2 = (!add_ln118_26_reg_10063.read().is_01() || !add_ln118_24_fu_6280_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_26_reg_10063.read()) + sc_biguint<32>(add_ln118_24_fu_6280_p2.read()));
}

void sha256_transform::thread_add_ln118_28_fu_6384_p2() {
    add_ln118_28_fu_6384_p2 = (!reg_5532.read().is_01() || !ap_const_lv32_AB1C5ED5.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5532.read()) + sc_bigint<32>(ap_const_lv32_AB1C5ED5));
}

void sha256_transform::thread_add_ln118_29_fu_6341_p2() {
    add_ln118_29_fu_6341_p2 = (!grp_EP1_fu_5262_ap_return.read().is_01() || !m_7_reg_9527_pp0_iter1_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_5262_ap_return.read()) + sc_biguint<32>(m_7_reg_9527_pp0_iter1_reg.read()));
}

void sha256_transform::thread_add_ln118_2_fu_5655_p2() {
    add_ln118_2_fu_5655_p2 = (!add_ln118_1_fu_5649_p2.read().is_01() || !tmp_48_reg_9304.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_1_fu_5649_p2.read()) + sc_biguint<32>(tmp_48_reg_9304.read()));
}

void sha256_transform::thread_add_ln118_30_fu_6346_p2() {
    add_ln118_30_fu_6346_p2 = (!add_ln118_29_fu_6341_p2.read().is_01() || !f_1_4_reg_1103.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_29_fu_6341_p2.read()) + sc_biguint<32>(f_1_4_reg_1103.read()));
}

void sha256_transform::thread_add_ln118_31_fu_6390_p2() {
    add_ln118_31_fu_6390_p2 = (!add_ln118_30_reg_10146.read().is_01() || !add_ln118_28_fu_6384_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_30_reg_10146.read()) + sc_biguint<32>(add_ln118_28_fu_6384_p2.read()));
}

void sha256_transform::thread_add_ln118_32_fu_6488_p2() {
    add_ln118_32_fu_6488_p2 = (!reg_5532.read().is_01() || !f_1_5_reg_1164.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5532.read()) + sc_biguint<32>(f_1_5_reg_1164.read()));
}

void sha256_transform::thread_add_ln118_33_fu_6445_p2() {
    add_ln118_33_fu_6445_p2 = (!m_8_reg_9593_pp0_iter1_reg.read().is_01() || !ap_const_lv32_D807AA98.is_01())? sc_lv<32>(): (sc_biguint<32>(m_8_reg_9593_pp0_iter1_reg.read()) + sc_bigint<32>(ap_const_lv32_D807AA98));
}

void sha256_transform::thread_add_ln118_34_fu_6450_p2() {
    add_ln118_34_fu_6450_p2 = (!add_ln118_33_fu_6445_p2.read().is_01() || !grp_EP1_fu_5262_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_33_fu_6445_p2.read()) + sc_biguint<32>(grp_EP1_fu_5262_ap_return.read()));
}

void sha256_transform::thread_add_ln118_35_fu_6494_p2() {
    add_ln118_35_fu_6494_p2 = (!add_ln118_34_reg_10229.read().is_01() || !add_ln118_32_fu_6488_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_34_reg_10229.read()) + sc_biguint<32>(add_ln118_32_fu_6488_p2.read()));
}

void sha256_transform::thread_add_ln118_36_fu_6592_p2() {
    add_ln118_36_fu_6592_p2 = (!reg_5544.read().is_01() || !f_1_6_reg_1225.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5544.read()) + sc_biguint<32>(f_1_6_reg_1225.read()));
}

void sha256_transform::thread_add_ln118_37_fu_6549_p2() {
    add_ln118_37_fu_6549_p2 = (!m_9_reg_9599_pp0_iter1_reg.read().is_01() || !ap_const_lv32_12835B01.is_01())? sc_lv<32>(): (sc_biguint<32>(m_9_reg_9599_pp0_iter1_reg.read()) + sc_biguint<32>(ap_const_lv32_12835B01));
}

void sha256_transform::thread_add_ln118_38_fu_6554_p2() {
    add_ln118_38_fu_6554_p2 = (!add_ln118_37_fu_6549_p2.read().is_01() || !grp_EP1_fu_5271_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_37_fu_6549_p2.read()) + sc_biguint<32>(grp_EP1_fu_5271_ap_return.read()));
}

void sha256_transform::thread_add_ln118_39_fu_6598_p2() {
    add_ln118_39_fu_6598_p2 = (!add_ln118_38_reg_10312.read().is_01() || !add_ln118_36_fu_6592_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_38_reg_10312.read()) + sc_biguint<32>(add_ln118_36_fu_6592_p2.read()));
}

void sha256_transform::thread_add_ln118_3_fu_5692_p2() {
    add_ln118_3_fu_5692_p2 = (!add_ln118_2_reg_9365.read().is_01() || !add_ln118_fu_5686_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_2_reg_9365.read()) + sc_biguint<32>(add_ln118_fu_5686_p2.read()));
}

void sha256_transform::thread_add_ln118_40_fu_6696_p2() {
    add_ln118_40_fu_6696_p2 = (!reg_5544.read().is_01() || !f_1_7_reg_1286.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5544.read()) + sc_biguint<32>(f_1_7_reg_1286.read()));
}

void sha256_transform::thread_add_ln118_41_fu_6653_p2() {
    add_ln118_41_fu_6653_p2 = (!m_10_reg_9661_pp0_iter1_reg.read().is_01() || !ap_const_lv32_243185BE.is_01())? sc_lv<32>(): (sc_biguint<32>(m_10_reg_9661_pp0_iter1_reg.read()) + sc_biguint<32>(ap_const_lv32_243185BE));
}

void sha256_transform::thread_add_ln118_42_fu_6658_p2() {
    add_ln118_42_fu_6658_p2 = (!add_ln118_41_fu_6653_p2.read().is_01() || !grp_EP1_fu_5271_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_41_fu_6653_p2.read()) + sc_biguint<32>(grp_EP1_fu_5271_ap_return.read()));
}

void sha256_transform::thread_add_ln118_43_fu_6702_p2() {
    add_ln118_43_fu_6702_p2 = (!add_ln118_42_reg_10395.read().is_01() || !add_ln118_40_fu_6696_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_42_reg_10395.read()) + sc_biguint<32>(add_ln118_40_fu_6696_p2.read()));
}

void sha256_transform::thread_add_ln118_44_fu_6800_p2() {
    add_ln118_44_fu_6800_p2 = (!reg_5544.read().is_01() || !f_1_8_reg_1347.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5544.read()) + sc_biguint<32>(f_1_8_reg_1347.read()));
}

void sha256_transform::thread_add_ln118_45_fu_6757_p2() {
    add_ln118_45_fu_6757_p2 = (!m_11_reg_9668_pp0_iter2_reg.read().is_01() || !ap_const_lv32_550C7DC3.is_01())? sc_lv<32>(): (sc_biguint<32>(m_11_reg_9668_pp0_iter2_reg.read()) + sc_biguint<32>(ap_const_lv32_550C7DC3));
}

void sha256_transform::thread_add_ln118_46_fu_6762_p2() {
    add_ln118_46_fu_6762_p2 = (!add_ln118_45_fu_6757_p2.read().is_01() || !grp_EP1_fu_5271_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_45_fu_6757_p2.read()) + sc_biguint<32>(grp_EP1_fu_5271_ap_return.read()));
}

void sha256_transform::thread_add_ln118_47_fu_6806_p2() {
    add_ln118_47_fu_6806_p2 = (!add_ln118_46_reg_10478.read().is_01() || !add_ln118_44_fu_6800_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_46_reg_10478.read()) + sc_biguint<32>(add_ln118_44_fu_6800_p2.read()));
}

void sha256_transform::thread_add_ln118_48_fu_6901_p2() {
    add_ln118_48_fu_6901_p2 = (!reg_5544.read().is_01() || !f_1_9_reg_1408.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5544.read()) + sc_biguint<32>(f_1_9_reg_1408.read()));
}

void sha256_transform::thread_add_ln118_49_fu_6860_p2() {
    add_ln118_49_fu_6860_p2 = (!m_12_reg_9735_pp0_iter2_reg.read().is_01() || !ap_const_lv32_72BE5D74.is_01())? sc_lv<32>(): (sc_biguint<32>(m_12_reg_9735_pp0_iter2_reg.read()) + sc_biguint<32>(ap_const_lv32_72BE5D74));
}

void sha256_transform::thread_add_ln118_4_fu_5778_p2() {
    add_ln118_4_fu_5778_p2 = (!reg_5520.read().is_01() || !ctx_state_6_read_1_reg_9221.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5520.read()) + sc_biguint<32>(ctx_state_6_read_1_reg_9221.read()));
}

void sha256_transform::thread_add_ln118_50_fu_6865_p2() {
    add_ln118_50_fu_6865_p2 = (!add_ln118_49_fu_6860_p2.read().is_01() || !grp_EP1_fu_5271_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_49_fu_6860_p2.read()) + sc_biguint<32>(grp_EP1_fu_5271_ap_return.read()));
}

void sha256_transform::thread_add_ln118_51_fu_6907_p2() {
    add_ln118_51_fu_6907_p2 = (!add_ln118_50_reg_10554.read().is_01() || !add_ln118_48_fu_6901_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_50_reg_10554.read()) + sc_biguint<32>(add_ln118_48_fu_6901_p2.read()));
}

void sha256_transform::thread_add_ln118_52_fu_7001_p2() {
    add_ln118_52_fu_7001_p2 = (!reg_5556.read().is_01() || !ap_const_lv32_80DEB1FE.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5556.read()) + sc_bigint<32>(ap_const_lv32_80DEB1FE));
}

void sha256_transform::thread_add_ln118_53_fu_6960_p2() {
    add_ln118_53_fu_6960_p2 = (!grp_EP1_fu_5280_ap_return.read().is_01() || !m_13_reg_9742_pp0_iter2_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_5280_ap_return.read()) + sc_biguint<32>(m_13_reg_9742_pp0_iter2_reg.read()));
}

void sha256_transform::thread_add_ln118_54_fu_6965_p2() {
    add_ln118_54_fu_6965_p2 = (!add_ln118_53_fu_6960_p2.read().is_01() || !f_1_10_reg_1469.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_53_fu_6960_p2.read()) + sc_biguint<32>(f_1_10_reg_1469.read()));
}

void sha256_transform::thread_add_ln118_55_fu_7007_p2() {
    add_ln118_55_fu_7007_p2 = (!add_ln118_54_reg_10613.read().is_01() || !add_ln118_52_fu_7001_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_54_reg_10613.read()) + sc_biguint<32>(add_ln118_52_fu_7001_p2.read()));
}

void sha256_transform::thread_add_ln118_56_fu_7101_p2() {
    add_ln118_56_fu_7101_p2 = (!reg_5556.read().is_01() || !ap_const_lv32_9BDC06A7.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5556.read()) + sc_bigint<32>(ap_const_lv32_9BDC06A7));
}

void sha256_transform::thread_add_ln118_57_fu_7060_p2() {
    add_ln118_57_fu_7060_p2 = (!grp_EP1_fu_5280_ap_return.read().is_01() || !m_14_reg_9804_pp0_iter3_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_5280_ap_return.read()) + sc_biguint<32>(m_14_reg_9804_pp0_iter3_reg.read()));
}

void sha256_transform::thread_add_ln118_58_fu_7065_p2() {
    add_ln118_58_fu_7065_p2 = (!add_ln118_57_fu_7060_p2.read().is_01() || !f_1_11_reg_1530.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_57_fu_7060_p2.read()) + sc_biguint<32>(f_1_11_reg_1530.read()));
}

void sha256_transform::thread_add_ln118_59_fu_7107_p2() {
    add_ln118_59_fu_7107_p2 = (!add_ln118_58_reg_10671.read().is_01() || !add_ln118_56_fu_7101_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_58_reg_10671.read()) + sc_biguint<32>(add_ln118_56_fu_7101_p2.read()));
}

void sha256_transform::thread_add_ln118_5_fu_5741_p2() {
    add_ln118_5_fu_5741_p2 = (!m_1_reg_9314.read().is_01() || !ap_const_lv32_71374491.is_01())? sc_lv<32>(): (sc_biguint<32>(m_1_reg_9314.read()) + sc_biguint<32>(ap_const_lv32_71374491));
}

void sha256_transform::thread_add_ln118_60_fu_7161_p2() {
    add_ln118_60_fu_7161_p2 = (!reg_5556.read().is_01() || !f_1_12_reg_1591.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5556.read()) + sc_biguint<32>(f_1_12_reg_1591.read()));
}

void sha256_transform::thread_add_ln118_61_fu_7150_p2() {
    add_ln118_61_fu_7150_p2 = (!m_15_reg_9811_pp0_iter3_reg.read().is_01() || !ap_const_lv32_C19BF174.is_01())? sc_lv<32>(): (sc_biguint<32>(m_15_reg_9811_pp0_iter3_reg.read()) + sc_bigint<32>(ap_const_lv32_C19BF174));
}

void sha256_transform::thread_add_ln118_62_fu_7155_p2() {
    add_ln118_62_fu_7155_p2 = (!add_ln118_61_fu_7150_p2.read().is_01() || !grp_EP1_fu_5280_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_61_fu_7150_p2.read()) + sc_biguint<32>(grp_EP1_fu_5280_ap_return.read()));
}

void sha256_transform::thread_add_ln118_63_fu_7167_p2() {
    add_ln118_63_fu_7167_p2 = (!add_ln118_62_reg_10726.read().is_01() || !add_ln118_60_fu_7161_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_62_reg_10726.read()) + sc_biguint<32>(add_ln118_60_fu_7161_p2.read()));
}

void sha256_transform::thread_add_ln118_64_fu_7215_p2() {
    add_ln118_64_fu_7215_p2 = (!reg_5556.read().is_01() || !f_1_13_reg_1652.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5556.read()) + sc_biguint<32>(f_1_13_reg_1652.read()));
}

void sha256_transform::thread_add_ln118_65_fu_7204_p2() {
    add_ln118_65_fu_7204_p2 = (!m_16_reg_9848_pp0_iter3_reg.read().is_01() || !ap_const_lv32_E49B69C1.is_01())? sc_lv<32>(): (sc_biguint<32>(m_16_reg_9848_pp0_iter3_reg.read()) + sc_bigint<32>(ap_const_lv32_E49B69C1));
}

void sha256_transform::thread_add_ln118_66_fu_7209_p2() {
    add_ln118_66_fu_7209_p2 = (!add_ln118_65_fu_7204_p2.read().is_01() || !grp_EP1_fu_5280_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_65_fu_7204_p2.read()) + sc_biguint<32>(grp_EP1_fu_5280_ap_return.read()));
}

void sha256_transform::thread_add_ln118_67_fu_7221_p2() {
    add_ln118_67_fu_7221_p2 = (!add_ln118_66_reg_10746.read().is_01() || !add_ln118_64_fu_7215_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_66_reg_10746.read()) + sc_biguint<32>(add_ln118_64_fu_7215_p2.read()));
}

void sha256_transform::thread_add_ln118_68_fu_7255_p2() {
    add_ln118_68_fu_7255_p2 = (!reg_5568.read().is_01() || !f_1_14_reg_1713.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5568.read()) + sc_biguint<32>(f_1_14_reg_1713.read()));
}

void sha256_transform::thread_add_ln118_69_fu_7244_p2() {
    add_ln118_69_fu_7244_p2 = (!m_17_reg_9855_pp0_iter4_reg.read().is_01() || !ap_const_lv32_EFBE4786.is_01())? sc_lv<32>(): (sc_biguint<32>(m_17_reg_9855_pp0_iter4_reg.read()) + sc_bigint<32>(ap_const_lv32_EFBE4786));
}

void sha256_transform::thread_add_ln118_6_fu_5746_p2() {
    add_ln118_6_fu_5746_p2 = (!add_ln118_5_fu_5741_p2.read().is_01() || !grp_EP1_fu_5252_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_5_fu_5741_p2.read()) + sc_biguint<32>(grp_EP1_fu_5252_ap_return.read()));
}

void sha256_transform::thread_add_ln118_70_fu_7249_p2() {
    add_ln118_70_fu_7249_p2 = (!add_ln118_69_fu_7244_p2.read().is_01() || !grp_EP1_fu_5289_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_69_fu_7244_p2.read()) + sc_biguint<32>(grp_EP1_fu_5289_ap_return.read()));
}

void sha256_transform::thread_add_ln118_71_fu_7261_p2() {
    add_ln118_71_fu_7261_p2 = (!add_ln118_70_reg_10761.read().is_01() || !add_ln118_68_fu_7255_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_70_reg_10761.read()) + sc_biguint<32>(add_ln118_68_fu_7255_p2.read()));
}

void sha256_transform::thread_add_ln118_72_fu_7295_p2() {
    add_ln118_72_fu_7295_p2 = (!reg_5568.read().is_01() || !f_1_15_reg_1774.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5568.read()) + sc_biguint<32>(f_1_15_reg_1774.read()));
}

void sha256_transform::thread_add_ln118_73_fu_7284_p2() {
    add_ln118_73_fu_7284_p2 = (!m_18_reg_9902_pp0_iter4_reg.read().is_01() || !ap_const_lv32_FC19DC6.is_01())? sc_lv<32>(): (sc_biguint<32>(m_18_reg_9902_pp0_iter4_reg.read()) + sc_biguint<32>(ap_const_lv32_FC19DC6));
}

void sha256_transform::thread_add_ln118_74_fu_7289_p2() {
    add_ln118_74_fu_7289_p2 = (!add_ln118_73_fu_7284_p2.read().is_01() || !grp_EP1_fu_5289_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_73_fu_7284_p2.read()) + sc_biguint<32>(grp_EP1_fu_5289_ap_return.read()));
}

void sha256_transform::thread_add_ln118_75_fu_7301_p2() {
    add_ln118_75_fu_7301_p2 = (!add_ln118_74_reg_10776.read().is_01() || !add_ln118_72_fu_7295_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_74_reg_10776.read()) + sc_biguint<32>(add_ln118_72_fu_7295_p2.read()));
}

void sha256_transform::thread_add_ln118_76_fu_7335_p2() {
    add_ln118_76_fu_7335_p2 = (!reg_5568.read().is_01() || !f_1_16_reg_1835.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5568.read()) + sc_biguint<32>(f_1_16_reg_1835.read()));
}

void sha256_transform::thread_add_ln118_77_fu_7324_p2() {
    add_ln118_77_fu_7324_p2 = (!m_19_reg_9909_pp0_iter4_reg.read().is_01() || !ap_const_lv32_240CA1CC.is_01())? sc_lv<32>(): (sc_biguint<32>(m_19_reg_9909_pp0_iter4_reg.read()) + sc_biguint<32>(ap_const_lv32_240CA1CC));
}

void sha256_transform::thread_add_ln118_78_fu_7329_p2() {
    add_ln118_78_fu_7329_p2 = (!add_ln118_77_fu_7324_p2.read().is_01() || !grp_EP1_fu_5289_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_77_fu_7324_p2.read()) + sc_biguint<32>(grp_EP1_fu_5289_ap_return.read()));
}

void sha256_transform::thread_add_ln118_79_fu_7341_p2() {
    add_ln118_79_fu_7341_p2 = (!add_ln118_78_reg_10791.read().is_01() || !add_ln118_76_fu_7335_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_78_reg_10791.read()) + sc_biguint<32>(add_ln118_76_fu_7335_p2.read()));
}

void sha256_transform::thread_add_ln118_7_fu_5783_p2() {
    add_ln118_7_fu_5783_p2 = (!add_ln118_6_reg_9516.read().is_01() || !add_ln118_4_fu_5778_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_6_reg_9516.read()) + sc_biguint<32>(add_ln118_4_fu_5778_p2.read()));
}

void sha256_transform::thread_add_ln118_80_fu_7375_p2() {
    add_ln118_80_fu_7375_p2 = (!reg_5568.read().is_01() || !f_1_17_reg_1896.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5568.read()) + sc_biguint<32>(f_1_17_reg_1896.read()));
}

void sha256_transform::thread_add_ln118_81_fu_7364_p2() {
    add_ln118_81_fu_7364_p2 = (!m_20_reg_9946_pp0_iter4_reg.read().is_01() || !ap_const_lv32_2DE92C6F.is_01())? sc_lv<32>(): (sc_biguint<32>(m_20_reg_9946_pp0_iter4_reg.read()) + sc_biguint<32>(ap_const_lv32_2DE92C6F));
}

void sha256_transform::thread_add_ln118_82_fu_7369_p2() {
    add_ln118_82_fu_7369_p2 = (!add_ln118_81_fu_7364_p2.read().is_01() || !grp_EP1_fu_5289_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_81_fu_7364_p2.read()) + sc_biguint<32>(grp_EP1_fu_5289_ap_return.read()));
}

void sha256_transform::thread_add_ln118_83_fu_7381_p2() {
    add_ln118_83_fu_7381_p2 = (!add_ln118_82_reg_10806.read().is_01() || !add_ln118_80_fu_7375_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_82_reg_10806.read()) + sc_biguint<32>(add_ln118_80_fu_7375_p2.read()));
}

void sha256_transform::thread_add_ln118_84_fu_7415_p2() {
    add_ln118_84_fu_7415_p2 = (!reg_5580.read().is_01() || !f_1_18_reg_1957.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5580.read()) + sc_biguint<32>(f_1_18_reg_1957.read()));
}

void sha256_transform::thread_add_ln118_85_fu_7404_p2() {
    add_ln118_85_fu_7404_p2 = (!m_21_reg_9953_pp0_iter4_reg.read().is_01() || !ap_const_lv32_4A7484AA.is_01())? sc_lv<32>(): (sc_biguint<32>(m_21_reg_9953_pp0_iter4_reg.read()) + sc_biguint<32>(ap_const_lv32_4A7484AA));
}

void sha256_transform::thread_add_ln118_86_fu_7409_p2() {
    add_ln118_86_fu_7409_p2 = (!add_ln118_85_fu_7404_p2.read().is_01() || !grp_EP1_fu_5298_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_85_fu_7404_p2.read()) + sc_biguint<32>(grp_EP1_fu_5298_ap_return.read()));
}

void sha256_transform::thread_add_ln118_87_fu_7421_p2() {
    add_ln118_87_fu_7421_p2 = (!add_ln118_86_reg_10821.read().is_01() || !add_ln118_84_fu_7415_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_86_reg_10821.read()) + sc_biguint<32>(add_ln118_84_fu_7415_p2.read()));
}

void sha256_transform::thread_add_ln118_88_fu_7455_p2() {
    add_ln118_88_fu_7455_p2 = (!reg_5580.read().is_01() || !f_1_19_reg_2018.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5580.read()) + sc_biguint<32>(f_1_19_reg_2018.read()));
}

void sha256_transform::thread_add_ln118_89_fu_7444_p2() {
    add_ln118_89_fu_7444_p2 = (!m_22_reg_9985_pp0_iter5_reg.read().is_01() || !ap_const_lv32_5CB0A9DC.is_01())? sc_lv<32>(): (sc_biguint<32>(m_22_reg_9985_pp0_iter5_reg.read()) + sc_biguint<32>(ap_const_lv32_5CB0A9DC));
}

void sha256_transform::thread_add_ln118_8_fu_5867_p2() {
    add_ln118_8_fu_5867_p2 = (!reg_5520.read().is_01() || !ap_const_lv32_B5C0FBCF.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5520.read()) + sc_bigint<32>(ap_const_lv32_B5C0FBCF));
}

void sha256_transform::thread_add_ln118_90_fu_7449_p2() {
    add_ln118_90_fu_7449_p2 = (!add_ln118_89_fu_7444_p2.read().is_01() || !grp_EP1_fu_5298_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_89_fu_7444_p2.read()) + sc_biguint<32>(grp_EP1_fu_5298_ap_return.read()));
}

void sha256_transform::thread_add_ln118_91_fu_7461_p2() {
    add_ln118_91_fu_7461_p2 = (!add_ln118_90_reg_10836.read().is_01() || !add_ln118_88_fu_7455_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_90_reg_10836.read()) + sc_biguint<32>(add_ln118_88_fu_7455_p2.read()));
}

void sha256_transform::thread_add_ln118_92_fu_7495_p2() {
    add_ln118_92_fu_7495_p2 = (!reg_5580.read().is_01() || !f_1_20_reg_2079.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5580.read()) + sc_biguint<32>(f_1_20_reg_2079.read()));
}

void sha256_transform::thread_add_ln118_93_fu_7484_p2() {
    add_ln118_93_fu_7484_p2 = (!m_23_reg_9992_pp0_iter5_reg.read().is_01() || !ap_const_lv32_76F988DA.is_01())? sc_lv<32>(): (sc_biguint<32>(m_23_reg_9992_pp0_iter5_reg.read()) + sc_biguint<32>(ap_const_lv32_76F988DA));
}

void sha256_transform::thread_add_ln118_94_fu_7489_p2() {
    add_ln118_94_fu_7489_p2 = (!add_ln118_93_fu_7484_p2.read().is_01() || !grp_EP1_fu_5298_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_93_fu_7484_p2.read()) + sc_biguint<32>(grp_EP1_fu_5298_ap_return.read()));
}

void sha256_transform::thread_add_ln118_95_fu_7501_p2() {
    add_ln118_95_fu_7501_p2 = (!add_ln118_94_reg_10851.read().is_01() || !add_ln118_92_fu_7495_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_94_reg_10851.read()) + sc_biguint<32>(add_ln118_92_fu_7495_p2.read()));
}

void sha256_transform::thread_add_ln118_96_fu_7535_p2() {
    add_ln118_96_fu_7535_p2 = (!reg_5580.read().is_01() || !ap_const_lv32_983E5152.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5580.read()) + sc_bigint<32>(ap_const_lv32_983E5152));
}

void sha256_transform::thread_add_ln118_97_fu_7524_p2() {
    add_ln118_97_fu_7524_p2 = (!grp_EP1_fu_5298_ap_return.read().is_01() || !m_24_reg_10029_pp0_iter5_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_5298_ap_return.read()) + sc_biguint<32>(m_24_reg_10029_pp0_iter5_reg.read()));
}

void sha256_transform::thread_add_ln118_98_fu_7529_p2() {
    add_ln118_98_fu_7529_p2 = (!add_ln118_97_fu_7524_p2.read().is_01() || !f_1_21_reg_2140.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_97_fu_7524_p2.read()) + sc_biguint<32>(f_1_21_reg_2140.read()));
}

void sha256_transform::thread_add_ln118_99_fu_7541_p2() {
    add_ln118_99_fu_7541_p2 = (!add_ln118_98_reg_10866.read().is_01() || !add_ln118_96_fu_7535_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_98_reg_10866.read()) + sc_biguint<32>(add_ln118_96_fu_7535_p2.read()));
}

void sha256_transform::thread_add_ln118_9_fu_5831_p2() {
    add_ln118_9_fu_5831_p2 = (!grp_EP1_fu_5252_ap_return.read().is_01() || !m_2_reg_9382.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_5252_ap_return.read()) + sc_biguint<32>(m_2_reg_9382.read()));
}

void sha256_transform::thread_add_ln118_fu_5686_p2() {
    add_ln118_fu_5686_p2 = (!reg_5520.read().is_01() || !ap_port_reg_ctx_state_7_read.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5520.read()) + sc_biguint<32>(ap_port_reg_ctx_state_7_read.read()));
}

void sha256_transform::thread_add_ln124_10_fu_6707_p2() {
    add_ln124_10_fu_6707_p2 = (!add_ln118_43_fu_6702_p2.read().is_01() || !c_1_8_reg_1370.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_43_fu_6702_p2.read()) + sc_biguint<32>(c_1_8_reg_1370.read()));
}

void sha256_transform::thread_add_ln124_11_fu_6811_p2() {
    add_ln124_11_fu_6811_p2 = (!add_ln118_47_fu_6806_p2.read().is_01() || !c_1_9_reg_1431.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_47_fu_6806_p2.read()) + sc_biguint<32>(c_1_9_reg_1431.read()));
}

void sha256_transform::thread_add_ln124_12_fu_6912_p2() {
    add_ln124_12_fu_6912_p2 = (!add_ln118_51_fu_6907_p2.read().is_01() || !c_1_10_reg_1492.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_51_fu_6907_p2.read()) + sc_biguint<32>(c_1_10_reg_1492.read()));
}

void sha256_transform::thread_add_ln124_13_fu_7012_p2() {
    add_ln124_13_fu_7012_p2 = (!add_ln118_55_fu_7007_p2.read().is_01() || !c_1_11_reg_1553.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_55_fu_7007_p2.read()) + sc_biguint<32>(c_1_11_reg_1553.read()));
}

void sha256_transform::thread_add_ln124_14_fu_7112_p2() {
    add_ln124_14_fu_7112_p2 = (!add_ln118_59_fu_7107_p2.read().is_01() || !c_1_12_reg_1614.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_59_fu_7107_p2.read()) + sc_biguint<32>(c_1_12_reg_1614.read()));
}

void sha256_transform::thread_add_ln124_15_fu_7172_p2() {
    add_ln124_15_fu_7172_p2 = (!add_ln118_63_fu_7167_p2.read().is_01() || !c_1_13_reg_1675.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_63_fu_7167_p2.read()) + sc_biguint<32>(c_1_13_reg_1675.read()));
}

void sha256_transform::thread_add_ln124_16_fu_7226_p2() {
    add_ln124_16_fu_7226_p2 = (!add_ln118_67_fu_7221_p2.read().is_01() || !c_1_14_reg_1736.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_67_fu_7221_p2.read()) + sc_biguint<32>(c_1_14_reg_1736.read()));
}

void sha256_transform::thread_add_ln124_17_fu_7266_p2() {
    add_ln124_17_fu_7266_p2 = (!add_ln118_71_fu_7261_p2.read().is_01() || !c_1_15_reg_1797.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_71_fu_7261_p2.read()) + sc_biguint<32>(c_1_15_reg_1797.read()));
}

void sha256_transform::thread_add_ln124_18_fu_7306_p2() {
    add_ln124_18_fu_7306_p2 = (!add_ln118_75_fu_7301_p2.read().is_01() || !c_1_16_reg_1858.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_75_fu_7301_p2.read()) + sc_biguint<32>(c_1_16_reg_1858.read()));
}

void sha256_transform::thread_add_ln124_19_fu_7346_p2() {
    add_ln124_19_fu_7346_p2 = (!add_ln118_79_fu_7341_p2.read().is_01() || !c_1_17_reg_1919.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_79_fu_7341_p2.read()) + sc_biguint<32>(c_1_17_reg_1919.read()));
}

void sha256_transform::thread_add_ln124_1_fu_5788_p2() {
    add_ln124_1_fu_5788_p2 = (!add_ln118_7_fu_5783_p2.read().is_01() || !ctx_state_2_read_1_reg_9240.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_7_fu_5783_p2.read()) + sc_biguint<32>(ctx_state_2_read_1_reg_9240.read()));
}

void sha256_transform::thread_add_ln124_20_fu_7386_p2() {
    add_ln124_20_fu_7386_p2 = (!add_ln118_83_fu_7381_p2.read().is_01() || !c_1_18_reg_1980.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_83_fu_7381_p2.read()) + sc_biguint<32>(c_1_18_reg_1980.read()));
}

void sha256_transform::thread_add_ln124_21_fu_7426_p2() {
    add_ln124_21_fu_7426_p2 = (!add_ln118_87_fu_7421_p2.read().is_01() || !c_1_19_reg_2041.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_87_fu_7421_p2.read()) + sc_biguint<32>(c_1_19_reg_2041.read()));
}

void sha256_transform::thread_add_ln124_22_fu_7466_p2() {
    add_ln124_22_fu_7466_p2 = (!add_ln118_91_fu_7461_p2.read().is_01() || !c_1_20_reg_2102.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_91_fu_7461_p2.read()) + sc_biguint<32>(c_1_20_reg_2102.read()));
}

void sha256_transform::thread_add_ln124_23_fu_7506_p2() {
    add_ln124_23_fu_7506_p2 = (!add_ln118_95_fu_7501_p2.read().is_01() || !c_1_21_reg_2163.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_95_fu_7501_p2.read()) + sc_biguint<32>(c_1_21_reg_2163.read()));
}

void sha256_transform::thread_add_ln124_24_fu_7546_p2() {
    add_ln124_24_fu_7546_p2 = (!add_ln118_99_fu_7541_p2.read().is_01() || !c_1_22_reg_2224.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_99_fu_7541_p2.read()) + sc_biguint<32>(c_1_22_reg_2224.read()));
}

void sha256_transform::thread_add_ln124_25_fu_7586_p2() {
    add_ln124_25_fu_7586_p2 = (!add_ln118_103_fu_7581_p2.read().is_01() || !c_1_23_reg_2285.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_103_fu_7581_p2.read()) + sc_biguint<32>(c_1_23_reg_2285.read()));
}

void sha256_transform::thread_add_ln124_26_fu_7626_p2() {
    add_ln124_26_fu_7626_p2 = (!add_ln118_107_fu_7621_p2.read().is_01() || !c_1_24_reg_2346.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_107_fu_7621_p2.read()) + sc_biguint<32>(c_1_24_reg_2346.read()));
}

void sha256_transform::thread_add_ln124_27_fu_7666_p2() {
    add_ln124_27_fu_7666_p2 = (!add_ln118_111_fu_7661_p2.read().is_01() || !c_1_25_reg_2407.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_111_fu_7661_p2.read()) + sc_biguint<32>(c_1_25_reg_2407.read()));
}

void sha256_transform::thread_add_ln124_28_fu_7706_p2() {
    add_ln124_28_fu_7706_p2 = (!add_ln118_115_fu_7701_p2.read().is_01() || !c_1_26_reg_2468.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_115_fu_7701_p2.read()) + sc_biguint<32>(c_1_26_reg_2468.read()));
}

void sha256_transform::thread_add_ln124_29_fu_7746_p2() {
    add_ln124_29_fu_7746_p2 = (!add_ln118_119_fu_7741_p2.read().is_01() || !c_1_27_reg_2529.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_119_fu_7741_p2.read()) + sc_biguint<32>(c_1_27_reg_2529.read()));
}

void sha256_transform::thread_add_ln124_2_fu_5878_p2() {
    add_ln124_2_fu_5878_p2 = (!add_ln118_11_fu_5873_p2.read().is_01() || !c_1_0_reg_886.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_11_fu_5873_p2.read()) + sc_biguint<32>(c_1_0_reg_886.read()));
}

void sha256_transform::thread_add_ln124_30_fu_7786_p2() {
    add_ln124_30_fu_7786_p2 = (!add_ln118_123_fu_7781_p2.read().is_01() || !c_1_28_reg_2590.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_123_fu_7781_p2.read()) + sc_biguint<32>(c_1_28_reg_2590.read()));
}

void sha256_transform::thread_add_ln124_31_fu_7826_p2() {
    add_ln124_31_fu_7826_p2 = (!add_ln118_127_fu_7821_p2.read().is_01() || !c_1_29_reg_2651.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_127_fu_7821_p2.read()) + sc_biguint<32>(c_1_29_reg_2651.read()));
}

void sha256_transform::thread_add_ln124_32_fu_7878_p2() {
    add_ln124_32_fu_7878_p2 = (!add_ln118_131_reg_10991.read().is_01() || !c_1_30_reg_2712.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_131_reg_10991.read()) + sc_biguint<32>(c_1_30_reg_2712.read()));
}

void sha256_transform::thread_add_ln124_33_fu_7905_p2() {
    add_ln124_33_fu_7905_p2 = (!add_ln118_135_fu_7900_p2.read().is_01() || !c_1_31_reg_2773.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_135_fu_7900_p2.read()) + sc_biguint<32>(c_1_31_reg_2773.read()));
}

void sha256_transform::thread_add_ln124_34_fu_7945_p2() {
    add_ln124_34_fu_7945_p2 = (!add_ln118_139_fu_7940_p2.read().is_01() || !c_1_32_reg_2834.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_139_fu_7940_p2.read()) + sc_biguint<32>(c_1_32_reg_2834.read()));
}

void sha256_transform::thread_add_ln124_35_fu_7985_p2() {
    add_ln124_35_fu_7985_p2 = (!add_ln118_143_fu_7980_p2.read().is_01() || !c_1_33_reg_2895.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_143_fu_7980_p2.read()) + sc_biguint<32>(c_1_33_reg_2895.read()));
}

void sha256_transform::thread_add_ln124_36_fu_8025_p2() {
    add_ln124_36_fu_8025_p2 = (!add_ln118_147_fu_8020_p2.read().is_01() || !c_1_34_reg_2956.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_147_fu_8020_p2.read()) + sc_biguint<32>(c_1_34_reg_2956.read()));
}

void sha256_transform::thread_add_ln124_37_fu_8065_p2() {
    add_ln124_37_fu_8065_p2 = (!add_ln118_151_fu_8060_p2.read().is_01() || !c_1_35_reg_3017.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_151_fu_8060_p2.read()) + sc_biguint<32>(c_1_35_reg_3017.read()));
}

void sha256_transform::thread_add_ln124_38_fu_8105_p2() {
    add_ln124_38_fu_8105_p2 = (!add_ln118_155_fu_8100_p2.read().is_01() || !c_1_36_reg_3078.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_155_fu_8100_p2.read()) + sc_biguint<32>(c_1_36_reg_3078.read()));
}

void sha256_transform::thread_add_ln124_39_fu_8145_p2() {
    add_ln124_39_fu_8145_p2 = (!add_ln118_159_fu_8140_p2.read().is_01() || !c_1_37_reg_3139.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_159_fu_8140_p2.read()) + sc_biguint<32>(c_1_37_reg_3139.read()));
}

void sha256_transform::thread_add_ln124_3_fu_5982_p2() {
    add_ln124_3_fu_5982_p2 = (!add_ln118_15_fu_5977_p2.read().is_01() || !c_1_1_reg_943.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_15_fu_5977_p2.read()) + sc_biguint<32>(c_1_1_reg_943.read()));
}

void sha256_transform::thread_add_ln124_40_fu_8185_p2() {
    add_ln124_40_fu_8185_p2 = (!add_ln118_163_fu_8180_p2.read().is_01() || !c_1_38_reg_3200.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_163_fu_8180_p2.read()) + sc_biguint<32>(c_1_38_reg_3200.read()));
}

void sha256_transform::thread_add_ln124_41_fu_8225_p2() {
    add_ln124_41_fu_8225_p2 = (!add_ln118_167_fu_8220_p2.read().is_01() || !c_1_39_reg_3261.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_167_fu_8220_p2.read()) + sc_biguint<32>(c_1_39_reg_3261.read()));
}

void sha256_transform::thread_add_ln124_42_fu_8265_p2() {
    add_ln124_42_fu_8265_p2 = (!add_ln118_171_fu_8260_p2.read().is_01() || !c_1_40_reg_3322.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_171_fu_8260_p2.read()) + sc_biguint<32>(c_1_40_reg_3322.read()));
}

void sha256_transform::thread_add_ln124_43_fu_8305_p2() {
    add_ln124_43_fu_8305_p2 = (!add_ln118_175_fu_8300_p2.read().is_01() || !c_1_41_reg_3383.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_175_fu_8300_p2.read()) + sc_biguint<32>(c_1_41_reg_3383.read()));
}

void sha256_transform::thread_add_ln124_44_fu_8345_p2() {
    add_ln124_44_fu_8345_p2 = (!add_ln118_179_fu_8340_p2.read().is_01() || !c_1_42_reg_3444.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_179_fu_8340_p2.read()) + sc_biguint<32>(c_1_42_reg_3444.read()));
}

void sha256_transform::thread_add_ln124_45_fu_8385_p2() {
    add_ln124_45_fu_8385_p2 = (!add_ln118_183_fu_8380_p2.read().is_01() || !c_1_43_reg_3505.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_183_fu_8380_p2.read()) + sc_biguint<32>(c_1_43_reg_3505.read()));
}

void sha256_transform::thread_add_ln124_46_fu_8425_p2() {
    add_ln124_46_fu_8425_p2 = (!add_ln118_187_fu_8420_p2.read().is_01() || !c_1_44_reg_3566.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_187_fu_8420_p2.read()) + sc_biguint<32>(c_1_44_reg_3566.read()));
}

void sha256_transform::thread_add_ln124_47_fu_8480_p2() {
    add_ln124_47_fu_8480_p2 = (!add_ln118_191_fu_8475_p2.read().is_01() || !c_1_45_reg_3627.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_191_fu_8475_p2.read()) + sc_biguint<32>(c_1_45_reg_3627.read()));
}

void sha256_transform::thread_add_ln124_48_fu_8520_p2() {
    add_ln124_48_fu_8520_p2 = (!add_ln118_195_fu_8515_p2.read().is_01() || !c_1_46_reg_3688.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_195_fu_8515_p2.read()) + sc_biguint<32>(c_1_46_reg_3688.read()));
}

void sha256_transform::thread_add_ln124_49_fu_8560_p2() {
    add_ln124_49_fu_8560_p2 = (!add_ln118_199_fu_8555_p2.read().is_01() || !c_1_47_reg_3749.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_199_fu_8555_p2.read()) + sc_biguint<32>(c_1_47_reg_3749.read()));
}

void sha256_transform::thread_add_ln124_4_fu_6085_p2() {
    add_ln124_4_fu_6085_p2 = (!add_ln118_19_fu_6080_p2.read().is_01() || !c_1_2_reg_1004.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_19_fu_6080_p2.read()) + sc_biguint<32>(c_1_2_reg_1004.read()));
}

void sha256_transform::thread_add_ln124_50_fu_8600_p2() {
    add_ln124_50_fu_8600_p2 = (!add_ln118_203_fu_8595_p2.read().is_01() || !c_1_48_reg_3810.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_203_fu_8595_p2.read()) + sc_biguint<32>(c_1_48_reg_3810.read()));
}

void sha256_transform::thread_add_ln124_51_fu_8640_p2() {
    add_ln124_51_fu_8640_p2 = (!add_ln118_207_fu_8635_p2.read().is_01() || !c_1_49_reg_3871.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_207_fu_8635_p2.read()) + sc_biguint<32>(c_1_49_reg_3871.read()));
}

void sha256_transform::thread_add_ln124_52_fu_8680_p2() {
    add_ln124_52_fu_8680_p2 = (!add_ln118_211_fu_8675_p2.read().is_01() || !c_1_50_reg_3932.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_211_fu_8675_p2.read()) + sc_biguint<32>(c_1_50_reg_3932.read()));
}

void sha256_transform::thread_add_ln124_53_fu_8720_p2() {
    add_ln124_53_fu_8720_p2 = (!add_ln118_215_fu_8715_p2.read().is_01() || !c_1_51_reg_3993.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_215_fu_8715_p2.read()) + sc_biguint<32>(c_1_51_reg_3993.read()));
}

void sha256_transform::thread_add_ln124_54_fu_8760_p2() {
    add_ln124_54_fu_8760_p2 = (!add_ln118_219_fu_8755_p2.read().is_01() || !c_1_52_reg_4054.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_219_fu_8755_p2.read()) + sc_biguint<32>(c_1_52_reg_4054.read()));
}

void sha256_transform::thread_add_ln124_55_fu_8800_p2() {
    add_ln124_55_fu_8800_p2 = (!add_ln118_223_fu_8795_p2.read().is_01() || !c_1_53_reg_4115.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_223_fu_8795_p2.read()) + sc_biguint<32>(c_1_53_reg_4115.read()));
}

void sha256_transform::thread_add_ln124_56_fu_8840_p2() {
    add_ln124_56_fu_8840_p2 = (!add_ln118_227_fu_8835_p2.read().is_01() || !c_1_54_reg_4176.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_227_fu_8835_p2.read()) + sc_biguint<32>(c_1_54_reg_4176.read()));
}

void sha256_transform::thread_add_ln124_57_fu_8880_p2() {
    add_ln124_57_fu_8880_p2 = (!add_ln118_231_fu_8875_p2.read().is_01() || !c_1_55_reg_4237.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_231_fu_8875_p2.read()) + sc_biguint<32>(c_1_55_reg_4237.read()));
}

void sha256_transform::thread_add_ln124_58_fu_8920_p2() {
    add_ln124_58_fu_8920_p2 = (!add_ln118_235_fu_8915_p2.read().is_01() || !c_1_56_reg_4298.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_235_fu_8915_p2.read()) + sc_biguint<32>(c_1_56_reg_4298.read()));
}

void sha256_transform::thread_add_ln124_59_fu_8960_p2() {
    add_ln124_59_fu_8960_p2 = (!add_ln118_239_fu_8955_p2.read().is_01() || !c_1_57_reg_4359.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_239_fu_8955_p2.read()) + sc_biguint<32>(c_1_57_reg_4359.read()));
}

void sha256_transform::thread_add_ln124_5_fu_6187_p2() {
    add_ln124_5_fu_6187_p2 = (!add_ln118_23_fu_6182_p2.read().is_01() || !c_1_3_reg_1065.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_23_fu_6182_p2.read()) + sc_biguint<32>(c_1_3_reg_1065.read()));
}

void sha256_transform::thread_add_ln124_60_fu_9000_p2() {
    add_ln124_60_fu_9000_p2 = (!add_ln118_243_fu_8995_p2.read().is_01() || !c_1_58_reg_4420.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_243_fu_8995_p2.read()) + sc_biguint<32>(c_1_58_reg_4420.read()));
}

void sha256_transform::thread_add_ln124_61_fu_9052_p2() {
    add_ln124_61_fu_9052_p2 = (!add_ln118_247_reg_11436.read().is_01() || !c_1_59_reg_4481.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_247_reg_11436.read()) + sc_biguint<32>(c_1_59_reg_4481.read()));
}

void sha256_transform::thread_add_ln124_62_fu_9091_p2() {
    add_ln124_62_fu_9091_p2 = (!add_ln118_252_reg_11456.read().is_01() || !c_1_60_reg_4542.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_252_reg_11456.read()) + sc_biguint<32>(c_1_60_reg_4542.read()));
}

void sha256_transform::thread_add_ln124_63_fu_9133_p2() {
    add_ln124_63_fu_9133_p2 = (!add_ln118_255_reg_11471.read().is_01() || !c_1_61_reg_4603.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_255_reg_11471.read()) + sc_biguint<32>(c_1_61_reg_4603.read()));
}

void sha256_transform::thread_add_ln124_6_fu_6291_p2() {
    add_ln124_6_fu_6291_p2 = (!add_ln118_27_fu_6286_p2.read().is_01() || !c_1_4_reg_1126.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_27_fu_6286_p2.read()) + sc_biguint<32>(c_1_4_reg_1126.read()));
}

void sha256_transform::thread_add_ln124_7_fu_6395_p2() {
    add_ln124_7_fu_6395_p2 = (!add_ln118_31_fu_6390_p2.read().is_01() || !c_1_5_reg_1187.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_31_fu_6390_p2.read()) + sc_biguint<32>(c_1_5_reg_1187.read()));
}

void sha256_transform::thread_add_ln124_8_fu_6499_p2() {
    add_ln124_8_fu_6499_p2 = (!add_ln118_35_fu_6494_p2.read().is_01() || !c_1_6_reg_1248.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_35_fu_6494_p2.read()) + sc_biguint<32>(c_1_6_reg_1248.read()));
}

void sha256_transform::thread_add_ln124_9_fu_6603_p2() {
    add_ln124_9_fu_6603_p2 = (!add_ln118_39_fu_6598_p2.read().is_01() || !c_1_7_reg_1309.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_39_fu_6598_p2.read()) + sc_biguint<32>(c_1_7_reg_1309.read()));
}

void sha256_transform::thread_add_ln124_fu_5697_p2() {
    add_ln124_fu_5697_p2 = (!add_ln118_3_fu_5692_p2.read().is_01() || !ap_port_reg_ctx_state_3_read.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_3_fu_5692_p2.read()) + sc_biguint<32>(ap_port_reg_ctx_state_3_read.read()));
}

void sha256_transform::thread_add_ln128_100_fu_8031_p2() {
    add_ln128_100_fu_8031_p2 = (!add_ln118_147_fu_8020_p2.read().is_01() || !reg_5528.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_147_fu_8020_p2.read()) + sc_biguint<32>(reg_5528.read()));
}

void sha256_transform::thread_add_ln128_101_fu_8071_p2() {
    add_ln128_101_fu_8071_p2 = (!add_ln118_151_fu_8060_p2.read().is_01() || !reg_5540.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_151_fu_8060_p2.read()) + sc_biguint<32>(reg_5540.read()));
}

void sha256_transform::thread_add_ln128_102_fu_8111_p2() {
    add_ln128_102_fu_8111_p2 = (!add_ln118_155_fu_8100_p2.read().is_01() || !reg_5540.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_155_fu_8100_p2.read()) + sc_biguint<32>(reg_5540.read()));
}

void sha256_transform::thread_add_ln128_103_fu_8151_p2() {
    add_ln128_103_fu_8151_p2 = (!add_ln118_159_fu_8140_p2.read().is_01() || !reg_5552.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_159_fu_8140_p2.read()) + sc_biguint<32>(reg_5552.read()));
}

void sha256_transform::thread_add_ln128_104_fu_8191_p2() {
    add_ln128_104_fu_8191_p2 = (!add_ln118_163_fu_8180_p2.read().is_01() || !reg_5540.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_163_fu_8180_p2.read()) + sc_biguint<32>(reg_5540.read()));
}

void sha256_transform::thread_add_ln128_105_fu_8231_p2() {
    add_ln128_105_fu_8231_p2 = (!add_ln118_167_fu_8220_p2.read().is_01() || !reg_5552.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_167_fu_8220_p2.read()) + sc_biguint<32>(reg_5552.read()));
}

void sha256_transform::thread_add_ln128_106_fu_8271_p2() {
    add_ln128_106_fu_8271_p2 = (!add_ln118_171_fu_8260_p2.read().is_01() || !reg_5552.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_171_fu_8260_p2.read()) + sc_biguint<32>(reg_5552.read()));
}

void sha256_transform::thread_add_ln128_107_fu_8311_p2() {
    add_ln128_107_fu_8311_p2 = (!add_ln118_175_fu_8300_p2.read().is_01() || !reg_5564.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_175_fu_8300_p2.read()) + sc_biguint<32>(reg_5564.read()));
}

void sha256_transform::thread_add_ln128_108_fu_8351_p2() {
    add_ln128_108_fu_8351_p2 = (!add_ln118_179_fu_8340_p2.read().is_01() || !reg_5552.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_179_fu_8340_p2.read()) + sc_biguint<32>(reg_5552.read()));
}

void sha256_transform::thread_add_ln128_109_fu_8391_p2() {
    add_ln128_109_fu_8391_p2 = (!add_ln118_183_fu_8380_p2.read().is_01() || !reg_5564.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_183_fu_8380_p2.read()) + sc_biguint<32>(reg_5564.read()));
}

void sha256_transform::thread_add_ln128_10_fu_6719_p2() {
    add_ln128_10_fu_6719_p2 = (!add_ln128_74_fu_6713_p2.read().is_01() || !reg_5548.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_74_fu_6713_p2.read()) + sc_biguint<32>(reg_5548.read()));
}

void sha256_transform::thread_add_ln128_110_fu_8431_p2() {
    add_ln128_110_fu_8431_p2 = (!add_ln118_187_fu_8420_p2.read().is_01() || !reg_5564.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_187_fu_8420_p2.read()) + sc_biguint<32>(reg_5564.read()));
}

void sha256_transform::thread_add_ln128_111_fu_8486_p2() {
    add_ln128_111_fu_8486_p2 = (!add_ln118_191_fu_8475_p2.read().is_01() || !reg_5576.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_191_fu_8475_p2.read()) + sc_biguint<32>(reg_5576.read()));
}

void sha256_transform::thread_add_ln128_112_fu_8526_p2() {
    add_ln128_112_fu_8526_p2 = (!add_ln118_195_fu_8515_p2.read().is_01() || !reg_5564.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_195_fu_8515_p2.read()) + sc_biguint<32>(reg_5564.read()));
}

void sha256_transform::thread_add_ln128_113_fu_8566_p2() {
    add_ln128_113_fu_8566_p2 = (!add_ln118_199_fu_8555_p2.read().is_01() || !reg_5576.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_199_fu_8555_p2.read()) + sc_biguint<32>(reg_5576.read()));
}

void sha256_transform::thread_add_ln128_114_fu_8606_p2() {
    add_ln128_114_fu_8606_p2 = (!add_ln118_203_fu_8595_p2.read().is_01() || !reg_5576.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_203_fu_8595_p2.read()) + sc_biguint<32>(reg_5576.read()));
}

void sha256_transform::thread_add_ln128_115_fu_8646_p2() {
    add_ln128_115_fu_8646_p2 = (!add_ln118_207_fu_8635_p2.read().is_01() || !reg_5588.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_207_fu_8635_p2.read()) + sc_biguint<32>(reg_5588.read()));
}

void sha256_transform::thread_add_ln128_116_fu_8686_p2() {
    add_ln128_116_fu_8686_p2 = (!add_ln118_211_fu_8675_p2.read().is_01() || !reg_5576.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_211_fu_8675_p2.read()) + sc_biguint<32>(reg_5576.read()));
}

void sha256_transform::thread_add_ln128_117_fu_8726_p2() {
    add_ln128_117_fu_8726_p2 = (!add_ln118_215_fu_8715_p2.read().is_01() || !reg_5588.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_215_fu_8715_p2.read()) + sc_biguint<32>(reg_5588.read()));
}

void sha256_transform::thread_add_ln128_118_fu_8766_p2() {
    add_ln128_118_fu_8766_p2 = (!add_ln118_219_fu_8755_p2.read().is_01() || !reg_5588.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_219_fu_8755_p2.read()) + sc_biguint<32>(reg_5588.read()));
}

void sha256_transform::thread_add_ln128_119_fu_8806_p2() {
    add_ln128_119_fu_8806_p2 = (!add_ln118_223_fu_8795_p2.read().is_01() || !reg_5600.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_223_fu_8795_p2.read()) + sc_biguint<32>(reg_5600.read()));
}

void sha256_transform::thread_add_ln128_11_fu_6823_p2() {
    add_ln128_11_fu_6823_p2 = (!add_ln128_75_fu_6817_p2.read().is_01() || !reg_5548.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_75_fu_6817_p2.read()) + sc_biguint<32>(reg_5548.read()));
}

void sha256_transform::thread_add_ln128_120_fu_8846_p2() {
    add_ln128_120_fu_8846_p2 = (!add_ln118_227_fu_8835_p2.read().is_01() || !reg_5588.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_227_fu_8835_p2.read()) + sc_biguint<32>(reg_5588.read()));
}

void sha256_transform::thread_add_ln128_121_fu_8886_p2() {
    add_ln128_121_fu_8886_p2 = (!add_ln118_231_fu_8875_p2.read().is_01() || !reg_5600.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_231_fu_8875_p2.read()) + sc_biguint<32>(reg_5600.read()));
}

void sha256_transform::thread_add_ln128_122_fu_8926_p2() {
    add_ln128_122_fu_8926_p2 = (!add_ln118_235_fu_8915_p2.read().is_01() || !reg_5600.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_235_fu_8915_p2.read()) + sc_biguint<32>(reg_5600.read()));
}

void sha256_transform::thread_add_ln128_123_fu_8966_p2() {
    add_ln128_123_fu_8966_p2 = (!add_ln118_239_fu_8955_p2.read().is_01() || !reg_5612.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_239_fu_8955_p2.read()) + sc_biguint<32>(reg_5612.read()));
}

void sha256_transform::thread_add_ln128_124_fu_9006_p2() {
    add_ln128_124_fu_9006_p2 = (!add_ln118_243_fu_8995_p2.read().is_01() || !reg_5600.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_243_fu_8995_p2.read()) + sc_biguint<32>(reg_5600.read()));
}

void sha256_transform::thread_add_ln128_125_fu_9040_p2() {
    add_ln128_125_fu_9040_p2 = (!add_ln118_247_fu_9035_p2.read().is_01() || !reg_5612.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_247_fu_9035_p2.read()) + sc_biguint<32>(reg_5612.read()));
}

void sha256_transform::thread_add_ln128_126_fu_9079_p2() {
    add_ln128_126_fu_9079_p2 = (!add_ln118_252_fu_9074_p2.read().is_01() || !reg_5612.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_252_fu_9074_p2.read()) + sc_biguint<32>(reg_5612.read()));
}

void sha256_transform::thread_add_ln128_127_fu_9139_p2() {
    add_ln128_127_fu_9139_p2 = (!add_ln118_255_reg_11471.read().is_01() || !reg_5612.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_255_reg_11471.read()) + sc_biguint<32>(reg_5612.read()));
}

void sha256_transform::thread_add_ln128_12_fu_6924_p2() {
    add_ln128_12_fu_6924_p2 = (!add_ln128_76_fu_6918_p2.read().is_01() || !reg_5548.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_76_fu_6918_p2.read()) + sc_biguint<32>(reg_5548.read()));
}

void sha256_transform::thread_add_ln128_13_fu_7024_p2() {
    add_ln128_13_fu_7024_p2 = (!add_ln128_77_fu_7018_p2.read().is_01() || !reg_5560.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_77_fu_7018_p2.read()) + sc_biguint<32>(reg_5560.read()));
}

void sha256_transform::thread_add_ln128_14_fu_7124_p2() {
    add_ln128_14_fu_7124_p2 = (!add_ln128_78_fu_7118_p2.read().is_01() || !reg_5560.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_78_fu_7118_p2.read()) + sc_biguint<32>(reg_5560.read()));
}

void sha256_transform::thread_add_ln128_15_fu_7184_p2() {
    add_ln128_15_fu_7184_p2 = (!add_ln128_79_fu_7178_p2.read().is_01() || !reg_5560.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_79_fu_7178_p2.read()) + sc_biguint<32>(reg_5560.read()));
}

void sha256_transform::thread_add_ln128_16_fu_7238_p2() {
    add_ln128_16_fu_7238_p2 = (!add_ln128_80_fu_7232_p2.read().is_01() || !reg_5560.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_80_fu_7232_p2.read()) + sc_biguint<32>(reg_5560.read()));
}

void sha256_transform::thread_add_ln128_17_fu_7278_p2() {
    add_ln128_17_fu_7278_p2 = (!add_ln128_81_fu_7272_p2.read().is_01() || !reg_5572.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_81_fu_7272_p2.read()) + sc_biguint<32>(reg_5572.read()));
}

void sha256_transform::thread_add_ln128_18_fu_7318_p2() {
    add_ln128_18_fu_7318_p2 = (!add_ln128_82_fu_7312_p2.read().is_01() || !reg_5572.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_82_fu_7312_p2.read()) + sc_biguint<32>(reg_5572.read()));
}

void sha256_transform::thread_add_ln128_19_fu_7358_p2() {
    add_ln128_19_fu_7358_p2 = (!add_ln128_83_fu_7352_p2.read().is_01() || !reg_5572.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_83_fu_7352_p2.read()) + sc_biguint<32>(reg_5572.read()));
}

void sha256_transform::thread_add_ln128_1_fu_5799_p2() {
    add_ln128_1_fu_5799_p2 = (!add_ln128_65_fu_5793_p2.read().is_01() || !reg_5524.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_65_fu_5793_p2.read()) + sc_biguint<32>(reg_5524.read()));
}

void sha256_transform::thread_add_ln128_20_fu_7398_p2() {
    add_ln128_20_fu_7398_p2 = (!add_ln128_84_fu_7392_p2.read().is_01() || !reg_5572.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_84_fu_7392_p2.read()) + sc_biguint<32>(reg_5572.read()));
}

void sha256_transform::thread_add_ln128_21_fu_7438_p2() {
    add_ln128_21_fu_7438_p2 = (!add_ln128_85_fu_7432_p2.read().is_01() || !reg_5584.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_85_fu_7432_p2.read()) + sc_biguint<32>(reg_5584.read()));
}

void sha256_transform::thread_add_ln128_22_fu_7478_p2() {
    add_ln128_22_fu_7478_p2 = (!add_ln128_86_fu_7472_p2.read().is_01() || !reg_5584.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_86_fu_7472_p2.read()) + sc_biguint<32>(reg_5584.read()));
}

void sha256_transform::thread_add_ln128_23_fu_7518_p2() {
    add_ln128_23_fu_7518_p2 = (!add_ln128_87_fu_7512_p2.read().is_01() || !reg_5584.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_87_fu_7512_p2.read()) + sc_biguint<32>(reg_5584.read()));
}

void sha256_transform::thread_add_ln128_24_fu_7558_p2() {
    add_ln128_24_fu_7558_p2 = (!add_ln128_88_fu_7552_p2.read().is_01() || !reg_5584.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_88_fu_7552_p2.read()) + sc_biguint<32>(reg_5584.read()));
}

void sha256_transform::thread_add_ln128_25_fu_7598_p2() {
    add_ln128_25_fu_7598_p2 = (!add_ln128_89_fu_7592_p2.read().is_01() || !reg_5596.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_89_fu_7592_p2.read()) + sc_biguint<32>(reg_5596.read()));
}

void sha256_transform::thread_add_ln128_26_fu_7638_p2() {
    add_ln128_26_fu_7638_p2 = (!add_ln128_90_fu_7632_p2.read().is_01() || !reg_5596.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_90_fu_7632_p2.read()) + sc_biguint<32>(reg_5596.read()));
}

void sha256_transform::thread_add_ln128_27_fu_7678_p2() {
    add_ln128_27_fu_7678_p2 = (!add_ln128_91_fu_7672_p2.read().is_01() || !reg_5596.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_91_fu_7672_p2.read()) + sc_biguint<32>(reg_5596.read()));
}

void sha256_transform::thread_add_ln128_28_fu_7718_p2() {
    add_ln128_28_fu_7718_p2 = (!add_ln128_92_fu_7712_p2.read().is_01() || !reg_5596.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_92_fu_7712_p2.read()) + sc_biguint<32>(reg_5596.read()));
}

void sha256_transform::thread_add_ln128_29_fu_7758_p2() {
    add_ln128_29_fu_7758_p2 = (!add_ln128_93_fu_7752_p2.read().is_01() || !reg_5608.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_93_fu_7752_p2.read()) + sc_biguint<32>(reg_5608.read()));
}

void sha256_transform::thread_add_ln128_2_fu_5890_p2() {
    add_ln128_2_fu_5890_p2 = (!add_ln128_66_fu_5884_p2.read().is_01() || !reg_5524.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_66_fu_5884_p2.read()) + sc_biguint<32>(reg_5524.read()));
}

void sha256_transform::thread_add_ln128_30_fu_7798_p2() {
    add_ln128_30_fu_7798_p2 = (!add_ln128_94_fu_7792_p2.read().is_01() || !reg_5608.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_94_fu_7792_p2.read()) + sc_biguint<32>(reg_5608.read()));
}

void sha256_transform::thread_add_ln128_31_fu_7838_p2() {
    add_ln128_31_fu_7838_p2 = (!add_ln128_95_fu_7832_p2.read().is_01() || !reg_5608.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_95_fu_7832_p2.read()) + sc_biguint<32>(reg_5608.read()));
}

void sha256_transform::thread_add_ln128_32_fu_7872_p2() {
    add_ln128_32_fu_7872_p2 = (!add_ln128_96_fu_7866_p2.read().is_01() || !reg_5608.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_96_fu_7866_p2.read()) + sc_biguint<32>(reg_5608.read()));
}

void sha256_transform::thread_add_ln128_33_fu_7917_p2() {
    add_ln128_33_fu_7917_p2 = (!add_ln128_97_fu_7911_p2.read().is_01() || !reg_5524.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_97_fu_7911_p2.read()) + sc_biguint<32>(reg_5524.read()));
}

void sha256_transform::thread_add_ln128_34_fu_7957_p2() {
    add_ln128_34_fu_7957_p2 = (!add_ln128_98_fu_7951_p2.read().is_01() || !reg_5524.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_98_fu_7951_p2.read()) + sc_biguint<32>(reg_5524.read()));
}

void sha256_transform::thread_add_ln128_35_fu_7997_p2() {
    add_ln128_35_fu_7997_p2 = (!add_ln128_99_fu_7991_p2.read().is_01() || !reg_5536.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_99_fu_7991_p2.read()) + sc_biguint<32>(reg_5536.read()));
}

void sha256_transform::thread_add_ln128_36_fu_8037_p2() {
    add_ln128_36_fu_8037_p2 = (!add_ln128_100_fu_8031_p2.read().is_01() || !reg_5524.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_100_fu_8031_p2.read()) + sc_biguint<32>(reg_5524.read()));
}

void sha256_transform::thread_add_ln128_37_fu_8077_p2() {
    add_ln128_37_fu_8077_p2 = (!add_ln128_101_fu_8071_p2.read().is_01() || !reg_5536.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_101_fu_8071_p2.read()) + sc_biguint<32>(reg_5536.read()));
}

void sha256_transform::thread_add_ln128_38_fu_8117_p2() {
    add_ln128_38_fu_8117_p2 = (!add_ln128_102_fu_8111_p2.read().is_01() || !reg_5536.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_102_fu_8111_p2.read()) + sc_biguint<32>(reg_5536.read()));
}

void sha256_transform::thread_add_ln128_39_fu_8157_p2() {
    add_ln128_39_fu_8157_p2 = (!add_ln128_103_fu_8151_p2.read().is_01() || !reg_5548.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_103_fu_8151_p2.read()) + sc_biguint<32>(reg_5548.read()));
}

void sha256_transform::thread_add_ln128_3_fu_5994_p2() {
    add_ln128_3_fu_5994_p2 = (!add_ln128_67_fu_5988_p2.read().is_01() || !reg_5524.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_67_fu_5988_p2.read()) + sc_biguint<32>(reg_5524.read()));
}

void sha256_transform::thread_add_ln128_40_fu_8197_p2() {
    add_ln128_40_fu_8197_p2 = (!add_ln128_104_fu_8191_p2.read().is_01() || !reg_5536.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_104_fu_8191_p2.read()) + sc_biguint<32>(reg_5536.read()));
}

void sha256_transform::thread_add_ln128_41_fu_8237_p2() {
    add_ln128_41_fu_8237_p2 = (!add_ln128_105_fu_8231_p2.read().is_01() || !reg_5548.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_105_fu_8231_p2.read()) + sc_biguint<32>(reg_5548.read()));
}

void sha256_transform::thread_add_ln128_42_fu_8277_p2() {
    add_ln128_42_fu_8277_p2 = (!add_ln128_106_fu_8271_p2.read().is_01() || !reg_5548.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_106_fu_8271_p2.read()) + sc_biguint<32>(reg_5548.read()));
}

void sha256_transform::thread_add_ln128_43_fu_8317_p2() {
    add_ln128_43_fu_8317_p2 = (!add_ln128_107_fu_8311_p2.read().is_01() || !reg_5560.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_107_fu_8311_p2.read()) + sc_biguint<32>(reg_5560.read()));
}

void sha256_transform::thread_add_ln128_44_fu_8357_p2() {
    add_ln128_44_fu_8357_p2 = (!add_ln128_108_fu_8351_p2.read().is_01() || !reg_5548.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_108_fu_8351_p2.read()) + sc_biguint<32>(reg_5548.read()));
}

void sha256_transform::thread_add_ln128_45_fu_8397_p2() {
    add_ln128_45_fu_8397_p2 = (!add_ln128_109_fu_8391_p2.read().is_01() || !reg_5560.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_109_fu_8391_p2.read()) + sc_biguint<32>(reg_5560.read()));
}

void sha256_transform::thread_add_ln128_46_fu_8437_p2() {
    add_ln128_46_fu_8437_p2 = (!add_ln128_110_fu_8431_p2.read().is_01() || !reg_5560.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_110_fu_8431_p2.read()) + sc_biguint<32>(reg_5560.read()));
}

void sha256_transform::thread_add_ln128_47_fu_8492_p2() {
    add_ln128_47_fu_8492_p2 = (!add_ln128_111_fu_8486_p2.read().is_01() || !reg_5572.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_111_fu_8486_p2.read()) + sc_biguint<32>(reg_5572.read()));
}

void sha256_transform::thread_add_ln128_48_fu_8532_p2() {
    add_ln128_48_fu_8532_p2 = (!add_ln128_112_fu_8526_p2.read().is_01() || !reg_5560.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_112_fu_8526_p2.read()) + sc_biguint<32>(reg_5560.read()));
}

void sha256_transform::thread_add_ln128_49_fu_8572_p2() {
    add_ln128_49_fu_8572_p2 = (!add_ln128_113_fu_8566_p2.read().is_01() || !reg_5572.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_113_fu_8566_p2.read()) + sc_biguint<32>(reg_5572.read()));
}

void sha256_transform::thread_add_ln128_4_fu_6096_p2() {
    add_ln128_4_fu_6096_p2 = (!add_ln128_68_fu_6091_p2.read().is_01() || !tmp_4_4_reg_9892.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_68_fu_6091_p2.read()) + sc_biguint<32>(tmp_4_4_reg_9892.read()));
}

void sha256_transform::thread_add_ln128_50_fu_8612_p2() {
    add_ln128_50_fu_8612_p2 = (!add_ln128_114_fu_8606_p2.read().is_01() || !reg_5572.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_114_fu_8606_p2.read()) + sc_biguint<32>(reg_5572.read()));
}

void sha256_transform::thread_add_ln128_51_fu_8652_p2() {
    add_ln128_51_fu_8652_p2 = (!add_ln128_115_fu_8646_p2.read().is_01() || !reg_5584.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_115_fu_8646_p2.read()) + sc_biguint<32>(reg_5584.read()));
}

void sha256_transform::thread_add_ln128_52_fu_8692_p2() {
    add_ln128_52_fu_8692_p2 = (!add_ln128_116_fu_8686_p2.read().is_01() || !reg_5572.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_116_fu_8686_p2.read()) + sc_biguint<32>(reg_5572.read()));
}

void sha256_transform::thread_add_ln128_53_fu_8732_p2() {
    add_ln128_53_fu_8732_p2 = (!add_ln128_117_fu_8726_p2.read().is_01() || !reg_5584.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_117_fu_8726_p2.read()) + sc_biguint<32>(reg_5584.read()));
}

void sha256_transform::thread_add_ln128_54_fu_8772_p2() {
    add_ln128_54_fu_8772_p2 = (!add_ln128_118_fu_8766_p2.read().is_01() || !reg_5584.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_118_fu_8766_p2.read()) + sc_biguint<32>(reg_5584.read()));
}

void sha256_transform::thread_add_ln128_55_fu_8812_p2() {
    add_ln128_55_fu_8812_p2 = (!add_ln128_119_fu_8806_p2.read().is_01() || !reg_5596.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_119_fu_8806_p2.read()) + sc_biguint<32>(reg_5596.read()));
}

void sha256_transform::thread_add_ln128_56_fu_8852_p2() {
    add_ln128_56_fu_8852_p2 = (!add_ln128_120_fu_8846_p2.read().is_01() || !reg_5584.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_120_fu_8846_p2.read()) + sc_biguint<32>(reg_5584.read()));
}

void sha256_transform::thread_add_ln128_57_fu_8892_p2() {
    add_ln128_57_fu_8892_p2 = (!add_ln128_121_fu_8886_p2.read().is_01() || !reg_5596.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_121_fu_8886_p2.read()) + sc_biguint<32>(reg_5596.read()));
}

void sha256_transform::thread_add_ln128_58_fu_8932_p2() {
    add_ln128_58_fu_8932_p2 = (!add_ln128_122_fu_8926_p2.read().is_01() || !reg_5596.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_122_fu_8926_p2.read()) + sc_biguint<32>(reg_5596.read()));
}

void sha256_transform::thread_add_ln128_59_fu_8972_p2() {
    add_ln128_59_fu_8972_p2 = (!add_ln128_123_fu_8966_p2.read().is_01() || !reg_5608.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_123_fu_8966_p2.read()) + sc_biguint<32>(reg_5608.read()));
}

void sha256_transform::thread_add_ln128_5_fu_6199_p2() {
    add_ln128_5_fu_6199_p2 = (!add_ln128_69_fu_6193_p2.read().is_01() || !reg_5536.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_69_fu_6193_p2.read()) + sc_biguint<32>(reg_5536.read()));
}

void sha256_transform::thread_add_ln128_60_fu_9012_p2() {
    add_ln128_60_fu_9012_p2 = (!add_ln128_124_fu_9006_p2.read().is_01() || !reg_5596.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_124_fu_9006_p2.read()) + sc_biguint<32>(reg_5596.read()));
}

void sha256_transform::thread_add_ln128_61_fu_9046_p2() {
    add_ln128_61_fu_9046_p2 = (!add_ln128_125_fu_9040_p2.read().is_01() || !reg_5608.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_125_fu_9040_p2.read()) + sc_biguint<32>(reg_5608.read()));
}

void sha256_transform::thread_add_ln128_62_fu_9085_p2() {
    add_ln128_62_fu_9085_p2 = (!add_ln128_126_fu_9079_p2.read().is_01() || !reg_5608.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_126_fu_9079_p2.read()) + sc_biguint<32>(reg_5608.read()));
}

void sha256_transform::thread_add_ln128_63_fu_9144_p2() {
    add_ln128_63_fu_9144_p2 = (!add_ln128_127_fu_9139_p2.read().is_01() || !reg_5608.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_127_fu_9139_p2.read()) + sc_biguint<32>(reg_5608.read()));
}

void sha256_transform::thread_add_ln128_64_fu_5703_p2() {
    add_ln128_64_fu_5703_p2 = (!add_ln118_3_fu_5692_p2.read().is_01() || !reg_5528.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_3_fu_5692_p2.read()) + sc_biguint<32>(reg_5528.read()));
}

void sha256_transform::thread_add_ln128_65_fu_5793_p2() {
    add_ln128_65_fu_5793_p2 = (!add_ln118_7_fu_5783_p2.read().is_01() || !reg_5528.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_7_fu_5783_p2.read()) + sc_biguint<32>(reg_5528.read()));
}

void sha256_transform::thread_add_ln128_66_fu_5884_p2() {
    add_ln128_66_fu_5884_p2 = (!add_ln118_11_fu_5873_p2.read().is_01() || !reg_5528.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_11_fu_5873_p2.read()) + sc_biguint<32>(reg_5528.read()));
}

void sha256_transform::thread_add_ln128_67_fu_5988_p2() {
    add_ln128_67_fu_5988_p2 = (!add_ln118_15_fu_5977_p2.read().is_01() || !reg_5528.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_15_fu_5977_p2.read()) + sc_biguint<32>(reg_5528.read()));
}

void sha256_transform::thread_add_ln128_68_fu_6091_p2() {
    add_ln128_68_fu_6091_p2 = (!add_ln118_19_fu_6080_p2.read().is_01() || !tmp_5_4_reg_9897.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_19_fu_6080_p2.read()) + sc_biguint<32>(tmp_5_4_reg_9897.read()));
}

void sha256_transform::thread_add_ln128_69_fu_6193_p2() {
    add_ln128_69_fu_6193_p2 = (!add_ln118_23_fu_6182_p2.read().is_01() || !reg_5540.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_23_fu_6182_p2.read()) + sc_biguint<32>(reg_5540.read()));
}

void sha256_transform::thread_add_ln128_6_fu_6303_p2() {
    add_ln128_6_fu_6303_p2 = (!add_ln128_70_fu_6297_p2.read().is_01() || !reg_5536.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_70_fu_6297_p2.read()) + sc_biguint<32>(reg_5536.read()));
}

void sha256_transform::thread_add_ln128_70_fu_6297_p2() {
    add_ln128_70_fu_6297_p2 = (!add_ln118_27_fu_6286_p2.read().is_01() || !reg_5540.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_27_fu_6286_p2.read()) + sc_biguint<32>(reg_5540.read()));
}

void sha256_transform::thread_add_ln128_71_fu_6401_p2() {
    add_ln128_71_fu_6401_p2 = (!add_ln118_31_fu_6390_p2.read().is_01() || !reg_5540.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_31_fu_6390_p2.read()) + sc_biguint<32>(reg_5540.read()));
}

void sha256_transform::thread_add_ln128_72_fu_6505_p2() {
    add_ln128_72_fu_6505_p2 = (!add_ln118_35_fu_6494_p2.read().is_01() || !reg_5540.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_35_fu_6494_p2.read()) + sc_biguint<32>(reg_5540.read()));
}

void sha256_transform::thread_add_ln128_73_fu_6609_p2() {
    add_ln128_73_fu_6609_p2 = (!add_ln118_39_fu_6598_p2.read().is_01() || !reg_5552.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_39_fu_6598_p2.read()) + sc_biguint<32>(reg_5552.read()));
}

void sha256_transform::thread_add_ln128_74_fu_6713_p2() {
    add_ln128_74_fu_6713_p2 = (!add_ln118_43_fu_6702_p2.read().is_01() || !reg_5552.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_43_fu_6702_p2.read()) + sc_biguint<32>(reg_5552.read()));
}

void sha256_transform::thread_add_ln128_75_fu_6817_p2() {
    add_ln128_75_fu_6817_p2 = (!add_ln118_47_fu_6806_p2.read().is_01() || !reg_5552.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_47_fu_6806_p2.read()) + sc_biguint<32>(reg_5552.read()));
}

void sha256_transform::thread_add_ln128_76_fu_6918_p2() {
    add_ln128_76_fu_6918_p2 = (!add_ln118_51_fu_6907_p2.read().is_01() || !reg_5552.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_51_fu_6907_p2.read()) + sc_biguint<32>(reg_5552.read()));
}

void sha256_transform::thread_add_ln128_77_fu_7018_p2() {
    add_ln128_77_fu_7018_p2 = (!add_ln118_55_fu_7007_p2.read().is_01() || !reg_5564.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_55_fu_7007_p2.read()) + sc_biguint<32>(reg_5564.read()));
}

void sha256_transform::thread_add_ln128_78_fu_7118_p2() {
    add_ln128_78_fu_7118_p2 = (!add_ln118_59_fu_7107_p2.read().is_01() || !reg_5564.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_59_fu_7107_p2.read()) + sc_biguint<32>(reg_5564.read()));
}

void sha256_transform::thread_add_ln128_79_fu_7178_p2() {
    add_ln128_79_fu_7178_p2 = (!add_ln118_63_fu_7167_p2.read().is_01() || !reg_5564.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_63_fu_7167_p2.read()) + sc_biguint<32>(reg_5564.read()));
}

void sha256_transform::thread_add_ln128_7_fu_6407_p2() {
    add_ln128_7_fu_6407_p2 = (!add_ln128_71_fu_6401_p2.read().is_01() || !reg_5536.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_71_fu_6401_p2.read()) + sc_biguint<32>(reg_5536.read()));
}

void sha256_transform::thread_add_ln128_80_fu_7232_p2() {
    add_ln128_80_fu_7232_p2 = (!add_ln118_67_fu_7221_p2.read().is_01() || !reg_5564.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_67_fu_7221_p2.read()) + sc_biguint<32>(reg_5564.read()));
}

void sha256_transform::thread_add_ln128_81_fu_7272_p2() {
    add_ln128_81_fu_7272_p2 = (!add_ln118_71_fu_7261_p2.read().is_01() || !reg_5576.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_71_fu_7261_p2.read()) + sc_biguint<32>(reg_5576.read()));
}

void sha256_transform::thread_add_ln128_82_fu_7312_p2() {
    add_ln128_82_fu_7312_p2 = (!add_ln118_75_fu_7301_p2.read().is_01() || !reg_5576.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_75_fu_7301_p2.read()) + sc_biguint<32>(reg_5576.read()));
}

void sha256_transform::thread_add_ln128_83_fu_7352_p2() {
    add_ln128_83_fu_7352_p2 = (!add_ln118_79_fu_7341_p2.read().is_01() || !reg_5576.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_79_fu_7341_p2.read()) + sc_biguint<32>(reg_5576.read()));
}

void sha256_transform::thread_add_ln128_84_fu_7392_p2() {
    add_ln128_84_fu_7392_p2 = (!add_ln118_83_fu_7381_p2.read().is_01() || !reg_5576.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_83_fu_7381_p2.read()) + sc_biguint<32>(reg_5576.read()));
}

void sha256_transform::thread_add_ln128_85_fu_7432_p2() {
    add_ln128_85_fu_7432_p2 = (!add_ln118_87_fu_7421_p2.read().is_01() || !reg_5588.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_87_fu_7421_p2.read()) + sc_biguint<32>(reg_5588.read()));
}

void sha256_transform::thread_add_ln128_86_fu_7472_p2() {
    add_ln128_86_fu_7472_p2 = (!add_ln118_91_fu_7461_p2.read().is_01() || !reg_5588.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_91_fu_7461_p2.read()) + sc_biguint<32>(reg_5588.read()));
}

void sha256_transform::thread_add_ln128_87_fu_7512_p2() {
    add_ln128_87_fu_7512_p2 = (!add_ln118_95_fu_7501_p2.read().is_01() || !reg_5588.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_95_fu_7501_p2.read()) + sc_biguint<32>(reg_5588.read()));
}

void sha256_transform::thread_add_ln128_88_fu_7552_p2() {
    add_ln128_88_fu_7552_p2 = (!add_ln118_99_fu_7541_p2.read().is_01() || !reg_5588.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_99_fu_7541_p2.read()) + sc_biguint<32>(reg_5588.read()));
}

void sha256_transform::thread_add_ln128_89_fu_7592_p2() {
    add_ln128_89_fu_7592_p2 = (!add_ln118_103_fu_7581_p2.read().is_01() || !reg_5600.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_103_fu_7581_p2.read()) + sc_biguint<32>(reg_5600.read()));
}

void sha256_transform::thread_add_ln128_8_fu_6511_p2() {
    add_ln128_8_fu_6511_p2 = (!add_ln128_72_fu_6505_p2.read().is_01() || !reg_5536.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_72_fu_6505_p2.read()) + sc_biguint<32>(reg_5536.read()));
}

void sha256_transform::thread_add_ln128_90_fu_7632_p2() {
    add_ln128_90_fu_7632_p2 = (!add_ln118_107_fu_7621_p2.read().is_01() || !reg_5600.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_107_fu_7621_p2.read()) + sc_biguint<32>(reg_5600.read()));
}

void sha256_transform::thread_add_ln128_91_fu_7672_p2() {
    add_ln128_91_fu_7672_p2 = (!add_ln118_111_fu_7661_p2.read().is_01() || !reg_5600.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_111_fu_7661_p2.read()) + sc_biguint<32>(reg_5600.read()));
}

void sha256_transform::thread_add_ln128_92_fu_7712_p2() {
    add_ln128_92_fu_7712_p2 = (!add_ln118_115_fu_7701_p2.read().is_01() || !reg_5600.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_115_fu_7701_p2.read()) + sc_biguint<32>(reg_5600.read()));
}

void sha256_transform::thread_add_ln128_93_fu_7752_p2() {
    add_ln128_93_fu_7752_p2 = (!add_ln118_119_fu_7741_p2.read().is_01() || !reg_5612.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_119_fu_7741_p2.read()) + sc_biguint<32>(reg_5612.read()));
}

void sha256_transform::thread_add_ln128_94_fu_7792_p2() {
    add_ln128_94_fu_7792_p2 = (!add_ln118_123_fu_7781_p2.read().is_01() || !reg_5612.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_123_fu_7781_p2.read()) + sc_biguint<32>(reg_5612.read()));
}

void sha256_transform::thread_add_ln128_95_fu_7832_p2() {
    add_ln128_95_fu_7832_p2 = (!add_ln118_127_fu_7821_p2.read().is_01() || !reg_5612.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_127_fu_7821_p2.read()) + sc_biguint<32>(reg_5612.read()));
}

void sha256_transform::thread_add_ln128_96_fu_7866_p2() {
    add_ln128_96_fu_7866_p2 = (!add_ln118_131_fu_7861_p2.read().is_01() || !reg_5612.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_131_fu_7861_p2.read()) + sc_biguint<32>(reg_5612.read()));
}

void sha256_transform::thread_add_ln128_97_fu_7911_p2() {
    add_ln128_97_fu_7911_p2 = (!add_ln118_135_fu_7900_p2.read().is_01() || !reg_5528.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_135_fu_7900_p2.read()) + sc_biguint<32>(reg_5528.read()));
}

void sha256_transform::thread_add_ln128_98_fu_7951_p2() {
    add_ln128_98_fu_7951_p2 = (!add_ln118_139_fu_7940_p2.read().is_01() || !reg_5528.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_139_fu_7940_p2.read()) + sc_biguint<32>(reg_5528.read()));
}

void sha256_transform::thread_add_ln128_99_fu_7991_p2() {
    add_ln128_99_fu_7991_p2 = (!add_ln118_143_fu_7980_p2.read().is_01() || !reg_5540.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln118_143_fu_7980_p2.read()) + sc_biguint<32>(reg_5540.read()));
}

void sha256_transform::thread_add_ln128_9_fu_6615_p2() {
    add_ln128_9_fu_6615_p2 = (!add_ln128_73_fu_6609_p2.read().is_01() || !reg_5548.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_73_fu_6609_p2.read()) + sc_biguint<32>(reg_5548.read()));
}

void sha256_transform::thread_add_ln128_fu_5709_p2() {
    add_ln128_fu_5709_p2 = (!add_ln128_64_fu_5703_p2.read().is_01() || !reg_5524.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln128_64_fu_5703_p2.read()) + sc_biguint<32>(reg_5524.read()));
}

void sha256_transform::thread_add_ln153_fu_9151_p2() {
    add_ln153_fu_9151_p2 = (!ap_phi_mux_a_1_63_phi_fu_4750_p4.read().is_01() || !ctx_state_0_read_1_reg_9254_pp0_iter16_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_phi_mux_a_1_63_phi_fu_4750_p4.read()) + sc_biguint<32>(ctx_state_0_read_1_reg_9254_pp0_iter16_reg.read()));
}

void sha256_transform::thread_add_ln154_fu_9156_p2() {
    add_ln154_fu_9156_p2 = (!ap_phi_mux_b_1_63_phi_fu_4738_p4.read().is_01() || !ctx_state_1_read_1_reg_9248_pp0_iter16_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_phi_mux_b_1_63_phi_fu_4738_p4.read()) + sc_biguint<32>(ctx_state_1_read_1_reg_9248_pp0_iter16_reg.read()));
}

void sha256_transform::thread_add_ln155_fu_9161_p2() {
    add_ln155_fu_9161_p2 = (!ap_phi_mux_c_1_63_phi_fu_4726_p4.read().is_01() || !ctx_state_2_read_1_reg_9240_pp0_iter16_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_phi_mux_c_1_63_phi_fu_4726_p4.read()) + sc_biguint<32>(ctx_state_2_read_1_reg_9240_pp0_iter16_reg.read()));
}

void sha256_transform::thread_add_ln156_fu_9118_p2() {
    add_ln156_fu_9118_p2 = (!ap_phi_reg_pp0_iter16_c_1_62_reg_4664.read().is_01() || !ctx_state_3_read_1_reg_9375_pp0_iter15_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_phi_reg_pp0_iter16_c_1_62_reg_4664.read()) + sc_biguint<32>(ctx_state_3_read_1_reg_9375_pp0_iter15_reg.read()));
}

void sha256_transform::thread_add_ln157_fu_9166_p2() {
    add_ln157_fu_9166_p2 = (!ap_phi_mux_e_1_63_phi_fu_4715_p4.read().is_01() || !ctx_state_4_read_1_reg_9234_pp0_iter16_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_phi_mux_e_1_63_phi_fu_4715_p4.read()) + sc_biguint<32>(ctx_state_4_read_1_reg_9234_pp0_iter16_reg.read()));
}

void sha256_transform::thread_add_ln158_fu_9171_p2() {
    add_ln158_fu_9171_p2 = (!ap_phi_mux_f_1_63_phi_fu_4704_p4.read().is_01() || !ctx_state_5_read_1_reg_9227_pp0_iter16_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_phi_mux_f_1_63_phi_fu_4704_p4.read()) + sc_biguint<32>(ctx_state_5_read_1_reg_9227_pp0_iter16_reg.read()));
}

void sha256_transform::thread_add_ln159_fu_9123_p2() {
    add_ln159_fu_9123_p2 = (!f_1_62_reg_4641.read().is_01() || !ctx_state_6_read_1_reg_9221_pp0_iter16_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(f_1_62_reg_4641.read()) + sc_biguint<32>(ctx_state_6_read_1_reg_9221_pp0_iter16_reg.read()));
}

void sha256_transform::thread_add_ln160_fu_9128_p2() {
    add_ln160_fu_9128_p2 = (!f_1_61_reg_4580.read().is_01() || !ctx_state_7_read_1_reg_9370_pp0_iter15_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(f_1_61_reg_4580.read()) + sc_biguint<32>(ctx_state_7_read_1_reg_9370_pp0_iter15_reg.read()));
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[0];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage1() {
    ap_CS_fsm_pp0_stage1 = ap_CS_fsm.read()[1];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage2() {
    ap_CS_fsm_pp0_stage2 = ap_CS_fsm.read()[2];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage3() {
    ap_CS_fsm_pp0_stage3 = ap_CS_fsm.read()[3];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage4() {
    ap_CS_fsm_pp0_stage4 = ap_CS_fsm.read()[4];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage5() {
    ap_CS_fsm_pp0_stage5 = ap_CS_fsm.read()[5];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage6() {
    ap_CS_fsm_pp0_stage6 = ap_CS_fsm.read()[6];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage7() {
    ap_CS_fsm_pp0_stage7 = ap_CS_fsm.read()[7];
}

void sha256_transform::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1));
}

void sha256_transform::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1)));
}

void sha256_transform::thread_ap_block_pp0_stage1() {
    ap_block_pp0_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage1_11001() {
    ap_block_pp0_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage1_subdone() {
    ap_block_pp0_stage1_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage2() {
    ap_block_pp0_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage2_11001() {
    ap_block_pp0_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage2_subdone() {
    ap_block_pp0_stage2_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage3() {
    ap_block_pp0_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage3_11001() {
    ap_block_pp0_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage3_subdone() {
    ap_block_pp0_stage3_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage4() {
    ap_block_pp0_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage4_11001() {
    ap_block_pp0_stage4_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage4_subdone() {
    ap_block_pp0_stage4_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage5() {
    ap_block_pp0_stage5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage5_11001() {
    ap_block_pp0_stage5_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage5_subdone() {
    ap_block_pp0_stage5_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage6() {
    ap_block_pp0_stage6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage6_11001() {
    ap_block_pp0_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage6_subdone() {
    ap_block_pp0_stage6_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage7() {
    ap_block_pp0_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage7_11001() {
    ap_block_pp0_stage7_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage7_subdone() {
    ap_block_pp0_stage7_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_state100_pp0_stage3_iter12() {
    ap_block_state100_pp0_stage3_iter12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state101_pp0_stage4_iter12() {
    ap_block_state101_pp0_stage4_iter12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state102_pp0_stage5_iter12() {
    ap_block_state102_pp0_stage5_iter12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state103_pp0_stage6_iter12() {
    ap_block_state103_pp0_stage6_iter12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state104_pp0_stage7_iter12() {
    ap_block_state104_pp0_stage7_iter12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state105_pp0_stage0_iter13() {
    ap_block_state105_pp0_stage0_iter13 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state106_pp0_stage1_iter13() {
    ap_block_state106_pp0_stage1_iter13 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state107_pp0_stage2_iter13() {
    ap_block_state107_pp0_stage2_iter13 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state108_pp0_stage3_iter13() {
    ap_block_state108_pp0_stage3_iter13 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state109_pp0_stage4_iter13() {
    ap_block_state109_pp0_stage4_iter13 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state10_pp0_stage1_iter1() {
    ap_block_state10_pp0_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state110_pp0_stage5_iter13() {
    ap_block_state110_pp0_stage5_iter13 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state111_pp0_stage6_iter13() {
    ap_block_state111_pp0_stage6_iter13 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state112_pp0_stage7_iter13() {
    ap_block_state112_pp0_stage7_iter13 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state113_pp0_stage0_iter14() {
    ap_block_state113_pp0_stage0_iter14 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state114_pp0_stage1_iter14() {
    ap_block_state114_pp0_stage1_iter14 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state115_pp0_stage2_iter14() {
    ap_block_state115_pp0_stage2_iter14 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state116_pp0_stage3_iter14() {
    ap_block_state116_pp0_stage3_iter14 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state117_pp0_stage4_iter14() {
    ap_block_state117_pp0_stage4_iter14 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state118_pp0_stage5_iter14() {
    ap_block_state118_pp0_stage5_iter14 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state119_pp0_stage6_iter14() {
    ap_block_state119_pp0_stage6_iter14 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state11_pp0_stage2_iter1() {
    ap_block_state11_pp0_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state120_pp0_stage7_iter14() {
    ap_block_state120_pp0_stage7_iter14 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state121_pp0_stage0_iter15() {
    ap_block_state121_pp0_stage0_iter15 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state122_pp0_stage1_iter15() {
    ap_block_state122_pp0_stage1_iter15 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state123_pp0_stage2_iter15() {
    ap_block_state123_pp0_stage2_iter15 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state124_pp0_stage3_iter15() {
    ap_block_state124_pp0_stage3_iter15 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state125_pp0_stage4_iter15() {
    ap_block_state125_pp0_stage4_iter15 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state126_pp0_stage5_iter15() {
    ap_block_state126_pp0_stage5_iter15 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state127_pp0_stage6_iter15() {
    ap_block_state127_pp0_stage6_iter15 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state128_pp0_stage7_iter15() {
    ap_block_state128_pp0_stage7_iter15 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state129_pp0_stage0_iter16() {
    ap_block_state129_pp0_stage0_iter16 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state12_pp0_stage3_iter1() {
    ap_block_state12_pp0_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state130_pp0_stage1_iter16() {
    ap_block_state130_pp0_stage1_iter16 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state131_pp0_stage2_iter16() {
    ap_block_state131_pp0_stage2_iter16 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state132_pp0_stage3_iter16() {
    ap_block_state132_pp0_stage3_iter16 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state13_pp0_stage4_iter1() {
    ap_block_state13_pp0_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state14_pp0_stage5_iter1() {
    ap_block_state14_pp0_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state15_pp0_stage6_iter1() {
    ap_block_state15_pp0_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state16_pp0_stage7_iter1() {
    ap_block_state16_pp0_stage7_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state17_pp0_stage0_iter2() {
    ap_block_state17_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state18_pp0_stage1_iter2() {
    ap_block_state18_pp0_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state19_pp0_stage2_iter2() {
    ap_block_state19_pp0_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state1_pp0_stage0_iter0() {
    ap_block_state1_pp0_stage0_iter0 = esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read());
}

void sha256_transform::thread_ap_block_state20_pp0_stage3_iter2() {
    ap_block_state20_pp0_stage3_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state21_pp0_stage4_iter2() {
    ap_block_state21_pp0_stage4_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state22_pp0_stage5_iter2() {
    ap_block_state22_pp0_stage5_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state23_pp0_stage6_iter2() {
    ap_block_state23_pp0_stage6_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state24_pp0_stage7_iter2() {
    ap_block_state24_pp0_stage7_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state25_pp0_stage0_iter3() {
    ap_block_state25_pp0_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state26_pp0_stage1_iter3() {
    ap_block_state26_pp0_stage1_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state27_pp0_stage2_iter3() {
    ap_block_state27_pp0_stage2_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state28_pp0_stage3_iter3() {
    ap_block_state28_pp0_stage3_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state29_pp0_stage4_iter3() {
    ap_block_state29_pp0_stage4_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state2_pp0_stage1_iter0() {
    ap_block_state2_pp0_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state30_pp0_stage5_iter3() {
    ap_block_state30_pp0_stage5_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state31_pp0_stage6_iter3() {
    ap_block_state31_pp0_stage6_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state32_pp0_stage7_iter3() {
    ap_block_state32_pp0_stage7_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state33_pp0_stage0_iter4() {
    ap_block_state33_pp0_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state34_pp0_stage1_iter4() {
    ap_block_state34_pp0_stage1_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state35_pp0_stage2_iter4() {
    ap_block_state35_pp0_stage2_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state36_pp0_stage3_iter4() {
    ap_block_state36_pp0_stage3_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state37_pp0_stage4_iter4() {
    ap_block_state37_pp0_stage4_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state38_pp0_stage5_iter4() {
    ap_block_state38_pp0_stage5_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state39_pp0_stage6_iter4() {
    ap_block_state39_pp0_stage6_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state3_pp0_stage2_iter0() {
    ap_block_state3_pp0_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state40_pp0_stage7_iter4() {
    ap_block_state40_pp0_stage7_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state41_pp0_stage0_iter5() {
    ap_block_state41_pp0_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state42_pp0_stage1_iter5() {
    ap_block_state42_pp0_stage1_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state43_pp0_stage2_iter5() {
    ap_block_state43_pp0_stage2_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state44_pp0_stage3_iter5() {
    ap_block_state44_pp0_stage3_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state45_pp0_stage4_iter5() {
    ap_block_state45_pp0_stage4_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state46_pp0_stage5_iter5() {
    ap_block_state46_pp0_stage5_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state47_pp0_stage6_iter5() {
    ap_block_state47_pp0_stage6_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state48_pp0_stage7_iter5() {
    ap_block_state48_pp0_stage7_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state49_pp0_stage0_iter6() {
    ap_block_state49_pp0_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state4_pp0_stage3_iter0() {
    ap_block_state4_pp0_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state50_pp0_stage1_iter6() {
    ap_block_state50_pp0_stage1_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state51_pp0_stage2_iter6() {
    ap_block_state51_pp0_stage2_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state52_pp0_stage3_iter6() {
    ap_block_state52_pp0_stage3_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state53_pp0_stage4_iter6() {
    ap_block_state53_pp0_stage4_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state54_pp0_stage5_iter6() {
    ap_block_state54_pp0_stage5_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state55_pp0_stage6_iter6() {
    ap_block_state55_pp0_stage6_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state56_pp0_stage7_iter6() {
    ap_block_state56_pp0_stage7_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state57_pp0_stage0_iter7() {
    ap_block_state57_pp0_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state58_pp0_stage1_iter7() {
    ap_block_state58_pp0_stage1_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state59_pp0_stage2_iter7() {
    ap_block_state59_pp0_stage2_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state5_pp0_stage4_iter0() {
    ap_block_state5_pp0_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state60_pp0_stage3_iter7() {
    ap_block_state60_pp0_stage3_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state61_pp0_stage4_iter7() {
    ap_block_state61_pp0_stage4_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state62_pp0_stage5_iter7() {
    ap_block_state62_pp0_stage5_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state63_pp0_stage6_iter7() {
    ap_block_state63_pp0_stage6_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state64_pp0_stage7_iter7() {
    ap_block_state64_pp0_stage7_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state65_pp0_stage0_iter8() {
    ap_block_state65_pp0_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state66_pp0_stage1_iter8() {
    ap_block_state66_pp0_stage1_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state67_pp0_stage2_iter8() {
    ap_block_state67_pp0_stage2_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state68_pp0_stage3_iter8() {
    ap_block_state68_pp0_stage3_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state69_pp0_stage4_iter8() {
    ap_block_state69_pp0_stage4_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state6_pp0_stage5_iter0() {
    ap_block_state6_pp0_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state70_pp0_stage5_iter8() {
    ap_block_state70_pp0_stage5_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state71_pp0_stage6_iter8() {
    ap_block_state71_pp0_stage6_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state72_pp0_stage7_iter8() {
    ap_block_state72_pp0_stage7_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state73_pp0_stage0_iter9() {
    ap_block_state73_pp0_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state74_pp0_stage1_iter9() {
    ap_block_state74_pp0_stage1_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state75_pp0_stage2_iter9() {
    ap_block_state75_pp0_stage2_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state76_pp0_stage3_iter9() {
    ap_block_state76_pp0_stage3_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state77_pp0_stage4_iter9() {
    ap_block_state77_pp0_stage4_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state78_pp0_stage5_iter9() {
    ap_block_state78_pp0_stage5_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state79_pp0_stage6_iter9() {
    ap_block_state79_pp0_stage6_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state7_pp0_stage6_iter0() {
    ap_block_state7_pp0_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state80_pp0_stage7_iter9() {
    ap_block_state80_pp0_stage7_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state81_pp0_stage0_iter10() {
    ap_block_state81_pp0_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state82_pp0_stage1_iter10() {
    ap_block_state82_pp0_stage1_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state83_pp0_stage2_iter10() {
    ap_block_state83_pp0_stage2_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state84_pp0_stage3_iter10() {
    ap_block_state84_pp0_stage3_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state85_pp0_stage4_iter10() {
    ap_block_state85_pp0_stage4_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state86_pp0_stage5_iter10() {
    ap_block_state86_pp0_stage5_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state87_pp0_stage6_iter10() {
    ap_block_state87_pp0_stage6_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state88_pp0_stage7_iter10() {
    ap_block_state88_pp0_stage7_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state89_pp0_stage0_iter11() {
    ap_block_state89_pp0_stage0_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state8_pp0_stage7_iter0() {
    ap_block_state8_pp0_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state90_pp0_stage1_iter11() {
    ap_block_state90_pp0_stage1_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state91_pp0_stage2_iter11() {
    ap_block_state91_pp0_stage2_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state92_pp0_stage3_iter11() {
    ap_block_state92_pp0_stage3_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state93_pp0_stage4_iter11() {
    ap_block_state93_pp0_stage4_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state94_pp0_stage5_iter11() {
    ap_block_state94_pp0_stage5_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state95_pp0_stage6_iter11() {
    ap_block_state95_pp0_stage6_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state96_pp0_stage7_iter11() {
    ap_block_state96_pp0_stage7_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state97_pp0_stage0_iter12() {
    ap_block_state97_pp0_stage0_iter12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state98_pp0_stage1_iter12() {
    ap_block_state98_pp0_stage1_iter12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state99_pp0_stage2_iter12() {
    ap_block_state99_pp0_stage2_iter12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state9_pp0_stage0_iter1() {
    ap_block_state9_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_condition_1009() {
    ap_condition_1009 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()));
}

void sha256_transform::thread_ap_condition_1015() {
    ap_condition_1015 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()));
}

void sha256_transform::thread_ap_condition_1019() {
    ap_condition_1019 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()));
}

void sha256_transform::thread_ap_condition_1020() {
    ap_condition_1020 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()));
}

void sha256_transform::thread_ap_condition_1051() {
    ap_condition_1051 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0));
}

void sha256_transform::thread_ap_condition_1058() {
    ap_condition_1058 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()));
}

void sha256_transform::thread_ap_condition_1063() {
    ap_condition_1063 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()));
}

void sha256_transform::thread_ap_condition_1068() {
    ap_condition_1068 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()));
}

void sha256_transform::thread_ap_condition_1074() {
    ap_condition_1074 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()));
}

void sha256_transform::thread_ap_condition_1087() {
    ap_condition_1087 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()));
}

void sha256_transform::thread_ap_condition_1091() {
    ap_condition_1091 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()));
}

void sha256_transform::thread_ap_condition_1095() {
    ap_condition_1095 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()));
}

void sha256_transform::thread_ap_condition_1096() {
    ap_condition_1096 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()));
}

void sha256_transform::thread_ap_condition_1102() {
    ap_condition_1102 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()));
}

void sha256_transform::thread_ap_condition_1109() {
    ap_condition_1109 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()));
}

void sha256_transform::thread_ap_condition_1114() {
    ap_condition_1114 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()));
}

void sha256_transform::thread_ap_condition_1119() {
    ap_condition_1119 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()));
}

void sha256_transform::thread_ap_condition_1125() {
    ap_condition_1125 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()));
}

void sha256_transform::thread_ap_condition_1138() {
    ap_condition_1138 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()));
}

void sha256_transform::thread_ap_condition_114() {
    ap_condition_114 = (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()));
}

void sha256_transform::thread_ap_condition_1142() {
    ap_condition_1142 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()));
}

void sha256_transform::thread_ap_condition_1146() {
    ap_condition_1146 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()));
}

void sha256_transform::thread_ap_condition_1147() {
    ap_condition_1147 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()));
}

void sha256_transform::thread_ap_condition_1153() {
    ap_condition_1153 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()));
}

void sha256_transform::thread_ap_condition_1160() {
    ap_condition_1160 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()));
}

void sha256_transform::thread_ap_condition_1165() {
    ap_condition_1165 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()));
}

void sha256_transform::thread_ap_condition_1170() {
    ap_condition_1170 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()));
}

void sha256_transform::thread_ap_condition_1176() {
    ap_condition_1176 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()));
}

void sha256_transform::thread_ap_condition_1189() {
    ap_condition_1189 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()));
}

void sha256_transform::thread_ap_condition_119() {
    ap_condition_119 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()));
}

void sha256_transform::thread_ap_condition_1193() {
    ap_condition_1193 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()));
}

void sha256_transform::thread_ap_condition_1197() {
    ap_condition_1197 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()));
}

void sha256_transform::thread_ap_condition_1198() {
    ap_condition_1198 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()));
}

void sha256_transform::thread_ap_condition_1204() {
    ap_condition_1204 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()));
}

void sha256_transform::thread_ap_condition_1211() {
    ap_condition_1211 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()));
}

void sha256_transform::thread_ap_condition_1216() {
    ap_condition_1216 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()));
}

void sha256_transform::thread_ap_condition_1221() {
    ap_condition_1221 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()));
}

void sha256_transform::thread_ap_condition_1227() {
    ap_condition_1227 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()));
}

void sha256_transform::thread_ap_condition_1240() {
    ap_condition_1240 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()));
}

void sha256_transform::thread_ap_condition_1244() {
    ap_condition_1244 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()));
}

void sha256_transform::thread_ap_condition_1248() {
    ap_condition_1248 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()));
}

void sha256_transform::thread_ap_condition_1249() {
    ap_condition_1249 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()));
}

void sha256_transform::thread_ap_condition_1255() {
    ap_condition_1255 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()));
}

void sha256_transform::thread_ap_condition_1262() {
    ap_condition_1262 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()));
}

void sha256_transform::thread_ap_condition_1267() {
    ap_condition_1267 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()));
}

void sha256_transform::thread_ap_condition_1272() {
    ap_condition_1272 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()));
}

void sha256_transform::thread_ap_condition_1278() {
    ap_condition_1278 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()));
}

void sha256_transform::thread_ap_condition_1291() {
    ap_condition_1291 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()));
}

void sha256_transform::thread_ap_condition_1295() {
    ap_condition_1295 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()));
}

void sha256_transform::thread_ap_condition_1299() {
    ap_condition_1299 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()));
}

void sha256_transform::thread_ap_condition_1300() {
    ap_condition_1300 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()));
}

void sha256_transform::thread_ap_condition_1306() {
    ap_condition_1306 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()));
}

void sha256_transform::thread_ap_condition_1313() {
    ap_condition_1313 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()));
}

void sha256_transform::thread_ap_condition_1318() {
    ap_condition_1318 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()));
}

void sha256_transform::thread_ap_condition_1323() {
    ap_condition_1323 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()));
}

void sha256_transform::thread_ap_condition_1329() {
    ap_condition_1329 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()));
}

void sha256_transform::thread_ap_condition_1342() {
    ap_condition_1342 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()));
}

void sha256_transform::thread_ap_condition_1346() {
    ap_condition_1346 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()));
}

void sha256_transform::thread_ap_condition_1350() {
    ap_condition_1350 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()));
}

void sha256_transform::thread_ap_condition_1351() {
    ap_condition_1351 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()));
}

void sha256_transform::thread_ap_condition_1356() {
    ap_condition_1356 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0));
}

void sha256_transform::thread_ap_condition_1361() {
    ap_condition_1361 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()));
}

void sha256_transform::thread_ap_condition_1366() {
    ap_condition_1366 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()));
}

void sha256_transform::thread_ap_condition_1373() {
    ap_condition_1373 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()));
}

void sha256_transform::thread_ap_condition_1826() {
    ap_condition_1826 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0));
}

void sha256_transform::thread_ap_condition_4306() {
    ap_condition_4306 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()));
}

void sha256_transform::thread_ap_condition_4549() {
    ap_condition_4549 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()));
}

void sha256_transform::thread_ap_condition_4806() {
    ap_condition_4806 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()));
}

void sha256_transform::thread_ap_condition_5083() {
    ap_condition_5083 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()));
}

void sha256_transform::thread_ap_condition_5380() {
    ap_condition_5380 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()));
}

void sha256_transform::thread_ap_condition_5697() {
    ap_condition_5697 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()));
}

void sha256_transform::thread_ap_condition_6034() {
    ap_condition_6034 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()));
}

void sha256_transform::thread_ap_condition_6390() {
    ap_condition_6390 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()));
}

void sha256_transform::thread_ap_condition_870() {
    ap_condition_870 = (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0));
}

void sha256_transform::thread_ap_condition_901() {
    ap_condition_901 = (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0));
}

void sha256_transform::thread_ap_condition_9350() {
    ap_condition_9350 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter9_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9353() {
    ap_condition_9353 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter10_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9356() {
    ap_condition_9356 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter10_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9359() {
    ap_condition_9359 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter10_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9364() {
    ap_condition_9364 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter10_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9367() {
    ap_condition_9367 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter11_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9370() {
    ap_condition_9370 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter11_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9373() {
    ap_condition_9373 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter11_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9378() {
    ap_condition_9378 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter11_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9381() {
    ap_condition_9381 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter12_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9384() {
    ap_condition_9384 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter12_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9387() {
    ap_condition_9387 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter12_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9392() {
    ap_condition_9392 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter12_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9395() {
    ap_condition_9395 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter13_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9398() {
    ap_condition_9398 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter13_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9401() {
    ap_condition_9401 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter13_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9406() {
    ap_condition_9406 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter13_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9409() {
    ap_condition_9409 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter14_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9412() {
    ap_condition_9412 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter14_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9415() {
    ap_condition_9415 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter14_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9420() {
    ap_condition_9420 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter14_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9423() {
    ap_condition_9423 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter15_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9426() {
    ap_condition_9426 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter15_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9429() {
    ap_condition_9429 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter15_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9435() {
    ap_condition_9435 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter15_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()));
}

void sha256_transform::thread_ap_condition_9440() {
    ap_condition_9440 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter1_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9443() {
    ap_condition_9443 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter1_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9446() {
    ap_condition_9446 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter1_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9451() {
    ap_condition_9451 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter2_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9454() {
    ap_condition_9454 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter2_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9457() {
    ap_condition_9457 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter2_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9462() {
    ap_condition_9462 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter3_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9465() {
    ap_condition_9465 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter3_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9468() {
    ap_condition_9468 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter3_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9473() {
    ap_condition_9473 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter4_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9476() {
    ap_condition_9476 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter4_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9479() {
    ap_condition_9479 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter4_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9484() {
    ap_condition_9484 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter5_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9487() {
    ap_condition_9487 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter5_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9490() {
    ap_condition_9490 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter5_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9495() {
    ap_condition_9495 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter6_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9498() {
    ap_condition_9498 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter6_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9501() {
    ap_condition_9501 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter6_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9506() {
    ap_condition_9506 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter7_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9509() {
    ap_condition_9509 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter7_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9512() {
    ap_condition_9512 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter7_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9517() {
    ap_condition_9517 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter8_reg.read()));
}

void sha256_transform::thread_ap_condition_9520() {
    ap_condition_9520 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter8_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9523() {
    ap_condition_9523 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter8_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9526() {
    ap_condition_9526 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter8_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9531() {
    ap_condition_9531 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter8_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9534() {
    ap_condition_9534 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter9_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9537() {
    ap_condition_9537 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter9_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_9540() {
    ap_condition_9540 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && esl_seteq<1,1,1>(trunc_ln114_reg_9300_pp0_iter9_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_964() {
    ap_condition_964 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0));
}

void sha256_transform::thread_ap_condition_995() {
    ap_condition_995 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0));
}

void sha256_transform::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void sha256_transform::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void sha256_transform::thread_ap_enable_reg_pp0_iter0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read())) {
        ap_enable_reg_pp0_iter0 = ap_start.read();
    } else {
        ap_enable_reg_pp0_iter0 = ap_enable_reg_pp0_iter0_reg.read();
    }
}

void sha256_transform::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void sha256_transform::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter16.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void sha256_transform::thread_ap_idle_pp0_0to15() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter15.read()))) {
        ap_idle_pp0_0to15 = ap_const_logic_1;
    } else {
        ap_idle_pp0_0to15 = ap_const_logic_0;
    }
}

void sha256_transform::thread_ap_idle_pp0_1to16() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter16.read()))) {
        ap_idle_pp0_1to16 = ap_const_logic_1;
    } else {
        ap_idle_pp0_1to16 = ap_const_logic_0;
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_0_phi_fu_914_p4() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_0_phi_fu_914_p4 = add_ln128_reg_9449.read();
    } else {
        ap_phi_mux_a_1_0_phi_fu_914_p4 = ap_const_lv32_0;
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_10_phi_fu_1522_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_10_phi_fu_1522_p4 = add_ln128_10_reg_10439.read();
    } else {
        ap_phi_mux_a_1_10_phi_fu_1522_p4 = ap_phi_reg_pp0_iter2_a_1_10_reg_1518.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_11_phi_fu_1583_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_11_phi_fu_1583_p4 = add_ln128_11_reg_10522.read();
    } else {
        ap_phi_mux_a_1_11_phi_fu_1583_p4 = ap_phi_reg_pp0_iter3_a_1_11_reg_1579.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_12_phi_fu_1644_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_12_phi_fu_1644_p4 = add_ln128_12_reg_10586.read();
    } else {
        ap_phi_mux_a_1_12_phi_fu_1644_p4 = ap_phi_reg_pp0_iter3_a_1_12_reg_1640.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_13_phi_fu_1705_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_13_phi_fu_1705_p4 = add_ln128_13_reg_10645.read();
    } else {
        ap_phi_mux_a_1_13_phi_fu_1705_p4 = ap_phi_reg_pp0_iter3_a_1_13_reg_1701.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_14_phi_fu_1766_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_14_phi_fu_1766_p4 = add_ln128_14_reg_10701.read();
    } else {
        ap_phi_mux_a_1_14_phi_fu_1766_p4 = ap_phi_reg_pp0_iter3_a_1_14_reg_1762.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_15_phi_fu_1827_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_15_phi_fu_1827_p4 = add_ln128_15_reg_10736.read();
    } else {
        ap_phi_mux_a_1_15_phi_fu_1827_p4 = ap_phi_reg_pp0_iter4_a_1_15_reg_1823.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_16_phi_fu_1888_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_16_phi_fu_1888_p4 = add_ln128_16_reg_10756.read();
    } else {
        ap_phi_mux_a_1_16_phi_fu_1888_p4 = ap_phi_reg_pp0_iter4_a_1_16_reg_1884.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_17_phi_fu_1949_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_17_phi_fu_1949_p4 = add_ln128_17_reg_10771.read();
    } else {
        ap_phi_mux_a_1_17_phi_fu_1949_p4 = ap_phi_reg_pp0_iter4_a_1_17_reg_1945.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_18_phi_fu_2010_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_18_phi_fu_2010_p4 = add_ln128_18_reg_10786.read();
    } else {
        ap_phi_mux_a_1_18_phi_fu_2010_p4 = ap_phi_reg_pp0_iter4_a_1_18_reg_2006.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_19_phi_fu_2071_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter5_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_19_phi_fu_2071_p4 = add_ln128_19_reg_10801.read();
    } else {
        ap_phi_mux_a_1_19_phi_fu_2071_p4 = ap_phi_reg_pp0_iter5_a_1_19_reg_2067.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_1_phi_fu_973_p4() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_1_phi_fu_973_p4 = add_ln128_1_reg_9588.read();
    } else {
        ap_phi_mux_a_1_1_phi_fu_973_p4 = ap_const_lv32_0;
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_20_phi_fu_2132_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter5_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_20_phi_fu_2132_p4 = add_ln128_20_reg_10816.read();
    } else {
        ap_phi_mux_a_1_20_phi_fu_2132_p4 = ap_phi_reg_pp0_iter5_a_1_20_reg_2128.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_21_phi_fu_2193_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter5_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_21_phi_fu_2193_p4 = add_ln128_21_reg_10831.read();
    } else {
        ap_phi_mux_a_1_21_phi_fu_2193_p4 = ap_phi_reg_pp0_iter5_a_1_21_reg_2189.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_22_phi_fu_2254_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter5_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_22_phi_fu_2254_p4 = add_ln128_22_reg_10846.read();
    } else {
        ap_phi_mux_a_1_22_phi_fu_2254_p4 = ap_phi_reg_pp0_iter5_a_1_22_reg_2250.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_23_phi_fu_2315_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_23_phi_fu_2315_p4 = add_ln128_23_reg_10861.read();
    } else {
        ap_phi_mux_a_1_23_phi_fu_2315_p4 = ap_phi_reg_pp0_iter6_a_1_23_reg_2311.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_24_phi_fu_2376_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_24_phi_fu_2376_p4 = add_ln128_24_reg_10876.read();
    } else {
        ap_phi_mux_a_1_24_phi_fu_2376_p4 = ap_phi_reg_pp0_iter6_a_1_24_reg_2372.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_25_phi_fu_2437_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_25_phi_fu_2437_p4 = add_ln128_25_reg_10891.read();
    } else {
        ap_phi_mux_a_1_25_phi_fu_2437_p4 = ap_phi_reg_pp0_iter6_a_1_25_reg_2433.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_26_phi_fu_2498_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_26_phi_fu_2498_p4 = add_ln128_26_reg_10906.read();
    } else {
        ap_phi_mux_a_1_26_phi_fu_2498_p4 = ap_phi_reg_pp0_iter6_a_1_26_reg_2494.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_27_phi_fu_2559_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_27_phi_fu_2559_p4 = add_ln128_27_reg_10921.read();
    } else {
        ap_phi_mux_a_1_27_phi_fu_2559_p4 = ap_phi_reg_pp0_iter7_a_1_27_reg_2555.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_28_phi_fu_2620_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_28_phi_fu_2620_p4 = add_ln128_28_reg_10936.read();
    } else {
        ap_phi_mux_a_1_28_phi_fu_2620_p4 = ap_phi_reg_pp0_iter7_a_1_28_reg_2616.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_29_phi_fu_2681_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_29_phi_fu_2681_p4 = add_ln128_29_reg_10951.read();
    } else {
        ap_phi_mux_a_1_29_phi_fu_2681_p4 = ap_phi_reg_pp0_iter7_a_1_29_reg_2677.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_2_phi_fu_1034_p4() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_2_phi_fu_1034_p4 = add_ln128_2_reg_9730.read();
    } else {
        ap_phi_mux_a_1_2_phi_fu_1034_p4 = ap_const_lv32_0;
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_30_phi_fu_2742_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_30_phi_fu_2742_p4 = add_ln128_30_reg_10966.read();
    } else {
        ap_phi_mux_a_1_30_phi_fu_2742_p4 = ap_phi_reg_pp0_iter7_a_1_30_reg_2738.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_31_phi_fu_2803_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_31_phi_fu_2803_p4 = add_ln128_31_reg_10981.read();
    } else {
        ap_phi_mux_a_1_31_phi_fu_2803_p4 = ap_phi_reg_pp0_iter8_a_1_31_reg_2799.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_33_phi_fu_2925_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_33_phi_fu_2925_p4 = add_ln128_33_reg_11016.read();
    } else {
        ap_phi_mux_a_1_33_phi_fu_2925_p4 = ap_phi_reg_pp0_iter8_a_1_33_reg_2921.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_34_phi_fu_2986_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        ap_phi_mux_a_1_34_phi_fu_2986_p4 = add_ln128_34_reg_11031.read();
    } else {
        ap_phi_mux_a_1_34_phi_fu_2986_p4 = ap_phi_reg_pp0_iter9_a_1_34_reg_2982.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_35_phi_fu_3047_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter9_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_35_phi_fu_3047_p4 = add_ln128_35_reg_11046.read();
    } else {
        ap_phi_mux_a_1_35_phi_fu_3047_p4 = ap_phi_reg_pp0_iter9_a_1_35_reg_3043.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_36_phi_fu_3108_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter9_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_36_phi_fu_3108_p4 = add_ln128_36_reg_11061.read();
    } else {
        ap_phi_mux_a_1_36_phi_fu_3108_p4 = ap_phi_reg_pp0_iter9_a_1_36_reg_3104.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_37_phi_fu_3169_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter9_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_37_phi_fu_3169_p4 = add_ln128_37_reg_11076.read();
    } else {
        ap_phi_mux_a_1_37_phi_fu_3169_p4 = ap_phi_reg_pp0_iter9_a_1_37_reg_3165.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_38_phi_fu_3230_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter9_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ap_phi_mux_a_1_38_phi_fu_3230_p4 = add_ln128_38_reg_11091.read();
    } else {
        ap_phi_mux_a_1_38_phi_fu_3230_p4 = ap_phi_reg_pp0_iter10_a_1_38_reg_3226.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_39_phi_fu_3291_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter10_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_39_phi_fu_3291_p4 = add_ln128_39_reg_11106.read();
    } else {
        ap_phi_mux_a_1_39_phi_fu_3291_p4 = ap_phi_reg_pp0_iter10_a_1_39_reg_3287.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_3_phi_fu_1095_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_3_phi_fu_1095_p4 = add_ln128_3_reg_9843.read();
    } else {
        ap_phi_mux_a_1_3_phi_fu_1095_p4 = ap_phi_reg_pp0_iter1_a_1_3_reg_1091.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_40_phi_fu_3352_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter10_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_40_phi_fu_3352_p4 = add_ln128_40_reg_11121.read();
    } else {
        ap_phi_mux_a_1_40_phi_fu_3352_p4 = ap_phi_reg_pp0_iter10_a_1_40_reg_3348.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_41_phi_fu_3413_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter10_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_41_phi_fu_3413_p4 = add_ln128_41_reg_11136.read();
    } else {
        ap_phi_mux_a_1_41_phi_fu_3413_p4 = ap_phi_reg_pp0_iter10_a_1_41_reg_3409.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_42_phi_fu_3474_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter10_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ap_phi_mux_a_1_42_phi_fu_3474_p4 = add_ln128_42_reg_11151.read();
    } else {
        ap_phi_mux_a_1_42_phi_fu_3474_p4 = ap_phi_reg_pp0_iter11_a_1_42_reg_3470.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_43_phi_fu_3535_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter11_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_43_phi_fu_3535_p4 = add_ln128_43_reg_11166.read();
    } else {
        ap_phi_mux_a_1_43_phi_fu_3535_p4 = ap_phi_reg_pp0_iter11_a_1_43_reg_3531.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_44_phi_fu_3596_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter11_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_44_phi_fu_3596_p4 = add_ln128_44_reg_11181.read();
    } else {
        ap_phi_mux_a_1_44_phi_fu_3596_p4 = ap_phi_reg_pp0_iter11_a_1_44_reg_3592.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_45_phi_fu_3657_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter11_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_45_phi_fu_3657_p4 = add_ln128_45_reg_11196.read();
    } else {
        ap_phi_mux_a_1_45_phi_fu_3657_p4 = ap_phi_reg_pp0_iter11_a_1_45_reg_3653.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_46_phi_fu_3718_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter11_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        ap_phi_mux_a_1_46_phi_fu_3718_p4 = add_ln128_46_reg_11211.read();
    } else {
        ap_phi_mux_a_1_46_phi_fu_3718_p4 = ap_phi_reg_pp0_iter12_a_1_46_reg_3714.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_47_phi_fu_3779_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter12_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_47_phi_fu_3779_p4 = add_ln128_47_reg_11231.read();
    } else {
        ap_phi_mux_a_1_47_phi_fu_3779_p4 = ap_phi_reg_pp0_iter12_a_1_47_reg_3775.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_48_phi_fu_3840_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter12_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_48_phi_fu_3840_p4 = add_ln128_48_reg_11246.read();
    } else {
        ap_phi_mux_a_1_48_phi_fu_3840_p4 = ap_phi_reg_pp0_iter12_a_1_48_reg_3836.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_49_phi_fu_3901_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter12_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_49_phi_fu_3901_p4 = add_ln128_49_reg_11261.read();
    } else {
        ap_phi_mux_a_1_49_phi_fu_3901_p4 = ap_phi_reg_pp0_iter12_a_1_49_reg_3897.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_4_phi_fu_1156_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_4_phi_fu_1156_p4 = add_ln128_4_reg_9941.read();
    } else {
        ap_phi_mux_a_1_4_phi_fu_1156_p4 = ap_phi_reg_pp0_iter1_a_1_4_reg_1152.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_50_phi_fu_3962_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter12_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()))) {
        ap_phi_mux_a_1_50_phi_fu_3962_p4 = add_ln128_50_reg_11276.read();
    } else {
        ap_phi_mux_a_1_50_phi_fu_3962_p4 = ap_phi_reg_pp0_iter13_a_1_50_reg_3958.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_51_phi_fu_4023_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter13_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_51_phi_fu_4023_p4 = add_ln128_51_reg_11291.read();
    } else {
        ap_phi_mux_a_1_51_phi_fu_4023_p4 = ap_phi_reg_pp0_iter13_a_1_51_reg_4019.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_52_phi_fu_4084_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter13_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_52_phi_fu_4084_p4 = add_ln128_52_reg_11306.read();
    } else {
        ap_phi_mux_a_1_52_phi_fu_4084_p4 = ap_phi_reg_pp0_iter13_a_1_52_reg_4080.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_53_phi_fu_4145_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter13_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_53_phi_fu_4145_p4 = add_ln128_53_reg_11321.read();
    } else {
        ap_phi_mux_a_1_53_phi_fu_4145_p4 = ap_phi_reg_pp0_iter13_a_1_53_reg_4141.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_54_phi_fu_4206_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter13_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        ap_phi_mux_a_1_54_phi_fu_4206_p4 = add_ln128_54_reg_11336.read();
    } else {
        ap_phi_mux_a_1_54_phi_fu_4206_p4 = ap_phi_reg_pp0_iter14_a_1_54_reg_4202.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_55_phi_fu_4267_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter14_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_55_phi_fu_4267_p4 = add_ln128_55_reg_11351.read();
    } else {
        ap_phi_mux_a_1_55_phi_fu_4267_p4 = ap_phi_reg_pp0_iter14_a_1_55_reg_4263.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_56_phi_fu_4328_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter14_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_56_phi_fu_4328_p4 = add_ln128_56_reg_11366.read();
    } else {
        ap_phi_mux_a_1_56_phi_fu_4328_p4 = ap_phi_reg_pp0_iter14_a_1_56_reg_4324.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_57_phi_fu_4389_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter14_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_57_phi_fu_4389_p4 = add_ln128_57_reg_11381.read();
    } else {
        ap_phi_mux_a_1_57_phi_fu_4389_p4 = ap_phi_reg_pp0_iter14_a_1_57_reg_4385.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_58_phi_fu_4450_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter14_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()))) {
        ap_phi_mux_a_1_58_phi_fu_4450_p4 = add_ln128_58_reg_11396.read();
    } else {
        ap_phi_mux_a_1_58_phi_fu_4450_p4 = ap_phi_reg_pp0_iter15_a_1_58_reg_4446.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_59_phi_fu_4511_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter15_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_59_phi_fu_4511_p4 = add_ln128_59_reg_11411.read();
    } else {
        ap_phi_mux_a_1_59_phi_fu_4511_p4 = ap_phi_reg_pp0_iter15_a_1_59_reg_4507.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_5_phi_fu_1217_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_5_phi_fu_1217_p4 = add_ln128_5_reg_10024.read();
    } else {
        ap_phi_mux_a_1_5_phi_fu_1217_p4 = ap_phi_reg_pp0_iter1_a_1_5_reg_1213.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_60_phi_fu_4572_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter15_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_60_phi_fu_4572_p4 = add_ln128_60_reg_11426.read();
    } else {
        ap_phi_mux_a_1_60_phi_fu_4572_p4 = ap_phi_reg_pp0_iter15_a_1_60_reg_4568.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_61_phi_fu_4633_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter15_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_61_phi_fu_4633_p4 = add_ln128_61_reg_11441.read();
    } else {
        ap_phi_mux_a_1_61_phi_fu_4633_p4 = ap_phi_reg_pp0_iter15_a_1_61_reg_4629.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_63_phi_fu_4750_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter16_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_63_phi_fu_4750_p4 = add_ln128_63_fu_9144_p2.read();
    } else {
        ap_phi_mux_a_1_63_phi_fu_4750_p4 = ap_phi_reg_pp0_iter16_a_1_63_reg_4746.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_6_phi_fu_1278_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_6_phi_fu_1278_p4 = add_ln128_6_reg_10107.read();
    } else {
        ap_phi_mux_a_1_6_phi_fu_1278_p4 = ap_phi_reg_pp0_iter1_a_1_6_reg_1274.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_7_phi_fu_1339_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_7_phi_fu_1339_p4 = add_ln128_7_reg_10190.read();
    } else {
        ap_phi_mux_a_1_7_phi_fu_1339_p4 = ap_phi_reg_pp0_iter2_a_1_7_reg_1335.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_8_phi_fu_1400_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_8_phi_fu_1400_p4 = add_ln128_8_reg_10273.read();
    } else {
        ap_phi_mux_a_1_8_phi_fu_1400_p4 = ap_phi_reg_pp0_iter2_a_1_8_reg_1396.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_9_phi_fu_1461_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_9_phi_fu_1461_p4 = add_ln128_9_reg_10356.read();
    } else {
        ap_phi_mux_a_1_9_phi_fu_1461_p4 = ap_phi_reg_pp0_iter2_a_1_9_reg_1457.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_0_phi_fu_902_p4() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_0_phi_fu_902_p4 = ctx_state_0_read_1_reg_9254.read();
    } else {
        ap_phi_mux_b_1_0_phi_fu_902_p4 = ap_const_lv32_0;
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_10_phi_fu_1509_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_10_phi_fu_1509_p4 = a_1_9_reg_1457.read();
    } else {
        ap_phi_mux_b_1_10_phi_fu_1509_p4 = ap_phi_reg_pp0_iter2_b_1_10_reg_1505.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_11_phi_fu_1570_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_11_phi_fu_1570_p4 = a_1_10_reg_1518.read();
    } else {
        ap_phi_mux_b_1_11_phi_fu_1570_p4 = ap_phi_reg_pp0_iter3_b_1_11_reg_1566.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_12_phi_fu_1631_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_12_phi_fu_1631_p4 = a_1_11_reg_1579.read();
    } else {
        ap_phi_mux_b_1_12_phi_fu_1631_p4 = ap_phi_reg_pp0_iter3_b_1_12_reg_1627.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_13_phi_fu_1692_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_13_phi_fu_1692_p4 = a_1_12_reg_1640.read();
    } else {
        ap_phi_mux_b_1_13_phi_fu_1692_p4 = ap_phi_reg_pp0_iter3_b_1_13_reg_1688.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_14_phi_fu_1753_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_14_phi_fu_1753_p4 = a_1_13_reg_1701.read();
    } else {
        ap_phi_mux_b_1_14_phi_fu_1753_p4 = ap_phi_reg_pp0_iter3_b_1_14_reg_1749.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_15_phi_fu_1814_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_15_phi_fu_1814_p4 = a_1_14_reg_1762.read();
    } else {
        ap_phi_mux_b_1_15_phi_fu_1814_p4 = ap_phi_reg_pp0_iter4_b_1_15_reg_1810.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_16_phi_fu_1875_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_16_phi_fu_1875_p4 = a_1_15_reg_1823.read();
    } else {
        ap_phi_mux_b_1_16_phi_fu_1875_p4 = ap_phi_reg_pp0_iter4_b_1_16_reg_1871.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_17_phi_fu_1936_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_17_phi_fu_1936_p4 = a_1_16_reg_1884.read();
    } else {
        ap_phi_mux_b_1_17_phi_fu_1936_p4 = ap_phi_reg_pp0_iter4_b_1_17_reg_1932.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_18_phi_fu_1997_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_18_phi_fu_1997_p4 = a_1_17_reg_1945.read();
    } else {
        ap_phi_mux_b_1_18_phi_fu_1997_p4 = ap_phi_reg_pp0_iter4_b_1_18_reg_1993.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_19_phi_fu_2058_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter5_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_19_phi_fu_2058_p4 = a_1_18_reg_2006.read();
    } else {
        ap_phi_mux_b_1_19_phi_fu_2058_p4 = ap_phi_reg_pp0_iter5_b_1_19_reg_2054.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_1_phi_fu_960_p4() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_1_phi_fu_960_p4 = a_1_0_reg_910.read();
    } else {
        ap_phi_mux_b_1_1_phi_fu_960_p4 = ap_const_lv32_0;
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_20_phi_fu_2119_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter5_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_20_phi_fu_2119_p4 = a_1_19_reg_2067.read();
    } else {
        ap_phi_mux_b_1_20_phi_fu_2119_p4 = ap_phi_reg_pp0_iter5_b_1_20_reg_2115.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_21_phi_fu_2180_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter5_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_21_phi_fu_2180_p4 = a_1_20_reg_2128.read();
    } else {
        ap_phi_mux_b_1_21_phi_fu_2180_p4 = ap_phi_reg_pp0_iter5_b_1_21_reg_2176.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_22_phi_fu_2241_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter5_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_22_phi_fu_2241_p4 = a_1_21_reg_2189.read();
    } else {
        ap_phi_mux_b_1_22_phi_fu_2241_p4 = ap_phi_reg_pp0_iter5_b_1_22_reg_2237.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_23_phi_fu_2302_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_23_phi_fu_2302_p4 = a_1_22_reg_2250.read();
    } else {
        ap_phi_mux_b_1_23_phi_fu_2302_p4 = ap_phi_reg_pp0_iter6_b_1_23_reg_2298.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_24_phi_fu_2363_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_24_phi_fu_2363_p4 = a_1_23_reg_2311.read();
    } else {
        ap_phi_mux_b_1_24_phi_fu_2363_p4 = ap_phi_reg_pp0_iter6_b_1_24_reg_2359.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_25_phi_fu_2424_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_25_phi_fu_2424_p4 = a_1_24_reg_2372.read();
    } else {
        ap_phi_mux_b_1_25_phi_fu_2424_p4 = ap_phi_reg_pp0_iter6_b_1_25_reg_2420.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_26_phi_fu_2485_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_26_phi_fu_2485_p4 = a_1_25_reg_2433.read();
    } else {
        ap_phi_mux_b_1_26_phi_fu_2485_p4 = ap_phi_reg_pp0_iter6_b_1_26_reg_2481.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_27_phi_fu_2546_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_27_phi_fu_2546_p4 = a_1_26_reg_2494.read();
    } else {
        ap_phi_mux_b_1_27_phi_fu_2546_p4 = ap_phi_reg_pp0_iter7_b_1_27_reg_2542.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_28_phi_fu_2607_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_28_phi_fu_2607_p4 = a_1_27_reg_2555.read();
    } else {
        ap_phi_mux_b_1_28_phi_fu_2607_p4 = ap_phi_reg_pp0_iter7_b_1_28_reg_2603.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_29_phi_fu_2668_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_29_phi_fu_2668_p4 = a_1_28_reg_2616.read();
    } else {
        ap_phi_mux_b_1_29_phi_fu_2668_p4 = ap_phi_reg_pp0_iter7_b_1_29_reg_2664.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_2_phi_fu_1021_p4() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_2_phi_fu_1021_p4 = a_1_1_reg_969.read();
    } else {
        ap_phi_mux_b_1_2_phi_fu_1021_p4 = ap_const_lv32_0;
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_30_phi_fu_2729_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_30_phi_fu_2729_p4 = a_1_29_reg_2677.read();
    } else {
        ap_phi_mux_b_1_30_phi_fu_2729_p4 = ap_phi_reg_pp0_iter7_b_1_30_reg_2725.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_31_phi_fu_2790_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_31_phi_fu_2790_p4 = a_1_30_reg_2738.read();
    } else {
        ap_phi_mux_b_1_31_phi_fu_2790_p4 = ap_phi_reg_pp0_iter8_b_1_31_reg_2786.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_33_phi_fu_2912_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_33_phi_fu_2912_p4 = a_1_32_reg_2860.read();
    } else {
        ap_phi_mux_b_1_33_phi_fu_2912_p4 = ap_phi_reg_pp0_iter8_b_1_33_reg_2908.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_34_phi_fu_2973_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        ap_phi_mux_b_1_34_phi_fu_2973_p4 = a_1_33_reg_2921.read();
    } else {
        ap_phi_mux_b_1_34_phi_fu_2973_p4 = ap_phi_reg_pp0_iter9_b_1_34_reg_2969.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_35_phi_fu_3034_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter9_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_35_phi_fu_3034_p4 = a_1_34_reg_2982.read();
    } else {
        ap_phi_mux_b_1_35_phi_fu_3034_p4 = ap_phi_reg_pp0_iter9_b_1_35_reg_3030.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_36_phi_fu_3095_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter9_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_36_phi_fu_3095_p4 = a_1_35_reg_3043.read();
    } else {
        ap_phi_mux_b_1_36_phi_fu_3095_p4 = ap_phi_reg_pp0_iter9_b_1_36_reg_3091.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_37_phi_fu_3156_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter9_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_37_phi_fu_3156_p4 = a_1_36_reg_3104.read();
    } else {
        ap_phi_mux_b_1_37_phi_fu_3156_p4 = ap_phi_reg_pp0_iter9_b_1_37_reg_3152.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_38_phi_fu_3217_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter9_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ap_phi_mux_b_1_38_phi_fu_3217_p4 = a_1_37_reg_3165.read();
    } else {
        ap_phi_mux_b_1_38_phi_fu_3217_p4 = ap_phi_reg_pp0_iter10_b_1_38_reg_3213.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_39_phi_fu_3278_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter10_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_39_phi_fu_3278_p4 = a_1_38_reg_3226.read();
    } else {
        ap_phi_mux_b_1_39_phi_fu_3278_p4 = ap_phi_reg_pp0_iter10_b_1_39_reg_3274.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_3_phi_fu_1082_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_3_phi_fu_1082_p4 = a_1_2_reg_1030.read();
    } else {
        ap_phi_mux_b_1_3_phi_fu_1082_p4 = ap_phi_reg_pp0_iter1_b_1_3_reg_1078.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_40_phi_fu_3339_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter10_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_40_phi_fu_3339_p4 = a_1_39_reg_3287.read();
    } else {
        ap_phi_mux_b_1_40_phi_fu_3339_p4 = ap_phi_reg_pp0_iter10_b_1_40_reg_3335.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_41_phi_fu_3400_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter10_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_41_phi_fu_3400_p4 = a_1_40_reg_3348.read();
    } else {
        ap_phi_mux_b_1_41_phi_fu_3400_p4 = ap_phi_reg_pp0_iter10_b_1_41_reg_3396.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_42_phi_fu_3461_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter10_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ap_phi_mux_b_1_42_phi_fu_3461_p4 = a_1_41_reg_3409.read();
    } else {
        ap_phi_mux_b_1_42_phi_fu_3461_p4 = ap_phi_reg_pp0_iter11_b_1_42_reg_3457.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_43_phi_fu_3522_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter11_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_43_phi_fu_3522_p4 = a_1_42_reg_3470.read();
    } else {
        ap_phi_mux_b_1_43_phi_fu_3522_p4 = ap_phi_reg_pp0_iter11_b_1_43_reg_3518.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_44_phi_fu_3583_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter11_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_44_phi_fu_3583_p4 = a_1_43_reg_3531.read();
    } else {
        ap_phi_mux_b_1_44_phi_fu_3583_p4 = ap_phi_reg_pp0_iter11_b_1_44_reg_3579.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_45_phi_fu_3644_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter11_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_45_phi_fu_3644_p4 = a_1_44_reg_3592.read();
    } else {
        ap_phi_mux_b_1_45_phi_fu_3644_p4 = ap_phi_reg_pp0_iter11_b_1_45_reg_3640.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_46_phi_fu_3705_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter11_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        ap_phi_mux_b_1_46_phi_fu_3705_p4 = a_1_45_reg_3653.read();
    } else {
        ap_phi_mux_b_1_46_phi_fu_3705_p4 = ap_phi_reg_pp0_iter12_b_1_46_reg_3701.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_47_phi_fu_3766_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter12_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_47_phi_fu_3766_p4 = a_1_46_reg_3714.read();
    } else {
        ap_phi_mux_b_1_47_phi_fu_3766_p4 = ap_phi_reg_pp0_iter12_b_1_47_reg_3762.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_48_phi_fu_3827_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter12_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_48_phi_fu_3827_p4 = a_1_47_reg_3775.read();
    } else {
        ap_phi_mux_b_1_48_phi_fu_3827_p4 = ap_phi_reg_pp0_iter12_b_1_48_reg_3823.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_49_phi_fu_3888_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter12_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_49_phi_fu_3888_p4 = a_1_48_reg_3836.read();
    } else {
        ap_phi_mux_b_1_49_phi_fu_3888_p4 = ap_phi_reg_pp0_iter12_b_1_49_reg_3884.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_4_phi_fu_1143_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_4_phi_fu_1143_p4 = a_1_3_reg_1091.read();
    } else {
        ap_phi_mux_b_1_4_phi_fu_1143_p4 = ap_phi_reg_pp0_iter1_b_1_4_reg_1139.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_50_phi_fu_3949_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter12_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()))) {
        ap_phi_mux_b_1_50_phi_fu_3949_p4 = a_1_49_reg_3897.read();
    } else {
        ap_phi_mux_b_1_50_phi_fu_3949_p4 = ap_phi_reg_pp0_iter13_b_1_50_reg_3945.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_51_phi_fu_4010_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter13_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_51_phi_fu_4010_p4 = a_1_50_reg_3958.read();
    } else {
        ap_phi_mux_b_1_51_phi_fu_4010_p4 = ap_phi_reg_pp0_iter13_b_1_51_reg_4006.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_52_phi_fu_4071_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter13_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_52_phi_fu_4071_p4 = a_1_51_reg_4019.read();
    } else {
        ap_phi_mux_b_1_52_phi_fu_4071_p4 = ap_phi_reg_pp0_iter13_b_1_52_reg_4067.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_53_phi_fu_4132_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter13_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_53_phi_fu_4132_p4 = a_1_52_reg_4080.read();
    } else {
        ap_phi_mux_b_1_53_phi_fu_4132_p4 = ap_phi_reg_pp0_iter13_b_1_53_reg_4128.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_54_phi_fu_4193_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter13_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        ap_phi_mux_b_1_54_phi_fu_4193_p4 = a_1_53_reg_4141.read();
    } else {
        ap_phi_mux_b_1_54_phi_fu_4193_p4 = ap_phi_reg_pp0_iter14_b_1_54_reg_4189.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_55_phi_fu_4254_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter14_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_55_phi_fu_4254_p4 = a_1_54_reg_4202.read();
    } else {
        ap_phi_mux_b_1_55_phi_fu_4254_p4 = ap_phi_reg_pp0_iter14_b_1_55_reg_4250.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_56_phi_fu_4315_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter14_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_56_phi_fu_4315_p4 = a_1_55_reg_4263.read();
    } else {
        ap_phi_mux_b_1_56_phi_fu_4315_p4 = ap_phi_reg_pp0_iter14_b_1_56_reg_4311.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_57_phi_fu_4376_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter14_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_57_phi_fu_4376_p4 = a_1_56_reg_4324.read();
    } else {
        ap_phi_mux_b_1_57_phi_fu_4376_p4 = ap_phi_reg_pp0_iter14_b_1_57_reg_4372.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_58_phi_fu_4437_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter14_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()))) {
        ap_phi_mux_b_1_58_phi_fu_4437_p4 = a_1_57_reg_4385.read();
    } else {
        ap_phi_mux_b_1_58_phi_fu_4437_p4 = ap_phi_reg_pp0_iter15_b_1_58_reg_4433.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_59_phi_fu_4498_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter15_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_59_phi_fu_4498_p4 = a_1_58_reg_4446.read();
    } else {
        ap_phi_mux_b_1_59_phi_fu_4498_p4 = ap_phi_reg_pp0_iter15_b_1_59_reg_4494.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_5_phi_fu_1204_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_5_phi_fu_1204_p4 = a_1_4_reg_1152.read();
    } else {
        ap_phi_mux_b_1_5_phi_fu_1204_p4 = ap_phi_reg_pp0_iter1_b_1_5_reg_1200.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_60_phi_fu_4559_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter15_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_60_phi_fu_4559_p4 = a_1_59_reg_4507.read();
    } else {
        ap_phi_mux_b_1_60_phi_fu_4559_p4 = ap_phi_reg_pp0_iter15_b_1_60_reg_4555.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_61_phi_fu_4620_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter15_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_61_phi_fu_4620_p4 = a_1_60_reg_4568.read();
    } else {
        ap_phi_mux_b_1_61_phi_fu_4620_p4 = ap_phi_reg_pp0_iter15_b_1_61_reg_4616.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_63_phi_fu_4738_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter16_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_63_phi_fu_4738_p4 = a_1_62_reg_4689.read();
    } else {
        ap_phi_mux_b_1_63_phi_fu_4738_p4 = ap_phi_reg_pp0_iter16_b_1_63_reg_4734.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_6_phi_fu_1265_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_6_phi_fu_1265_p4 = a_1_5_reg_1213.read();
    } else {
        ap_phi_mux_b_1_6_phi_fu_1265_p4 = ap_phi_reg_pp0_iter1_b_1_6_reg_1261.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_7_phi_fu_1326_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_7_phi_fu_1326_p4 = a_1_6_reg_1274.read();
    } else {
        ap_phi_mux_b_1_7_phi_fu_1326_p4 = ap_phi_reg_pp0_iter2_b_1_7_reg_1322.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_8_phi_fu_1387_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_8_phi_fu_1387_p4 = a_1_7_reg_1335.read();
    } else {
        ap_phi_mux_b_1_8_phi_fu_1387_p4 = ap_phi_reg_pp0_iter2_b_1_8_reg_1383.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_9_phi_fu_1448_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_9_phi_fu_1448_p4 = a_1_8_reg_1396.read();
    } else {
        ap_phi_mux_b_1_9_phi_fu_1448_p4 = ap_phi_reg_pp0_iter2_b_1_9_reg_1444.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_0_phi_fu_890_p4() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_0_phi_fu_890_p4 = ctx_state_1_read_1_reg_9248.read();
    } else {
        ap_phi_mux_c_1_0_phi_fu_890_p4 = ap_const_lv32_0;
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_10_phi_fu_1496_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_10_phi_fu_1496_p4 = b_1_9_reg_1444.read();
    } else {
        ap_phi_mux_c_1_10_phi_fu_1496_p4 = ap_phi_reg_pp0_iter2_c_1_10_reg_1492.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_11_phi_fu_1557_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_11_phi_fu_1557_p4 = b_1_10_reg_1505.read();
    } else {
        ap_phi_mux_c_1_11_phi_fu_1557_p4 = ap_phi_reg_pp0_iter3_c_1_11_reg_1553.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_12_phi_fu_1618_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_12_phi_fu_1618_p4 = b_1_11_reg_1566.read();
    } else {
        ap_phi_mux_c_1_12_phi_fu_1618_p4 = ap_phi_reg_pp0_iter3_c_1_12_reg_1614.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_13_phi_fu_1679_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_13_phi_fu_1679_p4 = b_1_12_reg_1627.read();
    } else {
        ap_phi_mux_c_1_13_phi_fu_1679_p4 = ap_phi_reg_pp0_iter3_c_1_13_reg_1675.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_14_phi_fu_1740_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_14_phi_fu_1740_p4 = b_1_13_reg_1688.read();
    } else {
        ap_phi_mux_c_1_14_phi_fu_1740_p4 = ap_phi_reg_pp0_iter3_c_1_14_reg_1736.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_15_phi_fu_1801_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_15_phi_fu_1801_p4 = b_1_14_reg_1749.read();
    } else {
        ap_phi_mux_c_1_15_phi_fu_1801_p4 = ap_phi_reg_pp0_iter4_c_1_15_reg_1797.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_16_phi_fu_1862_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_16_phi_fu_1862_p4 = b_1_15_reg_1810.read();
    } else {
        ap_phi_mux_c_1_16_phi_fu_1862_p4 = ap_phi_reg_pp0_iter4_c_1_16_reg_1858.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_17_phi_fu_1923_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_17_phi_fu_1923_p4 = b_1_16_reg_1871.read();
    } else {
        ap_phi_mux_c_1_17_phi_fu_1923_p4 = ap_phi_reg_pp0_iter4_c_1_17_reg_1919.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_18_phi_fu_1984_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_18_phi_fu_1984_p4 = b_1_17_reg_1932.read();
    } else {
        ap_phi_mux_c_1_18_phi_fu_1984_p4 = ap_phi_reg_pp0_iter4_c_1_18_reg_1980.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_19_phi_fu_2045_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter5_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_19_phi_fu_2045_p4 = b_1_18_reg_1993.read();
    } else {
        ap_phi_mux_c_1_19_phi_fu_2045_p4 = ap_phi_reg_pp0_iter5_c_1_19_reg_2041.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_1_phi_fu_947_p4() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_1_phi_fu_947_p4 = b_1_0_reg_898.read();
    } else {
        ap_phi_mux_c_1_1_phi_fu_947_p4 = ap_const_lv32_0;
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_20_phi_fu_2106_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter5_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_20_phi_fu_2106_p4 = b_1_19_reg_2054.read();
    } else {
        ap_phi_mux_c_1_20_phi_fu_2106_p4 = ap_phi_reg_pp0_iter5_c_1_20_reg_2102.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_21_phi_fu_2167_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter5_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_21_phi_fu_2167_p4 = b_1_20_reg_2115.read();
    } else {
        ap_phi_mux_c_1_21_phi_fu_2167_p4 = ap_phi_reg_pp0_iter5_c_1_21_reg_2163.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_22_phi_fu_2228_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter5_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_22_phi_fu_2228_p4 = b_1_21_reg_2176.read();
    } else {
        ap_phi_mux_c_1_22_phi_fu_2228_p4 = ap_phi_reg_pp0_iter5_c_1_22_reg_2224.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_23_phi_fu_2289_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_23_phi_fu_2289_p4 = b_1_22_reg_2237.read();
    } else {
        ap_phi_mux_c_1_23_phi_fu_2289_p4 = ap_phi_reg_pp0_iter6_c_1_23_reg_2285.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_24_phi_fu_2350_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_24_phi_fu_2350_p4 = b_1_23_reg_2298.read();
    } else {
        ap_phi_mux_c_1_24_phi_fu_2350_p4 = ap_phi_reg_pp0_iter6_c_1_24_reg_2346.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_25_phi_fu_2411_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_25_phi_fu_2411_p4 = b_1_24_reg_2359.read();
    } else {
        ap_phi_mux_c_1_25_phi_fu_2411_p4 = ap_phi_reg_pp0_iter6_c_1_25_reg_2407.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_26_phi_fu_2472_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_26_phi_fu_2472_p4 = b_1_25_reg_2420.read();
    } else {
        ap_phi_mux_c_1_26_phi_fu_2472_p4 = ap_phi_reg_pp0_iter6_c_1_26_reg_2468.read();
    }
}

void sha256_transform::thread_ap_phi_mux_c_1_27_phi_fu_2533_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln114_reg_9300_pp0_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_1_27_phi_fu_2533_p4 = b_1_26_reg_2481.read();
    } else {
        ap_phi_mux_c_1_27_phi_fu_2533_p4 = ap_phi_reg_pp0_iter7_c_1_27_reg_2529.read();
    }
}

}

