#include "sha256_transform.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void sha256_transform::thread_add_ln100_fu_4859_p2() {
    add_ln100_fu_4859_p2 = (!add_ln94_60_reg_7238.read().is_01() || !ctx_state_3_read_1_reg_5066_pp0_iter11_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_60_reg_7238.read()) + sc_biguint<32>(ctx_state_3_read_1_reg_5066_pp0_iter11_reg.read()));
}

void sha256_transform::thread_add_ln101_1_fu_4863_p2() {
    add_ln101_1_fu_4863_p2 = (!add_ln94_59_reg_7216.read().is_01() || !ctx_state_4_read_1_reg_4931_pp0_iter12_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_59_reg_7216.read()) + sc_biguint<32>(ctx_state_4_read_1_reg_4931_pp0_iter12_reg.read()));
}

void sha256_transform::thread_add_ln101_fu_4867_p2() {
    add_ln101_fu_4867_p2 = (!add_ln101_1_fu_4863_p2.read().is_01() || !add_ln85_255_fu_4829_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln101_1_fu_4863_p2.read()) + sc_biguint<32>(add_ln85_255_fu_4829_p2.read()));
}

void sha256_transform::thread_add_ln102_fu_4812_p2() {
    add_ln102_fu_4812_p2 = (!add_ln90_62_fu_4785_p2.read().is_01() || !ctx_state_5_read_1_reg_4924_pp0_iter12_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln90_62_fu_4785_p2.read()) + sc_biguint<32>(ctx_state_5_read_1_reg_4924_pp0_iter12_reg.read()));
}

void sha256_transform::thread_add_ln103_fu_4817_p2() {
    add_ln103_fu_4817_p2 = (!add_ln90_61_reg_7250.read().is_01() || !ctx_state_6_read_1_reg_4918_pp0_iter12_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln90_61_reg_7250.read()) + sc_biguint<32>(ctx_state_6_read_1_reg_4918_pp0_iter12_reg.read()));
}

void sha256_transform::thread_add_ln104_fu_4821_p2() {
    add_ln104_fu_4821_p2 = (!add_ln90_60_reg_7231.read().is_01() || !ctx_state_7_read_1_reg_5061_pp0_iter11_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln90_60_reg_7231.read()) + sc_biguint<32>(ctx_state_7_read_1_reg_5061_pp0_iter11_reg.read()));
}

void sha256_transform::thread_add_ln72_100_fu_2644_p2() {
    add_ln72_100_fu_2644_p2 = (!m_42_reg_6071.read().is_01() || !m_33_reg_5867.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_42_reg_6071.read()) + sc_biguint<32>(m_33_reg_5867.read()));
}

void sha256_transform::thread_add_ln72_102_fu_2676_p2() {
    add_ln72_102_fu_2676_p2 = (!grp_SIG1_fu_1112_ap_return.read().is_01() || !tmp_1_33_reg_5932.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1112_ap_return.read()) + sc_biguint<32>(tmp_1_33_reg_5932.read()));
}

void sha256_transform::thread_add_ln72_103_fu_2681_p2() {
    add_ln72_103_fu_2681_p2 = (!m_43_reg_6078.read().is_01() || !m_34_reg_5913.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_43_reg_6078.read()) + sc_biguint<32>(m_34_reg_5913.read()));
}

void sha256_transform::thread_add_ln72_105_fu_2691_p2() {
    add_ln72_105_fu_2691_p2 = (!grp_SIG1_fu_1117_ap_return.read().is_01() || !tmp_1_34_reg_5972.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1117_ap_return.read()) + sc_biguint<32>(tmp_1_34_reg_5972.read()));
}

void sha256_transform::thread_add_ln72_106_fu_2696_p2() {
    add_ln72_106_fu_2696_p2 = (!m_44_reg_6101.read().is_01() || !m_35_reg_5920.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_44_reg_6101.read()) + sc_biguint<32>(m_35_reg_5920.read()));
}

void sha256_transform::thread_add_ln72_108_fu_2736_p2() {
    add_ln72_108_fu_2736_p2 = (!grp_SIG1_fu_1112_ap_return.read().is_01() || !tmp_1_35_reg_5977.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1112_ap_return.read()) + sc_biguint<32>(tmp_1_35_reg_5977.read()));
}

void sha256_transform::thread_add_ln72_109_fu_2741_p2() {
    add_ln72_109_fu_2741_p2 = (!m_45_reg_6108.read().is_01() || !m_36_reg_5958.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_45_reg_6108.read()) + sc_biguint<32>(m_36_reg_5958.read()));
}

void sha256_transform::thread_add_ln72_10_fu_1736_p2() {
    add_ln72_10_fu_1736_p2 = (!m_12_reg_5447.read().is_01() || !m_3_reg_5077.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_12_reg_5447.read()) + sc_biguint<32>(m_3_reg_5077.read()));
}

void sha256_transform::thread_add_ln72_111_fu_2751_p2() {
    add_ln72_111_fu_2751_p2 = (!grp_SIG1_fu_1117_ap_return.read().is_01() || !tmp_1_36_reg_6002.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1117_ap_return.read()) + sc_biguint<32>(tmp_1_36_reg_6002.read()));
}

void sha256_transform::thread_add_ln72_112_fu_2756_p2() {
    add_ln72_112_fu_2756_p2 = (!m_46_reg_6144.read().is_01() || !m_37_reg_5965.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_46_reg_6144.read()) + sc_biguint<32>(m_37_reg_5965.read()));
}

void sha256_transform::thread_add_ln72_114_fu_2795_p2() {
    add_ln72_114_fu_2795_p2 = (!grp_SIG1_fu_1112_ap_return.read().is_01() || !tmp_1_37_reg_6007.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1112_ap_return.read()) + sc_biguint<32>(tmp_1_37_reg_6007.read()));
}

void sha256_transform::thread_add_ln72_115_fu_2800_p2() {
    add_ln72_115_fu_2800_p2 = (!m_47_reg_6151.read().is_01() || !m_38_reg_5988.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_47_reg_6151.read()) + sc_biguint<32>(m_38_reg_5988.read()));
}

void sha256_transform::thread_add_ln72_117_fu_2810_p2() {
    add_ln72_117_fu_2810_p2 = (!grp_SIG1_fu_1117_ap_return.read().is_01() || !tmp_1_38_reg_6045.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1117_ap_return.read()) + sc_biguint<32>(tmp_1_38_reg_6045.read()));
}

void sha256_transform::thread_add_ln72_118_fu_2815_p2() {
    add_ln72_118_fu_2815_p2 = (!m_48_reg_6184.read().is_01() || !m_39_reg_5995.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_48_reg_6184.read()) + sc_biguint<32>(m_39_reg_5995.read()));
}

void sha256_transform::thread_add_ln72_120_fu_2847_p2() {
    add_ln72_120_fu_2847_p2 = (!grp_SIG1_fu_1112_ap_return.read().is_01() || !tmp_1_39_reg_6050.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1112_ap_return.read()) + sc_biguint<32>(tmp_1_39_reg_6050.read()));
}

void sha256_transform::thread_add_ln72_121_fu_2852_p2() {
    add_ln72_121_fu_2852_p2 = (!m_49_reg_6192.read().is_01() || !m_40_reg_6031.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_49_reg_6192.read()) + sc_biguint<32>(m_40_reg_6031.read()));
}

void sha256_transform::thread_add_ln72_123_fu_2862_p2() {
    add_ln72_123_fu_2862_p2 = (!grp_SIG1_fu_1117_ap_return.read().is_01() || !tmp_1_40_reg_6085.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1117_ap_return.read()) + sc_biguint<32>(tmp_1_40_reg_6085.read()));
}

void sha256_transform::thread_add_ln72_124_fu_2867_p2() {
    add_ln72_124_fu_2867_p2 = (!m_50_reg_6205.read().is_01() || !m_41_reg_6038.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_50_reg_6205.read()) + sc_biguint<32>(m_41_reg_6038.read()));
}

void sha256_transform::thread_add_ln72_126_fu_2907_p2() {
    add_ln72_126_fu_2907_p2 = (!grp_SIG1_fu_1112_ap_return.read().is_01() || !tmp_1_41_reg_6090.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1112_ap_return.read()) + sc_biguint<32>(tmp_1_41_reg_6090.read()));
}

void sha256_transform::thread_add_ln72_127_fu_2912_p2() {
    add_ln72_127_fu_2912_p2 = (!m_51_reg_6212.read().is_01() || !m_42_reg_6071.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_51_reg_6212.read()) + sc_biguint<32>(m_42_reg_6071.read()));
}

void sha256_transform::thread_add_ln72_129_fu_2922_p2() {
    add_ln72_129_fu_2922_p2 = (!grp_SIG1_fu_1117_ap_return.read().is_01() || !tmp_1_42_reg_6115.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1117_ap_return.read()) + sc_biguint<32>(tmp_1_42_reg_6115.read()));
}

void sha256_transform::thread_add_ln72_12_fu_1770_p2() {
    add_ln72_12_fu_1770_p2 = (!reg_1154.read().is_01() || !tmp_1_4_reg_5206.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1154.read()) + sc_biguint<32>(tmp_1_4_reg_5206.read()));
}

void sha256_transform::thread_add_ln72_130_fu_2927_p2() {
    add_ln72_130_fu_2927_p2 = (!m_52_reg_6243.read().is_01() || !m_43_reg_6078.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_52_reg_6243.read()) + sc_biguint<32>(m_43_reg_6078.read()));
}

void sha256_transform::thread_add_ln72_132_fu_2966_p2() {
    add_ln72_132_fu_2966_p2 = (!grp_SIG1_fu_1112_ap_return.read().is_01() || !tmp_1_43_reg_6120.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1112_ap_return.read()) + sc_biguint<32>(tmp_1_43_reg_6120.read()));
}

void sha256_transform::thread_add_ln72_133_fu_2971_p2() {
    add_ln72_133_fu_2971_p2 = (!m_53_reg_6250.read().is_01() || !m_44_reg_6101.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_53_reg_6250.read()) + sc_biguint<32>(m_44_reg_6101.read()));
}

void sha256_transform::thread_add_ln72_135_fu_2981_p2() {
    add_ln72_135_fu_2981_p2 = (!grp_SIG1_fu_1117_ap_return.read().is_01() || !tmp_1_44_reg_6158.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1117_ap_return.read()) + sc_biguint<32>(tmp_1_44_reg_6158.read()));
}

void sha256_transform::thread_add_ln72_136_fu_2986_p2() {
    add_ln72_136_fu_2986_p2 = (!m_54_reg_6273.read().is_01() || !m_45_reg_6108.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_54_reg_6273.read()) + sc_biguint<32>(m_45_reg_6108.read()));
}

void sha256_transform::thread_add_ln72_13_fu_1775_p2() {
    add_ln72_13_fu_1775_p2 = (!m_13_reg_5454.read().is_01() || !m_4_reg_5149.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_13_reg_5454.read()) + sc_biguint<32>(m_4_reg_5149.read()));
}

void sha256_transform::thread_add_ln72_15_fu_1787_p2() {
    add_ln72_15_fu_1787_p2 = (!reg_1158.read().is_01() || !tmp_1_5_reg_5269.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1158.read()) + sc_biguint<32>(tmp_1_5_reg_5269.read()));
}

void sha256_transform::thread_add_ln72_16_fu_1792_p2() {
    add_ln72_16_fu_1792_p2 = (!m_14_reg_5530.read().is_01() || !m_5_reg_5155.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_14_reg_5530.read()) + sc_biguint<32>(m_5_reg_5155.read()));
}

void sha256_transform::thread_add_ln72_18_fu_1831_p2() {
    add_ln72_18_fu_1831_p2 = (!reg_1154.read().is_01() || !tmp_1_6_reg_5274.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1154.read()) + sc_biguint<32>(tmp_1_6_reg_5274.read()));
}

void sha256_transform::thread_add_ln72_19_fu_1836_p2() {
    add_ln72_19_fu_1836_p2 = (!m_15_reg_5537.read().is_01() || !m_6_reg_5217.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_15_reg_5537.read()) + sc_biguint<32>(m_6_reg_5217.read()));
}

void sha256_transform::thread_add_ln72_1_fu_1656_p2() {
    add_ln72_1_fu_1656_p2 = (!m_9_reg_5304.read().is_01() || !m_0_reg_5000.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_9_reg_5304.read()) + sc_biguint<32>(m_0_reg_5000.read()));
}

void sha256_transform::thread_add_ln72_21_fu_1848_p2() {
    add_ln72_21_fu_1848_p2 = (!reg_1158.read().is_01() || !tmp_1_7_reg_5351.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1158.read()) + sc_biguint<32>(tmp_1_7_reg_5351.read()));
}

void sha256_transform::thread_add_ln72_22_fu_1853_p2() {
    add_ln72_22_fu_1853_p2 = (!m_16_reg_5544.read().is_01() || !m_7_reg_5223.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_16_reg_5544.read()) + sc_biguint<32>(m_7_reg_5223.read()));
}

void sha256_transform::thread_add_ln72_24_fu_1895_p2() {
    add_ln72_24_fu_1895_p2 = (!reg_1154.read().is_01() || !tmp_1_8_reg_5356.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1154.read()) + sc_biguint<32>(tmp_1_8_reg_5356.read()));
}

void sha256_transform::thread_add_ln72_25_fu_1900_p2() {
    add_ln72_25_fu_1900_p2 = (!m_17_reg_5551.read().is_01() || !m_8_reg_5298.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_17_reg_5551.read()) + sc_biguint<32>(m_8_reg_5298.read()));
}

void sha256_transform::thread_add_ln72_27_fu_1912_p2() {
    add_ln72_27_fu_1912_p2 = (!reg_1158.read().is_01() || !tmp_1_9_reg_5431.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1158.read()) + sc_biguint<32>(tmp_1_9_reg_5431.read()));
}

void sha256_transform::thread_add_ln72_28_fu_1917_p2() {
    add_ln72_28_fu_1917_p2 = (!m_18_reg_5594.read().is_01() || !m_9_reg_5304.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_18_reg_5594.read()) + sc_biguint<32>(m_9_reg_5304.read()));
}

void sha256_transform::thread_add_ln72_30_fu_1951_p2() {
    add_ln72_30_fu_1951_p2 = (!reg_1154.read().is_01() || !tmp_1_s_reg_5436.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1154.read()) + sc_biguint<32>(tmp_1_s_reg_5436.read()));
}

void sha256_transform::thread_add_ln72_31_fu_1956_p2() {
    add_ln72_31_fu_1956_p2 = (!m_19_reg_5601.read().is_01() || !m_10_reg_5377.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_19_reg_5601.read()) + sc_biguint<32>(m_10_reg_5377.read()));
}

void sha256_transform::thread_add_ln72_33_fu_1968_p2() {
    add_ln72_33_fu_1968_p2 = (!reg_1158.read().is_01() || !tmp_1_10_reg_5501.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1158.read()) + sc_biguint<32>(tmp_1_10_reg_5501.read()));
}

void sha256_transform::thread_add_ln72_34_fu_1973_p2() {
    add_ln72_34_fu_1973_p2 = (!m_20_reg_5634.read().is_01() || !m_11_reg_5384.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_20_reg_5634.read()) + sc_biguint<32>(m_11_reg_5384.read()));
}

void sha256_transform::thread_add_ln72_36_fu_2015_p2() {
    add_ln72_36_fu_2015_p2 = (!reg_1154.read().is_01() || !tmp_1_11_reg_5506.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1154.read()) + sc_biguint<32>(tmp_1_11_reg_5506.read()));
}

void sha256_transform::thread_add_ln72_37_fu_2020_p2() {
    add_ln72_37_fu_2020_p2 = (!m_21_reg_5641.read().is_01() || !m_12_reg_5447.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_21_reg_5641.read()) + sc_biguint<32>(m_12_reg_5447.read()));
}

void sha256_transform::thread_add_ln72_39_fu_2032_p2() {
    add_ln72_39_fu_2032_p2 = (!reg_1158.read().is_01() || !tmp_1_12_reg_5558.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1158.read()) + sc_biguint<32>(tmp_1_12_reg_5558.read()));
}

void sha256_transform::thread_add_ln72_3_fu_1668_p2() {
    add_ln72_3_fu_1668_p2 = (!grp_SIG1_fu_1097_ap_return.read().is_01() || !tmp_1_1_reg_5123.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1097_ap_return.read()) + sc_biguint<32>(tmp_1_1_reg_5123.read()));
}

void sha256_transform::thread_add_ln72_40_fu_2037_p2() {
    add_ln72_40_fu_2037_p2 = (!m_22_reg_5677.read().is_01() || !m_13_reg_5454.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_22_reg_5677.read()) + sc_biguint<32>(m_13_reg_5454.read()));
}

void sha256_transform::thread_add_ln72_42_fu_2078_p2() {
    add_ln72_42_fu_2078_p2 = (!reg_1154.read().is_01() || !tmp_1_13_reg_5563.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1154.read()) + sc_biguint<32>(tmp_1_13_reg_5563.read()));
}

void sha256_transform::thread_add_ln72_43_fu_2083_p2() {
    add_ln72_43_fu_2083_p2 = (!m_23_reg_5684.read().is_01() || !m_14_reg_5530.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_23_reg_5684.read()) + sc_biguint<32>(m_14_reg_5530.read()));
}

void sha256_transform::thread_add_ln72_45_fu_2095_p2() {
    add_ln72_45_fu_2095_p2 = (!reg_1158.read().is_01() || !tmp_1_14_reg_5568.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1158.read()) + sc_biguint<32>(tmp_1_14_reg_5568.read()));
}

void sha256_transform::thread_add_ln72_46_fu_2100_p2() {
    add_ln72_46_fu_2100_p2 = (!m_24_reg_5717.read().is_01() || !m_15_reg_5537.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_24_reg_5717.read()) + sc_biguint<32>(m_15_reg_5537.read()));
}

void sha256_transform::thread_add_ln72_48_fu_2134_p2() {
    add_ln72_48_fu_2134_p2 = (!reg_1154.read().is_01() || !tmp_1_15_reg_5573.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1154.read()) + sc_biguint<32>(tmp_1_15_reg_5573.read()));
}

void sha256_transform::thread_add_ln72_49_fu_2139_p2() {
    add_ln72_49_fu_2139_p2 = (!m_25_reg_5724.read().is_01() || !m_16_reg_5544.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_25_reg_5724.read()) + sc_biguint<32>(m_16_reg_5544.read()));
}

void sha256_transform::thread_add_ln72_4_fu_1673_p2() {
    add_ln72_4_fu_1673_p2 = (!m_10_reg_5377.read().is_01() || !m_1_reg_5005.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_10_reg_5377.read()) + sc_biguint<32>(m_1_reg_5005.read()));
}

void sha256_transform::thread_add_ln72_51_fu_2151_p2() {
    add_ln72_51_fu_2151_p2 = (!reg_1158.read().is_01() || !tmp_1_16_reg_5608.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1158.read()) + sc_biguint<32>(tmp_1_16_reg_5608.read()));
}

void sha256_transform::thread_add_ln72_52_fu_2156_p2() {
    add_ln72_52_fu_2156_p2 = (!m_26_reg_5747.read().is_01() || !m_17_reg_5551.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_26_reg_5747.read()) + sc_biguint<32>(m_17_reg_5551.read()));
}

void sha256_transform::thread_add_ln72_54_fu_2198_p2() {
    add_ln72_54_fu_2198_p2 = (!tmp_18_reg_5874.read().is_01() || !tmp_1_17_reg_5613.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_18_reg_5874.read()) + sc_biguint<32>(tmp_1_17_reg_5613.read()));
}

void sha256_transform::thread_add_ln72_55_fu_2202_p2() {
    add_ln72_55_fu_2202_p2 = (!m_27_reg_5754.read().is_01() || !m_18_reg_5594.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_27_reg_5754.read()) + sc_biguint<32>(m_18_reg_5594.read()));
}

void sha256_transform::thread_add_ln72_57_fu_2214_p2() {
    add_ln72_57_fu_2214_p2 = (!tmp_19_reg_5879.read().is_01() || !tmp_1_18_reg_5648.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_19_reg_5879.read()) + sc_biguint<32>(tmp_1_18_reg_5648.read()));
}

void sha256_transform::thread_add_ln72_58_fu_2218_p2() {
    add_ln72_58_fu_2218_p2 = (!m_28_reg_5790.read().is_01() || !m_19_reg_5601.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_28_reg_5790.read()) + sc_biguint<32>(m_19_reg_5601.read()));
}

void sha256_transform::thread_add_ln72_60_fu_2259_p2() {
    add_ln72_60_fu_2259_p2 = (!reg_1138.read().is_01() || !tmp_1_19_reg_5653.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1138.read()) + sc_biguint<32>(tmp_1_19_reg_5653.read()));
}

void sha256_transform::thread_add_ln72_61_fu_2264_p2() {
    add_ln72_61_fu_2264_p2 = (!m_29_reg_5797.read().is_01() || !m_20_reg_5634.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_29_reg_5797.read()) + sc_biguint<32>(m_20_reg_5634.read()));
}

void sha256_transform::thread_add_ln72_63_fu_2276_p2() {
    add_ln72_63_fu_2276_p2 = (!reg_1142.read().is_01() || !tmp_1_20_reg_5691.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1142.read()) + sc_biguint<32>(tmp_1_20_reg_5691.read()));
}

void sha256_transform::thread_add_ln72_64_fu_2281_p2() {
    add_ln72_64_fu_2281_p2 = (!m_30_reg_5830.read().is_01() || !m_21_reg_5641.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_30_reg_5830.read()) + sc_biguint<32>(m_21_reg_5641.read()));
}

void sha256_transform::thread_add_ln72_66_fu_2314_p2() {
    add_ln72_66_fu_2314_p2 = (!reg_1138.read().is_01() || !tmp_1_21_reg_5696.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1138.read()) + sc_biguint<32>(tmp_1_21_reg_5696.read()));
}

void sha256_transform::thread_add_ln72_67_fu_2319_p2() {
    add_ln72_67_fu_2319_p2 = (!m_31_reg_5837.read().is_01() || !m_22_reg_5677.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_31_reg_5837.read()) + sc_biguint<32>(m_22_reg_5677.read()));
}

void sha256_transform::thread_add_ln72_69_fu_2331_p2() {
    add_ln72_69_fu_2331_p2 = (!reg_1142.read().is_01() || !tmp_1_22_reg_5731.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1142.read()) + sc_biguint<32>(tmp_1_22_reg_5731.read()));
}

void sha256_transform::thread_add_ln72_6_fu_1714_p2() {
    add_ln72_6_fu_1714_p2 = (!reg_1138.read().is_01() || !tmp_1_2_reg_5128.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1138.read()) + sc_biguint<32>(tmp_1_2_reg_5128.read()));
}

void sha256_transform::thread_add_ln72_70_fu_2336_p2() {
    add_ln72_70_fu_2336_p2 = (!m_32_reg_5860.read().is_01() || !m_23_reg_5684.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_32_reg_5860.read()) + sc_biguint<32>(m_23_reg_5684.read()));
}

void sha256_transform::thread_add_ln72_72_fu_2378_p2() {
    add_ln72_72_fu_2378_p2 = (!reg_1138.read().is_01() || !tmp_1_23_reg_5736.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1138.read()) + sc_biguint<32>(tmp_1_23_reg_5736.read()));
}

void sha256_transform::thread_add_ln72_73_fu_2383_p2() {
    add_ln72_73_fu_2383_p2 = (!m_33_reg_5867.read().is_01() || !m_24_reg_5717.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_33_reg_5867.read()) + sc_biguint<32>(m_24_reg_5717.read()));
}

void sha256_transform::thread_add_ln72_75_fu_2395_p2() {
    add_ln72_75_fu_2395_p2 = (!reg_1142.read().is_01() || !tmp_1_24_reg_5761.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1142.read()) + sc_biguint<32>(tmp_1_24_reg_5761.read()));
}

void sha256_transform::thread_add_ln72_76_fu_2400_p2() {
    add_ln72_76_fu_2400_p2 = (!m_34_reg_5913.read().is_01() || !m_25_reg_5724.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_34_reg_5913.read()) + sc_biguint<32>(m_25_reg_5724.read()));
}

void sha256_transform::thread_add_ln72_78_fu_2441_p2() {
    add_ln72_78_fu_2441_p2 = (!reg_1138.read().is_01() || !tmp_1_25_reg_5766.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1138.read()) + sc_biguint<32>(tmp_1_25_reg_5766.read()));
}

void sha256_transform::thread_add_ln72_79_fu_2446_p2() {
    add_ln72_79_fu_2446_p2 = (!m_35_reg_5920.read().is_01() || !m_26_reg_5747.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_35_reg_5920.read()) + sc_biguint<32>(m_26_reg_5747.read()));
}

void sha256_transform::thread_add_ln72_7_fu_1719_p2() {
    add_ln72_7_fu_1719_p2 = (!m_11_reg_5384.read().is_01() || !m_2_reg_5071.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_11_reg_5384.read()) + sc_biguint<32>(m_2_reg_5071.read()));
}

void sha256_transform::thread_add_ln72_81_fu_2458_p2() {
    add_ln72_81_fu_2458_p2 = (!reg_1142.read().is_01() || !tmp_1_26_reg_5804.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1142.read()) + sc_biguint<32>(tmp_1_26_reg_5804.read()));
}

void sha256_transform::thread_add_ln72_82_fu_2463_p2() {
    add_ln72_82_fu_2463_p2 = (!m_36_reg_5958.read().is_01() || !m_27_reg_5754.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_36_reg_5958.read()) + sc_biguint<32>(m_27_reg_5754.read()));
}

void sha256_transform::thread_add_ln72_84_fu_2497_p2() {
    add_ln72_84_fu_2497_p2 = (!reg_1138.read().is_01() || !tmp_1_27_reg_5809.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1138.read()) + sc_biguint<32>(tmp_1_27_reg_5809.read()));
}

void sha256_transform::thread_add_ln72_85_fu_2502_p2() {
    add_ln72_85_fu_2502_p2 = (!m_37_reg_5965.read().is_01() || !m_28_reg_5790.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_37_reg_5965.read()) + sc_biguint<32>(m_28_reg_5790.read()));
}

void sha256_transform::thread_add_ln72_87_fu_2514_p2() {
    add_ln72_87_fu_2514_p2 = (!reg_1142.read().is_01() || !tmp_1_28_reg_5844.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1142.read()) + sc_biguint<32>(tmp_1_28_reg_5844.read()));
}

void sha256_transform::thread_add_ln72_88_fu_2519_p2() {
    add_ln72_88_fu_2519_p2 = (!m_38_reg_5988.read().is_01() || !m_29_reg_5797.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_38_reg_5988.read()) + sc_biguint<32>(m_29_reg_5797.read()));
}

void sha256_transform::thread_add_ln72_90_fu_2560_p2() {
    add_ln72_90_fu_2560_p2 = (!reg_1138.read().is_01() || !tmp_1_29_reg_5849.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1138.read()) + sc_biguint<32>(tmp_1_29_reg_5849.read()));
}

void sha256_transform::thread_add_ln72_91_fu_2565_p2() {
    add_ln72_91_fu_2565_p2 = (!m_39_reg_5995.read().is_01() || !m_30_reg_5830.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_39_reg_5995.read()) + sc_biguint<32>(m_30_reg_5830.read()));
}

void sha256_transform::thread_add_ln72_93_fu_2577_p2() {
    add_ln72_93_fu_2577_p2 = (!reg_1142.read().is_01() || !tmp_1_30_reg_5884.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1142.read()) + sc_biguint<32>(tmp_1_30_reg_5884.read()));
}

void sha256_transform::thread_add_ln72_94_fu_2582_p2() {
    add_ln72_94_fu_2582_p2 = (!m_40_reg_6031.read().is_01() || !m_31_reg_5837.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_40_reg_6031.read()) + sc_biguint<32>(m_31_reg_5837.read()));
}

void sha256_transform::thread_add_ln72_96_fu_2624_p2() {
    add_ln72_96_fu_2624_p2 = (!reg_1138.read().is_01() || !tmp_1_31_reg_5889.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1138.read()) + sc_biguint<32>(tmp_1_31_reg_5889.read()));
}

void sha256_transform::thread_add_ln72_97_fu_2629_p2() {
    add_ln72_97_fu_2629_p2 = (!m_41_reg_6038.read().is_01() || !m_32_reg_5860.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_41_reg_6038.read()) + sc_biguint<32>(m_32_reg_5860.read()));
}

void sha256_transform::thread_add_ln72_99_fu_2639_p2() {
    add_ln72_99_fu_2639_p2 = (!reg_1142.read().is_01() || !tmp_1_32_reg_5927.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1142.read()) + sc_biguint<32>(tmp_1_32_reg_5927.read()));
}

void sha256_transform::thread_add_ln72_9_fu_1731_p2() {
    add_ln72_9_fu_1731_p2 = (!reg_1142.read().is_01() || !tmp_1_3_reg_5201.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1142.read()) + sc_biguint<32>(tmp_1_3_reg_5201.read()));
}

void sha256_transform::thread_add_ln72_fu_1651_p2() {
    add_ln72_fu_1651_p2 = (!grp_SIG1_fu_1092_ap_return.read().is_01() || !tmp_1_reg_5051.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1092_ap_return.read()) + sc_biguint<32>(tmp_1_reg_5051.read()));
}

void sha256_transform::thread_add_ln85_100_fu_3254_p2() {
    add_ln85_100_fu_3254_p2 = (!reg_1170.read().is_01() || !ap_const_lv32_A831C66D.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1170.read()) + sc_bigint<32>(ap_const_lv32_A831C66D));
}

void sha256_transform::thread_add_ln85_101_fu_3260_p2() {
    add_ln85_101_fu_3260_p2 = (!reg_1182.read().is_01() || !m_25_reg_5724_pp0_iter4_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1182.read()) + sc_biguint<32>(m_25_reg_5724_pp0_iter4_reg.read()));
}

void sha256_transform::thread_add_ln85_102_fu_3265_p2() {
    add_ln85_102_fu_3265_p2 = (!add_ln85_101_fu_3260_p2.read().is_01() || !add_ln90_21_reg_6422.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_101_fu_3260_p2.read()) + sc_biguint<32>(add_ln90_21_reg_6422.read()));
}

void sha256_transform::thread_add_ln85_103_fu_3270_p2() {
    add_ln85_103_fu_3270_p2 = (!add_ln85_102_fu_3265_p2.read().is_01() || !add_ln85_100_fu_3254_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_102_fu_3265_p2.read()) + sc_biguint<32>(add_ln85_100_fu_3254_p2.read()));
}

void sha256_transform::thread_add_ln85_104_fu_3305_p2() {
    add_ln85_104_fu_3305_p2 = (!reg_1202.read().is_01() || !ap_const_lv32_B00327C8.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1202.read()) + sc_bigint<32>(ap_const_lv32_B00327C8));
}

void sha256_transform::thread_add_ln85_105_fu_3295_p2() {
    add_ln85_105_fu_3295_p2 = (!grp_EP1_fu_1001_ap_return.read().is_01() || !m_26_reg_5747_pp0_iter4_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_1001_ap_return.read()) + sc_biguint<32>(m_26_reg_5747_pp0_iter4_reg.read()));
}

void sha256_transform::thread_add_ln85_106_fu_3300_p2() {
    add_ln85_106_fu_3300_p2 = (!add_ln85_105_fu_3295_p2.read().is_01() || !add_ln90_22_reg_6441.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_105_fu_3295_p2.read()) + sc_biguint<32>(add_ln90_22_reg_6441.read()));
}

void sha256_transform::thread_add_ln85_107_fu_3311_p2() {
    add_ln85_107_fu_3311_p2 = (!add_ln85_106_reg_6518.read().is_01() || !add_ln85_104_fu_3305_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_106_reg_6518.read()) + sc_biguint<32>(add_ln85_104_fu_3305_p2.read()));
}

void sha256_transform::thread_add_ln85_108_fu_3335_p2() {
    add_ln85_108_fu_3335_p2 = (!reg_1170.read().is_01() || !ap_const_lv32_BF597FC7.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1170.read()) + sc_bigint<32>(ap_const_lv32_BF597FC7));
}

void sha256_transform::thread_add_ln85_109_fu_3341_p2() {
    add_ln85_109_fu_3341_p2 = (!reg_1182.read().is_01() || !m_27_reg_5754_pp0_iter4_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1182.read()) + sc_biguint<32>(m_27_reg_5754_pp0_iter4_reg.read()));
}

void sha256_transform::thread_add_ln85_10_fu_1458_p2() {
    add_ln85_10_fu_1458_p2 = (!add_ln85_9_fu_1453_p2.read().is_01() || !ctx_state_5_read_1_reg_4924.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_9_fu_1453_p2.read()) + sc_biguint<32>(ctx_state_5_read_1_reg_4924.read()));
}

void sha256_transform::thread_add_ln85_110_fu_3346_p2() {
    add_ln85_110_fu_3346_p2 = (!add_ln85_109_fu_3341_p2.read().is_01() || !add_ln90_23_reg_6463.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_109_fu_3341_p2.read()) + sc_biguint<32>(add_ln90_23_reg_6463.read()));
}

void sha256_transform::thread_add_ln85_111_fu_3351_p2() {
    add_ln85_111_fu_3351_p2 = (!add_ln85_110_fu_3346_p2.read().is_01() || !add_ln85_108_fu_3335_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_110_fu_3346_p2.read()) + sc_biguint<32>(add_ln85_108_fu_3335_p2.read()));
}

void sha256_transform::thread_add_ln85_112_fu_3387_p2() {
    add_ln85_112_fu_3387_p2 = (!reg_1190.read().is_01() || !add_ln90_24_reg_6482.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1190.read()) + sc_biguint<32>(add_ln90_24_reg_6482.read()));
}

void sha256_transform::thread_add_ln85_113_fu_3376_p2() {
    add_ln85_113_fu_3376_p2 = (!m_28_reg_5790_pp0_iter4_reg.read().is_01() || !ap_const_lv32_C6E00BF3.is_01())? sc_lv<32>(): (sc_biguint<32>(m_28_reg_5790_pp0_iter4_reg.read()) + sc_bigint<32>(ap_const_lv32_C6E00BF3));
}

void sha256_transform::thread_add_ln85_114_fu_3381_p2() {
    add_ln85_114_fu_3381_p2 = (!add_ln85_113_fu_3376_p2.read().is_01() || !grp_EP1_fu_996_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_113_fu_3376_p2.read()) + sc_biguint<32>(grp_EP1_fu_996_ap_return.read()));
}

void sha256_transform::thread_add_ln85_115_fu_3392_p2() {
    add_ln85_115_fu_3392_p2 = (!add_ln85_114_reg_6559.read().is_01() || !add_ln85_112_fu_3387_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_114_reg_6559.read()) + sc_biguint<32>(add_ln85_112_fu_3387_p2.read()));
}

void sha256_transform::thread_add_ln85_116_fu_3416_p2() {
    add_ln85_116_fu_3416_p2 = (!reg_1190.read().is_01() || !add_ln90_25_reg_6504.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1190.read()) + sc_biguint<32>(add_ln90_25_reg_6504.read()));
}

void sha256_transform::thread_add_ln85_117_fu_3421_p2() {
    add_ln85_117_fu_3421_p2 = (!m_29_reg_5797_pp0_iter4_reg.read().is_01() || !ap_const_lv32_D5A79147.is_01())? sc_lv<32>(): (sc_biguint<32>(m_29_reg_5797_pp0_iter4_reg.read()) + sc_bigint<32>(ap_const_lv32_D5A79147));
}

void sha256_transform::thread_add_ln85_118_fu_3426_p2() {
    add_ln85_118_fu_3426_p2 = (!add_ln85_117_fu_3421_p2.read().is_01() || !reg_1186.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_117_fu_3421_p2.read()) + sc_biguint<32>(reg_1186.read()));
}

void sha256_transform::thread_add_ln85_119_fu_3432_p2() {
    add_ln85_119_fu_3432_p2 = (!add_ln85_118_fu_3426_p2.read().is_01() || !add_ln85_116_fu_3416_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_118_fu_3426_p2.read()) + sc_biguint<32>(add_ln85_116_fu_3416_p2.read()));
}

void sha256_transform::thread_add_ln85_11_fu_1495_p2() {
    add_ln85_11_fu_1495_p2 = (!add_ln85_10_reg_5293.read().is_01() || !add_ln85_8_fu_1489_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_10_reg_5293.read()) + sc_biguint<32>(add_ln85_8_fu_1489_p2.read()));
}

void sha256_transform::thread_add_ln85_120_fu_3468_p2() {
    add_ln85_120_fu_3468_p2 = (!reg_1190.read().is_01() || !add_ln90_26_reg_6523.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1190.read()) + sc_biguint<32>(add_ln90_26_reg_6523.read()));
}

void sha256_transform::thread_add_ln85_121_fu_3457_p2() {
    add_ln85_121_fu_3457_p2 = (!m_30_reg_5830_pp0_iter4_reg.read().is_01() || !ap_const_lv32_6CA6351.is_01())? sc_lv<32>(): (sc_biguint<32>(m_30_reg_5830_pp0_iter4_reg.read()) + sc_biguint<32>(ap_const_lv32_6CA6351));
}

void sha256_transform::thread_add_ln85_122_fu_3462_p2() {
    add_ln85_122_fu_3462_p2 = (!add_ln85_121_fu_3457_p2.read().is_01() || !grp_EP1_fu_996_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_121_fu_3457_p2.read()) + sc_biguint<32>(grp_EP1_fu_996_ap_return.read()));
}

void sha256_transform::thread_add_ln85_123_fu_3473_p2() {
    add_ln85_123_fu_3473_p2 = (!add_ln85_122_reg_6600.read().is_01() || !add_ln85_120_fu_3468_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_122_reg_6600.read()) + sc_biguint<32>(add_ln85_120_fu_3468_p2.read()));
}

void sha256_transform::thread_add_ln85_124_fu_3497_p2() {
    add_ln85_124_fu_3497_p2 = (!reg_1190.read().is_01() || !add_ln90_27_reg_6545.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1190.read()) + sc_biguint<32>(add_ln90_27_reg_6545.read()));
}

void sha256_transform::thread_add_ln85_125_fu_3502_p2() {
    add_ln85_125_fu_3502_p2 = (!m_31_reg_5837_pp0_iter5_reg.read().is_01() || !ap_const_lv32_14292967.is_01())? sc_lv<32>(): (sc_biguint<32>(m_31_reg_5837_pp0_iter5_reg.read()) + sc_biguint<32>(ap_const_lv32_14292967));
}

void sha256_transform::thread_add_ln85_126_fu_3507_p2() {
    add_ln85_126_fu_3507_p2 = (!add_ln85_125_fu_3502_p2.read().is_01() || !reg_1186.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_125_fu_3502_p2.read()) + sc_biguint<32>(reg_1186.read()));
}

void sha256_transform::thread_add_ln85_127_fu_3513_p2() {
    add_ln85_127_fu_3513_p2 = (!add_ln85_126_fu_3507_p2.read().is_01() || !add_ln85_124_fu_3497_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_126_fu_3507_p2.read()) + sc_biguint<32>(add_ln85_124_fu_3497_p2.read()));
}

void sha256_transform::thread_add_ln85_128_fu_3549_p2() {
    add_ln85_128_fu_3549_p2 = (!reg_1190.read().is_01() || !add_ln90_28_reg_6564.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1190.read()) + sc_biguint<32>(add_ln90_28_reg_6564.read()));
}

void sha256_transform::thread_add_ln85_129_fu_3538_p2() {
    add_ln85_129_fu_3538_p2 = (!m_32_reg_5860_pp0_iter6_reg.read().is_01() || !ap_const_lv32_27B70A85.is_01())? sc_lv<32>(): (sc_biguint<32>(m_32_reg_5860_pp0_iter6_reg.read()) + sc_biguint<32>(ap_const_lv32_27B70A85));
}

void sha256_transform::thread_add_ln85_12_fu_1545_p2() {
    add_ln85_12_fu_1545_p2 = (!reg_1126.read().is_01() || !ctx_state_4_read_1_reg_4931.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1126.read()) + sc_biguint<32>(ctx_state_4_read_1_reg_4931.read()));
}

void sha256_transform::thread_add_ln85_130_fu_3543_p2() {
    add_ln85_130_fu_3543_p2 = (!add_ln85_129_fu_3538_p2.read().is_01() || !grp_EP1_fu_996_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_129_fu_3538_p2.read()) + sc_biguint<32>(grp_EP1_fu_996_ap_return.read()));
}

void sha256_transform::thread_add_ln85_131_fu_3554_p2() {
    add_ln85_131_fu_3554_p2 = (!add_ln85_130_reg_6641.read().is_01() || !add_ln85_128_fu_3549_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_130_reg_6641.read()) + sc_biguint<32>(add_ln85_128_fu_3549_p2.read()));
}

void sha256_transform::thread_add_ln85_132_fu_3578_p2() {
    add_ln85_132_fu_3578_p2 = (!reg_1202.read().is_01() || !add_ln90_29_reg_6586.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1202.read()) + sc_biguint<32>(add_ln90_29_reg_6586.read()));
}

void sha256_transform::thread_add_ln85_133_fu_3583_p2() {
    add_ln85_133_fu_3583_p2 = (!m_33_reg_5867_pp0_iter6_reg.read().is_01() || !ap_const_lv32_2E1B2138.is_01())? sc_lv<32>(): (sc_biguint<32>(m_33_reg_5867_pp0_iter6_reg.read()) + sc_biguint<32>(ap_const_lv32_2E1B2138));
}

void sha256_transform::thread_add_ln85_134_fu_3588_p2() {
    add_ln85_134_fu_3588_p2 = (!add_ln85_133_fu_3583_p2.read().is_01() || !reg_1214.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_133_fu_3583_p2.read()) + sc_biguint<32>(reg_1214.read()));
}

void sha256_transform::thread_add_ln85_135_fu_3594_p2() {
    add_ln85_135_fu_3594_p2 = (!add_ln85_134_fu_3588_p2.read().is_01() || !add_ln85_132_fu_3578_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_134_fu_3588_p2.read()) + sc_biguint<32>(add_ln85_132_fu_3578_p2.read()));
}

void sha256_transform::thread_add_ln85_136_fu_3630_p2() {
    add_ln85_136_fu_3630_p2 = (!reg_1202.read().is_01() || !add_ln90_30_reg_6605.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1202.read()) + sc_biguint<32>(add_ln90_30_reg_6605.read()));
}

void sha256_transform::thread_add_ln85_137_fu_3619_p2() {
    add_ln85_137_fu_3619_p2 = (!m_34_reg_5913_pp0_iter6_reg.read().is_01() || !ap_const_lv32_4D2C6DFC.is_01())? sc_lv<32>(): (sc_biguint<32>(m_34_reg_5913_pp0_iter6_reg.read()) + sc_biguint<32>(ap_const_lv32_4D2C6DFC));
}

void sha256_transform::thread_add_ln85_138_fu_3624_p2() {
    add_ln85_138_fu_3624_p2 = (!add_ln85_137_fu_3619_p2.read().is_01() || !grp_EP1_fu_1001_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_137_fu_3619_p2.read()) + sc_biguint<32>(grp_EP1_fu_1001_ap_return.read()));
}

void sha256_transform::thread_add_ln85_139_fu_3635_p2() {
    add_ln85_139_fu_3635_p2 = (!add_ln85_138_reg_6682.read().is_01() || !add_ln85_136_fu_3630_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_138_reg_6682.read()) + sc_biguint<32>(add_ln85_136_fu_3630_p2.read()));
}

void sha256_transform::thread_add_ln85_13_fu_1550_p2() {
    add_ln85_13_fu_1550_p2 = (!m_3_reg_5077.read().is_01() || !ap_const_lv32_E9B5DBA5.is_01())? sc_lv<32>(): (sc_biguint<32>(m_3_reg_5077.read()) + sc_bigint<32>(ap_const_lv32_E9B5DBA5));
}

void sha256_transform::thread_add_ln85_140_fu_3659_p2() {
    add_ln85_140_fu_3659_p2 = (!reg_1202.read().is_01() || !add_ln90_31_reg_6627.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1202.read()) + sc_biguint<32>(add_ln90_31_reg_6627.read()));
}

void sha256_transform::thread_add_ln85_141_fu_3664_p2() {
    add_ln85_141_fu_3664_p2 = (!m_35_reg_5920_pp0_iter6_reg.read().is_01() || !ap_const_lv32_53380D13.is_01())? sc_lv<32>(): (sc_biguint<32>(m_35_reg_5920_pp0_iter6_reg.read()) + sc_biguint<32>(ap_const_lv32_53380D13));
}

void sha256_transform::thread_add_ln85_142_fu_3669_p2() {
    add_ln85_142_fu_3669_p2 = (!add_ln85_141_fu_3664_p2.read().is_01() || !reg_1214.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_141_fu_3664_p2.read()) + sc_biguint<32>(reg_1214.read()));
}

void sha256_transform::thread_add_ln85_143_fu_3675_p2() {
    add_ln85_143_fu_3675_p2 = (!add_ln85_142_fu_3669_p2.read().is_01() || !add_ln85_140_fu_3659_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_142_fu_3669_p2.read()) + sc_biguint<32>(add_ln85_140_fu_3659_p2.read()));
}

void sha256_transform::thread_add_ln85_144_fu_3711_p2() {
    add_ln85_144_fu_3711_p2 = (!reg_1202.read().is_01() || !add_ln90_32_reg_6646.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1202.read()) + sc_biguint<32>(add_ln90_32_reg_6646.read()));
}

void sha256_transform::thread_add_ln85_145_fu_3700_p2() {
    add_ln85_145_fu_3700_p2 = (!m_36_reg_5958_pp0_iter6_reg.read().is_01() || !ap_const_lv32_650A7354.is_01())? sc_lv<32>(): (sc_biguint<32>(m_36_reg_5958_pp0_iter6_reg.read()) + sc_biguint<32>(ap_const_lv32_650A7354));
}

void sha256_transform::thread_add_ln85_146_fu_3705_p2() {
    add_ln85_146_fu_3705_p2 = (!add_ln85_145_fu_3700_p2.read().is_01() || !grp_EP1_fu_1001_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_145_fu_3700_p2.read()) + sc_biguint<32>(grp_EP1_fu_1001_ap_return.read()));
}

void sha256_transform::thread_add_ln85_147_fu_3716_p2() {
    add_ln85_147_fu_3716_p2 = (!add_ln85_146_reg_6723.read().is_01() || !add_ln85_144_fu_3711_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_146_reg_6723.read()) + sc_biguint<32>(add_ln85_144_fu_3711_p2.read()));
}

void sha256_transform::thread_add_ln85_148_fu_3740_p2() {
    add_ln85_148_fu_3740_p2 = (!reg_1222.read().is_01() || !add_ln90_33_reg_6668.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1222.read()) + sc_biguint<32>(add_ln90_33_reg_6668.read()));
}

void sha256_transform::thread_add_ln85_149_fu_3745_p2() {
    add_ln85_149_fu_3745_p2 = (!m_37_reg_5965_pp0_iter6_reg.read().is_01() || !ap_const_lv32_766A0ABB.is_01())? sc_lv<32>(): (sc_biguint<32>(m_37_reg_5965_pp0_iter6_reg.read()) + sc_biguint<32>(ap_const_lv32_766A0ABB));
}

void sha256_transform::thread_add_ln85_14_fu_1555_p2() {
    add_ln85_14_fu_1555_p2 = (!add_ln85_13_fu_1550_p2.read().is_01() || !reg_1122.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_13_fu_1550_p2.read()) + sc_biguint<32>(reg_1122.read()));
}

void sha256_transform::thread_add_ln85_150_fu_3750_p2() {
    add_ln85_150_fu_3750_p2 = (!add_ln85_149_fu_3745_p2.read().is_01() || !reg_1218.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_149_fu_3745_p2.read()) + sc_biguint<32>(reg_1218.read()));
}

void sha256_transform::thread_add_ln85_151_fu_3756_p2() {
    add_ln85_151_fu_3756_p2 = (!add_ln85_150_fu_3750_p2.read().is_01() || !add_ln85_148_fu_3740_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_150_fu_3750_p2.read()) + sc_biguint<32>(add_ln85_148_fu_3740_p2.read()));
}

void sha256_transform::thread_add_ln85_152_fu_3791_p2() {
    add_ln85_152_fu_3791_p2 = (!reg_1222.read().is_01() || !ap_const_lv32_81C2C92E.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1222.read()) + sc_bigint<32>(ap_const_lv32_81C2C92E));
}

void sha256_transform::thread_add_ln85_153_fu_3781_p2() {
    add_ln85_153_fu_3781_p2 = (!grp_EP1_fu_1006_ap_return.read().is_01() || !m_38_reg_5988_pp0_iter6_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_1006_ap_return.read()) + sc_biguint<32>(m_38_reg_5988_pp0_iter6_reg.read()));
}

void sha256_transform::thread_add_ln85_154_fu_3786_p2() {
    add_ln85_154_fu_3786_p2 = (!add_ln85_153_fu_3781_p2.read().is_01() || !add_ln90_34_reg_6687.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_153_fu_3781_p2.read()) + sc_biguint<32>(add_ln90_34_reg_6687.read()));
}

void sha256_transform::thread_add_ln85_155_fu_3797_p2() {
    add_ln85_155_fu_3797_p2 = (!add_ln85_154_reg_6764.read().is_01() || !add_ln85_152_fu_3791_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_154_reg_6764.read()) + sc_biguint<32>(add_ln85_152_fu_3791_p2.read()));
}

void sha256_transform::thread_add_ln85_156_fu_3821_p2() {
    add_ln85_156_fu_3821_p2 = (!reg_1202.read().is_01() || !ap_const_lv32_92722C85.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1202.read()) + sc_bigint<32>(ap_const_lv32_92722C85));
}

void sha256_transform::thread_add_ln85_157_fu_3827_p2() {
    add_ln85_157_fu_3827_p2 = (!reg_1214.read().is_01() || !m_39_reg_5995_pp0_iter7_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1214.read()) + sc_biguint<32>(m_39_reg_5995_pp0_iter7_reg.read()));
}

void sha256_transform::thread_add_ln85_158_fu_3832_p2() {
    add_ln85_158_fu_3832_p2 = (!add_ln85_157_fu_3827_p2.read().is_01() || !add_ln90_35_reg_6709.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_157_fu_3827_p2.read()) + sc_biguint<32>(add_ln90_35_reg_6709.read()));
}

void sha256_transform::thread_add_ln85_159_fu_3837_p2() {
    add_ln85_159_fu_3837_p2 = (!add_ln85_158_fu_3832_p2.read().is_01() || !add_ln85_156_fu_3821_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_158_fu_3832_p2.read()) + sc_biguint<32>(add_ln85_156_fu_3821_p2.read()));
}

void sha256_transform::thread_add_ln85_15_fu_1561_p2() {
    add_ln85_15_fu_1561_p2 = (!add_ln85_14_fu_1555_p2.read().is_01() || !add_ln85_12_fu_1545_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_14_fu_1555_p2.read()) + sc_biguint<32>(add_ln85_12_fu_1545_p2.read()));
}

void sha256_transform::thread_add_ln85_160_fu_3872_p2() {
    add_ln85_160_fu_3872_p2 = (!reg_1222.read().is_01() || !ap_const_lv32_A2BFE8A1.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1222.read()) + sc_bigint<32>(ap_const_lv32_A2BFE8A1));
}

void sha256_transform::thread_add_ln85_161_fu_3862_p2() {
    add_ln85_161_fu_3862_p2 = (!grp_EP1_fu_1006_ap_return.read().is_01() || !m_40_reg_6031_pp0_iter7_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_1006_ap_return.read()) + sc_biguint<32>(m_40_reg_6031_pp0_iter7_reg.read()));
}

void sha256_transform::thread_add_ln85_162_fu_3867_p2() {
    add_ln85_162_fu_3867_p2 = (!add_ln85_161_fu_3862_p2.read().is_01() || !add_ln90_36_reg_6728.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_161_fu_3862_p2.read()) + sc_biguint<32>(add_ln90_36_reg_6728.read()));
}

void sha256_transform::thread_add_ln85_163_fu_3878_p2() {
    add_ln85_163_fu_3878_p2 = (!add_ln85_162_reg_6805.read().is_01() || !add_ln85_160_fu_3872_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_162_reg_6805.read()) + sc_biguint<32>(add_ln85_160_fu_3872_p2.read()));
}

void sha256_transform::thread_add_ln85_164_fu_3902_p2() {
    add_ln85_164_fu_3902_p2 = (!reg_1202.read().is_01() || !ap_const_lv32_A81A664B.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1202.read()) + sc_bigint<32>(ap_const_lv32_A81A664B));
}

void sha256_transform::thread_add_ln85_165_fu_3908_p2() {
    add_ln85_165_fu_3908_p2 = (!reg_1214.read().is_01() || !m_41_reg_6038_pp0_iter7_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1214.read()) + sc_biguint<32>(m_41_reg_6038_pp0_iter7_reg.read()));
}

void sha256_transform::thread_add_ln85_166_fu_3913_p2() {
    add_ln85_166_fu_3913_p2 = (!add_ln85_165_fu_3908_p2.read().is_01() || !add_ln90_37_reg_6750.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_165_fu_3908_p2.read()) + sc_biguint<32>(add_ln90_37_reg_6750.read()));
}

void sha256_transform::thread_add_ln85_167_fu_3918_p2() {
    add_ln85_167_fu_3918_p2 = (!add_ln85_166_fu_3913_p2.read().is_01() || !add_ln85_164_fu_3902_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_166_fu_3913_p2.read()) + sc_biguint<32>(add_ln85_164_fu_3902_p2.read()));
}

void sha256_transform::thread_add_ln85_168_fu_3954_p2() {
    add_ln85_168_fu_3954_p2 = (!reg_1234.read().is_01() || !add_ln90_38_reg_6769.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1234.read()) + sc_biguint<32>(add_ln90_38_reg_6769.read()));
}

void sha256_transform::thread_add_ln85_169_fu_3943_p2() {
    add_ln85_169_fu_3943_p2 = (!m_42_reg_6071_pp0_iter7_reg.read().is_01() || !ap_const_lv32_C24B8B70.is_01())? sc_lv<32>(): (sc_biguint<32>(m_42_reg_6071_pp0_iter7_reg.read()) + sc_bigint<32>(ap_const_lv32_C24B8B70));
}

void sha256_transform::thread_add_ln85_16_fu_1685_p2() {
    add_ln85_16_fu_1685_p2 = (!reg_1126.read().is_01() || !add_ln90_reg_5133.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1126.read()) + sc_biguint<32>(add_ln90_reg_5133.read()));
}

void sha256_transform::thread_add_ln85_170_fu_3948_p2() {
    add_ln85_170_fu_3948_p2 = (!add_ln85_169_fu_3943_p2.read().is_01() || !grp_EP1_fu_1011_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_169_fu_3943_p2.read()) + sc_biguint<32>(grp_EP1_fu_1011_ap_return.read()));
}

void sha256_transform::thread_add_ln85_171_fu_3959_p2() {
    add_ln85_171_fu_3959_p2 = (!add_ln85_170_reg_6846.read().is_01() || !add_ln85_168_fu_3954_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_170_reg_6846.read()) + sc_biguint<32>(add_ln85_168_fu_3954_p2.read()));
}

void sha256_transform::thread_add_ln85_172_fu_3983_p2() {
    add_ln85_172_fu_3983_p2 = (!reg_1202.read().is_01() || !add_ln90_39_reg_6791.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1202.read()) + sc_biguint<32>(add_ln90_39_reg_6791.read()));
}

void sha256_transform::thread_add_ln85_173_fu_3988_p2() {
    add_ln85_173_fu_3988_p2 = (!m_43_reg_6078_pp0_iter7_reg.read().is_01() || !ap_const_lv32_C76C51A3.is_01())? sc_lv<32>(): (sc_biguint<32>(m_43_reg_6078_pp0_iter7_reg.read()) + sc_bigint<32>(ap_const_lv32_C76C51A3));
}

void sha256_transform::thread_add_ln85_174_fu_3993_p2() {
    add_ln85_174_fu_3993_p2 = (!add_ln85_173_fu_3988_p2.read().is_01() || !reg_1214.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_173_fu_3988_p2.read()) + sc_biguint<32>(reg_1214.read()));
}

void sha256_transform::thread_add_ln85_175_fu_3999_p2() {
    add_ln85_175_fu_3999_p2 = (!add_ln85_174_fu_3993_p2.read().is_01() || !add_ln85_172_fu_3983_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_174_fu_3993_p2.read()) + sc_biguint<32>(add_ln85_172_fu_3983_p2.read()));
}

void sha256_transform::thread_add_ln85_176_fu_4035_p2() {
    add_ln85_176_fu_4035_p2 = (!reg_1222.read().is_01() || !add_ln90_40_reg_6810.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1222.read()) + sc_biguint<32>(add_ln90_40_reg_6810.read()));
}

void sha256_transform::thread_add_ln85_177_fu_4024_p2() {
    add_ln85_177_fu_4024_p2 = (!m_44_reg_6101_pp0_iter7_reg.read().is_01() || !ap_const_lv32_D192E819.is_01())? sc_lv<32>(): (sc_biguint<32>(m_44_reg_6101_pp0_iter7_reg.read()) + sc_bigint<32>(ap_const_lv32_D192E819));
}

void sha256_transform::thread_add_ln85_178_fu_4029_p2() {
    add_ln85_178_fu_4029_p2 = (!add_ln85_177_fu_4024_p2.read().is_01() || !grp_EP1_fu_1006_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_177_fu_4024_p2.read()) + sc_biguint<32>(grp_EP1_fu_1006_ap_return.read()));
}

void sha256_transform::thread_add_ln85_179_fu_4040_p2() {
    add_ln85_179_fu_4040_p2 = (!add_ln85_178_reg_6887.read().is_01() || !add_ln85_176_fu_4035_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_178_reg_6887.read()) + sc_biguint<32>(add_ln85_176_fu_4035_p2.read()));
}

void sha256_transform::thread_add_ln85_17_fu_1612_p2() {
    add_ln85_17_fu_1612_p2 = (!m_4_reg_5149.read().is_01() || !ap_const_lv32_3956C25B.is_01())? sc_lv<32>(): (sc_biguint<32>(m_4_reg_5149.read()) + sc_biguint<32>(ap_const_lv32_3956C25B));
}

void sha256_transform::thread_add_ln85_180_fu_4064_p2() {
    add_ln85_180_fu_4064_p2 = (!reg_1222.read().is_01() || !add_ln90_41_reg_6832.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1222.read()) + sc_biguint<32>(add_ln90_41_reg_6832.read()));
}

void sha256_transform::thread_add_ln85_181_fu_4069_p2() {
    add_ln85_181_fu_4069_p2 = (!m_45_reg_6108_pp0_iter7_reg.read().is_01() || !ap_const_lv32_D6990624.is_01())? sc_lv<32>(): (sc_biguint<32>(m_45_reg_6108_pp0_iter7_reg.read()) + sc_bigint<32>(ap_const_lv32_D6990624));
}

void sha256_transform::thread_add_ln85_182_fu_4074_p2() {
    add_ln85_182_fu_4074_p2 = (!add_ln85_181_fu_4069_p2.read().is_01() || !reg_1218.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_181_fu_4069_p2.read()) + sc_biguint<32>(reg_1218.read()));
}

void sha256_transform::thread_add_ln85_183_fu_4080_p2() {
    add_ln85_183_fu_4080_p2 = (!add_ln85_182_fu_4074_p2.read().is_01() || !add_ln85_180_fu_4064_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_182_fu_4074_p2.read()) + sc_biguint<32>(add_ln85_180_fu_4064_p2.read()));
}

void sha256_transform::thread_add_ln85_184_fu_4116_p2() {
    add_ln85_184_fu_4116_p2 = (!reg_1222.read().is_01() || !add_ln90_42_reg_6851.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1222.read()) + sc_biguint<32>(add_ln90_42_reg_6851.read()));
}

void sha256_transform::thread_add_ln85_185_fu_4105_p2() {
    add_ln85_185_fu_4105_p2 = (!m_46_reg_6144_pp0_iter7_reg.read().is_01() || !ap_const_lv32_F40E3585.is_01())? sc_lv<32>(): (sc_biguint<32>(m_46_reg_6144_pp0_iter7_reg.read()) + sc_bigint<32>(ap_const_lv32_F40E3585));
}

void sha256_transform::thread_add_ln85_186_fu_4110_p2() {
    add_ln85_186_fu_4110_p2 = (!add_ln85_185_fu_4105_p2.read().is_01() || !grp_EP1_fu_1006_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_185_fu_4105_p2.read()) + sc_biguint<32>(grp_EP1_fu_1006_ap_return.read()));
}

void sha256_transform::thread_add_ln85_187_fu_4121_p2() {
    add_ln85_187_fu_4121_p2 = (!add_ln85_186_reg_6928.read().is_01() || !add_ln85_184_fu_4116_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_186_reg_6928.read()) + sc_biguint<32>(add_ln85_184_fu_4116_p2.read()));
}

void sha256_transform::thread_add_ln85_188_fu_4145_p2() {
    add_ln85_188_fu_4145_p2 = (!reg_1222.read().is_01() || !add_ln90_43_reg_6873.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1222.read()) + sc_biguint<32>(add_ln90_43_reg_6873.read()));
}

void sha256_transform::thread_add_ln85_189_fu_4150_p2() {
    add_ln85_189_fu_4150_p2 = (!m_47_reg_6151_pp0_iter8_reg.read().is_01() || !ap_const_lv32_106AA070.is_01())? sc_lv<32>(): (sc_biguint<32>(m_47_reg_6151_pp0_iter8_reg.read()) + sc_biguint<32>(ap_const_lv32_106AA070));
}

void sha256_transform::thread_add_ln85_18_fu_1617_p2() {
    add_ln85_18_fu_1617_p2 = (!add_ln85_17_fu_1612_p2.read().is_01() || !grp_EP1_fu_980_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_17_fu_1612_p2.read()) + sc_biguint<32>(grp_EP1_fu_980_ap_return.read()));
}

void sha256_transform::thread_add_ln85_190_fu_4155_p2() {
    add_ln85_190_fu_4155_p2 = (!add_ln85_189_fu_4150_p2.read().is_01() || !reg_1218.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_189_fu_4150_p2.read()) + sc_biguint<32>(reg_1218.read()));
}

void sha256_transform::thread_add_ln85_191_fu_4161_p2() {
    add_ln85_191_fu_4161_p2 = (!add_ln85_190_fu_4155_p2.read().is_01() || !add_ln85_188_fu_4145_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_190_fu_4155_p2.read()) + sc_biguint<32>(add_ln85_188_fu_4145_p2.read()));
}

void sha256_transform::thread_add_ln85_192_fu_4212_p2() {
    add_ln85_192_fu_4212_p2 = (!reg_1222.read().is_01() || !add_ln90_44_reg_6892.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1222.read()) + sc_biguint<32>(add_ln90_44_reg_6892.read()));
}

void sha256_transform::thread_add_ln85_193_fu_4201_p2() {
    add_ln85_193_fu_4201_p2 = (!m_48_reg_6184_pp0_iter9_reg.read().is_01() || !ap_const_lv32_19A4C116.is_01())? sc_lv<32>(): (sc_biguint<32>(m_48_reg_6184_pp0_iter9_reg.read()) + sc_biguint<32>(ap_const_lv32_19A4C116));
}

void sha256_transform::thread_add_ln85_194_fu_4206_p2() {
    add_ln85_194_fu_4206_p2 = (!add_ln85_193_fu_4201_p2.read().is_01() || !grp_EP1_fu_1006_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_193_fu_4201_p2.read()) + sc_biguint<32>(grp_EP1_fu_1006_ap_return.read()));
}

void sha256_transform::thread_add_ln85_195_fu_4217_p2() {
    add_ln85_195_fu_4217_p2 = (!add_ln85_194_reg_6974.read().is_01() || !add_ln85_192_fu_4212_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_194_reg_6974.read()) + sc_biguint<32>(add_ln85_192_fu_4212_p2.read()));
}

void sha256_transform::thread_add_ln85_196_fu_4241_p2() {
    add_ln85_196_fu_4241_p2 = (!reg_1234.read().is_01() || !add_ln90_45_reg_6914.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1234.read()) + sc_biguint<32>(add_ln90_45_reg_6914.read()));
}

void sha256_transform::thread_add_ln85_197_fu_4246_p2() {
    add_ln85_197_fu_4246_p2 = (!m_49_reg_6192_pp0_iter9_reg.read().is_01() || !ap_const_lv32_1E376C08.is_01())? sc_lv<32>(): (sc_biguint<32>(m_49_reg_6192_pp0_iter9_reg.read()) + sc_biguint<32>(ap_const_lv32_1E376C08));
}

void sha256_transform::thread_add_ln85_198_fu_4251_p2() {
    add_ln85_198_fu_4251_p2 = (!add_ln85_197_fu_4246_p2.read().is_01() || !reg_1246.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_197_fu_4246_p2.read()) + sc_biguint<32>(reg_1246.read()));
}

void sha256_transform::thread_add_ln85_199_fu_4257_p2() {
    add_ln85_199_fu_4257_p2 = (!add_ln85_198_fu_4251_p2.read().is_01() || !add_ln85_196_fu_4241_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_198_fu_4251_p2.read()) + sc_biguint<32>(add_ln85_196_fu_4241_p2.read()));
}

void sha256_transform::thread_add_ln85_19_fu_1690_p2() {
    add_ln85_19_fu_1690_p2 = (!add_ln85_18_reg_5525.read().is_01() || !add_ln85_16_fu_1685_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_18_reg_5525.read()) + sc_biguint<32>(add_ln85_16_fu_1685_p2.read()));
}

void sha256_transform::thread_add_ln85_1_fu_1291_p2() {
    add_ln85_1_fu_1291_p2 = (!m_0_fu_1266_p5.read().is_01() || !ap_const_lv32_428A2F98.is_01())? sc_lv<32>(): (sc_biguint<32>(m_0_fu_1266_p5.read()) + sc_biguint<32>(ap_const_lv32_428A2F98));
}

void sha256_transform::thread_add_ln85_200_fu_4293_p2() {
    add_ln85_200_fu_4293_p2 = (!reg_1234.read().is_01() || !add_ln90_46_reg_6933.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1234.read()) + sc_biguint<32>(add_ln90_46_reg_6933.read()));
}

void sha256_transform::thread_add_ln85_201_fu_4282_p2() {
    add_ln85_201_fu_4282_p2 = (!m_50_reg_6205_pp0_iter9_reg.read().is_01() || !ap_const_lv32_2748774C.is_01())? sc_lv<32>(): (sc_biguint<32>(m_50_reg_6205_pp0_iter9_reg.read()) + sc_biguint<32>(ap_const_lv32_2748774C));
}

void sha256_transform::thread_add_ln85_202_fu_4287_p2() {
    add_ln85_202_fu_4287_p2 = (!add_ln85_201_fu_4282_p2.read().is_01() || !grp_EP1_fu_1011_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_201_fu_4282_p2.read()) + sc_biguint<32>(grp_EP1_fu_1011_ap_return.read()));
}

void sha256_transform::thread_add_ln85_203_fu_4298_p2() {
    add_ln85_203_fu_4298_p2 = (!add_ln85_202_reg_7015.read().is_01() || !add_ln85_200_fu_4293_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_202_reg_7015.read()) + sc_biguint<32>(add_ln85_200_fu_4293_p2.read()));
}

void sha256_transform::thread_add_ln85_204_fu_4322_p2() {
    add_ln85_204_fu_4322_p2 = (!reg_1234.read().is_01() || !add_ln90_47_reg_6960.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1234.read()) + sc_biguint<32>(add_ln90_47_reg_6960.read()));
}

void sha256_transform::thread_add_ln85_205_fu_4327_p2() {
    add_ln85_205_fu_4327_p2 = (!m_51_reg_6212_pp0_iter9_reg.read().is_01() || !ap_const_lv32_34B0BCB5.is_01())? sc_lv<32>(): (sc_biguint<32>(m_51_reg_6212_pp0_iter9_reg.read()) + sc_biguint<32>(ap_const_lv32_34B0BCB5));
}

void sha256_transform::thread_add_ln85_206_fu_4332_p2() {
    add_ln85_206_fu_4332_p2 = (!add_ln85_205_fu_4327_p2.read().is_01() || !reg_1246.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_205_fu_4327_p2.read()) + sc_biguint<32>(reg_1246.read()));
}

void sha256_transform::thread_add_ln85_207_fu_4338_p2() {
    add_ln85_207_fu_4338_p2 = (!add_ln85_206_fu_4332_p2.read().is_01() || !add_ln85_204_fu_4322_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_206_fu_4332_p2.read()) + sc_biguint<32>(add_ln85_204_fu_4322_p2.read()));
}

void sha256_transform::thread_add_ln85_208_fu_4374_p2() {
    add_ln85_208_fu_4374_p2 = (!reg_1234.read().is_01() || !add_ln90_48_reg_6979.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1234.read()) + sc_biguint<32>(add_ln90_48_reg_6979.read()));
}

void sha256_transform::thread_add_ln85_209_fu_4363_p2() {
    add_ln85_209_fu_4363_p2 = (!m_52_reg_6243_pp0_iter9_reg.read().is_01() || !ap_const_lv32_391C0CB3.is_01())? sc_lv<32>(): (sc_biguint<32>(m_52_reg_6243_pp0_iter9_reg.read()) + sc_biguint<32>(ap_const_lv32_391C0CB3));
}

void sha256_transform::thread_add_ln85_20_fu_1748_p2() {
    add_ln85_20_fu_1748_p2 = (!reg_1150.read().is_01() || !add_ln90_1_reg_5279.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1150.read()) + sc_biguint<32>(add_ln90_1_reg_5279.read()));
}

void sha256_transform::thread_add_ln85_210_fu_4368_p2() {
    add_ln85_210_fu_4368_p2 = (!add_ln85_209_fu_4363_p2.read().is_01() || !grp_EP1_fu_1011_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_209_fu_4363_p2.read()) + sc_biguint<32>(grp_EP1_fu_1011_ap_return.read()));
}

void sha256_transform::thread_add_ln85_211_fu_4379_p2() {
    add_ln85_211_fu_4379_p2 = (!add_ln85_210_reg_7056.read().is_01() || !add_ln85_208_fu_4374_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_210_reg_7056.read()) + sc_biguint<32>(add_ln85_208_fu_4374_p2.read()));
}

void sha256_transform::thread_add_ln85_212_fu_4403_p2() {
    add_ln85_212_fu_4403_p2 = (!reg_1254.read().is_01() || !add_ln90_49_reg_7001.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1254.read()) + sc_biguint<32>(add_ln90_49_reg_7001.read()));
}

void sha256_transform::thread_add_ln85_213_fu_4408_p2() {
    add_ln85_213_fu_4408_p2 = (!m_53_reg_6250_pp0_iter9_reg.read().is_01() || !ap_const_lv32_4ED8AA4A.is_01())? sc_lv<32>(): (sc_biguint<32>(m_53_reg_6250_pp0_iter9_reg.read()) + sc_biguint<32>(ap_const_lv32_4ED8AA4A));
}

void sha256_transform::thread_add_ln85_214_fu_4413_p2() {
    add_ln85_214_fu_4413_p2 = (!add_ln85_213_fu_4408_p2.read().is_01() || !reg_1250.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_213_fu_4408_p2.read()) + sc_biguint<32>(reg_1250.read()));
}

void sha256_transform::thread_add_ln85_215_fu_4419_p2() {
    add_ln85_215_fu_4419_p2 = (!add_ln85_214_fu_4413_p2.read().is_01() || !add_ln85_212_fu_4403_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_214_fu_4413_p2.read()) + sc_biguint<32>(add_ln85_212_fu_4403_p2.read()));
}

void sha256_transform::thread_add_ln85_216_fu_4455_p2() {
    add_ln85_216_fu_4455_p2 = (!reg_1254.read().is_01() || !add_ln90_50_reg_7020.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1254.read()) + sc_biguint<32>(add_ln90_50_reg_7020.read()));
}

void sha256_transform::thread_add_ln85_217_fu_4444_p2() {
    add_ln85_217_fu_4444_p2 = (!m_54_reg_6273_pp0_iter9_reg.read().is_01() || !ap_const_lv32_5B9CCA4F.is_01())? sc_lv<32>(): (sc_biguint<32>(m_54_reg_6273_pp0_iter9_reg.read()) + sc_biguint<32>(ap_const_lv32_5B9CCA4F));
}

void sha256_transform::thread_add_ln85_218_fu_4449_p2() {
    add_ln85_218_fu_4449_p2 = (!add_ln85_217_fu_4444_p2.read().is_01() || !grp_EP1_fu_1016_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_217_fu_4444_p2.read()) + sc_biguint<32>(grp_EP1_fu_1016_ap_return.read()));
}

void sha256_transform::thread_add_ln85_219_fu_4460_p2() {
    add_ln85_219_fu_4460_p2 = (!add_ln85_218_reg_7097.read().is_01() || !add_ln85_216_fu_4455_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_218_reg_7097.read()) + sc_biguint<32>(add_ln85_216_fu_4455_p2.read()));
}

void sha256_transform::thread_add_ln85_21_fu_1753_p2() {
    add_ln85_21_fu_1753_p2 = (!m_5_reg_5155.read().is_01() || !ap_const_lv32_59F111F1.is_01())? sc_lv<32>(): (sc_biguint<32>(m_5_reg_5155.read()) + sc_biguint<32>(ap_const_lv32_59F111F1));
}

void sha256_transform::thread_add_ln85_220_fu_4484_p2() {
    add_ln85_220_fu_4484_p2 = (!reg_1234.read().is_01() || !add_ln90_51_reg_7042.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1234.read()) + sc_biguint<32>(add_ln90_51_reg_7042.read()));
}

void sha256_transform::thread_add_ln85_221_fu_4489_p2() {
    add_ln85_221_fu_4489_p2 = (!m_55_reg_6280_pp0_iter10_reg.read().is_01() || !ap_const_lv32_682E6FF3.is_01())? sc_lv<32>(): (sc_biguint<32>(m_55_reg_6280_pp0_iter10_reg.read()) + sc_biguint<32>(ap_const_lv32_682E6FF3));
}

void sha256_transform::thread_add_ln85_222_fu_4494_p2() {
    add_ln85_222_fu_4494_p2 = (!add_ln85_221_fu_4489_p2.read().is_01() || !reg_1246.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_221_fu_4489_p2.read()) + sc_biguint<32>(reg_1246.read()));
}

void sha256_transform::thread_add_ln85_223_fu_4500_p2() {
    add_ln85_223_fu_4500_p2 = (!add_ln85_222_fu_4494_p2.read().is_01() || !add_ln85_220_fu_4484_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_222_fu_4494_p2.read()) + sc_biguint<32>(add_ln85_220_fu_4484_p2.read()));
}

void sha256_transform::thread_add_ln85_224_fu_4536_p2() {
    add_ln85_224_fu_4536_p2 = (!reg_1254.read().is_01() || !add_ln90_52_reg_7061.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1254.read()) + sc_biguint<32>(add_ln90_52_reg_7061.read()));
}

void sha256_transform::thread_add_ln85_225_fu_4525_p2() {
    add_ln85_225_fu_4525_p2 = (!m_56_reg_6293_pp0_iter10_reg.read().is_01() || !ap_const_lv32_748F82EE.is_01())? sc_lv<32>(): (sc_biguint<32>(m_56_reg_6293_pp0_iter10_reg.read()) + sc_biguint<32>(ap_const_lv32_748F82EE));
}

void sha256_transform::thread_add_ln85_226_fu_4530_p2() {
    add_ln85_226_fu_4530_p2 = (!add_ln85_225_fu_4525_p2.read().is_01() || !grp_EP1_fu_1016_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_225_fu_4525_p2.read()) + sc_biguint<32>(grp_EP1_fu_1016_ap_return.read()));
}

void sha256_transform::thread_add_ln85_227_fu_4541_p2() {
    add_ln85_227_fu_4541_p2 = (!add_ln85_226_reg_7138.read().is_01() || !add_ln85_224_fu_4536_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_226_reg_7138.read()) + sc_biguint<32>(add_ln85_224_fu_4536_p2.read()));
}

void sha256_transform::thread_add_ln85_228_fu_4565_p2() {
    add_ln85_228_fu_4565_p2 = (!reg_1234.read().is_01() || !add_ln90_53_reg_7083.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1234.read()) + sc_biguint<32>(add_ln90_53_reg_7083.read()));
}

void sha256_transform::thread_add_ln85_229_fu_4570_p2() {
    add_ln85_229_fu_4570_p2 = (!m_57_reg_6300_pp0_iter10_reg.read().is_01() || !ap_const_lv32_78A5636F.is_01())? sc_lv<32>(): (sc_biguint<32>(m_57_reg_6300_pp0_iter10_reg.read()) + sc_biguint<32>(ap_const_lv32_78A5636F));
}

void sha256_transform::thread_add_ln85_22_fu_1758_p2() {
    add_ln85_22_fu_1758_p2 = (!add_ln85_21_fu_1753_p2.read().is_01() || !reg_1146.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_21_fu_1753_p2.read()) + sc_biguint<32>(reg_1146.read()));
}

void sha256_transform::thread_add_ln85_230_fu_4575_p2() {
    add_ln85_230_fu_4575_p2 = (!add_ln85_229_fu_4570_p2.read().is_01() || !reg_1246.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_229_fu_4570_p2.read()) + sc_biguint<32>(reg_1246.read()));
}

void sha256_transform::thread_add_ln85_231_fu_4581_p2() {
    add_ln85_231_fu_4581_p2 = (!add_ln85_230_fu_4575_p2.read().is_01() || !add_ln85_228_fu_4565_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_230_fu_4575_p2.read()) + sc_biguint<32>(add_ln85_228_fu_4565_p2.read()));
}

void sha256_transform::thread_add_ln85_232_fu_4614_p2() {
    add_ln85_232_fu_4614_p2 = (!reg_1234.read().is_01() || !ap_const_lv32_84C87814.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1234.read()) + sc_bigint<32>(ap_const_lv32_84C87814));
}

void sha256_transform::thread_add_ln85_233_fu_4604_p2() {
    add_ln85_233_fu_4604_p2 = (!grp_EP1_fu_1011_ap_return.read().is_01() || !m_58_reg_6325_pp0_iter10_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_1011_ap_return.read()) + sc_biguint<32>(m_58_reg_6325_pp0_iter10_reg.read()));
}

void sha256_transform::thread_add_ln85_234_fu_4609_p2() {
    add_ln85_234_fu_4609_p2 = (!add_ln85_233_fu_4604_p2.read().is_01() || !add_ln90_54_reg_7102.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_233_fu_4604_p2.read()) + sc_biguint<32>(add_ln90_54_reg_7102.read()));
}

void sha256_transform::thread_add_ln85_235_fu_4620_p2() {
    add_ln85_235_fu_4620_p2 = (!add_ln85_234_reg_7181.read().is_01() || !add_ln85_232_fu_4614_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_234_reg_7181.read()) + sc_biguint<32>(add_ln85_232_fu_4614_p2.read()));
}

void sha256_transform::thread_add_ln85_236_fu_4652_p2() {
    add_ln85_236_fu_4652_p2 = (!reg_1254.read().is_01() || !ap_const_lv32_8CC70208.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1254.read()) + sc_bigint<32>(ap_const_lv32_8CC70208));
}

void sha256_transform::thread_add_ln85_237_fu_4642_p2() {
    add_ln85_237_fu_4642_p2 = (!grp_EP1_fu_1016_ap_return.read().is_01() || !m_59_reg_6331_pp0_iter10_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_1016_ap_return.read()) + sc_biguint<32>(m_59_reg_6331_pp0_iter10_reg.read()));
}

void sha256_transform::thread_add_ln85_238_fu_4647_p2() {
    add_ln85_238_fu_4647_p2 = (!add_ln85_237_fu_4642_p2.read().is_01() || !add_ln90_55_reg_7124.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_237_fu_4642_p2.read()) + sc_biguint<32>(add_ln90_55_reg_7124.read()));
}

void sha256_transform::thread_add_ln85_239_fu_4658_p2() {
    add_ln85_239_fu_4658_p2 = (!add_ln85_238_reg_7204.read().is_01() || !add_ln85_236_fu_4652_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_238_reg_7204.read()) + sc_biguint<32>(add_ln85_236_fu_4652_p2.read()));
}

void sha256_transform::thread_add_ln85_23_fu_1764_p2() {
    add_ln85_23_fu_1764_p2 = (!add_ln85_22_fu_1758_p2.read().is_01() || !add_ln85_20_fu_1748_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_22_fu_1758_p2.read()) + sc_biguint<32>(add_ln85_20_fu_1748_p2.read()));
}

void sha256_transform::thread_add_ln85_240_fu_4682_p2() {
    add_ln85_240_fu_4682_p2 = (!reg_1254.read().is_01() || !ap_const_lv32_90BEFFFA.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1254.read()) + sc_bigint<32>(ap_const_lv32_90BEFFFA));
}

void sha256_transform::thread_add_ln85_241_fu_4688_p2() {
    add_ln85_241_fu_4688_p2 = (!reg_1250.read().is_01() || !m_60_reg_6353_pp0_iter10_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1250.read()) + sc_biguint<32>(m_60_reg_6353_pp0_iter10_reg.read()));
}

void sha256_transform::thread_add_ln85_242_fu_4693_p2() {
    add_ln85_242_fu_4693_p2 = (!add_ln85_241_fu_4688_p2.read().is_01() || !add_ln90_56_reg_7143.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_241_fu_4688_p2.read()) + sc_biguint<32>(add_ln90_56_reg_7143.read()));
}

void sha256_transform::thread_add_ln85_243_fu_4698_p2() {
    add_ln85_243_fu_4698_p2 = (!add_ln85_242_fu_4693_p2.read().is_01() || !add_ln85_240_fu_4682_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_242_fu_4693_p2.read()) + sc_biguint<32>(add_ln85_240_fu_4682_p2.read()));
}

void sha256_transform::thread_add_ln85_244_fu_4733_p2() {
    add_ln85_244_fu_4733_p2 = (!reg_1254.read().is_01() || !ap_const_lv32_A4506CEB.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1254.read()) + sc_bigint<32>(ap_const_lv32_A4506CEB));
}

void sha256_transform::thread_add_ln85_245_fu_4723_p2() {
    add_ln85_245_fu_4723_p2 = (!grp_EP1_fu_1016_ap_return.read().is_01() || !m_61_reg_6359_pp0_iter10_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_1016_ap_return.read()) + sc_biguint<32>(m_61_reg_6359_pp0_iter10_reg.read()));
}

void sha256_transform::thread_add_ln85_246_fu_4728_p2() {
    add_ln85_246_fu_4728_p2 = (!add_ln85_245_fu_4723_p2.read().is_01() || !add_ln90_57_reg_7165.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_245_fu_4723_p2.read()) + sc_biguint<32>(add_ln90_57_reg_7165.read()));
}

void sha256_transform::thread_add_ln85_247_fu_4739_p2() {
    add_ln85_247_fu_4739_p2 = (!add_ln85_246_reg_7245.read().is_01() || !add_ln85_244_fu_4733_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_246_reg_7245.read()) + sc_biguint<32>(add_ln85_244_fu_4733_p2.read()));
}

void sha256_transform::thread_add_ln85_248_fu_4763_p2() {
    add_ln85_248_fu_4763_p2 = (!reg_1254.read().is_01() || !ap_const_lv32_BEF9A3F7.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1254.read()) + sc_bigint<32>(ap_const_lv32_BEF9A3F7));
}

void sha256_transform::thread_add_ln85_249_fu_4769_p2() {
    add_ln85_249_fu_4769_p2 = (!add_ln90_58_reg_7186.read().is_01() || !reg_1250.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln90_58_reg_7186.read()) + sc_biguint<32>(reg_1250.read()));
}

void sha256_transform::thread_add_ln85_24_fu_1865_p2() {
    add_ln85_24_fu_1865_p2 = (!reg_1150.read().is_01() || !ap_const_lv32_923F82A4.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1150.read()) + sc_bigint<32>(ap_const_lv32_923F82A4));
}

void sha256_transform::thread_add_ln85_250_fu_4774_p2() {
    add_ln85_250_fu_4774_p2 = (!add_ln85_249_fu_4769_p2.read().is_01() || !add_ln85_248_fu_4763_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_249_fu_4769_p2.read()) + sc_biguint<32>(add_ln85_248_fu_4763_p2.read()));
}

void sha256_transform::thread_add_ln85_251_fu_3048_p2() {
    add_ln85_251_fu_3048_p2 = (!grp_SIG1_fu_1112_ap_return.read().is_01() || !m_55_reg_6280.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1112_ap_return.read()) + sc_biguint<32>(m_55_reg_6280.read()));
}

void sha256_transform::thread_add_ln85_252_fu_4780_p2() {
    add_ln85_252_fu_4780_p2 = (!add_ln85_254_reg_6395_pp0_iter11_reg.read().is_01() || !add_ln85_250_fu_4774_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_254_reg_6395_pp0_iter11_reg.read()) + sc_biguint<32>(add_ln85_250_fu_4774_p2.read()));
}

void sha256_transform::thread_add_ln85_253_fu_3053_p2() {
    add_ln85_253_fu_3053_p2 = (!m_46_reg_6144.read().is_01() || !tmp_1_45_reg_6163.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_46_reg_6144.read()) + sc_biguint<32>(tmp_1_45_reg_6163.read()));
}

void sha256_transform::thread_add_ln85_254_fu_3057_p2() {
    add_ln85_254_fu_3057_p2 = (!add_ln85_253_fu_3053_p2.read().is_01() || !add_ln85_251_fu_3048_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_253_fu_3053_p2.read()) + sc_biguint<32>(add_ln85_251_fu_3048_p2.read()));
}

void sha256_transform::thread_add_ln85_255_fu_4829_p2() {
    add_ln85_255_fu_4829_p2 = (!add_ln85_261_reg_6955_pp0_iter12_reg.read().is_01() || !add_ln85_258_fu_4825_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_261_reg_6955_pp0_iter12_reg.read()) + sc_biguint<32>(add_ln85_258_fu_4825_p2.read()));
}

void sha256_transform::thread_add_ln85_256_fu_4802_p2() {
    add_ln85_256_fu_4802_p2 = (!grp_CH_fu_914_ap_return.read().is_01() || !add_ln90_59_reg_7209.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_914_ap_return.read()) + sc_biguint<32>(add_ln90_59_reg_7209.read()));
}

void sha256_transform::thread_add_ln85_257_fu_4807_p2() {
    add_ln85_257_fu_4807_p2 = (!grp_EP1_fu_1016_ap_return.read().is_01() || !tmp_47_reg_6371_pp0_iter11_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_1016_ap_return.read()) + sc_biguint<32>(tmp_47_reg_6371_pp0_iter11_reg.read()));
}

void sha256_transform::thread_add_ln85_258_fu_4825_p2() {
    add_ln85_258_fu_4825_p2 = (!add_ln85_257_reg_7282.read().is_01() || !add_ln85_256_reg_7277.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_257_reg_7282.read()) + sc_biguint<32>(add_ln85_256_reg_7277.read()));
}

void sha256_transform::thread_add_ln85_259_fu_4167_p2() {
    add_ln85_259_fu_4167_p2 = (!m_56_reg_6293_pp0_iter8_reg.read().is_01() || !m_47_reg_6151_pp0_iter8_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_56_reg_6293_pp0_iter8_reg.read()) + sc_biguint<32>(m_47_reg_6151_pp0_iter8_reg.read()));
}

void sha256_transform::thread_add_ln85_25_fu_1821_p2() {
    add_ln85_25_fu_1821_p2 = (!grp_EP1_fu_986_ap_return.read().is_01() || !m_6_reg_5217.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_986_ap_return.read()) + sc_biguint<32>(m_6_reg_5217.read()));
}

void sha256_transform::thread_add_ln85_260_fu_4171_p2() {
    add_ln85_260_fu_4171_p2 = (!tmp_1_46_reg_6219_pp0_iter8_reg.read().is_01() || !ap_const_lv32_C67178F2.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_46_reg_6219_pp0_iter8_reg.read()) + sc_bigint<32>(ap_const_lv32_C67178F2));
}

void sha256_transform::thread_add_ln85_261_fu_4176_p2() {
    add_ln85_261_fu_4176_p2 = (!add_ln85_260_fu_4171_p2.read().is_01() || !add_ln85_259_fu_4167_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_260_fu_4171_p2.read()) + sc_biguint<32>(add_ln85_259_fu_4167_p2.read()));
}

void sha256_transform::thread_add_ln85_26_fu_1826_p2() {
    add_ln85_26_fu_1826_p2 = (!add_ln85_25_fu_1821_p2.read().is_01() || !add_ln90_2_reg_5361.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_25_fu_1821_p2.read()) + sc_biguint<32>(add_ln90_2_reg_5361.read()));
}

void sha256_transform::thread_add_ln85_27_fu_1871_p2() {
    add_ln85_27_fu_1871_p2 = (!add_ln85_26_reg_5672.read().is_01() || !add_ln85_24_fu_1865_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_26_reg_5672.read()) + sc_biguint<32>(add_ln85_24_fu_1865_p2.read()));
}

void sha256_transform::thread_add_ln85_28_fu_1929_p2() {
    add_ln85_28_fu_1929_p2 = (!reg_1126.read().is_01() || !ap_const_lv32_AB1C5ED5.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1126.read()) + sc_bigint<32>(ap_const_lv32_AB1C5ED5));
}

void sha256_transform::thread_add_ln85_29_fu_1935_p2() {
    add_ln85_29_fu_1935_p2 = (!reg_1122.read().is_01() || !m_7_reg_5223.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1122.read()) + sc_biguint<32>(m_7_reg_5223.read()));
}

void sha256_transform::thread_add_ln85_2_fu_1297_p2() {
    add_ln85_2_fu_1297_p2 = (!add_ln85_1_fu_1291_p2.read().is_01() || !reg_1122.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_1_fu_1291_p2.read()) + sc_biguint<32>(reg_1122.read()));
}

void sha256_transform::thread_add_ln85_30_fu_1940_p2() {
    add_ln85_30_fu_1940_p2 = (!add_ln85_29_fu_1935_p2.read().is_01() || !add_ln90_3_reg_5511.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_29_fu_1935_p2.read()) + sc_biguint<32>(add_ln90_3_reg_5511.read()));
}

void sha256_transform::thread_add_ln85_31_fu_1945_p2() {
    add_ln85_31_fu_1945_p2 = (!add_ln85_30_fu_1940_p2.read().is_01() || !add_ln85_28_fu_1929_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_30_fu_1940_p2.read()) + sc_biguint<32>(add_ln85_28_fu_1929_p2.read()));
}

void sha256_transform::thread_add_ln85_32_fu_2049_p2() {
    add_ln85_32_fu_2049_p2 = (!reg_1150.read().is_01() || !add_ln90_4_reg_5578.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1150.read()) + sc_biguint<32>(add_ln90_4_reg_5578.read()));
}

void sha256_transform::thread_add_ln85_33_fu_2004_p2() {
    add_ln85_33_fu_2004_p2 = (!m_8_reg_5298.read().is_01() || !ap_const_lv32_D807AA98.is_01())? sc_lv<32>(): (sc_biguint<32>(m_8_reg_5298.read()) + sc_bigint<32>(ap_const_lv32_D807AA98));
}

void sha256_transform::thread_add_ln85_34_fu_2009_p2() {
    add_ln85_34_fu_2009_p2 = (!add_ln85_33_fu_2004_p2.read().is_01() || !grp_EP1_fu_986_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_33_fu_2004_p2.read()) + sc_biguint<32>(grp_EP1_fu_986_ap_return.read()));
}

void sha256_transform::thread_add_ln85_35_fu_2054_p2() {
    add_ln85_35_fu_2054_p2 = (!add_ln85_34_reg_5785.read().is_01() || !add_ln85_32_fu_2049_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_34_reg_5785.read()) + sc_biguint<32>(add_ln85_32_fu_2049_p2.read()));
}

void sha256_transform::thread_add_ln85_36_fu_2112_p2() {
    add_ln85_36_fu_2112_p2 = (!reg_1126.read().is_01() || !add_ln90_5_reg_5658.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1126.read()) + sc_biguint<32>(add_ln90_5_reg_5658.read()));
}

void sha256_transform::thread_add_ln85_37_fu_2117_p2() {
    add_ln85_37_fu_2117_p2 = (!m_9_reg_5304_pp0_iter1_reg.read().is_01() || !ap_const_lv32_12835B01.is_01())? sc_lv<32>(): (sc_biguint<32>(m_9_reg_5304_pp0_iter1_reg.read()) + sc_biguint<32>(ap_const_lv32_12835B01));
}

void sha256_transform::thread_add_ln85_38_fu_2122_p2() {
    add_ln85_38_fu_2122_p2 = (!add_ln85_37_fu_2117_p2.read().is_01() || !reg_1122.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_37_fu_2117_p2.read()) + sc_biguint<32>(reg_1122.read()));
}

void sha256_transform::thread_add_ln85_39_fu_2128_p2() {
    add_ln85_39_fu_2128_p2 = (!add_ln85_38_fu_2122_p2.read().is_01() || !add_ln85_36_fu_2112_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_38_fu_2122_p2.read()) + sc_biguint<32>(add_ln85_36_fu_2112_p2.read()));
}

void sha256_transform::thread_add_ln85_3_fu_1335_p2() {
    add_ln85_3_fu_1335_p2 = (!add_ln85_2_reg_5056.read().is_01() || !add_ln85_fu_1329_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_2_reg_5056.read()) + sc_biguint<32>(add_ln85_fu_1329_p2.read()));
}

void sha256_transform::thread_add_ln85_40_fu_2230_p2() {
    add_ln85_40_fu_2230_p2 = (!reg_1170.read().is_01() || !add_ln90_6_reg_5701.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1170.read()) + sc_biguint<32>(add_ln90_6_reg_5701.read()));
}

void sha256_transform::thread_add_ln85_41_fu_2187_p2() {
    add_ln85_41_fu_2187_p2 = (!m_10_reg_5377_pp0_iter1_reg.read().is_01() || !ap_const_lv32_243185BE.is_01())? sc_lv<32>(): (sc_biguint<32>(m_10_reg_5377_pp0_iter1_reg.read()) + sc_biguint<32>(ap_const_lv32_243185BE));
}

void sha256_transform::thread_add_ln85_42_fu_2192_p2() {
    add_ln85_42_fu_2192_p2 = (!add_ln85_41_fu_2187_p2.read().is_01() || !grp_EP1_fu_991_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_41_fu_2187_p2.read()) + sc_biguint<32>(grp_EP1_fu_991_ap_return.read()));
}

void sha256_transform::thread_add_ln85_43_fu_2235_p2() {
    add_ln85_43_fu_2235_p2 = (!add_ln85_42_reg_5908.read().is_01() || !add_ln85_40_fu_2230_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_42_reg_5908.read()) + sc_biguint<32>(add_ln85_40_fu_2230_p2.read()));
}

void sha256_transform::thread_add_ln85_44_fu_2293_p2() {
    add_ln85_44_fu_2293_p2 = (!tmp_3_10_reg_5953.read().is_01() || !add_ln90_7_reg_5771.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_3_10_reg_5953.read()) + sc_biguint<32>(add_ln90_7_reg_5771.read()));
}

void sha256_transform::thread_add_ln85_45_fu_2297_p2() {
    add_ln85_45_fu_2297_p2 = (!m_11_reg_5384_pp0_iter1_reg.read().is_01() || !ap_const_lv32_550C7DC3.is_01())? sc_lv<32>(): (sc_biguint<32>(m_11_reg_5384_pp0_iter1_reg.read()) + sc_biguint<32>(ap_const_lv32_550C7DC3));
}

void sha256_transform::thread_add_ln85_46_fu_2302_p2() {
    add_ln85_46_fu_2302_p2 = (!add_ln85_45_fu_2297_p2.read().is_01() || !reg_1122.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_45_fu_2297_p2.read()) + sc_biguint<32>(reg_1122.read()));
}

void sha256_transform::thread_add_ln85_47_fu_2308_p2() {
    add_ln85_47_fu_2308_p2 = (!add_ln85_46_fu_2302_p2.read().is_01() || !add_ln85_44_fu_2293_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_46_fu_2302_p2.read()) + sc_biguint<32>(add_ln85_44_fu_2293_p2.read()));
}

void sha256_transform::thread_add_ln85_48_fu_2412_p2() {
    add_ln85_48_fu_2412_p2 = (!reg_1150.read().is_01() || !add_ln90_8_reg_5814.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1150.read()) + sc_biguint<32>(add_ln90_8_reg_5814.read()));
}

void sha256_transform::thread_add_ln85_49_fu_2367_p2() {
    add_ln85_49_fu_2367_p2 = (!m_12_reg_5447_pp0_iter1_reg.read().is_01() || !ap_const_lv32_72BE5D74.is_01())? sc_lv<32>(): (sc_biguint<32>(m_12_reg_5447_pp0_iter1_reg.read()) + sc_biguint<32>(ap_const_lv32_72BE5D74));
}

void sha256_transform::thread_add_ln85_4_fu_1386_p2() {
    add_ln85_4_fu_1386_p2 = (!reg_1126.read().is_01() || !ctx_state_6_read_1_reg_4918.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1126.read()) + sc_biguint<32>(ctx_state_6_read_1_reg_4918.read()));
}

void sha256_transform::thread_add_ln85_50_fu_2372_p2() {
    add_ln85_50_fu_2372_p2 = (!add_ln85_49_fu_2367_p2.read().is_01() || !grp_EP1_fu_986_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_49_fu_2367_p2.read()) + sc_biguint<32>(grp_EP1_fu_986_ap_return.read()));
}

void sha256_transform::thread_add_ln85_51_fu_2417_p2() {
    add_ln85_51_fu_2417_p2 = (!add_ln85_50_reg_6026.read().is_01() || !add_ln85_48_fu_2412_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_50_reg_6026.read()) + sc_biguint<32>(add_ln85_48_fu_2412_p2.read()));
}

void sha256_transform::thread_add_ln85_52_fu_2475_p2() {
    add_ln85_52_fu_2475_p2 = (!reg_1150.read().is_01() || !ap_const_lv32_80DEB1FE.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1150.read()) + sc_bigint<32>(ap_const_lv32_80DEB1FE));
}

void sha256_transform::thread_add_ln85_53_fu_2481_p2() {
    add_ln85_53_fu_2481_p2 = (!reg_1146.read().is_01() || !m_13_reg_5454_pp0_iter1_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1146.read()) + sc_biguint<32>(m_13_reg_5454_pp0_iter1_reg.read()));
}

void sha256_transform::thread_add_ln85_54_fu_2486_p2() {
    add_ln85_54_fu_2486_p2 = (!add_ln85_53_fu_2481_p2.read().is_01() || !add_ln90_9_reg_5894.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_53_fu_2481_p2.read()) + sc_biguint<32>(add_ln90_9_reg_5894.read()));
}

void sha256_transform::thread_add_ln85_55_fu_2491_p2() {
    add_ln85_55_fu_2491_p2 = (!add_ln85_54_fu_2486_p2.read().is_01() || !add_ln85_52_fu_2475_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_54_fu_2486_p2.read()) + sc_biguint<32>(add_ln85_52_fu_2475_p2.read()));
}

void sha256_transform::thread_add_ln85_56_fu_2594_p2() {
    add_ln85_56_fu_2594_p2 = (!reg_1150.read().is_01() || !ap_const_lv32_9BDC06A7.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1150.read()) + sc_bigint<32>(ap_const_lv32_9BDC06A7));
}

void sha256_transform::thread_add_ln85_57_fu_2550_p2() {
    add_ln85_57_fu_2550_p2 = (!grp_EP1_fu_986_ap_return.read().is_01() || !m_14_reg_5530_pp0_iter2_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_986_ap_return.read()) + sc_biguint<32>(m_14_reg_5530_pp0_iter2_reg.read()));
}

void sha256_transform::thread_add_ln85_58_fu_2555_p2() {
    add_ln85_58_fu_2555_p2 = (!add_ln85_57_fu_2550_p2.read().is_01() || !add_ln90_10_reg_5937.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_57_fu_2550_p2.read()) + sc_biguint<32>(add_ln90_10_reg_5937.read()));
}

void sha256_transform::thread_add_ln85_59_fu_2600_p2() {
    add_ln85_59_fu_2600_p2 = (!add_ln85_58_reg_6139.read().is_01() || !add_ln85_56_fu_2594_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_58_reg_6139.read()) + sc_biguint<32>(add_ln85_56_fu_2594_p2.read()));
}

void sha256_transform::thread_add_ln85_5_fu_1391_p2() {
    add_ln85_5_fu_1391_p2 = (!m_1_reg_5005.read().is_01() || !ap_const_lv32_71374491.is_01())? sc_lv<32>(): (sc_biguint<32>(m_1_reg_5005.read()) + sc_biguint<32>(ap_const_lv32_71374491));
}

void sha256_transform::thread_add_ln85_60_fu_2654_p2() {
    add_ln85_60_fu_2654_p2 = (!reg_1150.read().is_01() || !add_ln90_11_reg_6012.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1150.read()) + sc_biguint<32>(add_ln90_11_reg_6012.read()));
}

void sha256_transform::thread_add_ln85_61_fu_2659_p2() {
    add_ln85_61_fu_2659_p2 = (!m_15_reg_5537_pp0_iter2_reg.read().is_01() || !ap_const_lv32_C19BF174.is_01())? sc_lv<32>(): (sc_biguint<32>(m_15_reg_5537_pp0_iter2_reg.read()) + sc_bigint<32>(ap_const_lv32_C19BF174));
}

void sha256_transform::thread_add_ln85_62_fu_2664_p2() {
    add_ln85_62_fu_2664_p2 = (!add_ln85_61_fu_2659_p2.read().is_01() || !reg_1146.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_61_fu_2659_p2.read()) + sc_biguint<32>(reg_1146.read()));
}

void sha256_transform::thread_add_ln85_63_fu_2670_p2() {
    add_ln85_63_fu_2670_p2 = (!add_ln85_62_fu_2664_p2.read().is_01() || !add_ln85_60_fu_2654_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_62_fu_2664_p2.read()) + sc_biguint<32>(add_ln85_60_fu_2654_p2.read()));
}

void sha256_transform::thread_add_ln85_64_fu_2766_p2() {
    add_ln85_64_fu_2766_p2 = (!reg_1150.read().is_01() || !add_ln90_12_reg_6055.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1150.read()) + sc_biguint<32>(add_ln90_12_reg_6055.read()));
}

void sha256_transform::thread_add_ln85_65_fu_2725_p2() {
    add_ln85_65_fu_2725_p2 = (!m_16_reg_5544_pp0_iter3_reg.read().is_01() || !ap_const_lv32_E49B69C1.is_01())? sc_lv<32>(): (sc_biguint<32>(m_16_reg_5544_pp0_iter3_reg.read()) + sc_bigint<32>(ap_const_lv32_E49B69C1));
}

void sha256_transform::thread_add_ln85_66_fu_2730_p2() {
    add_ln85_66_fu_2730_p2 = (!add_ln85_65_fu_2725_p2.read().is_01() || !grp_EP1_fu_986_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_65_fu_2725_p2.read()) + sc_biguint<32>(grp_EP1_fu_986_ap_return.read()));
}

void sha256_transform::thread_add_ln85_67_fu_2771_p2() {
    add_ln85_67_fu_2771_p2 = (!add_ln85_66_reg_6238.read().is_01() || !add_ln85_64_fu_2766_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_66_reg_6238.read()) + sc_biguint<32>(add_ln85_64_fu_2766_p2.read()));
}

void sha256_transform::thread_add_ln85_68_fu_2825_p2() {
    add_ln85_68_fu_2825_p2 = (!reg_1170.read().is_01() || !add_ln90_13_reg_6125.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1170.read()) + sc_biguint<32>(add_ln90_13_reg_6125.read()));
}

void sha256_transform::thread_add_ln85_69_fu_2830_p2() {
    add_ln85_69_fu_2830_p2 = (!m_17_reg_5551_pp0_iter3_reg.read().is_01() || !ap_const_lv32_EFBE4786.is_01())? sc_lv<32>(): (sc_biguint<32>(m_17_reg_5551_pp0_iter3_reg.read()) + sc_bigint<32>(ap_const_lv32_EFBE4786));
}

void sha256_transform::thread_add_ln85_6_fu_1396_p2() {
    add_ln85_6_fu_1396_p2 = (!add_ln85_5_fu_1391_p2.read().is_01() || !reg_1122.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_5_fu_1391_p2.read()) + sc_biguint<32>(reg_1122.read()));
}

void sha256_transform::thread_add_ln85_70_fu_2835_p2() {
    add_ln85_70_fu_2835_p2 = (!add_ln85_69_fu_2830_p2.read().is_01() || !reg_1182.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_69_fu_2830_p2.read()) + sc_biguint<32>(reg_1182.read()));
}

void sha256_transform::thread_add_ln85_71_fu_2841_p2() {
    add_ln85_71_fu_2841_p2 = (!add_ln85_70_fu_2835_p2.read().is_01() || !add_ln85_68_fu_2825_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_70_fu_2835_p2.read()) + sc_biguint<32>(add_ln85_68_fu_2825_p2.read()));
}

void sha256_transform::thread_add_ln85_72_fu_2937_p2() {
    add_ln85_72_fu_2937_p2 = (!reg_1170.read().is_01() || !add_ln90_14_reg_6168.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1170.read()) + sc_biguint<32>(add_ln90_14_reg_6168.read()));
}

void sha256_transform::thread_add_ln85_73_fu_2896_p2() {
    add_ln85_73_fu_2896_p2 = (!m_18_reg_5594_pp0_iter3_reg.read().is_01() || !ap_const_lv32_FC19DC6.is_01())? sc_lv<32>(): (sc_biguint<32>(m_18_reg_5594_pp0_iter3_reg.read()) + sc_biguint<32>(ap_const_lv32_FC19DC6));
}

void sha256_transform::thread_add_ln85_74_fu_2901_p2() {
    add_ln85_74_fu_2901_p2 = (!add_ln85_73_fu_2896_p2.read().is_01() || !grp_EP1_fu_991_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_73_fu_2896_p2.read()) + sc_biguint<32>(grp_EP1_fu_991_ap_return.read()));
}

void sha256_transform::thread_add_ln85_75_fu_2942_p2() {
    add_ln85_75_fu_2942_p2 = (!add_ln85_74_reg_6320.read().is_01() || !add_ln85_72_fu_2937_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_74_reg_6320.read()) + sc_biguint<32>(add_ln85_72_fu_2937_p2.read()));
}

void sha256_transform::thread_add_ln85_76_fu_2996_p2() {
    add_ln85_76_fu_2996_p2 = (!reg_1170.read().is_01() || !add_ln90_15_reg_6224.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1170.read()) + sc_biguint<32>(add_ln90_15_reg_6224.read()));
}

void sha256_transform::thread_add_ln85_77_fu_3001_p2() {
    add_ln85_77_fu_3001_p2 = (!m_19_reg_5601_pp0_iter3_reg.read().is_01() || !ap_const_lv32_240CA1CC.is_01())? sc_lv<32>(): (sc_biguint<32>(m_19_reg_5601_pp0_iter3_reg.read()) + sc_biguint<32>(ap_const_lv32_240CA1CC));
}

void sha256_transform::thread_add_ln85_78_fu_3006_p2() {
    add_ln85_78_fu_3006_p2 = (!add_ln85_77_fu_3001_p2.read().is_01() || !reg_1182.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_77_fu_3001_p2.read()) + sc_biguint<32>(reg_1182.read()));
}

void sha256_transform::thread_add_ln85_79_fu_3012_p2() {
    add_ln85_79_fu_3012_p2 = (!add_ln85_78_fu_3006_p2.read().is_01() || !add_ln85_76_fu_2996_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_78_fu_3006_p2.read()) + sc_biguint<32>(add_ln85_76_fu_2996_p2.read()));
}

void sha256_transform::thread_add_ln85_7_fu_1402_p2() {
    add_ln85_7_fu_1402_p2 = (!add_ln85_6_fu_1396_p2.read().is_01() || !add_ln85_4_fu_1386_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_6_fu_1396_p2.read()) + sc_biguint<32>(add_ln85_4_fu_1386_p2.read()));
}

void sha256_transform::thread_add_ln85_80_fu_3063_p2() {
    add_ln85_80_fu_3063_p2 = (!reg_1170.read().is_01() || !add_ln90_16_reg_6257.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1170.read()) + sc_biguint<32>(add_ln90_16_reg_6257.read()));
}

void sha256_transform::thread_add_ln85_81_fu_3037_p2() {
    add_ln85_81_fu_3037_p2 = (!m_20_reg_5634_pp0_iter3_reg.read().is_01() || !ap_const_lv32_2DE92C6F.is_01())? sc_lv<32>(): (sc_biguint<32>(m_20_reg_5634_pp0_iter3_reg.read()) + sc_biguint<32>(ap_const_lv32_2DE92C6F));
}

void sha256_transform::thread_add_ln85_82_fu_3042_p2() {
    add_ln85_82_fu_3042_p2 = (!add_ln85_81_fu_3037_p2.read().is_01() || !grp_EP1_fu_991_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_81_fu_3037_p2.read()) + sc_biguint<32>(grp_EP1_fu_991_ap_return.read()));
}

void sha256_transform::thread_add_ln85_83_fu_3068_p2() {
    add_ln85_83_fu_3068_p2 = (!add_ln85_82_reg_6390.read().is_01() || !add_ln85_80_fu_3063_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_82_reg_6390.read()) + sc_biguint<32>(add_ln85_80_fu_3063_p2.read()));
}

void sha256_transform::thread_add_ln85_84_fu_3092_p2() {
    add_ln85_84_fu_3092_p2 = (!reg_1190.read().is_01() || !add_ln90_17_reg_6306.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1190.read()) + sc_biguint<32>(add_ln90_17_reg_6306.read()));
}

void sha256_transform::thread_add_ln85_85_fu_3097_p2() {
    add_ln85_85_fu_3097_p2 = (!m_21_reg_5641_pp0_iter3_reg.read().is_01() || !ap_const_lv32_4A7484AA.is_01())? sc_lv<32>(): (sc_biguint<32>(m_21_reg_5641_pp0_iter3_reg.read()) + sc_biguint<32>(ap_const_lv32_4A7484AA));
}

void sha256_transform::thread_add_ln85_86_fu_3102_p2() {
    add_ln85_86_fu_3102_p2 = (!add_ln85_85_fu_3097_p2.read().is_01() || !reg_1186.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_85_fu_3097_p2.read()) + sc_biguint<32>(reg_1186.read()));
}

void sha256_transform::thread_add_ln85_87_fu_3108_p2() {
    add_ln85_87_fu_3108_p2 = (!add_ln85_86_fu_3102_p2.read().is_01() || !add_ln85_84_fu_3092_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_86_fu_3102_p2.read()) + sc_biguint<32>(add_ln85_84_fu_3092_p2.read()));
}

void sha256_transform::thread_add_ln85_88_fu_3144_p2() {
    add_ln85_88_fu_3144_p2 = (!reg_1190.read().is_01() || !add_ln90_18_reg_6337.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1190.read()) + sc_biguint<32>(add_ln90_18_reg_6337.read()));
}

void sha256_transform::thread_add_ln85_89_fu_3133_p2() {
    add_ln85_89_fu_3133_p2 = (!m_22_reg_5677_pp0_iter3_reg.read().is_01() || !ap_const_lv32_5CB0A9DC.is_01())? sc_lv<32>(): (sc_biguint<32>(m_22_reg_5677_pp0_iter3_reg.read()) + sc_biguint<32>(ap_const_lv32_5CB0A9DC));
}

void sha256_transform::thread_add_ln85_8_fu_1489_p2() {
    add_ln85_8_fu_1489_p2 = (!reg_1126.read().is_01() || !ap_const_lv32_B5C0FBCF.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1126.read()) + sc_bigint<32>(ap_const_lv32_B5C0FBCF));
}

void sha256_transform::thread_add_ln85_90_fu_3138_p2() {
    add_ln85_90_fu_3138_p2 = (!add_ln85_89_fu_3133_p2.read().is_01() || !grp_EP1_fu_996_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_89_fu_3133_p2.read()) + sc_biguint<32>(grp_EP1_fu_996_ap_return.read()));
}

void sha256_transform::thread_add_ln85_91_fu_3149_p2() {
    add_ln85_91_fu_3149_p2 = (!add_ln85_90_reg_6436.read().is_01() || !add_ln85_88_fu_3144_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_90_reg_6436.read()) + sc_biguint<32>(add_ln85_88_fu_3144_p2.read()));
}

void sha256_transform::thread_add_ln85_92_fu_3173_p2() {
    add_ln85_92_fu_3173_p2 = (!reg_1170.read().is_01() || !add_ln90_19_reg_6376.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1170.read()) + sc_biguint<32>(add_ln90_19_reg_6376.read()));
}

void sha256_transform::thread_add_ln85_93_fu_3178_p2() {
    add_ln85_93_fu_3178_p2 = (!m_23_reg_5684_pp0_iter4_reg.read().is_01() || !ap_const_lv32_76F988DA.is_01())? sc_lv<32>(): (sc_biguint<32>(m_23_reg_5684_pp0_iter4_reg.read()) + sc_biguint<32>(ap_const_lv32_76F988DA));
}

void sha256_transform::thread_add_ln85_94_fu_3183_p2() {
    add_ln85_94_fu_3183_p2 = (!add_ln85_93_fu_3178_p2.read().is_01() || !reg_1182.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_93_fu_3178_p2.read()) + sc_biguint<32>(reg_1182.read()));
}

void sha256_transform::thread_add_ln85_95_fu_3189_p2() {
    add_ln85_95_fu_3189_p2 = (!add_ln85_94_fu_3183_p2.read().is_01() || !add_ln85_92_fu_3173_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_94_fu_3183_p2.read()) + sc_biguint<32>(add_ln85_92_fu_3173_p2.read()));
}

void sha256_transform::thread_add_ln85_96_fu_3224_p2() {
    add_ln85_96_fu_3224_p2 = (!reg_1190.read().is_01() || !ap_const_lv32_983E5152.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1190.read()) + sc_bigint<32>(ap_const_lv32_983E5152));
}

void sha256_transform::thread_add_ln85_97_fu_3214_p2() {
    add_ln85_97_fu_3214_p2 = (!grp_EP1_fu_996_ap_return.read().is_01() || !m_24_reg_5717_pp0_iter4_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_996_ap_return.read()) + sc_biguint<32>(m_24_reg_5717_pp0_iter4_reg.read()));
}

void sha256_transform::thread_add_ln85_98_fu_3219_p2() {
    add_ln85_98_fu_3219_p2 = (!add_ln85_97_fu_3214_p2.read().is_01() || !add_ln90_20_reg_6400.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_97_fu_3214_p2.read()) + sc_biguint<32>(add_ln90_20_reg_6400.read()));
}

void sha256_transform::thread_add_ln85_99_fu_3230_p2() {
    add_ln85_99_fu_3230_p2 = (!add_ln85_98_reg_6477.read().is_01() || !add_ln85_96_fu_3224_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_98_reg_6477.read()) + sc_biguint<32>(add_ln85_96_fu_3224_p2.read()));
}

void sha256_transform::thread_add_ln85_9_fu_1453_p2() {
    add_ln85_9_fu_1453_p2 = (!grp_EP1_fu_980_ap_return.read().is_01() || !m_2_reg_5071.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_980_ap_return.read()) + sc_biguint<32>(m_2_reg_5071.read()));
}

void sha256_transform::thread_add_ln85_fu_1329_p2() {
    add_ln85_fu_1329_p2 = (!reg_1126.read().is_01() || !ap_port_reg_ctx_state_7_read.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1126.read()) + sc_biguint<32>(ap_port_reg_ctx_state_7_read.read()));
}

void sha256_transform::thread_add_ln90_10_fu_2240_p2() {
    add_ln90_10_fu_2240_p2 = (!add_ln85_43_fu_2235_p2.read().is_01() || !add_ln94_6_reg_5708.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_43_fu_2235_p2.read()) + sc_biguint<32>(add_ln94_6_reg_5708.read()));
}

void sha256_transform::thread_add_ln90_11_fu_2348_p2() {
    add_ln90_11_fu_2348_p2 = (!add_ln85_47_reg_5982.read().is_01() || !add_ln94_7_reg_5778.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_47_reg_5982.read()) + sc_biguint<32>(add_ln94_7_reg_5778.read()));
}

void sha256_transform::thread_add_ln90_12_fu_2422_p2() {
    add_ln90_12_fu_2422_p2 = (!add_ln85_51_fu_2417_p2.read().is_01() || !add_ln94_8_reg_5821.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_51_fu_2417_p2.read()) + sc_biguint<32>(add_ln94_8_reg_5821.read()));
}

void sha256_transform::thread_add_ln90_13_fu_2531_p2() {
    add_ln90_13_fu_2531_p2 = (!add_ln85_55_reg_6095.read().is_01() || !add_ln94_9_reg_5901.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_55_reg_6095.read()) + sc_biguint<32>(add_ln94_9_reg_5901.read()));
}

void sha256_transform::thread_add_ln90_14_fu_2605_p2() {
    add_ln90_14_fu_2605_p2 = (!add_ln85_59_fu_2600_p2.read().is_01() || !add_ln94_10_reg_5944.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_59_fu_2600_p2.read()) + sc_biguint<32>(add_ln94_10_reg_5944.read()));
}

void sha256_transform::thread_add_ln90_15_fu_2706_p2() {
    add_ln90_15_fu_2706_p2 = (!add_ln85_63_reg_6199.read().is_01() || !add_ln94_11_reg_6019.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_63_reg_6199.read()) + sc_biguint<32>(add_ln94_11_reg_6019.read()));
}

void sha256_transform::thread_add_ln90_16_fu_2776_p2() {
    add_ln90_16_fu_2776_p2 = (!add_ln85_67_fu_2771_p2.read().is_01() || !add_ln94_12_reg_6062.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_67_fu_2771_p2.read()) + sc_biguint<32>(add_ln94_12_reg_6062.read()));
}

void sha256_transform::thread_add_ln90_17_fu_2877_p2() {
    add_ln90_17_fu_2877_p2 = (!add_ln85_71_reg_6287.read().is_01() || !add_ln94_13_reg_6132.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_71_reg_6287.read()) + sc_biguint<32>(add_ln94_13_reg_6132.read()));
}

void sha256_transform::thread_add_ln90_18_fu_2947_p2() {
    add_ln90_18_fu_2947_p2 = (!add_ln85_75_fu_2942_p2.read().is_01() || !add_ln94_14_reg_6175.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_75_fu_2942_p2.read()) + sc_biguint<32>(add_ln94_14_reg_6175.read()));
}

void sha256_transform::thread_add_ln90_19_fu_3018_p2() {
    add_ln90_19_fu_3018_p2 = (!add_ln85_79_reg_6365.read().is_01() || !add_ln94_15_reg_6231.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_79_reg_6365.read()) + sc_biguint<32>(add_ln94_15_reg_6231.read()));
}

void sha256_transform::thread_add_ln90_1_fu_1434_p2() {
    add_ln90_1_fu_1434_p2 = (!add_ln85_7_reg_5211.read().is_01() || !ctx_state_2_read_1_reg_4939.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_7_reg_5211.read()) + sc_biguint<32>(ctx_state_2_read_1_reg_4939.read()));
}

void sha256_transform::thread_add_ln90_20_fu_3073_p2() {
    add_ln90_20_fu_3073_p2 = (!add_ln85_83_fu_3068_p2.read().is_01() || !add_ln94_16_reg_6264.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_83_fu_3068_p2.read()) + sc_biguint<32>(add_ln94_16_reg_6264.read()));
}

void sha256_transform::thread_add_ln90_21_fu_3114_p2() {
    add_ln90_21_fu_3114_p2 = (!add_ln85_87_reg_6416.read().is_01() || !add_ln94_17_reg_6313.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_87_reg_6416.read()) + sc_biguint<32>(add_ln94_17_reg_6313.read()));
}

void sha256_transform::thread_add_ln90_22_fu_3154_p2() {
    add_ln90_22_fu_3154_p2 = (!add_ln85_91_fu_3149_p2.read().is_01() || !add_ln94_18_reg_6344.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_91_fu_3149_p2.read()) + sc_biguint<32>(add_ln94_18_reg_6344.read()));
}

void sha256_transform::thread_add_ln90_23_fu_3195_p2() {
    add_ln90_23_fu_3195_p2 = (!add_ln85_95_reg_6457.read().is_01() || !add_ln94_19_reg_6383.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_95_reg_6457.read()) + sc_biguint<32>(add_ln94_19_reg_6383.read()));
}

void sha256_transform::thread_add_ln90_24_fu_3235_p2() {
    add_ln90_24_fu_3235_p2 = (!add_ln85_99_fu_3230_p2.read().is_01() || !add_ln94_20_reg_6407.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_99_fu_3230_p2.read()) + sc_biguint<32>(add_ln94_20_reg_6407.read()));
}

void sha256_transform::thread_add_ln90_25_fu_3276_p2() {
    add_ln90_25_fu_3276_p2 = (!add_ln85_103_reg_6498.read().is_01() || !add_ln94_21_reg_6429.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_103_reg_6498.read()) + sc_biguint<32>(add_ln94_21_reg_6429.read()));
}

void sha256_transform::thread_add_ln90_26_fu_3316_p2() {
    add_ln90_26_fu_3316_p2 = (!add_ln85_107_fu_3311_p2.read().is_01() || !add_ln94_22_reg_6448.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_107_fu_3311_p2.read()) + sc_biguint<32>(add_ln94_22_reg_6448.read()));
}

void sha256_transform::thread_add_ln90_27_fu_3357_p2() {
    add_ln90_27_fu_3357_p2 = (!add_ln85_111_reg_6539.read().is_01() || !add_ln94_23_reg_6470.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_111_reg_6539.read()) + sc_biguint<32>(add_ln94_23_reg_6470.read()));
}

void sha256_transform::thread_add_ln90_28_fu_3397_p2() {
    add_ln90_28_fu_3397_p2 = (!add_ln85_115_fu_3392_p2.read().is_01() || !add_ln94_24_reg_6489.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_115_fu_3392_p2.read()) + sc_biguint<32>(add_ln94_24_reg_6489.read()));
}

void sha256_transform::thread_add_ln90_29_fu_3438_p2() {
    add_ln90_29_fu_3438_p2 = (!add_ln85_119_reg_6580.read().is_01() || !add_ln94_25_reg_6511.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_119_reg_6580.read()) + sc_biguint<32>(add_ln94_25_reg_6511.read()));
}

void sha256_transform::thread_add_ln90_2_fu_1500_p2() {
    add_ln90_2_fu_1500_p2 = (!add_ln85_11_fu_1495_p2.read().is_01() || !ctx_state_1_read_1_reg_4945.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_11_fu_1495_p2.read()) + sc_biguint<32>(ctx_state_1_read_1_reg_4945.read()));
}

void sha256_transform::thread_add_ln90_30_fu_3478_p2() {
    add_ln90_30_fu_3478_p2 = (!add_ln85_123_fu_3473_p2.read().is_01() || !add_ln94_26_reg_6530.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_123_fu_3473_p2.read()) + sc_biguint<32>(add_ln94_26_reg_6530.read()));
}

void sha256_transform::thread_add_ln90_31_fu_3519_p2() {
    add_ln90_31_fu_3519_p2 = (!add_ln85_127_reg_6621.read().is_01() || !add_ln94_27_reg_6552.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_127_reg_6621.read()) + sc_biguint<32>(add_ln94_27_reg_6552.read()));
}

void sha256_transform::thread_add_ln90_32_fu_3559_p2() {
    add_ln90_32_fu_3559_p2 = (!add_ln85_131_fu_3554_p2.read().is_01() || !add_ln94_28_reg_6571.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_131_fu_3554_p2.read()) + sc_biguint<32>(add_ln94_28_reg_6571.read()));
}

void sha256_transform::thread_add_ln90_33_fu_3600_p2() {
    add_ln90_33_fu_3600_p2 = (!add_ln85_135_reg_6662.read().is_01() || !add_ln94_29_reg_6593.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_135_reg_6662.read()) + sc_biguint<32>(add_ln94_29_reg_6593.read()));
}

void sha256_transform::thread_add_ln90_34_fu_3640_p2() {
    add_ln90_34_fu_3640_p2 = (!add_ln85_139_fu_3635_p2.read().is_01() || !add_ln94_30_reg_6612.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_139_fu_3635_p2.read()) + sc_biguint<32>(add_ln94_30_reg_6612.read()));
}

void sha256_transform::thread_add_ln90_35_fu_3681_p2() {
    add_ln90_35_fu_3681_p2 = (!add_ln85_143_reg_6703.read().is_01() || !add_ln94_31_reg_6634.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_143_reg_6703.read()) + sc_biguint<32>(add_ln94_31_reg_6634.read()));
}

void sha256_transform::thread_add_ln90_36_fu_3721_p2() {
    add_ln90_36_fu_3721_p2 = (!add_ln85_147_fu_3716_p2.read().is_01() || !add_ln94_32_reg_6653.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_147_fu_3716_p2.read()) + sc_biguint<32>(add_ln94_32_reg_6653.read()));
}

void sha256_transform::thread_add_ln90_37_fu_3762_p2() {
    add_ln90_37_fu_3762_p2 = (!add_ln85_151_reg_6744.read().is_01() || !add_ln94_33_reg_6675.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_151_reg_6744.read()) + sc_biguint<32>(add_ln94_33_reg_6675.read()));
}

void sha256_transform::thread_add_ln90_38_fu_3802_p2() {
    add_ln90_38_fu_3802_p2 = (!add_ln85_155_fu_3797_p2.read().is_01() || !add_ln94_34_reg_6694.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_155_fu_3797_p2.read()) + sc_biguint<32>(add_ln94_34_reg_6694.read()));
}

void sha256_transform::thread_add_ln90_39_fu_3843_p2() {
    add_ln90_39_fu_3843_p2 = (!add_ln85_159_reg_6785.read().is_01() || !add_ln94_35_reg_6716.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_159_reg_6785.read()) + sc_biguint<32>(add_ln94_35_reg_6716.read()));
}

void sha256_transform::thread_add_ln90_3_fu_1593_p2() {
    add_ln90_3_fu_1593_p2 = (!add_ln85_15_reg_5441.read().is_01() || !ctx_state_0_read_1_reg_4952.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_15_reg_5441.read()) + sc_biguint<32>(ctx_state_0_read_1_reg_4952.read()));
}

void sha256_transform::thread_add_ln90_40_fu_3883_p2() {
    add_ln90_40_fu_3883_p2 = (!add_ln85_163_fu_3878_p2.read().is_01() || !add_ln94_36_reg_6735.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_163_fu_3878_p2.read()) + sc_biguint<32>(add_ln94_36_reg_6735.read()));
}

void sha256_transform::thread_add_ln90_41_fu_3924_p2() {
    add_ln90_41_fu_3924_p2 = (!add_ln85_167_reg_6826.read().is_01() || !add_ln94_37_reg_6757.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_167_reg_6826.read()) + sc_biguint<32>(add_ln94_37_reg_6757.read()));
}

void sha256_transform::thread_add_ln90_42_fu_3964_p2() {
    add_ln90_42_fu_3964_p2 = (!add_ln85_171_fu_3959_p2.read().is_01() || !add_ln94_38_reg_6776.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_171_fu_3959_p2.read()) + sc_biguint<32>(add_ln94_38_reg_6776.read()));
}

void sha256_transform::thread_add_ln90_43_fu_4005_p2() {
    add_ln90_43_fu_4005_p2 = (!add_ln85_175_reg_6867.read().is_01() || !add_ln94_39_reg_6798.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_175_reg_6867.read()) + sc_biguint<32>(add_ln94_39_reg_6798.read()));
}

void sha256_transform::thread_add_ln90_44_fu_4045_p2() {
    add_ln90_44_fu_4045_p2 = (!add_ln85_179_fu_4040_p2.read().is_01() || !add_ln94_40_reg_6817.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_179_fu_4040_p2.read()) + sc_biguint<32>(add_ln94_40_reg_6817.read()));
}

void sha256_transform::thread_add_ln90_45_fu_4086_p2() {
    add_ln90_45_fu_4086_p2 = (!add_ln85_183_reg_6908.read().is_01() || !add_ln94_41_reg_6839.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_183_reg_6908.read()) + sc_biguint<32>(add_ln94_41_reg_6839.read()));
}

void sha256_transform::thread_add_ln90_46_fu_4126_p2() {
    add_ln90_46_fu_4126_p2 = (!add_ln85_187_fu_4121_p2.read().is_01() || !add_ln94_42_reg_6858.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_187_fu_4121_p2.read()) + sc_biguint<32>(add_ln94_42_reg_6858.read()));
}

void sha256_transform::thread_add_ln90_47_fu_4182_p2() {
    add_ln90_47_fu_4182_p2 = (!add_ln85_191_reg_6949.read().is_01() || !add_ln94_43_reg_6880.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_191_reg_6949.read()) + sc_biguint<32>(add_ln94_43_reg_6880.read()));
}

void sha256_transform::thread_add_ln90_48_fu_4222_p2() {
    add_ln90_48_fu_4222_p2 = (!add_ln85_195_fu_4217_p2.read().is_01() || !add_ln94_44_reg_6899.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_195_fu_4217_p2.read()) + sc_biguint<32>(add_ln94_44_reg_6899.read()));
}

void sha256_transform::thread_add_ln90_49_fu_4263_p2() {
    add_ln90_49_fu_4263_p2 = (!add_ln85_199_reg_6995.read().is_01() || !add_ln94_45_reg_6921.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_199_reg_6995.read()) + sc_biguint<32>(add_ln94_45_reg_6921.read()));
}

void sha256_transform::thread_add_ln90_4_fu_1695_p2() {
    add_ln90_4_fu_1695_p2 = (!add_ln85_19_fu_1690_p2.read().is_01() || !add_ln94_reg_5140.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_19_fu_1690_p2.read()) + sc_biguint<32>(add_ln94_reg_5140.read()));
}

void sha256_transform::thread_add_ln90_50_fu_4303_p2() {
    add_ln90_50_fu_4303_p2 = (!add_ln85_203_fu_4298_p2.read().is_01() || !add_ln94_46_reg_6940.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_203_fu_4298_p2.read()) + sc_biguint<32>(add_ln94_46_reg_6940.read()));
}

void sha256_transform::thread_add_ln90_51_fu_4344_p2() {
    add_ln90_51_fu_4344_p2 = (!add_ln85_207_reg_7036.read().is_01() || !add_ln94_47_reg_6967.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_207_reg_7036.read()) + sc_biguint<32>(add_ln94_47_reg_6967.read()));
}

void sha256_transform::thread_add_ln90_52_fu_4384_p2() {
    add_ln90_52_fu_4384_p2 = (!add_ln85_211_fu_4379_p2.read().is_01() || !add_ln94_48_reg_6986.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_211_fu_4379_p2.read()) + sc_biguint<32>(add_ln94_48_reg_6986.read()));
}

void sha256_transform::thread_add_ln90_53_fu_4425_p2() {
    add_ln90_53_fu_4425_p2 = (!add_ln85_215_reg_7077.read().is_01() || !add_ln94_49_reg_7008.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_215_reg_7077.read()) + sc_biguint<32>(add_ln94_49_reg_7008.read()));
}

void sha256_transform::thread_add_ln90_54_fu_4465_p2() {
    add_ln90_54_fu_4465_p2 = (!add_ln85_219_fu_4460_p2.read().is_01() || !add_ln94_50_reg_7027.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_219_fu_4460_p2.read()) + sc_biguint<32>(add_ln94_50_reg_7027.read()));
}

void sha256_transform::thread_add_ln90_55_fu_4506_p2() {
    add_ln90_55_fu_4506_p2 = (!add_ln85_223_reg_7118.read().is_01() || !add_ln94_51_reg_7049.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_223_reg_7118.read()) + sc_biguint<32>(add_ln94_51_reg_7049.read()));
}

void sha256_transform::thread_add_ln90_56_fu_4546_p2() {
    add_ln90_56_fu_4546_p2 = (!add_ln85_227_fu_4541_p2.read().is_01() || !add_ln94_52_reg_7068.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_227_fu_4541_p2.read()) + sc_biguint<32>(add_ln94_52_reg_7068.read()));
}

void sha256_transform::thread_add_ln90_57_fu_4587_p2() {
    add_ln90_57_fu_4587_p2 = (!add_ln85_231_reg_7159.read().is_01() || !add_ln94_53_reg_7090.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_231_reg_7159.read()) + sc_biguint<32>(add_ln94_53_reg_7090.read()));
}

void sha256_transform::thread_add_ln90_58_fu_4625_p2() {
    add_ln90_58_fu_4625_p2 = (!add_ln85_235_fu_4620_p2.read().is_01() || !add_ln94_54_reg_7109.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_235_fu_4620_p2.read()) + sc_biguint<32>(add_ln94_54_reg_7109.read()));
}

void sha256_transform::thread_add_ln90_59_fu_4663_p2() {
    add_ln90_59_fu_4663_p2 = (!add_ln85_239_fu_4658_p2.read().is_01() || !add_ln94_55_reg_7131.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_239_fu_4658_p2.read()) + sc_biguint<32>(add_ln94_55_reg_7131.read()));
}

void sha256_transform::thread_add_ln90_5_fu_1804_p2() {
    add_ln90_5_fu_1804_p2 = (!add_ln85_23_reg_5618.read().is_01() || !add_ln94_1_reg_5286.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_23_reg_5618.read()) + sc_biguint<32>(add_ln94_1_reg_5286.read()));
}

void sha256_transform::thread_add_ln90_60_fu_4704_p2() {
    add_ln90_60_fu_4704_p2 = (!add_ln85_243_reg_7225.read().is_01() || !add_ln94_56_reg_7150.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_243_reg_7225.read()) + sc_biguint<32>(add_ln94_56_reg_7150.read()));
}

void sha256_transform::thread_add_ln90_61_fu_4744_p2() {
    add_ln90_61_fu_4744_p2 = (!add_ln85_247_fu_4739_p2.read().is_01() || !add_ln94_57_reg_7174.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_247_fu_4739_p2.read()) + sc_biguint<32>(add_ln94_57_reg_7174.read()));
}

void sha256_transform::thread_add_ln90_62_fu_4785_p2() {
    add_ln90_62_fu_4785_p2 = (!add_ln85_252_reg_7264.read().is_01() || !add_ln94_58_reg_7195.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_252_reg_7264.read()) + sc_biguint<32>(add_ln94_58_reg_7195.read()));
}

void sha256_transform::thread_add_ln90_6_fu_1876_p2() {
    add_ln90_6_fu_1876_p2 = (!add_ln85_27_fu_1871_p2.read().is_01() || !add_ln94_2_reg_5368.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_27_fu_1871_p2.read()) + sc_biguint<32>(add_ln94_2_reg_5368.read()));
}

void sha256_transform::thread_add_ln90_7_fu_1985_p2() {
    add_ln90_7_fu_1985_p2 = (!add_ln85_31_reg_5741.read().is_01() || !add_ln94_3_reg_5518.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_31_reg_5741.read()) + sc_biguint<32>(add_ln94_3_reg_5518.read()));
}

void sha256_transform::thread_add_ln90_8_fu_2059_p2() {
    add_ln90_8_fu_2059_p2 = (!add_ln85_35_fu_2054_p2.read().is_01() || !add_ln94_4_reg_5585.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_35_fu_2054_p2.read()) + sc_biguint<32>(add_ln94_4_reg_5585.read()));
}

void sha256_transform::thread_add_ln90_9_fu_2168_p2() {
    add_ln90_9_fu_2168_p2 = (!add_ln85_39_reg_5854.read().is_01() || !add_ln94_5_reg_5665.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_39_reg_5854.read()) + sc_biguint<32>(add_ln94_5_reg_5665.read()));
}

void sha256_transform::thread_add_ln90_fu_1340_p2() {
    add_ln90_fu_1340_p2 = (!add_ln85_3_fu_1335_p2.read().is_01() || !ap_port_reg_ctx_state_3_read.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_3_fu_1335_p2.read()) + sc_biguint<32>(ap_port_reg_ctx_state_3_read.read()));
}

void sha256_transform::thread_add_ln94_100_fu_3768_p2() {
    add_ln94_100_fu_3768_p2 = (!add_ln85_151_reg_6744.read().is_01() || !reg_1210.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_151_reg_6744.read()) + sc_biguint<32>(reg_1210.read()));
}

void sha256_transform::thread_add_ln94_101_fu_3809_p2() {
    add_ln94_101_fu_3809_p2 = (!add_ln85_155_fu_3797_p2.read().is_01() || !reg_1210.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_155_fu_3797_p2.read()) + sc_biguint<32>(reg_1210.read()));
}

void sha256_transform::thread_add_ln94_102_fu_3849_p2() {
    add_ln94_102_fu_3849_p2 = (!add_ln85_159_reg_6785.read().is_01() || !reg_1230.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_159_reg_6785.read()) + sc_biguint<32>(reg_1230.read()));
}

void sha256_transform::thread_add_ln94_103_fu_3890_p2() {
    add_ln94_103_fu_3890_p2 = (!add_ln85_163_fu_3878_p2.read().is_01() || !reg_1210.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_163_fu_3878_p2.read()) + sc_biguint<32>(reg_1210.read()));
}

void sha256_transform::thread_add_ln94_104_fu_3930_p2() {
    add_ln94_104_fu_3930_p2 = (!add_ln85_167_reg_6826.read().is_01() || !reg_1230.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_167_reg_6826.read()) + sc_biguint<32>(reg_1230.read()));
}

void sha256_transform::thread_add_ln94_105_fu_3971_p2() {
    add_ln94_105_fu_3971_p2 = (!add_ln85_171_fu_3959_p2.read().is_01() || !reg_1230.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_171_fu_3959_p2.read()) + sc_biguint<32>(reg_1230.read()));
}

void sha256_transform::thread_add_ln94_106_fu_4011_p2() {
    add_ln94_106_fu_4011_p2 = (!add_ln85_175_reg_6867.read().is_01() || !reg_1230.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_175_reg_6867.read()) + sc_biguint<32>(reg_1230.read()));
}

void sha256_transform::thread_add_ln94_107_fu_4052_p2() {
    add_ln94_107_fu_4052_p2 = (!add_ln85_179_fu_4040_p2.read().is_01() || !reg_1230.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_179_fu_4040_p2.read()) + sc_biguint<32>(reg_1230.read()));
}

void sha256_transform::thread_add_ln94_108_fu_4092_p2() {
    add_ln94_108_fu_4092_p2 = (!add_ln85_183_reg_6908.read().is_01() || !reg_1230.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_183_reg_6908.read()) + sc_biguint<32>(reg_1230.read()));
}

void sha256_transform::thread_add_ln94_109_fu_4133_p2() {
    add_ln94_109_fu_4133_p2 = (!add_ln85_187_fu_4121_p2.read().is_01() || !reg_1230.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_187_fu_4121_p2.read()) + sc_biguint<32>(reg_1230.read()));
}

void sha256_transform::thread_add_ln94_10_fu_2253_p2() {
    add_ln94_10_fu_2253_p2 = (!add_ln94_73_fu_2247_p2.read().is_01() || !reg_1162.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_73_fu_2247_p2.read()) + sc_biguint<32>(reg_1162.read()));
}

void sha256_transform::thread_add_ln94_110_fu_4188_p2() {
    add_ln94_110_fu_4188_p2 = (!add_ln85_191_reg_6949.read().is_01() || !reg_1242.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_191_reg_6949.read()) + sc_biguint<32>(reg_1242.read()));
}

void sha256_transform::thread_add_ln94_111_fu_4229_p2() {
    add_ln94_111_fu_4229_p2 = (!add_ln85_195_fu_4217_p2.read().is_01() || !reg_1230.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_195_fu_4217_p2.read()) + sc_biguint<32>(reg_1230.read()));
}

void sha256_transform::thread_add_ln94_112_fu_4269_p2() {
    add_ln94_112_fu_4269_p2 = (!add_ln85_199_reg_6995.read().is_01() || !reg_1242.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_199_reg_6995.read()) + sc_biguint<32>(reg_1242.read()));
}

void sha256_transform::thread_add_ln94_113_fu_4310_p2() {
    add_ln94_113_fu_4310_p2 = (!add_ln85_203_fu_4298_p2.read().is_01() || !reg_1242.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_203_fu_4298_p2.read()) + sc_biguint<32>(reg_1242.read()));
}

void sha256_transform::thread_add_ln94_114_fu_4350_p2() {
    add_ln94_114_fu_4350_p2 = (!add_ln85_207_reg_7036.read().is_01() || !reg_1242.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_207_reg_7036.read()) + sc_biguint<32>(reg_1242.read()));
}

void sha256_transform::thread_add_ln94_115_fu_4391_p2() {
    add_ln94_115_fu_4391_p2 = (!add_ln85_211_fu_4379_p2.read().is_01() || !reg_1242.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_211_fu_4379_p2.read()) + sc_biguint<32>(reg_1242.read()));
}

void sha256_transform::thread_add_ln94_116_fu_4431_p2() {
    add_ln94_116_fu_4431_p2 = (!add_ln85_215_reg_7077.read().is_01() || !reg_1242.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_215_reg_7077.read()) + sc_biguint<32>(reg_1242.read()));
}

void sha256_transform::thread_add_ln94_117_fu_4472_p2() {
    add_ln94_117_fu_4472_p2 = (!add_ln85_219_fu_4460_p2.read().is_01() || !reg_1242.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_219_fu_4460_p2.read()) + sc_biguint<32>(reg_1242.read()));
}

void sha256_transform::thread_add_ln94_118_fu_4512_p2() {
    add_ln94_118_fu_4512_p2 = (!add_ln85_223_reg_7118.read().is_01() || !reg_1262.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_223_reg_7118.read()) + sc_biguint<32>(reg_1262.read()));
}

void sha256_transform::thread_add_ln94_119_fu_4553_p2() {
    add_ln94_119_fu_4553_p2 = (!add_ln85_227_fu_4541_p2.read().is_01() || !reg_1242.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_227_fu_4541_p2.read()) + sc_biguint<32>(reg_1242.read()));
}

void sha256_transform::thread_add_ln94_11_fu_2359_p2() {
    add_ln94_11_fu_2359_p2 = (!add_ln94_74_fu_2354_p2.read().is_01() || !reg_1162.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_74_fu_2354_p2.read()) + sc_biguint<32>(reg_1162.read()));
}

void sha256_transform::thread_add_ln94_120_fu_4591_p2() {
    add_ln94_120_fu_4591_p2 = (!add_ln85_231_reg_7159.read().is_01() || !reg_1262.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_231_reg_7159.read()) + sc_biguint<32>(reg_1262.read()));
}

void sha256_transform::thread_add_ln94_121_fu_4630_p2() {
    add_ln94_121_fu_4630_p2 = (!add_ln85_235_fu_4620_p2.read().is_01() || !reg_1262.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_235_fu_4620_p2.read()) + sc_biguint<32>(reg_1262.read()));
}

void sha256_transform::thread_add_ln94_122_fu_4670_p2() {
    add_ln94_122_fu_4670_p2 = (!add_ln85_239_fu_4658_p2.read().is_01() || !reg_1262.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_239_fu_4658_p2.read()) + sc_biguint<32>(reg_1262.read()));
}

void sha256_transform::thread_add_ln94_123_fu_4710_p2() {
    add_ln94_123_fu_4710_p2 = (!add_ln85_243_reg_7225.read().is_01() || !reg_1262.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_243_reg_7225.read()) + sc_biguint<32>(reg_1262.read()));
}

void sha256_transform::thread_add_ln94_124_fu_4751_p2() {
    add_ln94_124_fu_4751_p2 = (!add_ln85_247_fu_4739_p2.read().is_01() || !reg_1262.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_247_fu_4739_p2.read()) + sc_biguint<32>(reg_1262.read()));
}

void sha256_transform::thread_add_ln94_125_fu_4791_p2() {
    add_ln94_125_fu_4791_p2 = (!add_ln85_252_reg_7264.read().is_01() || !grp_MAJ_fu_973_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_252_reg_7264.read()) + sc_biguint<32>(grp_MAJ_fu_973_ap_return.read()));
}

void sha256_transform::thread_add_ln94_12_fu_2435_p2() {
    add_ln94_12_fu_2435_p2 = (!add_ln94_75_fu_2429_p2.read().is_01() || !reg_1162.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_75_fu_2429_p2.read()) + sc_biguint<32>(reg_1162.read()));
}

void sha256_transform::thread_add_ln94_13_fu_2542_p2() {
    add_ln94_13_fu_2542_p2 = (!add_ln94_76_fu_2537_p2.read().is_01() || !reg_1162.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_76_fu_2537_p2.read()) + sc_biguint<32>(reg_1162.read()));
}

void sha256_transform::thread_add_ln94_14_fu_2618_p2() {
    add_ln94_14_fu_2618_p2 = (!add_ln94_77_fu_2612_p2.read().is_01() || !reg_1162.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_77_fu_2612_p2.read()) + sc_biguint<32>(reg_1162.read()));
}

void sha256_transform::thread_add_ln94_15_fu_2717_p2() {
    add_ln94_15_fu_2717_p2 = (!add_ln94_78_fu_2712_p2.read().is_01() || !reg_1174.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_78_fu_2712_p2.read()) + sc_biguint<32>(reg_1174.read()));
}

void sha256_transform::thread_add_ln94_16_fu_2789_p2() {
    add_ln94_16_fu_2789_p2 = (!add_ln94_79_fu_2783_p2.read().is_01() || !reg_1162.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_79_fu_2783_p2.read()) + sc_biguint<32>(reg_1162.read()));
}

void sha256_transform::thread_add_ln94_17_fu_2888_p2() {
    add_ln94_17_fu_2888_p2 = (!add_ln94_80_fu_2883_p2.read().is_01() || !reg_1174.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_80_fu_2883_p2.read()) + sc_biguint<32>(reg_1174.read()));
}

void sha256_transform::thread_add_ln94_18_fu_2960_p2() {
    add_ln94_18_fu_2960_p2 = (!add_ln94_81_fu_2954_p2.read().is_01() || !reg_1174.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_81_fu_2954_p2.read()) + sc_biguint<32>(reg_1174.read()));
}

void sha256_transform::thread_add_ln94_19_fu_3029_p2() {
    add_ln94_19_fu_3029_p2 = (!add_ln94_82_fu_3024_p2.read().is_01() || !reg_1174.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_82_fu_3024_p2.read()) + sc_biguint<32>(reg_1174.read()));
}

void sha256_transform::thread_add_ln94_1_fu_1445_p2() {
    add_ln94_1_fu_1445_p2 = (!add_ln94_64_fu_1440_p2.read().is_01() || !reg_1130.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_64_fu_1440_p2.read()) + sc_biguint<32>(reg_1130.read()));
}

void sha256_transform::thread_add_ln94_20_fu_3086_p2() {
    add_ln94_20_fu_3086_p2 = (!add_ln94_83_fu_3080_p2.read().is_01() || !reg_1174.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_83_fu_3080_p2.read()) + sc_biguint<32>(reg_1174.read()));
}

void sha256_transform::thread_add_ln94_21_fu_3125_p2() {
    add_ln94_21_fu_3125_p2 = (!add_ln94_84_fu_3120_p2.read().is_01() || !reg_1174.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_84_fu_3120_p2.read()) + sc_biguint<32>(reg_1174.read()));
}

void sha256_transform::thread_add_ln94_22_fu_3167_p2() {
    add_ln94_22_fu_3167_p2 = (!add_ln94_85_fu_3161_p2.read().is_01() || !reg_1174.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_85_fu_3161_p2.read()) + sc_biguint<32>(reg_1174.read()));
}

void sha256_transform::thread_add_ln94_23_fu_3206_p2() {
    add_ln94_23_fu_3206_p2 = (!add_ln94_86_fu_3201_p2.read().is_01() || !reg_1194.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_86_fu_3201_p2.read()) + sc_biguint<32>(reg_1194.read()));
}

void sha256_transform::thread_add_ln94_24_fu_3248_p2() {
    add_ln94_24_fu_3248_p2 = (!add_ln94_87_fu_3242_p2.read().is_01() || !reg_1174.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_87_fu_3242_p2.read()) + sc_biguint<32>(reg_1174.read()));
}

void sha256_transform::thread_add_ln94_25_fu_3287_p2() {
    add_ln94_25_fu_3287_p2 = (!add_ln94_88_fu_3282_p2.read().is_01() || !reg_1194.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_88_fu_3282_p2.read()) + sc_biguint<32>(reg_1194.read()));
}

void sha256_transform::thread_add_ln94_26_fu_3329_p2() {
    add_ln94_26_fu_3329_p2 = (!add_ln94_89_fu_3323_p2.read().is_01() || !reg_1194.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_89_fu_3323_p2.read()) + sc_biguint<32>(reg_1194.read()));
}

void sha256_transform::thread_add_ln94_27_fu_3368_p2() {
    add_ln94_27_fu_3368_p2 = (!add_ln94_90_fu_3363_p2.read().is_01() || !reg_1194.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_90_fu_3363_p2.read()) + sc_biguint<32>(reg_1194.read()));
}

void sha256_transform::thread_add_ln94_28_fu_3410_p2() {
    add_ln94_28_fu_3410_p2 = (!add_ln94_91_fu_3404_p2.read().is_01() || !reg_1194.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_91_fu_3404_p2.read()) + sc_biguint<32>(reg_1194.read()));
}

void sha256_transform::thread_add_ln94_29_fu_3449_p2() {
    add_ln94_29_fu_3449_p2 = (!add_ln94_92_fu_3444_p2.read().is_01() || !reg_1194.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_92_fu_3444_p2.read()) + sc_biguint<32>(reg_1194.read()));
}

void sha256_transform::thread_add_ln94_2_fu_1513_p2() {
    add_ln94_2_fu_1513_p2 = (!add_ln94_65_fu_1507_p2.read().is_01() || !reg_1130.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_65_fu_1507_p2.read()) + sc_biguint<32>(reg_1130.read()));
}

void sha256_transform::thread_add_ln94_30_fu_3491_p2() {
    add_ln94_30_fu_3491_p2 = (!add_ln94_93_fu_3485_p2.read().is_01() || !reg_1194.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_93_fu_3485_p2.read()) + sc_biguint<32>(reg_1194.read()));
}

void sha256_transform::thread_add_ln94_31_fu_3530_p2() {
    add_ln94_31_fu_3530_p2 = (!add_ln94_94_fu_3525_p2.read().is_01() || !reg_1206.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_94_fu_3525_p2.read()) + sc_biguint<32>(reg_1206.read()));
}

void sha256_transform::thread_add_ln94_32_fu_3572_p2() {
    add_ln94_32_fu_3572_p2 = (!add_ln94_95_fu_3566_p2.read().is_01() || !reg_1194.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_95_fu_3566_p2.read()) + sc_biguint<32>(reg_1194.read()));
}

void sha256_transform::thread_add_ln94_33_fu_3611_p2() {
    add_ln94_33_fu_3611_p2 = (!add_ln94_96_fu_3606_p2.read().is_01() || !reg_1206.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_96_fu_3606_p2.read()) + sc_biguint<32>(reg_1206.read()));
}

void sha256_transform::thread_add_ln94_34_fu_3653_p2() {
    add_ln94_34_fu_3653_p2 = (!add_ln94_97_fu_3647_p2.read().is_01() || !reg_1206.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_97_fu_3647_p2.read()) + sc_biguint<32>(reg_1206.read()));
}

void sha256_transform::thread_add_ln94_35_fu_3692_p2() {
    add_ln94_35_fu_3692_p2 = (!add_ln94_98_fu_3687_p2.read().is_01() || !reg_1206.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_98_fu_3687_p2.read()) + sc_biguint<32>(reg_1206.read()));
}

void sha256_transform::thread_add_ln94_36_fu_3734_p2() {
    add_ln94_36_fu_3734_p2 = (!add_ln94_99_fu_3728_p2.read().is_01() || !reg_1206.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_99_fu_3728_p2.read()) + sc_biguint<32>(reg_1206.read()));
}

void sha256_transform::thread_add_ln94_37_fu_3773_p2() {
    add_ln94_37_fu_3773_p2 = (!add_ln94_100_fu_3768_p2.read().is_01() || !reg_1206.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_100_fu_3768_p2.read()) + sc_biguint<32>(reg_1206.read()));
}

void sha256_transform::thread_add_ln94_38_fu_3815_p2() {
    add_ln94_38_fu_3815_p2 = (!add_ln94_101_fu_3809_p2.read().is_01() || !reg_1206.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_101_fu_3809_p2.read()) + sc_biguint<32>(reg_1206.read()));
}

void sha256_transform::thread_add_ln94_39_fu_3854_p2() {
    add_ln94_39_fu_3854_p2 = (!add_ln94_102_fu_3849_p2.read().is_01() || !reg_1226.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_102_fu_3849_p2.read()) + sc_biguint<32>(reg_1226.read()));
}

void sha256_transform::thread_add_ln94_3_fu_1604_p2() {
    add_ln94_3_fu_1604_p2 = (!add_ln94_66_fu_1599_p2.read().is_01() || !reg_1130.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_66_fu_1599_p2.read()) + sc_biguint<32>(reg_1130.read()));
}

void sha256_transform::thread_add_ln94_40_fu_3896_p2() {
    add_ln94_40_fu_3896_p2 = (!add_ln94_103_fu_3890_p2.read().is_01() || !reg_1206.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_103_fu_3890_p2.read()) + sc_biguint<32>(reg_1206.read()));
}

void sha256_transform::thread_add_ln94_41_fu_3935_p2() {
    add_ln94_41_fu_3935_p2 = (!add_ln94_104_fu_3930_p2.read().is_01() || !reg_1226.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_104_fu_3930_p2.read()) + sc_biguint<32>(reg_1226.read()));
}

void sha256_transform::thread_add_ln94_42_fu_3977_p2() {
    add_ln94_42_fu_3977_p2 = (!add_ln94_105_fu_3971_p2.read().is_01() || !reg_1226.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_105_fu_3971_p2.read()) + sc_biguint<32>(reg_1226.read()));
}

void sha256_transform::thread_add_ln94_43_fu_4016_p2() {
    add_ln94_43_fu_4016_p2 = (!add_ln94_106_fu_4011_p2.read().is_01() || !reg_1226.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_106_fu_4011_p2.read()) + sc_biguint<32>(reg_1226.read()));
}

void sha256_transform::thread_add_ln94_44_fu_4058_p2() {
    add_ln94_44_fu_4058_p2 = (!add_ln94_107_fu_4052_p2.read().is_01() || !reg_1226.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_107_fu_4052_p2.read()) + sc_biguint<32>(reg_1226.read()));
}

void sha256_transform::thread_add_ln94_45_fu_4097_p2() {
    add_ln94_45_fu_4097_p2 = (!add_ln94_108_fu_4092_p2.read().is_01() || !reg_1226.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_108_fu_4092_p2.read()) + sc_biguint<32>(reg_1226.read()));
}

void sha256_transform::thread_add_ln94_46_fu_4139_p2() {
    add_ln94_46_fu_4139_p2 = (!add_ln94_109_fu_4133_p2.read().is_01() || !reg_1226.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_109_fu_4133_p2.read()) + sc_biguint<32>(reg_1226.read()));
}

void sha256_transform::thread_add_ln94_47_fu_4193_p2() {
    add_ln94_47_fu_4193_p2 = (!add_ln94_110_fu_4188_p2.read().is_01() || !reg_1238.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_110_fu_4188_p2.read()) + sc_biguint<32>(reg_1238.read()));
}

void sha256_transform::thread_add_ln94_48_fu_4235_p2() {
    add_ln94_48_fu_4235_p2 = (!add_ln94_111_fu_4229_p2.read().is_01() || !reg_1226.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_111_fu_4229_p2.read()) + sc_biguint<32>(reg_1226.read()));
}

void sha256_transform::thread_add_ln94_49_fu_4274_p2() {
    add_ln94_49_fu_4274_p2 = (!add_ln94_112_fu_4269_p2.read().is_01() || !reg_1238.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_112_fu_4269_p2.read()) + sc_biguint<32>(reg_1238.read()));
}

void sha256_transform::thread_add_ln94_4_fu_1708_p2() {
    add_ln94_4_fu_1708_p2 = (!add_ln94_67_fu_1702_p2.read().is_01() || !reg_1130.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_67_fu_1702_p2.read()) + sc_biguint<32>(reg_1130.read()));
}

void sha256_transform::thread_add_ln94_50_fu_4316_p2() {
    add_ln94_50_fu_4316_p2 = (!add_ln94_113_fu_4310_p2.read().is_01() || !reg_1238.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_113_fu_4310_p2.read()) + sc_biguint<32>(reg_1238.read()));
}

void sha256_transform::thread_add_ln94_51_fu_4355_p2() {
    add_ln94_51_fu_4355_p2 = (!add_ln94_114_fu_4350_p2.read().is_01() || !reg_1238.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_114_fu_4350_p2.read()) + sc_biguint<32>(reg_1238.read()));
}

void sha256_transform::thread_add_ln94_52_fu_4397_p2() {
    add_ln94_52_fu_4397_p2 = (!add_ln94_115_fu_4391_p2.read().is_01() || !reg_1238.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_115_fu_4391_p2.read()) + sc_biguint<32>(reg_1238.read()));
}

void sha256_transform::thread_add_ln94_53_fu_4436_p2() {
    add_ln94_53_fu_4436_p2 = (!add_ln94_116_fu_4431_p2.read().is_01() || !reg_1238.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_116_fu_4431_p2.read()) + sc_biguint<32>(reg_1238.read()));
}

void sha256_transform::thread_add_ln94_54_fu_4478_p2() {
    add_ln94_54_fu_4478_p2 = (!add_ln94_117_fu_4472_p2.read().is_01() || !reg_1238.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_117_fu_4472_p2.read()) + sc_biguint<32>(reg_1238.read()));
}

void sha256_transform::thread_add_ln94_55_fu_4517_p2() {
    add_ln94_55_fu_4517_p2 = (!add_ln94_118_fu_4512_p2.read().is_01() || !reg_1258.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_118_fu_4512_p2.read()) + sc_biguint<32>(reg_1258.read()));
}

void sha256_transform::thread_add_ln94_56_fu_4559_p2() {
    add_ln94_56_fu_4559_p2 = (!add_ln94_119_fu_4553_p2.read().is_01() || !reg_1238.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_119_fu_4553_p2.read()) + sc_biguint<32>(reg_1238.read()));
}

void sha256_transform::thread_add_ln94_57_fu_4596_p2() {
    add_ln94_57_fu_4596_p2 = (!add_ln94_120_fu_4591_p2.read().is_01() || !reg_1258.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_120_fu_4591_p2.read()) + sc_biguint<32>(reg_1258.read()));
}

void sha256_transform::thread_add_ln94_58_fu_4636_p2() {
    add_ln94_58_fu_4636_p2 = (!add_ln94_121_fu_4630_p2.read().is_01() || !reg_1258.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_121_fu_4630_p2.read()) + sc_biguint<32>(reg_1258.read()));
}

void sha256_transform::thread_add_ln94_59_fu_4676_p2() {
    add_ln94_59_fu_4676_p2 = (!add_ln94_122_fu_4670_p2.read().is_01() || !reg_1258.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_122_fu_4670_p2.read()) + sc_biguint<32>(reg_1258.read()));
}

void sha256_transform::thread_add_ln94_5_fu_1814_p2() {
    add_ln94_5_fu_1814_p2 = (!add_ln94_68_fu_1810_p2.read().is_01() || !tmp_4_5_reg_5624.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_68_fu_1810_p2.read()) + sc_biguint<32>(tmp_4_5_reg_5624.read()));
}

void sha256_transform::thread_add_ln94_60_fu_4715_p2() {
    add_ln94_60_fu_4715_p2 = (!add_ln94_123_fu_4710_p2.read().is_01() || !reg_1258.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_123_fu_4710_p2.read()) + sc_biguint<32>(reg_1258.read()));
}

void sha256_transform::thread_add_ln94_61_fu_4757_p2() {
    add_ln94_61_fu_4757_p2 = (!add_ln94_124_fu_4751_p2.read().is_01() || !reg_1258.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_124_fu_4751_p2.read()) + sc_biguint<32>(reg_1258.read()));
}

void sha256_transform::thread_add_ln94_62_fu_4796_p2() {
    add_ln94_62_fu_4796_p2 = (!add_ln94_125_fu_4791_p2.read().is_01() || !grp_EP0_fu_1057_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_125_fu_4791_p2.read()) + sc_biguint<32>(grp_EP0_fu_1057_ap_return.read()));
}

void sha256_transform::thread_add_ln94_63_fu_1348_p2() {
    add_ln94_63_fu_1348_p2 = (!add_ln85_3_fu_1335_p2.read().is_01() || !reg_1134.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_3_fu_1335_p2.read()) + sc_biguint<32>(reg_1134.read()));
}

void sha256_transform::thread_add_ln94_64_fu_1440_p2() {
    add_ln94_64_fu_1440_p2 = (!add_ln85_7_reg_5211.read().is_01() || !reg_1134.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_7_reg_5211.read()) + sc_biguint<32>(reg_1134.read()));
}

void sha256_transform::thread_add_ln94_65_fu_1507_p2() {
    add_ln94_65_fu_1507_p2 = (!add_ln85_11_fu_1495_p2.read().is_01() || !reg_1134.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_11_fu_1495_p2.read()) + sc_biguint<32>(reg_1134.read()));
}

void sha256_transform::thread_add_ln94_66_fu_1599_p2() {
    add_ln94_66_fu_1599_p2 = (!add_ln85_15_reg_5441.read().is_01() || !reg_1134.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_15_reg_5441.read()) + sc_biguint<32>(reg_1134.read()));
}

void sha256_transform::thread_add_ln94_67_fu_1702_p2() {
    add_ln94_67_fu_1702_p2 = (!add_ln85_19_fu_1690_p2.read().is_01() || !reg_1134.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_19_fu_1690_p2.read()) + sc_biguint<32>(reg_1134.read()));
}

void sha256_transform::thread_add_ln94_68_fu_1810_p2() {
    add_ln94_68_fu_1810_p2 = (!add_ln85_23_reg_5618.read().is_01() || !tmp_5_5_reg_5629.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_23_reg_5618.read()) + sc_biguint<32>(tmp_5_5_reg_5629.read()));
}

void sha256_transform::thread_add_ln94_69_fu_1883_p2() {
    add_ln94_69_fu_1883_p2 = (!add_ln85_27_fu_1871_p2.read().is_01() || !reg_1134.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_27_fu_1871_p2.read()) + sc_biguint<32>(reg_1134.read()));
}

void sha256_transform::thread_add_ln94_6_fu_1889_p2() {
    add_ln94_6_fu_1889_p2 = (!add_ln94_69_fu_1883_p2.read().is_01() || !reg_1130.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_69_fu_1883_p2.read()) + sc_biguint<32>(reg_1130.read()));
}

void sha256_transform::thread_add_ln94_70_fu_1991_p2() {
    add_ln94_70_fu_1991_p2 = (!add_ln85_31_reg_5741.read().is_01() || !reg_1166.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_31_reg_5741.read()) + sc_biguint<32>(reg_1166.read()));
}

void sha256_transform::thread_add_ln94_71_fu_2066_p2() {
    add_ln94_71_fu_2066_p2 = (!add_ln85_35_fu_2054_p2.read().is_01() || !reg_1134.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_35_fu_2054_p2.read()) + sc_biguint<32>(reg_1134.read()));
}

void sha256_transform::thread_add_ln94_72_fu_2174_p2() {
    add_ln94_72_fu_2174_p2 = (!add_ln85_39_reg_5854.read().is_01() || !reg_1166.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_39_reg_5854.read()) + sc_biguint<32>(reg_1166.read()));
}

void sha256_transform::thread_add_ln94_73_fu_2247_p2() {
    add_ln94_73_fu_2247_p2 = (!add_ln85_43_fu_2235_p2.read().is_01() || !reg_1166.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_43_fu_2235_p2.read()) + sc_biguint<32>(reg_1166.read()));
}

void sha256_transform::thread_add_ln94_74_fu_2354_p2() {
    add_ln94_74_fu_2354_p2 = (!add_ln85_47_reg_5982.read().is_01() || !reg_1166.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_47_reg_5982.read()) + sc_biguint<32>(reg_1166.read()));
}

void sha256_transform::thread_add_ln94_75_fu_2429_p2() {
    add_ln94_75_fu_2429_p2 = (!add_ln85_51_fu_2417_p2.read().is_01() || !reg_1166.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_51_fu_2417_p2.read()) + sc_biguint<32>(reg_1166.read()));
}

void sha256_transform::thread_add_ln94_76_fu_2537_p2() {
    add_ln94_76_fu_2537_p2 = (!add_ln85_55_reg_6095.read().is_01() || !reg_1166.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_55_reg_6095.read()) + sc_biguint<32>(reg_1166.read()));
}

void sha256_transform::thread_add_ln94_77_fu_2612_p2() {
    add_ln94_77_fu_2612_p2 = (!add_ln85_59_fu_2600_p2.read().is_01() || !reg_1166.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_59_fu_2600_p2.read()) + sc_biguint<32>(reg_1166.read()));
}

void sha256_transform::thread_add_ln94_78_fu_2712_p2() {
    add_ln94_78_fu_2712_p2 = (!add_ln85_63_reg_6199.read().is_01() || !reg_1178.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_63_reg_6199.read()) + sc_biguint<32>(reg_1178.read()));
}

void sha256_transform::thread_add_ln94_79_fu_2783_p2() {
    add_ln94_79_fu_2783_p2 = (!add_ln85_67_fu_2771_p2.read().is_01() || !reg_1166.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_67_fu_2771_p2.read()) + sc_biguint<32>(reg_1166.read()));
}

void sha256_transform::thread_add_ln94_7_fu_1996_p2() {
    add_ln94_7_fu_1996_p2 = (!add_ln94_70_fu_1991_p2.read().is_01() || !reg_1162.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_70_fu_1991_p2.read()) + sc_biguint<32>(reg_1162.read()));
}

void sha256_transform::thread_add_ln94_80_fu_2883_p2() {
    add_ln94_80_fu_2883_p2 = (!add_ln85_71_reg_6287.read().is_01() || !reg_1178.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_71_reg_6287.read()) + sc_biguint<32>(reg_1178.read()));
}

void sha256_transform::thread_add_ln94_81_fu_2954_p2() {
    add_ln94_81_fu_2954_p2 = (!add_ln85_75_fu_2942_p2.read().is_01() || !reg_1178.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_75_fu_2942_p2.read()) + sc_biguint<32>(reg_1178.read()));
}

void sha256_transform::thread_add_ln94_82_fu_3024_p2() {
    add_ln94_82_fu_3024_p2 = (!add_ln85_79_reg_6365.read().is_01() || !reg_1178.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_79_reg_6365.read()) + sc_biguint<32>(reg_1178.read()));
}

void sha256_transform::thread_add_ln94_83_fu_3080_p2() {
    add_ln94_83_fu_3080_p2 = (!add_ln85_83_fu_3068_p2.read().is_01() || !reg_1178.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_83_fu_3068_p2.read()) + sc_biguint<32>(reg_1178.read()));
}

void sha256_transform::thread_add_ln94_84_fu_3120_p2() {
    add_ln94_84_fu_3120_p2 = (!add_ln85_87_reg_6416.read().is_01() || !reg_1178.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_87_reg_6416.read()) + sc_biguint<32>(reg_1178.read()));
}

void sha256_transform::thread_add_ln94_85_fu_3161_p2() {
    add_ln94_85_fu_3161_p2 = (!add_ln85_91_fu_3149_p2.read().is_01() || !reg_1178.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_91_fu_3149_p2.read()) + sc_biguint<32>(reg_1178.read()));
}

void sha256_transform::thread_add_ln94_86_fu_3201_p2() {
    add_ln94_86_fu_3201_p2 = (!add_ln85_95_reg_6457.read().is_01() || !reg_1198.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_95_reg_6457.read()) + sc_biguint<32>(reg_1198.read()));
}

void sha256_transform::thread_add_ln94_87_fu_3242_p2() {
    add_ln94_87_fu_3242_p2 = (!add_ln85_99_fu_3230_p2.read().is_01() || !reg_1178.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_99_fu_3230_p2.read()) + sc_biguint<32>(reg_1178.read()));
}

void sha256_transform::thread_add_ln94_88_fu_3282_p2() {
    add_ln94_88_fu_3282_p2 = (!add_ln85_103_reg_6498.read().is_01() || !reg_1198.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_103_reg_6498.read()) + sc_biguint<32>(reg_1198.read()));
}

void sha256_transform::thread_add_ln94_89_fu_3323_p2() {
    add_ln94_89_fu_3323_p2 = (!add_ln85_107_fu_3311_p2.read().is_01() || !reg_1198.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_107_fu_3311_p2.read()) + sc_biguint<32>(reg_1198.read()));
}

void sha256_transform::thread_add_ln94_8_fu_2072_p2() {
    add_ln94_8_fu_2072_p2 = (!add_ln94_71_fu_2066_p2.read().is_01() || !reg_1130.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_71_fu_2066_p2.read()) + sc_biguint<32>(reg_1130.read()));
}

void sha256_transform::thread_add_ln94_90_fu_3363_p2() {
    add_ln94_90_fu_3363_p2 = (!add_ln85_111_reg_6539.read().is_01() || !reg_1198.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_111_reg_6539.read()) + sc_biguint<32>(reg_1198.read()));
}

void sha256_transform::thread_add_ln94_91_fu_3404_p2() {
    add_ln94_91_fu_3404_p2 = (!add_ln85_115_fu_3392_p2.read().is_01() || !reg_1198.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_115_fu_3392_p2.read()) + sc_biguint<32>(reg_1198.read()));
}

void sha256_transform::thread_add_ln94_92_fu_3444_p2() {
    add_ln94_92_fu_3444_p2 = (!add_ln85_119_reg_6580.read().is_01() || !reg_1198.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_119_reg_6580.read()) + sc_biguint<32>(reg_1198.read()));
}

void sha256_transform::thread_add_ln94_93_fu_3485_p2() {
    add_ln94_93_fu_3485_p2 = (!add_ln85_123_fu_3473_p2.read().is_01() || !reg_1198.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_123_fu_3473_p2.read()) + sc_biguint<32>(reg_1198.read()));
}

void sha256_transform::thread_add_ln94_94_fu_3525_p2() {
    add_ln94_94_fu_3525_p2 = (!add_ln85_127_reg_6621.read().is_01() || !reg_1210.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_127_reg_6621.read()) + sc_biguint<32>(reg_1210.read()));
}

void sha256_transform::thread_add_ln94_95_fu_3566_p2() {
    add_ln94_95_fu_3566_p2 = (!add_ln85_131_fu_3554_p2.read().is_01() || !reg_1198.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_131_fu_3554_p2.read()) + sc_biguint<32>(reg_1198.read()));
}

void sha256_transform::thread_add_ln94_96_fu_3606_p2() {
    add_ln94_96_fu_3606_p2 = (!add_ln85_135_reg_6662.read().is_01() || !reg_1210.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_135_reg_6662.read()) + sc_biguint<32>(reg_1210.read()));
}

void sha256_transform::thread_add_ln94_97_fu_3647_p2() {
    add_ln94_97_fu_3647_p2 = (!add_ln85_139_fu_3635_p2.read().is_01() || !reg_1210.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_139_fu_3635_p2.read()) + sc_biguint<32>(reg_1210.read()));
}

void sha256_transform::thread_add_ln94_98_fu_3687_p2() {
    add_ln94_98_fu_3687_p2 = (!add_ln85_143_reg_6703.read().is_01() || !reg_1210.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_143_reg_6703.read()) + sc_biguint<32>(reg_1210.read()));
}

void sha256_transform::thread_add_ln94_99_fu_3728_p2() {
    add_ln94_99_fu_3728_p2 = (!add_ln85_147_fu_3716_p2.read().is_01() || !reg_1210.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_147_fu_3716_p2.read()) + sc_biguint<32>(reg_1210.read()));
}

void sha256_transform::thread_add_ln94_9_fu_2179_p2() {
    add_ln94_9_fu_2179_p2 = (!add_ln94_72_fu_2174_p2.read().is_01() || !reg_1162.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_72_fu_2174_p2.read()) + sc_biguint<32>(reg_1162.read()));
}

void sha256_transform::thread_add_ln94_fu_1354_p2() {
    add_ln94_fu_1354_p2 = (!add_ln94_63_fu_1348_p2.read().is_01() || !reg_1130.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_63_fu_1348_p2.read()) + sc_biguint<32>(reg_1130.read()));
}

void sha256_transform::thread_add_ln97_1_fu_4834_p2() {
    add_ln97_1_fu_4834_p2 = (!grp_EP0_fu_1057_ap_return.read().is_01() || !add_ln85_255_fu_4829_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP0_fu_1057_ap_return.read()) + sc_biguint<32>(add_ln85_255_fu_4829_p2.read()));
}

void sha256_transform::thread_add_ln97_2_fu_4840_p2() {
    add_ln97_2_fu_4840_p2 = (!grp_MAJ_fu_973_ap_return.read().is_01() || !ctx_state_0_read_1_reg_4952_pp0_iter12_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_MAJ_fu_973_ap_return.read()) + sc_biguint<32>(ctx_state_0_read_1_reg_4952_pp0_iter12_reg.read()));
}

void sha256_transform::thread_add_ln97_fu_4845_p2() {
    add_ln97_fu_4845_p2 = (!add_ln97_2_fu_4840_p2.read().is_01() || !add_ln97_1_fu_4834_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln97_2_fu_4840_p2.read()) + sc_biguint<32>(add_ln97_1_fu_4834_p2.read()));
}

void sha256_transform::thread_add_ln98_fu_4851_p2() {
    add_ln98_fu_4851_p2 = (!add_ln94_62_reg_7270.read().is_01() || !ctx_state_1_read_1_reg_4945_pp0_iter12_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_62_reg_7270.read()) + sc_biguint<32>(ctx_state_1_read_1_reg_4945_pp0_iter12_reg.read()));
}

void sha256_transform::thread_add_ln99_fu_4855_p2() {
    add_ln99_fu_4855_p2 = (!add_ln94_61_reg_7256.read().is_01() || !ctx_state_2_read_1_reg_4939_pp0_iter12_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_61_reg_7256.read()) + sc_biguint<32>(ctx_state_2_read_1_reg_4939_pp0_iter12_reg.read()));
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
    ap_block_pp0_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()));
}

void sha256_transform::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())));
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

void sha256_transform::thread_ap_block_state10_pp0_stage1_iter1() {
    ap_block_state10_pp0_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state11_pp0_stage2_iter1() {
    ap_block_state11_pp0_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state12_pp0_stage3_iter1() {
    ap_block_state12_pp0_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
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

void sha256_transform::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read())))) {
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
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter12.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void sha256_transform::thread_ap_idle_pp0_0to11() {
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
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter11.read()))) {
        ap_idle_pp0_0to11 = ap_const_logic_1;
    } else {
        ap_idle_pp0_0to11 = ap_const_logic_0;
    }
}

void sha256_transform::thread_ap_idle_pp0_1to12() {
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
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter12.read()))) {
        ap_idle_pp0_1to12 = ap_const_logic_1;
    } else {
        ap_idle_pp0_1to12 = ap_const_logic_0;
    }
}

void sha256_transform::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void sha256_transform::thread_ap_reset_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0_0to11.read()))) {
        ap_reset_idle_pp0 = ap_const_logic_1;
    } else {
        ap_reset_idle_pp0 = ap_const_logic_0;
    }
}

void sha256_transform::thread_ap_return_0() {
    ap_return_0 = add_ln97_fu_4845_p2.read();
}

void sha256_transform::thread_ap_return_1() {
    ap_return_1 = add_ln98_fu_4851_p2.read();
}

void sha256_transform::thread_ap_return_2() {
    ap_return_2 = add_ln99_fu_4855_p2.read();
}

void sha256_transform::thread_ap_return_3() {
    ap_return_3 = add_ln100_fu_4859_p2.read();
}

void sha256_transform::thread_ap_return_4() {
    ap_return_4 = add_ln101_fu_4867_p2.read();
}

void sha256_transform::thread_ap_return_5() {
    ap_return_5 = add_ln102_reg_7287.read();
}

void sha256_transform::thread_ap_return_6() {
    ap_return_6 = add_ln103_reg_7292.read();
}

void sha256_transform::thread_ap_return_7() {
    ap_return_7 = add_ln104_reg_7297.read();
}

void sha256_transform::thread_data_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
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
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
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
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        data_0_ce0 = ap_const_logic_1;
    } else {
        data_0_ce0 = ap_const_logic_0;
    }
}

void sha256_transform::thread_data_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        data_0_ce1 = ap_const_logic_1;
    } else {
        data_0_ce1 = ap_const_logic_0;
    }
}

void sha256_transform::thread_data_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
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
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
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
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        data_1_ce0 = ap_const_logic_1;
    } else {
        data_1_ce0 = ap_const_logic_0;
    }
}

void sha256_transform::thread_data_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        data_1_ce1 = ap_const_logic_1;
    } else {
        data_1_ce1 = ap_const_logic_0;
    }
}

void sha256_transform::thread_data_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
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
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
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
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        data_2_ce0 = ap_const_logic_1;
    } else {
        data_2_ce0 = ap_const_logic_0;
    }
}

void sha256_transform::thread_data_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        data_2_ce1 = ap_const_logic_1;
    } else {
        data_2_ce1 = ap_const_logic_0;
    }
}

void sha256_transform::thread_data_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
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
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
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
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        data_3_ce0 = ap_const_logic_1;
    } else {
        data_3_ce0 = ap_const_logic_0;
    }
}

void sha256_transform::thread_data_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        data_3_ce1 = ap_const_logic_1;
    } else {
        data_3_ce1 = ap_const_logic_0;
    }
}

void sha256_transform::thread_grp_CH_fu_862_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_862_x = add_ln90_10_fu_2240_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_862_x = add_ln90_8_fu_2059_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_862_x = add_ln90_6_fu_1876_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_862_x = add_ln90_3_fu_1593_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_862_x = add_ln90_2_fu_1500_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_862_x = add_ln90_1_fu_1434_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_862_x = add_ln90_fu_1340_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_CH_fu_862_x = ctx_state_4_read.read();
    } else {
        grp_CH_fu_862_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_862_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_862_y = add_ln90_9_reg_5894.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_862_y = add_ln90_7_reg_5771.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_862_y = add_ln90_5_reg_5658.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_862_y = add_ln90_2_reg_5361.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_862_y = add_ln90_1_reg_5279.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_862_y = add_ln90_reg_5133.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_862_y = ctx_state_4_read_1_reg_4931.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_CH_fu_862_y = ctx_state_5_read.read();
    } else {
        grp_CH_fu_862_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_862_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_862_z = add_ln90_8_reg_5814.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_862_z = add_ln90_6_reg_5701.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_862_z = add_ln90_4_reg_5578.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_862_z = add_ln90_1_reg_5279.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_862_z = add_ln90_reg_5133.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_862_z = ctx_state_4_read_1_reg_4931.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_862_z = ctx_state_5_read_1_reg_4924.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_CH_fu_862_z = ctx_state_6_read.read();
    } else {
        grp_CH_fu_862_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_872_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_x = add_ln90_15_fu_2706_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_x = add_ln90_14_fu_2605_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_x = add_ln90_13_fu_2531_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_x = add_ln90_12_fu_2422_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_x = add_ln90_11_fu_2348_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_x = add_ln90_7_fu_1985_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_x = add_ln90_5_fu_1804_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_CH_fu_872_x = add_ln90_4_fu_1695_p2.read();
    } else {
        grp_CH_fu_872_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_872_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_y = add_ln90_14_reg_6168.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_y = add_ln90_13_reg_6125.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_y = add_ln90_12_reg_6055.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_y = add_ln90_11_reg_6012.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_y = add_ln90_10_reg_5937.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_y = add_ln90_6_reg_5701.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_y = add_ln90_4_reg_5578.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_CH_fu_872_y = add_ln90_3_reg_5511.read();
    } else {
        grp_CH_fu_872_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_872_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_z = add_ln90_13_reg_6125.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_z = add_ln90_12_reg_6055.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_z = add_ln90_11_reg_6012.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_z = add_ln90_10_reg_5937.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_z = add_ln90_9_reg_5894.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_z = add_ln90_5_reg_5658.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_z = add_ln90_3_reg_5511.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_CH_fu_872_z = add_ln90_2_reg_5361.read();
    } else {
        grp_CH_fu_872_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_879_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_879_x = add_ln90_26_fu_3316_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_879_x = add_ln90_24_fu_3235_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_879_x = add_ln90_22_fu_3154_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_879_x = add_ln90_19_fu_3018_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_879_x = add_ln90_18_fu_2947_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_879_x = add_ln90_17_fu_2877_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_879_x = add_ln90_16_fu_2776_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_CH_fu_879_x = add_ln90_9_fu_2168_p2.read();
    } else {
        grp_CH_fu_879_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_879_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_879_y = add_ln90_25_reg_6504.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_879_y = add_ln90_23_reg_6463.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_879_y = add_ln90_21_reg_6422.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_879_y = add_ln90_18_reg_6337.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_879_y = add_ln90_17_reg_6306.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_879_y = add_ln90_16_reg_6257.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_879_y = add_ln90_15_reg_6224.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_CH_fu_879_y = add_ln90_8_reg_5814.read();
    } else {
        grp_CH_fu_879_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_879_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_879_z = add_ln90_24_reg_6482.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_879_z = add_ln90_22_reg_6441.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_879_z = add_ln90_20_reg_6400.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_879_z = add_ln90_17_reg_6306.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_879_z = add_ln90_16_reg_6257.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_879_z = add_ln90_15_reg_6224.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_879_z = add_ln90_14_reg_6168.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_CH_fu_879_z = add_ln90_7_reg_5771.read();
    } else {
        grp_CH_fu_879_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_886_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_x = add_ln90_31_fu_3519_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_x = add_ln90_30_fu_3478_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_x = add_ln90_29_fu_3438_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_x = add_ln90_28_fu_3397_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_x = add_ln90_27_fu_3357_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_x = add_ln90_23_fu_3195_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_x = add_ln90_21_fu_3114_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_CH_fu_886_x = add_ln90_20_fu_3073_p2.read();
    } else {
        grp_CH_fu_886_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_886_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_y = add_ln90_30_reg_6605.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_y = add_ln90_29_reg_6586.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_y = add_ln90_28_reg_6564.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_y = add_ln90_27_reg_6545.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_y = add_ln90_26_reg_6523.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_y = add_ln90_22_reg_6441.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_y = add_ln90_20_reg_6400.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_CH_fu_886_y = add_ln90_19_reg_6376.read();
    } else {
        grp_CH_fu_886_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_886_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_z = add_ln90_29_reg_6586.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_z = add_ln90_28_reg_6564.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_z = add_ln90_27_reg_6545.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_z = add_ln90_26_reg_6523.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_z = add_ln90_25_reg_6504.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_z = add_ln90_21_reg_6422.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_z = add_ln90_19_reg_6376.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_CH_fu_886_z = add_ln90_18_reg_6337.read();
    } else {
        grp_CH_fu_886_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_893_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_x = add_ln90_42_fu_3964_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_x = add_ln90_40_fu_3883_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_x = add_ln90_38_fu_3802_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_x = add_ln90_35_fu_3681_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_x = add_ln90_34_fu_3640_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_x = add_ln90_33_fu_3600_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_x = add_ln90_32_fu_3559_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_CH_fu_893_x = add_ln90_25_fu_3276_p2.read();
    } else {
        grp_CH_fu_893_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_893_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_y = add_ln90_41_reg_6832.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_y = add_ln90_39_reg_6791.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_y = add_ln90_37_reg_6750.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_y = add_ln90_34_reg_6687.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_y = add_ln90_33_reg_6668.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_y = add_ln90_32_reg_6646.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_y = add_ln90_31_reg_6627.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_CH_fu_893_y = add_ln90_24_reg_6482.read();
    } else {
        grp_CH_fu_893_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_893_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_z = add_ln90_40_reg_6810.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_z = add_ln90_38_reg_6769.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_z = add_ln90_36_reg_6728.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_z = add_ln90_33_reg_6668.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_z = add_ln90_32_reg_6646.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_z = add_ln90_31_reg_6627.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_z = add_ln90_30_reg_6605.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_CH_fu_893_z = add_ln90_23_reg_6463.read();
    } else {
        grp_CH_fu_893_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_900_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_900_x = add_ln90_47_fu_4182_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_900_x = add_ln90_46_fu_4126_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_900_x = add_ln90_45_fu_4086_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_900_x = add_ln90_44_fu_4045_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_900_x = add_ln90_43_fu_4005_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_900_x = add_ln90_39_fu_3843_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_900_x = add_ln90_37_fu_3762_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()))) {
        grp_CH_fu_900_x = add_ln90_36_fu_3721_p2.read();
    } else {
        grp_CH_fu_900_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_900_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_900_y = add_ln90_46_reg_6933.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_900_y = add_ln90_45_reg_6914.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_900_y = add_ln90_44_reg_6892.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_900_y = add_ln90_43_reg_6873.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_900_y = add_ln90_42_reg_6851.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_900_y = add_ln90_38_reg_6769.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_900_y = add_ln90_36_reg_6728.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()))) {
        grp_CH_fu_900_y = add_ln90_35_reg_6709.read();
    } else {
        grp_CH_fu_900_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_900_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_900_z = add_ln90_45_reg_6914.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_900_z = add_ln90_44_reg_6892.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_900_z = add_ln90_43_reg_6873.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_900_z = add_ln90_42_reg_6851.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_900_z = add_ln90_41_reg_6832.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_900_z = add_ln90_37_reg_6750.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_900_z = add_ln90_35_reg_6709.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()))) {
        grp_CH_fu_900_z = add_ln90_34_reg_6687.read();
    } else {
        grp_CH_fu_900_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_907_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_x = add_ln90_57_reg_7165.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_x = add_ln90_56_fu_4546_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_x = add_ln90_54_fu_4465_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_x = add_ln90_51_fu_4344_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_x = add_ln90_50_fu_4303_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_x = add_ln90_49_fu_4263_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_x = add_ln90_48_fu_4222_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        grp_CH_fu_907_x = add_ln90_41_fu_3924_p2.read();
    } else {
        grp_CH_fu_907_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_907_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_y = add_ln90_56_reg_7143.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_y = add_ln90_55_reg_7124.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_y = add_ln90_53_reg_7083.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_y = add_ln90_50_reg_7020.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_y = add_ln90_49_reg_7001.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_y = add_ln90_48_reg_6979.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_y = add_ln90_47_reg_6960.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        grp_CH_fu_907_y = add_ln90_40_reg_6810.read();
    } else {
        grp_CH_fu_907_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_907_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_z = add_ln90_55_reg_7124.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_z = add_ln90_54_reg_7102.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_z = add_ln90_52_reg_7061.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_z = add_ln90_49_reg_7001.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_z = add_ln90_48_reg_6979.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_z = add_ln90_47_reg_6960.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_z = add_ln90_46_reg_6933.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        grp_CH_fu_907_z = add_ln90_39_reg_6791.read();
    } else {
        grp_CH_fu_907_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_914_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        grp_CH_fu_914_x = add_ln90_62_fu_4785_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_914_x = add_ln90_61_fu_4744_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_914_x = add_ln90_60_fu_4704_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_914_x = add_ln90_59_fu_4663_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_914_x = add_ln90_58_reg_7186.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_914_x = add_ln90_55_fu_4506_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_914_x = add_ln90_53_fu_4425_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        grp_CH_fu_914_x = add_ln90_52_fu_4384_p2.read();
    } else {
        grp_CH_fu_914_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_914_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        grp_CH_fu_914_y = add_ln90_61_reg_7250.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_914_y = add_ln90_60_reg_7231.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_914_y = add_ln90_59_reg_7209.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_914_y = add_ln90_58_reg_7186.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_914_y = add_ln90_57_reg_7165.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_914_y = add_ln90_54_reg_7102.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_914_y = add_ln90_52_reg_7061.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        grp_CH_fu_914_y = add_ln90_51_reg_7042.read();
    } else {
        grp_CH_fu_914_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_914_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        grp_CH_fu_914_z = add_ln90_60_reg_7231.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_914_z = add_ln90_59_reg_7209.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_914_z = add_ln90_58_reg_7186.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_914_z = add_ln90_57_reg_7165.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_914_z = add_ln90_56_reg_7143.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_914_z = add_ln90_53_reg_7083.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_914_z = add_ln90_51_reg_7042.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        grp_CH_fu_914_z = add_ln90_50_reg_7020.read();
    } else {
        grp_CH_fu_914_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP0_fu_1021_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1021_x = add_ln94_7_fu_1996_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1021_x = add_ln94_5_fu_1814_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1021_x = add_ln94_4_reg_5585.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1021_x = add_ln94_3_fu_1604_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1021_x = add_ln94_2_reg_5368.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1021_x = add_ln94_1_fu_1445_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1021_x = add_ln94_reg_5140.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1021_x = ctx_state_0_read.read();
    } else {
        grp_EP0_fu_1021_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP0_fu_1027_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1027_x = add_ln94_15_fu_2717_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1027_x = add_ln94_13_fu_2542_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1027_x = add_ln94_12_reg_6062.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1027_x = add_ln94_11_fu_2359_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1027_x = add_ln94_10_reg_5944.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_EP0_fu_1027_x = add_ln94_9_fu_2179_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1027_x = add_ln94_8_reg_5821.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1027_x = add_ln94_6_reg_5708.read();
    } else {
        grp_EP0_fu_1027_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP0_fu_1032_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1032_x = add_ln94_23_fu_3206_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1032_x = add_ln94_21_fu_3125_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1032_x = add_ln94_20_reg_6407.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1032_x = add_ln94_19_fu_3029_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1032_x = add_ln94_18_reg_6344.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1032_x = add_ln94_17_fu_2888_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1032_x = add_ln94_16_reg_6264.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_EP0_fu_1032_x = add_ln94_14_reg_6175.read();
    } else {
        grp_EP0_fu_1032_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP0_fu_1037_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1037_x = add_ln94_31_fu_3530_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1037_x = add_ln94_29_fu_3449_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1037_x = add_ln94_28_reg_6571.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1037_x = add_ln94_27_fu_3368_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1037_x = add_ln94_26_reg_6530.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_EP0_fu_1037_x = add_ln94_25_fu_3287_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1037_x = add_ln94_24_reg_6489.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1037_x = add_ln94_22_reg_6448.read();
    } else {
        grp_EP0_fu_1037_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP0_fu_1042_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1042_x = add_ln94_39_fu_3854_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1042_x = add_ln94_37_fu_3773_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1042_x = add_ln94_36_reg_6735.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1042_x = add_ln94_35_fu_3692_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1042_x = add_ln94_34_reg_6694.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1042_x = add_ln94_33_fu_3611_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1042_x = add_ln94_32_reg_6653.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()))) {
        grp_EP0_fu_1042_x = add_ln94_30_reg_6612.read();
    } else {
        grp_EP0_fu_1042_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP0_fu_1047_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1047_x = add_ln94_47_fu_4193_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1047_x = add_ln94_45_fu_4097_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1047_x = add_ln94_44_reg_6899.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1047_x = add_ln94_43_fu_4016_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1047_x = add_ln94_42_reg_6858.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        grp_EP0_fu_1047_x = add_ln94_41_fu_3935_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1047_x = add_ln94_40_reg_6817.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1047_x = add_ln94_38_reg_6776.read();
    } else {
        grp_EP0_fu_1047_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP0_fu_1052_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1052_x = add_ln94_55_fu_4517_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1052_x = add_ln94_53_fu_4436_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1052_x = add_ln94_52_reg_7068.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1052_x = add_ln94_51_fu_4355_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1052_x = add_ln94_50_reg_7027.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1052_x = add_ln94_49_fu_4274_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1052_x = add_ln94_48_reg_6986.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        grp_EP0_fu_1052_x = add_ln94_46_reg_6940.read();
    } else {
        grp_EP0_fu_1052_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP0_fu_1057_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        grp_EP0_fu_1057_x = add_ln94_62_reg_7270.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        grp_EP0_fu_1057_x = add_ln94_61_reg_7256.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1057_x = add_ln94_60_fu_4715_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1057_x = add_ln94_59_reg_7216.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1057_x = add_ln94_58_reg_7195.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        grp_EP0_fu_1057_x = add_ln94_57_fu_4596_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1057_x = add_ln94_56_reg_7150.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1057_x = add_ln94_54_reg_7109.read();
    } else {
        grp_EP0_fu_1057_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP1_fu_1001_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1001_x = add_ln90_42_fu_3964_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1001_x = add_ln90_40_fu_3883_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1001_x = add_ln90_38_fu_3802_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1001_x = add_ln90_35_fu_3681_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1001_x = add_ln90_34_fu_3640_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1001_x = add_ln90_33_fu_3600_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1001_x = add_ln90_32_fu_3559_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_EP1_fu_1001_x = add_ln90_25_fu_3276_p2.read();
    } else {
        grp_EP1_fu_1001_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP1_fu_1006_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1006_x = add_ln90_47_fu_4182_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1006_x = add_ln90_46_fu_4126_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1006_x = add_ln90_45_fu_4086_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1006_x = add_ln90_44_fu_4045_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1006_x = add_ln90_43_fu_4005_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1006_x = add_ln90_39_fu_3843_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1006_x = add_ln90_37_fu_3762_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()))) {
        grp_EP1_fu_1006_x = add_ln90_36_fu_3721_p2.read();
    } else {
        grp_EP1_fu_1006_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP1_fu_1011_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1011_x = add_ln90_57_reg_7165.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1011_x = add_ln90_56_fu_4546_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1011_x = add_ln90_54_fu_4465_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1011_x = add_ln90_51_fu_4344_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1011_x = add_ln90_50_fu_4303_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1011_x = add_ln90_49_fu_4263_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1011_x = add_ln90_48_fu_4222_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        grp_EP1_fu_1011_x = add_ln90_41_fu_3924_p2.read();
    } else {
        grp_EP1_fu_1011_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP1_fu_1016_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        grp_EP1_fu_1016_x = add_ln90_62_fu_4785_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1016_x = add_ln90_61_fu_4744_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1016_x = add_ln90_60_fu_4704_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1016_x = add_ln90_59_fu_4663_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1016_x = add_ln90_58_reg_7186.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1016_x = add_ln90_55_fu_4506_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1016_x = add_ln90_53_fu_4425_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        grp_EP1_fu_1016_x = add_ln90_52_fu_4384_p2.read();
    } else {
        grp_EP1_fu_1016_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP1_fu_980_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP1_fu_980_x = add_ln90_10_fu_2240_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP1_fu_980_x = add_ln90_8_fu_2059_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP1_fu_980_x = add_ln90_6_fu_1876_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP1_fu_980_x = add_ln90_3_fu_1593_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP1_fu_980_x = add_ln90_2_fu_1500_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP1_fu_980_x = add_ln90_1_fu_1434_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP1_fu_980_x = add_ln90_fu_1340_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_EP1_fu_980_x = ctx_state_4_read.read();
    } else {
        grp_EP1_fu_980_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP1_fu_986_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP1_fu_986_x = add_ln90_15_fu_2706_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP1_fu_986_x = add_ln90_14_fu_2605_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP1_fu_986_x = add_ln90_13_fu_2531_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP1_fu_986_x = add_ln90_12_fu_2422_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP1_fu_986_x = add_ln90_11_fu_2348_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP1_fu_986_x = add_ln90_7_fu_1985_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP1_fu_986_x = add_ln90_5_fu_1804_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_EP1_fu_986_x = add_ln90_4_fu_1695_p2.read();
    } else {
        grp_EP1_fu_986_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP1_fu_991_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP1_fu_991_x = add_ln90_26_fu_3316_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP1_fu_991_x = add_ln90_24_fu_3235_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP1_fu_991_x = add_ln90_22_fu_3154_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP1_fu_991_x = add_ln90_19_fu_3018_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP1_fu_991_x = add_ln90_18_fu_2947_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP1_fu_991_x = add_ln90_17_fu_2877_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP1_fu_991_x = add_ln90_16_fu_2776_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_EP1_fu_991_x = add_ln90_9_fu_2168_p2.read();
    } else {
        grp_EP1_fu_991_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP1_fu_996_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP1_fu_996_x = add_ln90_31_fu_3519_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP1_fu_996_x = add_ln90_30_fu_3478_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP1_fu_996_x = add_ln90_29_fu_3438_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP1_fu_996_x = add_ln90_28_fu_3397_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP1_fu_996_x = add_ln90_27_fu_3357_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP1_fu_996_x = add_ln90_23_fu_3195_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP1_fu_996_x = add_ln90_21_fu_3114_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_EP1_fu_996_x = add_ln90_20_fu_3073_p2.read();
    } else {
        grp_EP1_fu_996_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_921_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_x = add_ln94_7_fu_1996_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_x = add_ln94_5_fu_1814_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_x = add_ln94_4_reg_5585.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_x = add_ln94_3_fu_1604_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_x = add_ln94_2_reg_5368.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_x = add_ln94_1_fu_1445_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_x = add_ln94_reg_5140.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_x = ctx_state_0_read.read();
    } else {
        grp_MAJ_fu_921_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_921_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_y = add_ln94_6_reg_5708.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_y = add_ln94_4_reg_5585.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_y = add_ln94_3_reg_5518.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_y = add_ln94_2_reg_5368.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_y = add_ln94_1_reg_5286.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_y = add_ln94_reg_5140.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_y = ctx_state_0_read_1_reg_4952.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_y = ctx_state_1_read.read();
    } else {
        grp_MAJ_fu_921_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_921_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_z = add_ln94_5_reg_5665.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_z = add_ln94_3_reg_5518.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_z = add_ln94_2_reg_5368.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_z = add_ln94_1_reg_5286.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_z = add_ln94_reg_5140.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_z = ctx_state_0_read_1_reg_4952.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_z = ctx_state_1_read_1_reg_4945.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_z = ctx_state_2_read.read();
    } else {
        grp_MAJ_fu_921_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_931_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_x = add_ln94_15_fu_2717_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_x = add_ln94_13_fu_2542_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_x = add_ln94_12_reg_6062.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_x = add_ln94_11_fu_2359_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_x = add_ln94_10_reg_5944.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_MAJ_fu_931_x = add_ln94_9_fu_2179_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_x = add_ln94_8_reg_5821.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_x = add_ln94_6_reg_5708.read();
    } else {
        grp_MAJ_fu_931_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_931_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_y = add_ln94_14_reg_6175.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_y = add_ln94_12_reg_6062.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_y = add_ln94_11_reg_6019.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_y = add_ln94_10_reg_5944.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_y = add_ln94_9_reg_5901.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_MAJ_fu_931_y = add_ln94_8_reg_5821.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_y = add_ln94_7_reg_5778.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_y = add_ln94_5_reg_5665.read();
    } else {
        grp_MAJ_fu_931_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_931_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_z = add_ln94_13_reg_6132.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_z = add_ln94_11_reg_6019.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_z = add_ln94_10_reg_5944.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_z = add_ln94_9_reg_5901.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_z = add_ln94_8_reg_5821.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_MAJ_fu_931_z = add_ln94_7_reg_5778.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_z = add_ln94_6_reg_5708.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_z = add_ln94_4_reg_5585.read();
    } else {
        grp_MAJ_fu_931_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_938_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_938_x = add_ln94_23_fu_3206_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_938_x = add_ln94_21_fu_3125_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_938_x = add_ln94_20_reg_6407.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_938_x = add_ln94_19_fu_3029_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_938_x = add_ln94_18_reg_6344.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_938_x = add_ln94_17_fu_2888_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_938_x = add_ln94_16_reg_6264.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_MAJ_fu_938_x = add_ln94_14_reg_6175.read();
    } else {
        grp_MAJ_fu_938_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_938_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_938_y = add_ln94_22_reg_6448.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_938_y = add_ln94_20_reg_6407.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_938_y = add_ln94_19_reg_6383.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_938_y = add_ln94_18_reg_6344.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_938_y = add_ln94_17_reg_6313.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_938_y = add_ln94_16_reg_6264.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_938_y = add_ln94_15_reg_6231.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_MAJ_fu_938_y = add_ln94_13_reg_6132.read();
    } else {
        grp_MAJ_fu_938_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_938_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_938_z = add_ln94_21_reg_6429.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_938_z = add_ln94_19_reg_6383.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_938_z = add_ln94_18_reg_6344.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_938_z = add_ln94_17_reg_6313.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_938_z = add_ln94_16_reg_6264.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_938_z = add_ln94_15_reg_6231.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_938_z = add_ln94_14_reg_6175.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_MAJ_fu_938_z = add_ln94_12_reg_6062.read();
    } else {
        grp_MAJ_fu_938_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_945_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_x = add_ln94_31_fu_3530_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_x = add_ln94_29_fu_3449_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_x = add_ln94_28_reg_6571.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_x = add_ln94_27_fu_3368_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_x = add_ln94_26_reg_6530.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_MAJ_fu_945_x = add_ln94_25_fu_3287_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_x = add_ln94_24_reg_6489.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_x = add_ln94_22_reg_6448.read();
    } else {
        grp_MAJ_fu_945_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_945_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_y = add_ln94_30_reg_6612.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_y = add_ln94_28_reg_6571.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_y = add_ln94_27_reg_6552.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_y = add_ln94_26_reg_6530.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_y = add_ln94_25_reg_6511.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_MAJ_fu_945_y = add_ln94_24_reg_6489.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_y = add_ln94_23_reg_6470.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_y = add_ln94_21_reg_6429.read();
    } else {
        grp_MAJ_fu_945_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_945_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_z = add_ln94_29_reg_6593.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_z = add_ln94_27_reg_6552.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_z = add_ln94_26_reg_6530.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_z = add_ln94_25_reg_6511.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_z = add_ln94_24_reg_6489.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_MAJ_fu_945_z = add_ln94_23_reg_6470.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_z = add_ln94_22_reg_6448.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_z = add_ln94_20_reg_6407.read();
    } else {
        grp_MAJ_fu_945_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_952_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_x = add_ln94_39_fu_3854_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_x = add_ln94_37_fu_3773_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_x = add_ln94_36_reg_6735.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_x = add_ln94_35_fu_3692_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_x = add_ln94_34_reg_6694.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_x = add_ln94_33_fu_3611_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_x = add_ln94_32_reg_6653.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()))) {
        grp_MAJ_fu_952_x = add_ln94_30_reg_6612.read();
    } else {
        grp_MAJ_fu_952_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_952_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_y = add_ln94_38_reg_6776.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_y = add_ln94_36_reg_6735.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_y = add_ln94_35_reg_6716.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_y = add_ln94_34_reg_6694.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_y = add_ln94_33_reg_6675.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_y = add_ln94_32_reg_6653.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_y = add_ln94_31_reg_6634.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()))) {
        grp_MAJ_fu_952_y = add_ln94_29_reg_6593.read();
    } else {
        grp_MAJ_fu_952_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_952_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_z = add_ln94_37_reg_6757.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_z = add_ln94_35_reg_6716.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_z = add_ln94_34_reg_6694.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_z = add_ln94_33_reg_6675.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_z = add_ln94_32_reg_6653.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_z = add_ln94_31_reg_6634.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_z = add_ln94_30_reg_6612.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()))) {
        grp_MAJ_fu_952_z = add_ln94_28_reg_6571.read();
    } else {
        grp_MAJ_fu_952_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_959_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_959_x = add_ln94_47_fu_4193_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_959_x = add_ln94_45_fu_4097_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_959_x = add_ln94_44_reg_6899.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_959_x = add_ln94_43_fu_4016_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_959_x = add_ln94_42_reg_6858.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        grp_MAJ_fu_959_x = add_ln94_41_fu_3935_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_959_x = add_ln94_40_reg_6817.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_959_x = add_ln94_38_reg_6776.read();
    } else {
        grp_MAJ_fu_959_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_959_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_959_y = add_ln94_46_reg_6940.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_959_y = add_ln94_44_reg_6899.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_959_y = add_ln94_43_reg_6880.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_959_y = add_ln94_42_reg_6858.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_959_y = add_ln94_41_reg_6839.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        grp_MAJ_fu_959_y = add_ln94_40_reg_6817.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_959_y = add_ln94_39_reg_6798.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_959_y = add_ln94_37_reg_6757.read();
    } else {
        grp_MAJ_fu_959_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_959_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_959_z = add_ln94_45_reg_6921.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_959_z = add_ln94_43_reg_6880.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_959_z = add_ln94_42_reg_6858.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_959_z = add_ln94_41_reg_6839.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_959_z = add_ln94_40_reg_6817.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        grp_MAJ_fu_959_z = add_ln94_39_reg_6798.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_959_z = add_ln94_38_reg_6776.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_959_z = add_ln94_36_reg_6735.read();
    } else {
        grp_MAJ_fu_959_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_966_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_x = add_ln94_55_fu_4517_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_x = add_ln94_53_fu_4436_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_x = add_ln94_52_reg_7068.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_x = add_ln94_51_fu_4355_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_x = add_ln94_50_reg_7027.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_x = add_ln94_49_fu_4274_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_x = add_ln94_48_reg_6986.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        grp_MAJ_fu_966_x = add_ln94_46_reg_6940.read();
    } else {
        grp_MAJ_fu_966_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_966_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_y = add_ln94_54_reg_7109.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_y = add_ln94_52_reg_7068.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_y = add_ln94_51_reg_7049.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_y = add_ln94_50_reg_7027.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_y = add_ln94_49_reg_7008.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_y = add_ln94_48_reg_6986.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_y = add_ln94_47_reg_6967.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        grp_MAJ_fu_966_y = add_ln94_45_reg_6921.read();
    } else {
        grp_MAJ_fu_966_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_966_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_z = add_ln94_53_reg_7090.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_z = add_ln94_51_reg_7049.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_z = add_ln94_50_reg_7027.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_z = add_ln94_49_reg_7008.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_z = add_ln94_48_reg_6986.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_z = add_ln94_47_reg_6967.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_z = add_ln94_46_reg_6940.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        grp_MAJ_fu_966_z = add_ln94_44_reg_6899.read();
    } else {
        grp_MAJ_fu_966_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_973_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        grp_MAJ_fu_973_x = add_ln94_62_reg_7270.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        grp_MAJ_fu_973_x = add_ln94_61_reg_7256.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_973_x = add_ln94_60_fu_4715_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_973_x = add_ln94_59_reg_7216.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_973_x = add_ln94_58_reg_7195.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        grp_MAJ_fu_973_x = add_ln94_57_fu_4596_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_973_x = add_ln94_56_reg_7150.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_973_x = add_ln94_54_reg_7109.read();
    } else {
        grp_MAJ_fu_973_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_973_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        grp_MAJ_fu_973_y = add_ln94_61_reg_7256.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        grp_MAJ_fu_973_y = add_ln94_60_reg_7238.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_973_y = add_ln94_59_reg_7216.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_973_y = add_ln94_58_reg_7195.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_973_y = add_ln94_57_reg_7174.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        grp_MAJ_fu_973_y = add_ln94_56_reg_7150.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_973_y = add_ln94_55_reg_7131.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_973_y = add_ln94_53_reg_7090.read();
    } else {
        grp_MAJ_fu_973_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_973_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        grp_MAJ_fu_973_z = add_ln94_60_reg_7238.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        grp_MAJ_fu_973_z = add_ln94_59_reg_7216.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_973_z = add_ln94_58_reg_7195.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_973_z = add_ln94_57_reg_7174.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_973_z = add_ln94_56_reg_7150.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        grp_MAJ_fu_973_z = add_ln94_55_reg_7131.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_973_z = add_ln94_54_reg_7109.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_973_z = add_ln94_52_reg_7068.read();
    } else {
        grp_MAJ_fu_973_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG0_fu_1062_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_SIG0_fu_1062_x = m_14_fu_1623_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1062_x = m_12_fu_1567_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1062_x = m_10_fu_1519_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1062_x = m_8_fu_1463_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1062_x = m_6_fu_1408_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1062_x = m_4_fu_1360_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1062_x = m_2_fu_1303_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1062_x = m_1_fu_1278_p5.read();
    } else {
        grp_SIG0_fu_1062_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG0_fu_1067_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1067_x = m_18_fu_1723_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_SIG0_fu_1067_x = m_15_fu_1637_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1067_x = m_13_fu_1580_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1067_x = m_11_fu_1532_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1067_x = m_9_fu_1476_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1067_x = m_7_fu_1421_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1067_x = m_5_fu_1373_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1067_x = m_3_fu_1316_p5.read();
    } else {
        grp_SIG0_fu_1067_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG0_fu_1072_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1072_x = m_30_fu_2087_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1072_x = m_28_fu_2024_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1072_x = m_26_fu_1960_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1072_x = m_24_fu_1904_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1072_x = m_22_fu_1840_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1072_x = m_20_fu_1779_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1072_x = m_19_fu_1740_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1072_x = m_16_fu_1660_p2.read();
        } else {
            grp_SIG0_fu_1072_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_SIG0_fu_1072_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG0_fu_1077_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1077_x = m_34_fu_2206_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1077_x = m_31_fu_2104_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1077_x = m_29_fu_2041_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1077_x = m_27_fu_1977_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1077_x = m_25_fu_1921_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1077_x = m_23_fu_1857_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1077_x = m_21_fu_1796_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_SIG0_fu_1077_x = m_17_fu_1677_p2.read();
    } else {
        grp_SIG0_fu_1077_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG0_fu_1082_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1082_x = m_46_fu_2569_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1082_x = m_44_fu_2506_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1082_x = m_42_fu_2450_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1082_x = m_40_fu_2387_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1082_x = m_38_fu_2323_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1082_x = m_36_fu_2268_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1082_x = m_35_fu_2222_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1082_x = m_32_fu_2143_p2.read();
        } else {
            grp_SIG0_fu_1082_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_SIG0_fu_1082_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG0_fu_1087_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1087_x = m_48_reg_6184.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1087_x = m_47_fu_2586_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1087_x = m_45_fu_2523_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1087_x = m_43_fu_2467_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1087_x = m_41_fu_2404_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1087_x = m_39_fu_2340_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1087_x = m_37_fu_2285_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_SIG0_fu_1087_x = m_33_fu_2160_p2.read();
    } else {
        grp_SIG0_fu_1087_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG1_fu_1092_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1092_x = m_30_fu_2087_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1092_x = m_28_fu_2024_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1092_x = m_26_fu_1960_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1092_x = m_24_fu_1904_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1092_x = m_22_fu_1840_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1092_x = m_20_fu_1779_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1092_x = m_18_fu_1723_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1092_x = m_14_fu_1623_p5.read();
        } else {
            grp_SIG1_fu_1092_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_SIG1_fu_1092_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG1_fu_1097_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1097_x = m_31_fu_2104_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1097_x = m_29_fu_2041_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1097_x = m_27_fu_1977_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1097_x = m_25_fu_1921_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1097_x = m_23_fu_1857_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1097_x = m_21_fu_1796_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1097_x = m_19_fu_1740_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1097_x = m_15_fu_1637_p5.read();
        } else {
            grp_SIG1_fu_1097_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_SIG1_fu_1097_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG1_fu_1102_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_SIG1_fu_1102_x = m_46_fu_2569_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_SIG1_fu_1102_x = m_44_fu_2506_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_SIG1_fu_1102_x = m_42_fu_2450_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_SIG1_fu_1102_x = m_40_fu_2387_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_SIG1_fu_1102_x = m_38_fu_2323_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_SIG1_fu_1102_x = m_36_fu_2268_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_SIG1_fu_1102_x = m_34_fu_2206_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_SIG1_fu_1102_x = m_16_fu_1660_p2.read();
    } else {
        grp_SIG1_fu_1102_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG1_fu_1107_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_SIG1_fu_1107_x = m_47_fu_2586_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_SIG1_fu_1107_x = m_45_fu_2523_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_SIG1_fu_1107_x = m_43_fu_2467_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_SIG1_fu_1107_x = m_41_fu_2404_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_SIG1_fu_1107_x = m_39_fu_2340_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_SIG1_fu_1107_x = m_37_fu_2285_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_SIG1_fu_1107_x = m_35_fu_2222_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_SIG1_fu_1107_x = m_17_fu_1677_p2.read();
    } else {
        grp_SIG1_fu_1107_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG1_fu_1112_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_SIG1_fu_1112_x = m_60_reg_6353.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_SIG1_fu_1112_x = m_58_reg_6325.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_SIG1_fu_1112_x = m_56_reg_6293.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_SIG1_fu_1112_x = m_54_reg_6273.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_SIG1_fu_1112_x = m_52_reg_6243.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_SIG1_fu_1112_x = m_50_reg_6205.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_SIG1_fu_1112_x = m_48_reg_6184.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_SIG1_fu_1112_x = m_32_fu_2143_p2.read();
    } else {
        grp_SIG1_fu_1112_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG1_fu_1117_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_SIG1_fu_1117_x = m_61_reg_6359.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_SIG1_fu_1117_x = m_59_reg_6331.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_SIG1_fu_1117_x = m_57_reg_6300.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_SIG1_fu_1117_x = m_55_reg_6280.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_SIG1_fu_1117_x = m_53_reg_6250.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_SIG1_fu_1117_x = m_51_reg_6212.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_SIG1_fu_1117_x = m_49_reg_6192.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_SIG1_fu_1117_x = m_33_fu_2160_p2.read();
    } else {
        grp_SIG1_fu_1117_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_m_0_fu_1266_p5() {
    m_0_fu_1266_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q0.read(), data_1_q0.read()), data_2_q0.read()), data_3_q0.read());
}

void sha256_transform::thread_m_10_fu_1519_p5() {
    m_10_fu_1519_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q0.read(), data_1_q0.read()), data_2_q0.read()), data_3_q0.read());
}

void sha256_transform::thread_m_11_fu_1532_p5() {
    m_11_fu_1532_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q1.read(), data_1_q1.read()), data_2_q1.read()), data_3_q1.read());
}

void sha256_transform::thread_m_12_fu_1567_p5() {
    m_12_fu_1567_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q0.read(), data_1_q0.read()), data_2_q0.read()), data_3_q0.read());
}

void sha256_transform::thread_m_13_fu_1580_p5() {
    m_13_fu_1580_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q1.read(), data_1_q1.read()), data_2_q1.read()), data_3_q1.read());
}

void sha256_transform::thread_m_14_fu_1623_p5() {
    m_14_fu_1623_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q0.read(), data_1_q0.read()), data_2_q0.read()), data_3_q0.read());
}

void sha256_transform::thread_m_15_fu_1637_p5() {
    m_15_fu_1637_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q1.read(), data_1_q1.read()), data_2_q1.read()), data_3_q1.read());
}

void sha256_transform::thread_m_16_fu_1660_p2() {
    m_16_fu_1660_p2 = (!add_ln72_1_fu_1656_p2.read().is_01() || !add_ln72_fu_1651_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_1_fu_1656_p2.read()) + sc_biguint<32>(add_ln72_fu_1651_p2.read()));
}

void sha256_transform::thread_m_17_fu_1677_p2() {
    m_17_fu_1677_p2 = (!add_ln72_4_fu_1673_p2.read().is_01() || !add_ln72_3_fu_1668_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_4_fu_1673_p2.read()) + sc_biguint<32>(add_ln72_3_fu_1668_p2.read()));
}

void sha256_transform::thread_m_18_fu_1723_p2() {
    m_18_fu_1723_p2 = (!add_ln72_7_fu_1719_p2.read().is_01() || !add_ln72_6_fu_1714_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_7_fu_1719_p2.read()) + sc_biguint<32>(add_ln72_6_fu_1714_p2.read()));
}

void sha256_transform::thread_m_19_fu_1740_p2() {
    m_19_fu_1740_p2 = (!add_ln72_10_fu_1736_p2.read().is_01() || !add_ln72_9_fu_1731_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_10_fu_1736_p2.read()) + sc_biguint<32>(add_ln72_9_fu_1731_p2.read()));
}

void sha256_transform::thread_m_1_fu_1278_p5() {
    m_1_fu_1278_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q1.read(), data_1_q1.read()), data_2_q1.read()), data_3_q1.read());
}

void sha256_transform::thread_m_20_fu_1779_p2() {
    m_20_fu_1779_p2 = (!add_ln72_13_fu_1775_p2.read().is_01() || !add_ln72_12_fu_1770_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_13_fu_1775_p2.read()) + sc_biguint<32>(add_ln72_12_fu_1770_p2.read()));
}

void sha256_transform::thread_m_21_fu_1796_p2() {
    m_21_fu_1796_p2 = (!add_ln72_16_fu_1792_p2.read().is_01() || !add_ln72_15_fu_1787_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_16_fu_1792_p2.read()) + sc_biguint<32>(add_ln72_15_fu_1787_p2.read()));
}

void sha256_transform::thread_m_22_fu_1840_p2() {
    m_22_fu_1840_p2 = (!add_ln72_19_fu_1836_p2.read().is_01() || !add_ln72_18_fu_1831_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_19_fu_1836_p2.read()) + sc_biguint<32>(add_ln72_18_fu_1831_p2.read()));
}

void sha256_transform::thread_m_23_fu_1857_p2() {
    m_23_fu_1857_p2 = (!add_ln72_22_fu_1853_p2.read().is_01() || !add_ln72_21_fu_1848_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_22_fu_1853_p2.read()) + sc_biguint<32>(add_ln72_21_fu_1848_p2.read()));
}

void sha256_transform::thread_m_24_fu_1904_p2() {
    m_24_fu_1904_p2 = (!add_ln72_25_fu_1900_p2.read().is_01() || !add_ln72_24_fu_1895_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_25_fu_1900_p2.read()) + sc_biguint<32>(add_ln72_24_fu_1895_p2.read()));
}

void sha256_transform::thread_m_25_fu_1921_p2() {
    m_25_fu_1921_p2 = (!add_ln72_28_fu_1917_p2.read().is_01() || !add_ln72_27_fu_1912_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_28_fu_1917_p2.read()) + sc_biguint<32>(add_ln72_27_fu_1912_p2.read()));
}

void sha256_transform::thread_m_26_fu_1960_p2() {
    m_26_fu_1960_p2 = (!add_ln72_31_fu_1956_p2.read().is_01() || !add_ln72_30_fu_1951_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_31_fu_1956_p2.read()) + sc_biguint<32>(add_ln72_30_fu_1951_p2.read()));
}

void sha256_transform::thread_m_27_fu_1977_p2() {
    m_27_fu_1977_p2 = (!add_ln72_34_fu_1973_p2.read().is_01() || !add_ln72_33_fu_1968_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_34_fu_1973_p2.read()) + sc_biguint<32>(add_ln72_33_fu_1968_p2.read()));
}

void sha256_transform::thread_m_28_fu_2024_p2() {
    m_28_fu_2024_p2 = (!add_ln72_37_fu_2020_p2.read().is_01() || !add_ln72_36_fu_2015_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_37_fu_2020_p2.read()) + sc_biguint<32>(add_ln72_36_fu_2015_p2.read()));
}

void sha256_transform::thread_m_29_fu_2041_p2() {
    m_29_fu_2041_p2 = (!add_ln72_40_fu_2037_p2.read().is_01() || !add_ln72_39_fu_2032_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_40_fu_2037_p2.read()) + sc_biguint<32>(add_ln72_39_fu_2032_p2.read()));
}

void sha256_transform::thread_m_2_fu_1303_p5() {
    m_2_fu_1303_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q0.read(), data_1_q0.read()), data_2_q0.read()), data_3_q0.read());
}

void sha256_transform::thread_m_30_fu_2087_p2() {
    m_30_fu_2087_p2 = (!add_ln72_43_fu_2083_p2.read().is_01() || !add_ln72_42_fu_2078_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_43_fu_2083_p2.read()) + sc_biguint<32>(add_ln72_42_fu_2078_p2.read()));
}

void sha256_transform::thread_m_31_fu_2104_p2() {
    m_31_fu_2104_p2 = (!add_ln72_46_fu_2100_p2.read().is_01() || !add_ln72_45_fu_2095_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_46_fu_2100_p2.read()) + sc_biguint<32>(add_ln72_45_fu_2095_p2.read()));
}

void sha256_transform::thread_m_32_fu_2143_p2() {
    m_32_fu_2143_p2 = (!add_ln72_49_fu_2139_p2.read().is_01() || !add_ln72_48_fu_2134_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_49_fu_2139_p2.read()) + sc_biguint<32>(add_ln72_48_fu_2134_p2.read()));
}

void sha256_transform::thread_m_33_fu_2160_p2() {
    m_33_fu_2160_p2 = (!add_ln72_52_fu_2156_p2.read().is_01() || !add_ln72_51_fu_2151_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_52_fu_2156_p2.read()) + sc_biguint<32>(add_ln72_51_fu_2151_p2.read()));
}

void sha256_transform::thread_m_34_fu_2206_p2() {
    m_34_fu_2206_p2 = (!add_ln72_55_fu_2202_p2.read().is_01() || !add_ln72_54_fu_2198_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_55_fu_2202_p2.read()) + sc_biguint<32>(add_ln72_54_fu_2198_p2.read()));
}

void sha256_transform::thread_m_35_fu_2222_p2() {
    m_35_fu_2222_p2 = (!add_ln72_58_fu_2218_p2.read().is_01() || !add_ln72_57_fu_2214_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_58_fu_2218_p2.read()) + sc_biguint<32>(add_ln72_57_fu_2214_p2.read()));
}

void sha256_transform::thread_m_36_fu_2268_p2() {
    m_36_fu_2268_p2 = (!add_ln72_61_fu_2264_p2.read().is_01() || !add_ln72_60_fu_2259_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_61_fu_2264_p2.read()) + sc_biguint<32>(add_ln72_60_fu_2259_p2.read()));
}

void sha256_transform::thread_m_37_fu_2285_p2() {
    m_37_fu_2285_p2 = (!add_ln72_64_fu_2281_p2.read().is_01() || !add_ln72_63_fu_2276_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_64_fu_2281_p2.read()) + sc_biguint<32>(add_ln72_63_fu_2276_p2.read()));
}

void sha256_transform::thread_m_38_fu_2323_p2() {
    m_38_fu_2323_p2 = (!add_ln72_67_fu_2319_p2.read().is_01() || !add_ln72_66_fu_2314_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_67_fu_2319_p2.read()) + sc_biguint<32>(add_ln72_66_fu_2314_p2.read()));
}

void sha256_transform::thread_m_39_fu_2340_p2() {
    m_39_fu_2340_p2 = (!add_ln72_70_fu_2336_p2.read().is_01() || !add_ln72_69_fu_2331_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_70_fu_2336_p2.read()) + sc_biguint<32>(add_ln72_69_fu_2331_p2.read()));
}

void sha256_transform::thread_m_3_fu_1316_p5() {
    m_3_fu_1316_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q1.read(), data_1_q1.read()), data_2_q1.read()), data_3_q1.read());
}

void sha256_transform::thread_m_40_fu_2387_p2() {
    m_40_fu_2387_p2 = (!add_ln72_73_fu_2383_p2.read().is_01() || !add_ln72_72_fu_2378_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_73_fu_2383_p2.read()) + sc_biguint<32>(add_ln72_72_fu_2378_p2.read()));
}

void sha256_transform::thread_m_41_fu_2404_p2() {
    m_41_fu_2404_p2 = (!add_ln72_76_fu_2400_p2.read().is_01() || !add_ln72_75_fu_2395_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_76_fu_2400_p2.read()) + sc_biguint<32>(add_ln72_75_fu_2395_p2.read()));
}

void sha256_transform::thread_m_42_fu_2450_p2() {
    m_42_fu_2450_p2 = (!add_ln72_79_fu_2446_p2.read().is_01() || !add_ln72_78_fu_2441_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_79_fu_2446_p2.read()) + sc_biguint<32>(add_ln72_78_fu_2441_p2.read()));
}

void sha256_transform::thread_m_43_fu_2467_p2() {
    m_43_fu_2467_p2 = (!add_ln72_82_fu_2463_p2.read().is_01() || !add_ln72_81_fu_2458_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_82_fu_2463_p2.read()) + sc_biguint<32>(add_ln72_81_fu_2458_p2.read()));
}

void sha256_transform::thread_m_44_fu_2506_p2() {
    m_44_fu_2506_p2 = (!add_ln72_85_fu_2502_p2.read().is_01() || !add_ln72_84_fu_2497_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_85_fu_2502_p2.read()) + sc_biguint<32>(add_ln72_84_fu_2497_p2.read()));
}

void sha256_transform::thread_m_45_fu_2523_p2() {
    m_45_fu_2523_p2 = (!add_ln72_88_fu_2519_p2.read().is_01() || !add_ln72_87_fu_2514_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_88_fu_2519_p2.read()) + sc_biguint<32>(add_ln72_87_fu_2514_p2.read()));
}

void sha256_transform::thread_m_46_fu_2569_p2() {
    m_46_fu_2569_p2 = (!add_ln72_91_fu_2565_p2.read().is_01() || !add_ln72_90_fu_2560_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_91_fu_2565_p2.read()) + sc_biguint<32>(add_ln72_90_fu_2560_p2.read()));
}

void sha256_transform::thread_m_47_fu_2586_p2() {
    m_47_fu_2586_p2 = (!add_ln72_94_fu_2582_p2.read().is_01() || !add_ln72_93_fu_2577_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_94_fu_2582_p2.read()) + sc_biguint<32>(add_ln72_93_fu_2577_p2.read()));
}

void sha256_transform::thread_m_48_fu_2633_p2() {
    m_48_fu_2633_p2 = (!add_ln72_97_fu_2629_p2.read().is_01() || !add_ln72_96_fu_2624_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_97_fu_2629_p2.read()) + sc_biguint<32>(add_ln72_96_fu_2624_p2.read()));
}

void sha256_transform::thread_m_49_fu_2648_p2() {
    m_49_fu_2648_p2 = (!add_ln72_100_fu_2644_p2.read().is_01() || !add_ln72_99_fu_2639_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_100_fu_2644_p2.read()) + sc_biguint<32>(add_ln72_99_fu_2639_p2.read()));
}

void sha256_transform::thread_m_4_fu_1360_p5() {
    m_4_fu_1360_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q0.read(), data_1_q0.read()), data_2_q0.read()), data_3_q0.read());
}

void sha256_transform::thread_m_50_fu_2685_p2() {
    m_50_fu_2685_p2 = (!add_ln72_103_fu_2681_p2.read().is_01() || !add_ln72_102_fu_2676_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_103_fu_2681_p2.read()) + sc_biguint<32>(add_ln72_102_fu_2676_p2.read()));
}

void sha256_transform::thread_m_51_fu_2700_p2() {
    m_51_fu_2700_p2 = (!add_ln72_106_fu_2696_p2.read().is_01() || !add_ln72_105_fu_2691_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_106_fu_2696_p2.read()) + sc_biguint<32>(add_ln72_105_fu_2691_p2.read()));
}

void sha256_transform::thread_m_52_fu_2745_p2() {
    m_52_fu_2745_p2 = (!add_ln72_109_fu_2741_p2.read().is_01() || !add_ln72_108_fu_2736_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_109_fu_2741_p2.read()) + sc_biguint<32>(add_ln72_108_fu_2736_p2.read()));
}

void sha256_transform::thread_m_53_fu_2760_p2() {
    m_53_fu_2760_p2 = (!add_ln72_112_fu_2756_p2.read().is_01() || !add_ln72_111_fu_2751_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_112_fu_2756_p2.read()) + sc_biguint<32>(add_ln72_111_fu_2751_p2.read()));
}

void sha256_transform::thread_m_54_fu_2804_p2() {
    m_54_fu_2804_p2 = (!add_ln72_115_fu_2800_p2.read().is_01() || !add_ln72_114_fu_2795_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_115_fu_2800_p2.read()) + sc_biguint<32>(add_ln72_114_fu_2795_p2.read()));
}

void sha256_transform::thread_m_55_fu_2819_p2() {
    m_55_fu_2819_p2 = (!add_ln72_118_fu_2815_p2.read().is_01() || !add_ln72_117_fu_2810_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_118_fu_2815_p2.read()) + sc_biguint<32>(add_ln72_117_fu_2810_p2.read()));
}

void sha256_transform::thread_m_56_fu_2856_p2() {
    m_56_fu_2856_p2 = (!add_ln72_121_fu_2852_p2.read().is_01() || !add_ln72_120_fu_2847_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_121_fu_2852_p2.read()) + sc_biguint<32>(add_ln72_120_fu_2847_p2.read()));
}

void sha256_transform::thread_m_57_fu_2871_p2() {
    m_57_fu_2871_p2 = (!add_ln72_124_fu_2867_p2.read().is_01() || !add_ln72_123_fu_2862_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_124_fu_2867_p2.read()) + sc_biguint<32>(add_ln72_123_fu_2862_p2.read()));
}

void sha256_transform::thread_m_58_fu_2916_p2() {
    m_58_fu_2916_p2 = (!add_ln72_127_fu_2912_p2.read().is_01() || !add_ln72_126_fu_2907_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_127_fu_2912_p2.read()) + sc_biguint<32>(add_ln72_126_fu_2907_p2.read()));
}

void sha256_transform::thread_m_59_fu_2931_p2() {
    m_59_fu_2931_p2 = (!add_ln72_130_fu_2927_p2.read().is_01() || !add_ln72_129_fu_2922_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_130_fu_2927_p2.read()) + sc_biguint<32>(add_ln72_129_fu_2922_p2.read()));
}

void sha256_transform::thread_m_5_fu_1373_p5() {
    m_5_fu_1373_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q1.read(), data_1_q1.read()), data_2_q1.read()), data_3_q1.read());
}

void sha256_transform::thread_m_60_fu_2975_p2() {
    m_60_fu_2975_p2 = (!add_ln72_133_fu_2971_p2.read().is_01() || !add_ln72_132_fu_2966_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_133_fu_2971_p2.read()) + sc_biguint<32>(add_ln72_132_fu_2966_p2.read()));
}

void sha256_transform::thread_m_61_fu_2990_p2() {
    m_61_fu_2990_p2 = (!add_ln72_136_fu_2986_p2.read().is_01() || !add_ln72_135_fu_2981_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_136_fu_2986_p2.read()) + sc_biguint<32>(add_ln72_135_fu_2981_p2.read()));
}

void sha256_transform::thread_m_6_fu_1408_p5() {
    m_6_fu_1408_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q0.read(), data_1_q0.read()), data_2_q0.read()), data_3_q0.read());
}

void sha256_transform::thread_m_7_fu_1421_p5() {
    m_7_fu_1421_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q1.read(), data_1_q1.read()), data_2_q1.read()), data_3_q1.read());
}

void sha256_transform::thread_m_8_fu_1463_p5() {
    m_8_fu_1463_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q0.read(), data_1_q0.read()), data_2_q0.read()), data_3_q0.read());
}

void sha256_transform::thread_m_9_fu_1476_p5() {
    m_9_fu_1476_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q1.read(), data_1_q1.read()), data_2_q1.read()), data_3_q1.read());
}

}

