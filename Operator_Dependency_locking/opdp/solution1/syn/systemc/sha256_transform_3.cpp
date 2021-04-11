#include "sha256_transform.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void sha256_transform::thread_add_ln256_100_fu_7102_p2() {
    add_ln256_100_fu_7102_p2 = (!m_33_reg_10359_pp0_iter3_reg.read().is_01() || !m_42_reg_10541.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_33_reg_10359_pp0_iter3_reg.read()) + sc_biguint<32>(m_42_reg_10541.read()));
}

void sha256_transform::thread_add_ln256_102_fu_7118_p2() {
    add_ln256_102_fu_7118_p2 = (!tmp_1_33_reg_10424_pp0_iter3_reg.read().is_01() || !reg_5685.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_33_reg_10424_pp0_iter3_reg.read()) + sc_biguint<32>(reg_5685.read()));
}

void sha256_transform::thread_add_ln256_103_fu_7123_p2() {
    add_ln256_103_fu_7123_p2 = (!m_34_reg_10381_pp0_iter3_reg.read().is_01() || !m_43_reg_10550.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_34_reg_10381_pp0_iter3_reg.read()) + sc_biguint<32>(m_43_reg_10550.read()));
}

void sha256_transform::thread_add_ln256_105_fu_7133_p2() {
    add_ln256_105_fu_7133_p2 = (!tmp_1_34_reg_10443_pp0_iter4_reg.read().is_01() || !reg_5689.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_34_reg_10443_pp0_iter4_reg.read()) + sc_biguint<32>(reg_5689.read()));
}

void sha256_transform::thread_add_ln256_106_fu_7138_p2() {
    add_ln256_106_fu_7138_p2 = (!m_35_reg_10390_pp0_iter3_reg.read().is_01() || !m_44_reg_10585.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_35_reg_10390_pp0_iter3_reg.read()) + sc_biguint<32>(m_44_reg_10585.read()));
}

void sha256_transform::thread_add_ln256_108_fu_7170_p2() {
    add_ln256_108_fu_7170_p2 = (!tmp_1_35_reg_10448_pp0_iter4_reg.read().is_01() || !grp_SIG1_fu_5290_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_35_reg_10448_pp0_iter4_reg.read()) + sc_biguint<32>(grp_SIG1_fu_5290_ap_return.read()));
}

void sha256_transform::thread_add_ln256_109_fu_7197_p2() {
    add_ln256_109_fu_7197_p2 = (!m_36_reg_10429_pp0_iter4_reg.read().is_01() || !m_45_reg_10592.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_36_reg_10429_pp0_iter4_reg.read()) + sc_biguint<32>(m_45_reg_10592.read()));
}

void sha256_transform::thread_add_ln256_10_fu_6266_p2() {
    add_ln256_10_fu_6266_p2 = (!m_3_reg_9600.read().is_01() || !m_12_reg_9933.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_3_reg_9600.read()) + sc_biguint<32>(m_12_reg_9933.read()));
}

void sha256_transform::thread_add_ln256_111_fu_7175_p2() {
    add_ln256_111_fu_7175_p2 = (!tmp_1_36_reg_10492_pp0_iter4_reg.read().is_01() || !grp_SIG1_fu_5297_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_36_reg_10492_pp0_iter4_reg.read()) + sc_biguint<32>(grp_SIG1_fu_5297_ap_return.read()));
}

void sha256_transform::thread_add_ln256_112_fu_7207_p2() {
    add_ln256_112_fu_7207_p2 = (!m_37_reg_10436_pp0_iter4_reg.read().is_01() || !m_46_reg_10614.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_37_reg_10436_pp0_iter4_reg.read()) + sc_biguint<32>(m_46_reg_10614.read()));
}

void sha256_transform::thread_add_ln256_114_fu_7228_p2() {
    add_ln256_114_fu_7228_p2 = (!tmp_1_37_reg_10497_pp0_iter4_reg.read().is_01() || !reg_5685.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_37_reg_10497_pp0_iter4_reg.read()) + sc_biguint<32>(reg_5685.read()));
}

void sha256_transform::thread_add_ln256_115_fu_7233_p2() {
    add_ln256_115_fu_7233_p2 = (!m_38_reg_10459_pp0_iter4_reg.read().is_01() || !m_47_reg_10623.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_38_reg_10459_pp0_iter4_reg.read()) + sc_biguint<32>(m_47_reg_10623.read()));
}

void sha256_transform::thread_add_ln256_117_fu_7243_p2() {
    add_ln256_117_fu_7243_p2 = (!tmp_1_38_reg_10521_pp0_iter4_reg.read().is_01() || !reg_5689.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_38_reg_10521_pp0_iter4_reg.read()) + sc_biguint<32>(reg_5689.read()));
}

void sha256_transform::thread_add_ln256_118_fu_7248_p2() {
    add_ln256_118_fu_7248_p2 = (!m_39_reg_10468_pp0_iter4_reg.read().is_01() || !m_48_reg_10667.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_39_reg_10468_pp0_iter4_reg.read()) + sc_biguint<32>(m_48_reg_10667.read()));
}

void sha256_transform::thread_add_ln256_120_fu_7281_p2() {
    add_ln256_120_fu_7281_p2 = (!tmp_1_39_reg_10526_pp0_iter4_reg.read().is_01() || !grp_SIG1_fu_5290_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_39_reg_10526_pp0_iter4_reg.read()) + sc_biguint<32>(grp_SIG1_fu_5290_ap_return.read()));
}

void sha256_transform::thread_add_ln256_121_fu_7297_p2() {
    add_ln256_121_fu_7297_p2 = (!m_40_reg_10507_pp0_iter4_reg.read().is_01() || !m_49_reg_10673.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_40_reg_10507_pp0_iter4_reg.read()) + sc_biguint<32>(m_49_reg_10673.read()));
}

void sha256_transform::thread_add_ln256_123_fu_7286_p2() {
    add_ln256_123_fu_7286_p2 = (!tmp_1_40_reg_10569_pp0_iter4_reg.read().is_01() || !grp_SIG1_fu_5297_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_40_reg_10569_pp0_iter4_reg.read()) + sc_biguint<32>(grp_SIG1_fu_5297_ap_return.read()));
}

void sha256_transform::thread_add_ln256_124_fu_7307_p2() {
    add_ln256_124_fu_7307_p2 = (!m_41_reg_10514_pp0_iter4_reg.read().is_01() || !m_50_reg_10689.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_41_reg_10514_pp0_iter4_reg.read()) + sc_biguint<32>(m_50_reg_10689.read()));
}

void sha256_transform::thread_add_ln256_126_fu_7340_p2() {
    add_ln256_126_fu_7340_p2 = (!tmp_1_41_reg_10574_pp0_iter4_reg.read().is_01() || !reg_5685.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_41_reg_10574_pp0_iter4_reg.read()) + sc_biguint<32>(reg_5685.read()));
}

void sha256_transform::thread_add_ln256_127_fu_7367_p2() {
    add_ln256_127_fu_7367_p2 = (!m_42_reg_10541_pp0_iter4_reg.read().is_01() || !m_51_reg_10696.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_42_reg_10541_pp0_iter4_reg.read()) + sc_biguint<32>(m_51_reg_10696.read()));
}

void sha256_transform::thread_add_ln256_129_fu_7345_p2() {
    add_ln256_129_fu_7345_p2 = (!tmp_1_42_reg_10599_pp0_iter4_reg.read().is_01() || !reg_5689.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_42_reg_10599_pp0_iter4_reg.read()) + sc_biguint<32>(reg_5689.read()));
}

void sha256_transform::thread_add_ln256_12_fu_6293_p2() {
    add_ln256_12_fu_6293_p2 = (!tmp_1_4_reg_9723.read().is_01() || !grp_SIG1_fu_5262_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_4_reg_9723.read()) + sc_biguint<32>(grp_SIG1_fu_5262_ap_return.read()));
}

void sha256_transform::thread_add_ln256_130_fu_7376_p2() {
    add_ln256_130_fu_7376_p2 = (!m_43_reg_10550_pp0_iter4_reg.read().is_01() || !m_52_reg_10724.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_43_reg_10550_pp0_iter4_reg.read()) + sc_biguint<32>(m_52_reg_10724.read()));
}

void sha256_transform::thread_add_ln256_132_fu_7396_p2() {
    add_ln256_132_fu_7396_p2 = (!tmp_1_43_reg_10604_pp0_iter4_reg.read().is_01() || !grp_SIG1_fu_5290_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_43_reg_10604_pp0_iter4_reg.read()) + sc_biguint<32>(grp_SIG1_fu_5290_ap_return.read()));
}

void sha256_transform::thread_add_ln256_133_fu_7435_p2() {
    add_ln256_133_fu_7435_p2 = (!m_44_reg_10585_pp0_iter4_reg.read().is_01() || !m_53_reg_10730.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_44_reg_10585_pp0_iter4_reg.read()) + sc_biguint<32>(m_53_reg_10730.read()));
}

void sha256_transform::thread_add_ln256_135_fu_7401_p2() {
    add_ln256_135_fu_7401_p2 = (!tmp_1_44_reg_10647_pp0_iter5_reg.read().is_01() || !grp_SIG1_fu_5297_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_44_reg_10647_pp0_iter5_reg.read()) + sc_biguint<32>(grp_SIG1_fu_5297_ap_return.read()));
}

void sha256_transform::thread_add_ln256_136_fu_7467_p2() {
    add_ln256_136_fu_7467_p2 = (!m_45_reg_10592_pp0_iter4_reg.read().is_01() || !m_54_reg_10741.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_45_reg_10592_pp0_iter4_reg.read()) + sc_biguint<32>(m_54_reg_10741.read()));
}

void sha256_transform::thread_add_ln256_13_fu_6314_p2() {
    add_ln256_13_fu_6314_p2 = (!m_4_reg_9666_pp0_iter1_reg.read().is_01() || !m_13_reg_9940.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_4_reg_9666_pp0_iter1_reg.read()) + sc_biguint<32>(m_13_reg_9940.read()));
}

void sha256_transform::thread_add_ln256_15_fu_6298_p2() {
    add_ln256_15_fu_6298_p2 = (!tmp_1_5_reg_9780.read().is_01() || !grp_SIG1_fu_5269_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_5_reg_9780.read()) + sc_biguint<32>(grp_SIG1_fu_5269_ap_return.read()));
}

void sha256_transform::thread_add_ln256_16_fu_6325_p2() {
    add_ln256_16_fu_6325_p2 = (!m_5_reg_9672_pp0_iter1_reg.read().is_01() || !m_14_reg_10007.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_5_reg_9672_pp0_iter1_reg.read()) + sc_biguint<32>(m_14_reg_10007.read()));
}

void sha256_transform::thread_add_ln256_18_fu_6359_p2() {
    add_ln256_18_fu_6359_p2 = (!tmp_1_6_reg_9785_pp0_iter1_reg.read().is_01() || !reg_5641.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_6_reg_9785_pp0_iter1_reg.read()) + sc_biguint<32>(reg_5641.read()));
}

void sha256_transform::thread_add_ln256_19_fu_6364_p2() {
    add_ln256_19_fu_6364_p2 = (!m_6_reg_9728_pp0_iter1_reg.read().is_01() || !m_15_reg_10014.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_6_reg_9728_pp0_iter1_reg.read()) + sc_biguint<32>(m_15_reg_10014.read()));
}

void sha256_transform::thread_add_ln256_1_fu_6201_p2() {
    add_ln256_1_fu_6201_p2 = (!m_0_reg_9520.read().is_01() || !m_9_reg_9802.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_0_reg_9520.read()) + sc_biguint<32>(m_9_reg_9802.read()));
}

void sha256_transform::thread_add_ln256_21_fu_6374_p2() {
    add_ln256_21_fu_6374_p2 = (!tmp_1_7_reg_9849.read().is_01() || !reg_5645.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_7_reg_9849.read()) + sc_biguint<32>(reg_5645.read()));
}

void sha256_transform::thread_add_ln256_22_fu_6379_p2() {
    add_ln256_22_fu_6379_p2 = (!m_7_reg_9734_pp0_iter1_reg.read().is_01() || !m_16_reg_10041.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_7_reg_9734_pp0_iter1_reg.read()) + sc_biguint<32>(m_16_reg_10041.read()));
}

void sha256_transform::thread_add_ln256_24_fu_6395_p2() {
    add_ln256_24_fu_6395_p2 = (!tmp_1_8_reg_9854_pp0_iter1_reg.read().is_01() || !grp_SIG1_fu_5262_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_8_reg_9854_pp0_iter1_reg.read()) + sc_biguint<32>(grp_SIG1_fu_5262_ap_return.read()));
}

void sha256_transform::thread_add_ln256_25_fu_6428_p2() {
    add_ln256_25_fu_6428_p2 = (!m_8_reg_9796_pp0_iter1_reg.read().is_01() || !m_17_reg_10048.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_8_reg_9796_pp0_iter1_reg.read()) + sc_biguint<32>(m_17_reg_10048.read()));
}

void sha256_transform::thread_add_ln256_27_fu_6400_p2() {
    add_ln256_27_fu_6400_p2 = (!tmp_1_9_reg_9918.read().is_01() || !grp_SIG1_fu_5269_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_9_reg_9918.read()) + sc_biguint<32>(grp_SIG1_fu_5269_ap_return.read()));
}

void sha256_transform::thread_add_ln256_28_fu_6439_p2() {
    add_ln256_28_fu_6439_p2 = (!m_9_reg_9802_pp0_iter1_reg.read().is_01() || !m_18_reg_10071.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_9_reg_9802_pp0_iter1_reg.read()) + sc_biguint<32>(m_18_reg_10071.read()));
}

void sha256_transform::thread_add_ln256_30_fu_6467_p2() {
    add_ln256_30_fu_6467_p2 = (!tmp_1_s_reg_9923_pp0_iter1_reg.read().is_01() || !reg_5641.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_s_reg_9923_pp0_iter1_reg.read()) + sc_biguint<32>(reg_5641.read()));
}

void sha256_transform::thread_add_ln256_31_fu_6472_p2() {
    add_ln256_31_fu_6472_p2 = (!m_10_reg_9864_pp0_iter1_reg.read().is_01() || !m_19_reg_10080.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_10_reg_9864_pp0_iter1_reg.read()) + sc_biguint<32>(m_19_reg_10080.read()));
}

void sha256_transform::thread_add_ln256_33_fu_6482_p2() {
    add_ln256_33_fu_6482_p2 = (!tmp_1_10_reg_9987_pp0_iter1_reg.read().is_01() || !reg_5645.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_10_reg_9987_pp0_iter1_reg.read()) + sc_biguint<32>(reg_5645.read()));
}

void sha256_transform::thread_add_ln256_34_fu_6487_p2() {
    add_ln256_34_fu_6487_p2 = (!m_11_reg_9871_pp0_iter1_reg.read().is_01() || !m_20_reg_10119.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_11_reg_9871_pp0_iter1_reg.read()) + sc_biguint<32>(m_20_reg_10119.read()));
}

void sha256_transform::thread_add_ln256_36_fu_6508_p2() {
    add_ln256_36_fu_6508_p2 = (!tmp_1_11_reg_9992_pp0_iter1_reg.read().is_01() || !grp_SIG1_fu_5276_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_11_reg_9992_pp0_iter1_reg.read()) + sc_biguint<32>(grp_SIG1_fu_5276_ap_return.read()));
}

void sha256_transform::thread_add_ln256_37_fu_6541_p2() {
    add_ln256_37_fu_6541_p2 = (!m_12_reg_9933_pp0_iter1_reg.read().is_01() || !m_21_reg_10126.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_12_reg_9933_pp0_iter1_reg.read()) + sc_biguint<32>(m_21_reg_10126.read()));
}

void sha256_transform::thread_add_ln256_39_fu_6513_p2() {
    add_ln256_39_fu_6513_p2 = (!tmp_1_12_reg_10031_pp0_iter2_reg.read().is_01() || !grp_SIG1_fu_5283_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_12_reg_10031_pp0_iter2_reg.read()) + sc_biguint<32>(grp_SIG1_fu_5283_ap_return.read()));
}

void sha256_transform::thread_add_ln256_3_fu_6190_p2() {
    add_ln256_3_fu_6190_p2 = (!tmp_1_1_reg_9646.read().is_01() || !grp_SIG1_fu_5269_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_1_reg_9646.read()) + sc_biguint<32>(grp_SIG1_fu_5269_ap_return.read()));
}

void sha256_transform::thread_add_ln256_40_fu_6552_p2() {
    add_ln256_40_fu_6552_p2 = (!m_13_reg_9940_pp0_iter1_reg.read().is_01() || !m_22_reg_10153.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_13_reg_9940_pp0_iter1_reg.read()) + sc_biguint<32>(m_22_reg_10153.read()));
}

void sha256_transform::thread_add_ln256_42_fu_6569_p2() {
    add_ln256_42_fu_6569_p2 = (!tmp_1_13_reg_10036_pp0_iter2_reg.read().is_01() || !reg_5641.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_13_reg_10036_pp0_iter2_reg.read()) + sc_biguint<32>(reg_5641.read()));
}

void sha256_transform::thread_add_ln256_43_fu_6574_p2() {
    add_ln256_43_fu_6574_p2 = (!m_14_reg_10007_pp0_iter2_reg.read().is_01() || !m_23_reg_10162.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_14_reg_10007_pp0_iter2_reg.read()) + sc_biguint<32>(m_23_reg_10162.read()));
}

void sha256_transform::thread_add_ln256_45_fu_6584_p2() {
    add_ln256_45_fu_6584_p2 = (!tmp_1_14_reg_10055_pp0_iter2_reg.read().is_01() || !reg_5645.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_14_reg_10055_pp0_iter2_reg.read()) + sc_biguint<32>(reg_5645.read()));
}

void sha256_transform::thread_add_ln256_46_fu_6589_p2() {
    add_ln256_46_fu_6589_p2 = (!m_15_reg_10014_pp0_iter2_reg.read().is_01() || !m_24_reg_10197.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_15_reg_10014_pp0_iter2_reg.read()) + sc_biguint<32>(m_24_reg_10197.read()));
}

void sha256_transform::thread_add_ln256_48_fu_6622_p2() {
    add_ln256_48_fu_6622_p2 = (!tmp_1_15_reg_10060_pp0_iter2_reg.read().is_01() || !grp_SIG1_fu_5276_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_15_reg_10060_pp0_iter2_reg.read()) + sc_biguint<32>(grp_SIG1_fu_5276_ap_return.read()));
}

void sha256_transform::thread_add_ln256_49_fu_6649_p2() {
    add_ln256_49_fu_6649_p2 = (!m_16_reg_10041_pp0_iter2_reg.read().is_01() || !m_25_reg_10204.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_16_reg_10041_pp0_iter2_reg.read()) + sc_biguint<32>(m_25_reg_10204.read()));
}

void sha256_transform::thread_add_ln256_4_fu_6212_p2() {
    add_ln256_4_fu_6212_p2 = (!m_1_reg_9525.read().is_01() || !m_10_reg_9864.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_1_reg_9525.read()) + sc_biguint<32>(m_10_reg_9864.read()));
}

void sha256_transform::thread_add_ln256_51_fu_6627_p2() {
    add_ln256_51_fu_6627_p2 = (!tmp_1_16_reg_10104_pp0_iter2_reg.read().is_01() || !grp_SIG1_fu_5283_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_16_reg_10104_pp0_iter2_reg.read()) + sc_biguint<32>(grp_SIG1_fu_5283_ap_return.read()));
}

void sha256_transform::thread_add_ln256_52_fu_6660_p2() {
    add_ln256_52_fu_6660_p2 = (!m_17_reg_10048_pp0_iter2_reg.read().is_01() || !m_26_reg_10226.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_17_reg_10048_pp0_iter2_reg.read()) + sc_biguint<32>(m_26_reg_10226.read()));
}

void sha256_transform::thread_add_ln256_54_fu_6682_p2() {
    add_ln256_54_fu_6682_p2 = (!tmp_1_17_reg_10109_pp0_iter2_reg.read().is_01() || !reg_5641.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_17_reg_10109_pp0_iter2_reg.read()) + sc_biguint<32>(reg_5641.read()));
}

void sha256_transform::thread_add_ln256_55_fu_6687_p2() {
    add_ln256_55_fu_6687_p2 = (!m_18_reg_10071_pp0_iter2_reg.read().is_01() || !m_27_reg_10235.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_18_reg_10071_pp0_iter2_reg.read()) + sc_biguint<32>(m_27_reg_10235.read()));
}

void sha256_transform::thread_add_ln256_57_fu_6697_p2() {
    add_ln256_57_fu_6697_p2 = (!tmp_1_18_reg_10133_pp0_iter2_reg.read().is_01() || !reg_5645.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_18_reg_10133_pp0_iter2_reg.read()) + sc_biguint<32>(reg_5645.read()));
}

void sha256_transform::thread_add_ln256_58_fu_6702_p2() {
    add_ln256_58_fu_6702_p2 = (!m_19_reg_10080_pp0_iter2_reg.read().is_01() || !m_28_reg_10279.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_19_reg_10080_pp0_iter2_reg.read()) + sc_biguint<32>(m_28_reg_10279.read()));
}

void sha256_transform::thread_add_ln256_60_fu_6735_p2() {
    add_ln256_60_fu_6735_p2 = (!tmp_1_19_reg_10138_pp0_iter2_reg.read().is_01() || !grp_SIG1_fu_5276_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_19_reg_10138_pp0_iter2_reg.read()) + sc_biguint<32>(grp_SIG1_fu_5276_ap_return.read()));
}

void sha256_transform::thread_add_ln256_61_fu_6751_p2() {
    add_ln256_61_fu_6751_p2 = (!m_20_reg_10119_pp0_iter2_reg.read().is_01() || !m_29_reg_10286.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_20_reg_10119_pp0_iter2_reg.read()) + sc_biguint<32>(m_29_reg_10286.read()));
}

void sha256_transform::thread_add_ln256_63_fu_6740_p2() {
    add_ln256_63_fu_6740_p2 = (!tmp_1_20_reg_10181_pp0_iter2_reg.read().is_01() || !grp_SIG1_fu_5283_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_20_reg_10181_pp0_iter2_reg.read()) + sc_biguint<32>(grp_SIG1_fu_5283_ap_return.read()));
}

void sha256_transform::thread_add_ln256_64_fu_6762_p2() {
    add_ln256_64_fu_6762_p2 = (!m_21_reg_10126_pp0_iter2_reg.read().is_01() || !m_30_reg_10303.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_21_reg_10126_pp0_iter2_reg.read()) + sc_biguint<32>(m_30_reg_10303.read()));
}

void sha256_transform::thread_add_ln256_66_fu_6796_p2() {
    add_ln256_66_fu_6796_p2 = (!tmp_1_21_reg_10186_pp0_iter2_reg.read().is_01() || !reg_5669.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_21_reg_10186_pp0_iter2_reg.read()) + sc_biguint<32>(reg_5669.read()));
}

void sha256_transform::thread_add_ln256_67_fu_6801_p2() {
    add_ln256_67_fu_6801_p2 = (!m_22_reg_10153_pp0_iter2_reg.read().is_01() || !m_31_reg_10312.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_22_reg_10153_pp0_iter2_reg.read()) + sc_biguint<32>(m_31_reg_10312.read()));
}

void sha256_transform::thread_add_ln256_69_fu_6811_p2() {
    add_ln256_69_fu_6811_p2 = (!tmp_1_22_reg_10211_pp0_iter2_reg.read().is_01() || !reg_5673.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_22_reg_10211_pp0_iter2_reg.read()) + sc_biguint<32>(reg_5673.read()));
}

void sha256_transform::thread_add_ln256_6_fu_6246_p2() {
    add_ln256_6_fu_6246_p2 = (!tmp_1_2_reg_9651.read().is_01() || !reg_5641.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_2_reg_9651.read()) + sc_biguint<32>(reg_5641.read()));
}

void sha256_transform::thread_add_ln256_70_fu_6816_p2() {
    add_ln256_70_fu_6816_p2 = (!m_23_reg_10162_pp0_iter2_reg.read().is_01() || !m_32_reg_10352.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_23_reg_10162_pp0_iter2_reg.read()) + sc_biguint<32>(m_32_reg_10352.read()));
}

void sha256_transform::thread_add_ln256_72_fu_6843_p2() {
    add_ln256_72_fu_6843_p2 = (!tmp_1_23_reg_10216_pp0_iter2_reg.read().is_01() || !grp_SIG1_fu_5276_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_23_reg_10216_pp0_iter2_reg.read()) + sc_biguint<32>(grp_SIG1_fu_5276_ap_return.read()));
}

void sha256_transform::thread_add_ln256_73_fu_6864_p2() {
    add_ln256_73_fu_6864_p2 = (!m_24_reg_10197_pp0_iter2_reg.read().is_01() || !m_33_reg_10359.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_24_reg_10197_pp0_iter2_reg.read()) + sc_biguint<32>(m_33_reg_10359.read()));
}

void sha256_transform::thread_add_ln256_75_fu_6848_p2() {
    add_ln256_75_fu_6848_p2 = (!tmp_1_24_reg_10259_pp0_iter3_reg.read().is_01() || !grp_SIG1_fu_5283_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_24_reg_10259_pp0_iter3_reg.read()) + sc_biguint<32>(grp_SIG1_fu_5283_ap_return.read()));
}

void sha256_transform::thread_add_ln256_76_fu_6875_p2() {
    add_ln256_76_fu_6875_p2 = (!m_25_reg_10204_pp0_iter2_reg.read().is_01() || !m_34_reg_10381.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_25_reg_10204_pp0_iter2_reg.read()) + sc_biguint<32>(m_34_reg_10381.read()));
}

void sha256_transform::thread_add_ln256_78_fu_6909_p2() {
    add_ln256_78_fu_6909_p2 = (!tmp_1_25_reg_10264_pp0_iter3_reg.read().is_01() || !reg_5669.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_25_reg_10264_pp0_iter3_reg.read()) + sc_biguint<32>(reg_5669.read()));
}

void sha256_transform::thread_add_ln256_79_fu_6914_p2() {
    add_ln256_79_fu_6914_p2 = (!m_26_reg_10226_pp0_iter3_reg.read().is_01() || !m_35_reg_10390.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_26_reg_10226_pp0_iter3_reg.read()) + sc_biguint<32>(m_35_reg_10390.read()));
}

void sha256_transform::thread_add_ln256_7_fu_6251_p2() {
    add_ln256_7_fu_6251_p2 = (!m_2_reg_9594.read().is_01() || !m_11_reg_9871.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_2_reg_9594.read()) + sc_biguint<32>(m_11_reg_9871.read()));
}

void sha256_transform::thread_add_ln256_81_fu_6924_p2() {
    add_ln256_81_fu_6924_p2 = (!tmp_1_26_reg_10293_pp0_iter3_reg.read().is_01() || !reg_5673.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_26_reg_10293_pp0_iter3_reg.read()) + sc_biguint<32>(reg_5673.read()));
}

void sha256_transform::thread_add_ln256_82_fu_6929_p2() {
    add_ln256_82_fu_6929_p2 = (!m_27_reg_10235_pp0_iter3_reg.read().is_01() || !m_36_reg_10429.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_27_reg_10235_pp0_iter3_reg.read()) + sc_biguint<32>(m_36_reg_10429.read()));
}

void sha256_transform::thread_add_ln256_84_fu_6945_p2() {
    add_ln256_84_fu_6945_p2 = (!tmp_1_27_reg_10298_pp0_iter3_reg.read().is_01() || !grp_SIG1_fu_5276_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_27_reg_10298_pp0_iter3_reg.read()) + sc_biguint<32>(grp_SIG1_fu_5276_ap_return.read()));
}

void sha256_transform::thread_add_ln256_85_fu_6978_p2() {
    add_ln256_85_fu_6978_p2 = (!m_28_reg_10279_pp0_iter3_reg.read().is_01() || !m_37_reg_10436.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_28_reg_10279_pp0_iter3_reg.read()) + sc_biguint<32>(m_37_reg_10436.read()));
}

void sha256_transform::thread_add_ln256_87_fu_6950_p2() {
    add_ln256_87_fu_6950_p2 = (!tmp_1_28_reg_10337_pp0_iter3_reg.read().is_01() || !grp_SIG1_fu_5283_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_28_reg_10337_pp0_iter3_reg.read()) + sc_biguint<32>(grp_SIG1_fu_5283_ap_return.read()));
}

void sha256_transform::thread_add_ln256_88_fu_6989_p2() {
    add_ln256_88_fu_6989_p2 = (!m_29_reg_10286_pp0_iter3_reg.read().is_01() || !m_38_reg_10459.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_29_reg_10286_pp0_iter3_reg.read()) + sc_biguint<32>(m_38_reg_10459.read()));
}

void sha256_transform::thread_add_ln256_90_fu_7017_p2() {
    add_ln256_90_fu_7017_p2 = (!tmp_1_29_reg_10342_pp0_iter3_reg.read().is_01() || !reg_5669.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_29_reg_10342_pp0_iter3_reg.read()) + sc_biguint<32>(reg_5669.read()));
}

void sha256_transform::thread_add_ln256_91_fu_7022_p2() {
    add_ln256_91_fu_7022_p2 = (!m_30_reg_10303_pp0_iter3_reg.read().is_01() || !m_39_reg_10468.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_30_reg_10303_pp0_iter3_reg.read()) + sc_biguint<32>(m_39_reg_10468.read()));
}

void sha256_transform::thread_add_ln256_93_fu_7032_p2() {
    add_ln256_93_fu_7032_p2 = (!tmp_1_30_reg_10366_pp0_iter3_reg.read().is_01() || !reg_5673.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_30_reg_10366_pp0_iter3_reg.read()) + sc_biguint<32>(reg_5673.read()));
}

void sha256_transform::thread_add_ln256_94_fu_7037_p2() {
    add_ln256_94_fu_7037_p2 = (!m_31_reg_10312_pp0_iter3_reg.read().is_01() || !m_40_reg_10507.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_31_reg_10312_pp0_iter3_reg.read()) + sc_biguint<32>(m_40_reg_10507.read()));
}

void sha256_transform::thread_add_ln256_96_fu_7058_p2() {
    add_ln256_96_fu_7058_p2 = (!tmp_1_31_reg_10371_pp0_iter3_reg.read().is_01() || !grp_SIG1_fu_5290_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_31_reg_10371_pp0_iter3_reg.read()) + sc_biguint<32>(grp_SIG1_fu_5290_ap_return.read()));
}

void sha256_transform::thread_add_ln256_97_fu_7091_p2() {
    add_ln256_97_fu_7091_p2 = (!m_32_reg_10352_pp0_iter3_reg.read().is_01() || !m_41_reg_10514.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_32_reg_10352_pp0_iter3_reg.read()) + sc_biguint<32>(m_41_reg_10514.read()));
}

void sha256_transform::thread_add_ln256_99_fu_7063_p2() {
    add_ln256_99_fu_7063_p2 = (!tmp_1_32_reg_10419_pp0_iter3_reg.read().is_01() || !grp_SIG1_fu_5297_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_32_reg_10419_pp0_iter3_reg.read()) + sc_biguint<32>(grp_SIG1_fu_5297_ap_return.read()));
}

void sha256_transform::thread_add_ln256_9_fu_6261_p2() {
    add_ln256_9_fu_6261_p2 = (!tmp_1_3_reg_9718.read().is_01() || !reg_5645.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_3_reg_9718.read()) + sc_biguint<32>(reg_5645.read()));
}

void sha256_transform::thread_add_ln256_fu_6185_p2() {
    add_ln256_fu_6185_p2 = (!tmp_1_reg_9571.read().is_01() || !grp_SIG1_fu_5262_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_reg_9571.read()) + sc_biguint<32>(grp_SIG1_fu_5262_ap_return.read()));
}

void sha256_transform::thread_add_ln273_100_fu_7789_p2() {
    add_ln273_100_fu_7789_p2 = (!reg_5657.read().is_01() || !ap_const_lv32_A831C66D.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5657.read()) + sc_bigint<32>(ap_const_lv32_A831C66D));
}

void sha256_transform::thread_add_ln273_101_fu_7795_p2() {
    add_ln273_101_fu_7795_p2 = (!reg_5705.read().is_01() || !m_25_reg_10204_pp0_iter7_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5705.read()) + sc_biguint<32>(m_25_reg_10204_pp0_iter7_reg.read()));
}

void sha256_transform::thread_add_ln273_102_fu_7800_p2() {
    add_ln273_102_fu_7800_p2 = (!add_ln273_101_fu_7795_p2.read().is_01() || !f_1_22_reg_2203.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_101_fu_7795_p2.read()) + sc_biguint<32>(f_1_22_reg_2203.read()));
}

void sha256_transform::thread_add_ln273_103_fu_7806_p2() {
    add_ln273_103_fu_7806_p2 = (!add_ln273_102_fu_7800_p2.read().is_01() || !add_ln273_100_fu_7789_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_102_fu_7800_p2.read()) + sc_biguint<32>(add_ln273_100_fu_7789_p2.read()));
}

void sha256_transform::thread_add_ln273_104_fu_7840_p2() {
    add_ln273_104_fu_7840_p2 = (!reg_5713.read().is_01() || !ap_const_lv32_B00327C8.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5713.read()) + sc_bigint<32>(ap_const_lv32_B00327C8));
}

void sha256_transform::thread_add_ln273_105_fu_7829_p2() {
    add_ln273_105_fu_7829_p2 = (!grp_EP1_fu_5062_ap_return.read().is_01() || !m_26_reg_10226_pp0_iter8_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_5062_ap_return.read()) + sc_biguint<32>(m_26_reg_10226_pp0_iter8_reg.read()));
}

void sha256_transform::thread_add_ln273_106_fu_7834_p2() {
    add_ln273_106_fu_7834_p2 = (!add_ln273_105_fu_7829_p2.read().is_01() || !f_1_23_reg_2302.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_105_fu_7829_p2.read()) + sc_biguint<32>(f_1_23_reg_2302.read()));
}

void sha256_transform::thread_add_ln273_107_fu_7846_p2() {
    add_ln273_107_fu_7846_p2 = (!add_ln273_106_reg_10980.read().is_01() || !add_ln273_104_fu_7840_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_106_reg_10980.read()) + sc_biguint<32>(add_ln273_104_fu_7840_p2.read()));
}

void sha256_transform::thread_add_ln273_108_fu_7869_p2() {
    add_ln273_108_fu_7869_p2 = (!reg_5657.read().is_01() || !ap_const_lv32_BF597FC7.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5657.read()) + sc_bigint<32>(ap_const_lv32_BF597FC7));
}

void sha256_transform::thread_add_ln273_109_fu_7875_p2() {
    add_ln273_109_fu_7875_p2 = (!reg_5705.read().is_01() || !m_27_reg_10235_pp0_iter8_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5705.read()) + sc_biguint<32>(m_27_reg_10235_pp0_iter8_reg.read()));
}

void sha256_transform::thread_add_ln273_10_fu_6103_p2() {
    add_ln273_10_fu_6103_p2 = (!add_ln273_9_fu_6098_p2.read().is_01() || !ctx_state_5_read_1_reg_9443.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_9_fu_6098_p2.read()) + sc_biguint<32>(ctx_state_5_read_1_reg_9443.read()));
}

void sha256_transform::thread_add_ln273_110_fu_7880_p2() {
    add_ln273_110_fu_7880_p2 = (!add_ln273_109_fu_7875_p2.read().is_01() || !f_1_24_reg_2325.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_109_fu_7875_p2.read()) + sc_biguint<32>(f_1_24_reg_2325.read()));
}

void sha256_transform::thread_add_ln273_111_fu_7886_p2() {
    add_ln273_111_fu_7886_p2 = (!add_ln273_110_fu_7880_p2.read().is_01() || !add_ln273_108_fu_7869_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_110_fu_7880_p2.read()) + sc_biguint<32>(add_ln273_108_fu_7869_p2.read()));
}

void sha256_transform::thread_add_ln273_112_fu_7919_p2() {
    add_ln273_112_fu_7919_p2 = (!reg_5713.read().is_01() || !f_1_25_reg_2424.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5713.read()) + sc_biguint<32>(f_1_25_reg_2424.read()));
}

void sha256_transform::thread_add_ln273_113_fu_7908_p2() {
    add_ln273_113_fu_7908_p2 = (!m_28_reg_10279_pp0_iter8_reg.read().is_01() || !ap_const_lv32_C6E00BF3.is_01())? sc_lv<32>(): (sc_biguint<32>(m_28_reg_10279_pp0_iter8_reg.read()) + sc_bigint<32>(ap_const_lv32_C6E00BF3));
}

void sha256_transform::thread_add_ln273_114_fu_7913_p2() {
    add_ln273_114_fu_7913_p2 = (!add_ln273_113_fu_7908_p2.read().is_01() || !grp_EP1_fu_5062_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_113_fu_7908_p2.read()) + sc_biguint<32>(grp_EP1_fu_5062_ap_return.read()));
}

void sha256_transform::thread_add_ln273_115_fu_7925_p2() {
    add_ln273_115_fu_7925_p2 = (!add_ln273_114_reg_11011.read().is_01() || !add_ln273_112_fu_7919_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_114_reg_11011.read()) + sc_biguint<32>(add_ln273_112_fu_7919_p2.read()));
}

void sha256_transform::thread_add_ln273_116_fu_7948_p2() {
    add_ln273_116_fu_7948_p2 = (!reg_5657.read().is_01() || !f_1_26_reg_2447.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5657.read()) + sc_biguint<32>(f_1_26_reg_2447.read()));
}

void sha256_transform::thread_add_ln273_117_fu_7954_p2() {
    add_ln273_117_fu_7954_p2 = (!m_29_reg_10286_pp0_iter8_reg.read().is_01() || !ap_const_lv32_D5A79147.is_01())? sc_lv<32>(): (sc_biguint<32>(m_29_reg_10286_pp0_iter8_reg.read()) + sc_bigint<32>(ap_const_lv32_D5A79147));
}

void sha256_transform::thread_add_ln273_118_fu_7959_p2() {
    add_ln273_118_fu_7959_p2 = (!add_ln273_117_fu_7954_p2.read().is_01() || !reg_5705.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_117_fu_7954_p2.read()) + sc_biguint<32>(reg_5705.read()));
}

void sha256_transform::thread_add_ln273_119_fu_7965_p2() {
    add_ln273_119_fu_7965_p2 = (!add_ln273_118_fu_7959_p2.read().is_01() || !add_ln273_116_fu_7948_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_118_fu_7959_p2.read()) + sc_biguint<32>(add_ln273_116_fu_7948_p2.read()));
}

void sha256_transform::thread_add_ln273_11_fu_6140_p2() {
    add_ln273_11_fu_6140_p2 = (!add_ln273_10_reg_9928.read().is_01() || !add_ln273_8_fu_6134_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_10_reg_9928.read()) + sc_biguint<32>(add_ln273_8_fu_6134_p2.read()));
}

void sha256_transform::thread_add_ln273_120_fu_7999_p2() {
    add_ln273_120_fu_7999_p2 = (!reg_5713.read().is_01() || !f_1_27_reg_2546.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5713.read()) + sc_biguint<32>(f_1_27_reg_2546.read()));
}

void sha256_transform::thread_add_ln273_121_fu_7988_p2() {
    add_ln273_121_fu_7988_p2 = (!m_30_reg_10303_pp0_iter9_reg.read().is_01() || !ap_const_lv32_6CA6351.is_01())? sc_lv<32>(): (sc_biguint<32>(m_30_reg_10303_pp0_iter9_reg.read()) + sc_biguint<32>(ap_const_lv32_6CA6351));
}

void sha256_transform::thread_add_ln273_122_fu_7993_p2() {
    add_ln273_122_fu_7993_p2 = (!add_ln273_121_fu_7988_p2.read().is_01() || !grp_EP1_fu_5062_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_121_fu_7988_p2.read()) + sc_biguint<32>(grp_EP1_fu_5062_ap_return.read()));
}

void sha256_transform::thread_add_ln273_123_fu_8005_p2() {
    add_ln273_123_fu_8005_p2 = (!add_ln273_122_reg_11037.read().is_01() || !add_ln273_120_fu_7999_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_122_reg_11037.read()) + sc_biguint<32>(add_ln273_120_fu_7999_p2.read()));
}

void sha256_transform::thread_add_ln273_124_fu_8028_p2() {
    add_ln273_124_fu_8028_p2 = (!reg_5713.read().is_01() || !f_1_28_reg_2569.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5713.read()) + sc_biguint<32>(f_1_28_reg_2569.read()));
}

void sha256_transform::thread_add_ln273_125_fu_8034_p2() {
    add_ln273_125_fu_8034_p2 = (!m_31_reg_10312_pp0_iter9_reg.read().is_01() || !ap_const_lv32_14292967.is_01())? sc_lv<32>(): (sc_biguint<32>(m_31_reg_10312_pp0_iter9_reg.read()) + sc_biguint<32>(ap_const_lv32_14292967));
}

void sha256_transform::thread_add_ln273_126_fu_8039_p2() {
    add_ln273_126_fu_8039_p2 = (!add_ln273_125_fu_8034_p2.read().is_01() || !reg_5709.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_125_fu_8034_p2.read()) + sc_biguint<32>(reg_5709.read()));
}

void sha256_transform::thread_add_ln273_127_fu_8045_p2() {
    add_ln273_127_fu_8045_p2 = (!add_ln273_126_fu_8039_p2.read().is_01() || !add_ln273_124_fu_8028_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_126_fu_8039_p2.read()) + sc_biguint<32>(add_ln273_124_fu_8028_p2.read()));
}

void sha256_transform::thread_add_ln273_128_fu_8079_p2() {
    add_ln273_128_fu_8079_p2 = (!reg_5713.read().is_01() || !f_1_29_reg_2668.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5713.read()) + sc_biguint<32>(f_1_29_reg_2668.read()));
}

void sha256_transform::thread_add_ln273_129_fu_8068_p2() {
    add_ln273_129_fu_8068_p2 = (!m_32_reg_10352_pp0_iter9_reg.read().is_01() || !ap_const_lv32_27B70A85.is_01())? sc_lv<32>(): (sc_biguint<32>(m_32_reg_10352_pp0_iter9_reg.read()) + sc_biguint<32>(ap_const_lv32_27B70A85));
}

void sha256_transform::thread_add_ln273_12_fu_6223_p2() {
    add_ln273_12_fu_6223_p2 = (!reg_5629.read().is_01() || !f_1_0_reg_868.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5629.read()) + sc_biguint<32>(f_1_0_reg_868.read()));
}

void sha256_transform::thread_add_ln273_130_fu_8073_p2() {
    add_ln273_130_fu_8073_p2 = (!add_ln273_129_fu_8068_p2.read().is_01() || !grp_EP1_fu_5062_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_129_fu_8068_p2.read()) + sc_biguint<32>(grp_EP1_fu_5062_ap_return.read()));
}

void sha256_transform::thread_add_ln273_131_fu_8085_p2() {
    add_ln273_131_fu_8085_p2 = (!add_ln273_130_reg_11063.read().is_01() || !add_ln273_128_fu_8079_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_130_reg_11063.read()) + sc_biguint<32>(add_ln273_128_fu_8079_p2.read()));
}

void sha256_transform::thread_add_ln273_132_fu_8108_p2() {
    add_ln273_132_fu_8108_p2 = (!reg_5733.read().is_01() || !f_1_30_reg_2691.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5733.read()) + sc_biguint<32>(f_1_30_reg_2691.read()));
}

void sha256_transform::thread_add_ln273_133_fu_8114_p2() {
    add_ln273_133_fu_8114_p2 = (!m_33_reg_10359_pp0_iter9_reg.read().is_01() || !ap_const_lv32_2E1B2138.is_01())? sc_lv<32>(): (sc_biguint<32>(m_33_reg_10359_pp0_iter9_reg.read()) + sc_biguint<32>(ap_const_lv32_2E1B2138));
}

void sha256_transform::thread_add_ln273_134_fu_8119_p2() {
    add_ln273_134_fu_8119_p2 = (!add_ln273_133_fu_8114_p2.read().is_01() || !reg_5761.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_133_fu_8114_p2.read()) + sc_biguint<32>(reg_5761.read()));
}

void sha256_transform::thread_add_ln273_135_fu_8125_p2() {
    add_ln273_135_fu_8125_p2 = (!add_ln273_134_fu_8119_p2.read().is_01() || !add_ln273_132_fu_8108_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_134_fu_8119_p2.read()) + sc_biguint<32>(add_ln273_132_fu_8108_p2.read()));
}

void sha256_transform::thread_add_ln273_136_fu_8159_p2() {
    add_ln273_136_fu_8159_p2 = (!reg_5733.read().is_01() || !f_1_31_reg_2790.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5733.read()) + sc_biguint<32>(f_1_31_reg_2790.read()));
}

void sha256_transform::thread_add_ln273_137_fu_8148_p2() {
    add_ln273_137_fu_8148_p2 = (!m_34_reg_10381_pp0_iter9_reg.read().is_01() || !ap_const_lv32_4D2C6DFC.is_01())? sc_lv<32>(): (sc_biguint<32>(m_34_reg_10381_pp0_iter9_reg.read()) + sc_biguint<32>(ap_const_lv32_4D2C6DFC));
}

void sha256_transform::thread_add_ln273_138_fu_8153_p2() {
    add_ln273_138_fu_8153_p2 = (!add_ln273_137_fu_8148_p2.read().is_01() || !grp_EP1_fu_5072_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_137_fu_8148_p2.read()) + sc_biguint<32>(grp_EP1_fu_5072_ap_return.read()));
}

void sha256_transform::thread_add_ln273_139_fu_8165_p2() {
    add_ln273_139_fu_8165_p2 = (!add_ln273_138_reg_11089.read().is_01() || !add_ln273_136_fu_8159_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_138_reg_11089.read()) + sc_biguint<32>(add_ln273_136_fu_8159_p2.read()));
}

void sha256_transform::thread_add_ln273_13_fu_6229_p2() {
    add_ln273_13_fu_6229_p2 = (!m_3_reg_9600.read().is_01() || !ap_const_lv32_E9B5DBA5.is_01())? sc_lv<32>(): (sc_biguint<32>(m_3_reg_9600.read()) + sc_bigint<32>(ap_const_lv32_E9B5DBA5));
}

void sha256_transform::thread_add_ln273_140_fu_8188_p2() {
    add_ln273_140_fu_8188_p2 = (!reg_5769.read().is_01() || !f_1_32_reg_2813.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5769.read()) + sc_biguint<32>(f_1_32_reg_2813.read()));
}

void sha256_transform::thread_add_ln273_141_fu_8194_p2() {
    add_ln273_141_fu_8194_p2 = (!m_35_reg_10390_pp0_iter10_reg.read().is_01() || !ap_const_lv32_53380D13.is_01())? sc_lv<32>(): (sc_biguint<32>(m_35_reg_10390_pp0_iter10_reg.read()) + sc_biguint<32>(ap_const_lv32_53380D13));
}

void sha256_transform::thread_add_ln273_142_fu_8199_p2() {
    add_ln273_142_fu_8199_p2 = (!add_ln273_141_fu_8194_p2.read().is_01() || !reg_5765.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_141_fu_8194_p2.read()) + sc_biguint<32>(reg_5765.read()));
}

void sha256_transform::thread_add_ln273_143_fu_8205_p2() {
    add_ln273_143_fu_8205_p2 = (!add_ln273_142_fu_8199_p2.read().is_01() || !add_ln273_140_fu_8188_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_142_fu_8199_p2.read()) + sc_biguint<32>(add_ln273_140_fu_8188_p2.read()));
}

void sha256_transform::thread_add_ln273_144_fu_8239_p2() {
    add_ln273_144_fu_8239_p2 = (!reg_5769.read().is_01() || !f_1_33_reg_2912.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5769.read()) + sc_biguint<32>(f_1_33_reg_2912.read()));
}

void sha256_transform::thread_add_ln273_145_fu_8228_p2() {
    add_ln273_145_fu_8228_p2 = (!m_36_reg_10429_pp0_iter11_reg.read().is_01() || !ap_const_lv32_650A7354.is_01())? sc_lv<32>(): (sc_biguint<32>(m_36_reg_10429_pp0_iter11_reg.read()) + sc_biguint<32>(ap_const_lv32_650A7354));
}

void sha256_transform::thread_add_ln273_146_fu_8233_p2() {
    add_ln273_146_fu_8233_p2 = (!add_ln273_145_fu_8228_p2.read().is_01() || !grp_EP1_fu_5092_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_145_fu_8228_p2.read()) + sc_biguint<32>(grp_EP1_fu_5092_ap_return.read()));
}

void sha256_transform::thread_add_ln273_147_fu_8245_p2() {
    add_ln273_147_fu_8245_p2 = (!add_ln273_146_reg_11115.read().is_01() || !add_ln273_144_fu_8239_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_146_reg_11115.read()) + sc_biguint<32>(add_ln273_144_fu_8239_p2.read()));
}

void sha256_transform::thread_add_ln273_148_fu_8268_p2() {
    add_ln273_148_fu_8268_p2 = (!reg_5733.read().is_01() || !f_1_34_reg_2935.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5733.read()) + sc_biguint<32>(f_1_34_reg_2935.read()));
}

void sha256_transform::thread_add_ln273_149_fu_8274_p2() {
    add_ln273_149_fu_8274_p2 = (!m_37_reg_10436_pp0_iter11_reg.read().is_01() || !ap_const_lv32_766A0ABB.is_01())? sc_lv<32>(): (sc_biguint<32>(m_37_reg_10436_pp0_iter11_reg.read()) + sc_biguint<32>(ap_const_lv32_766A0ABB));
}

void sha256_transform::thread_add_ln273_14_fu_6234_p2() {
    add_ln273_14_fu_6234_p2 = (!add_ln273_13_fu_6229_p2.read().is_01() || !reg_5625.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_13_fu_6229_p2.read()) + sc_biguint<32>(reg_5625.read()));
}

void sha256_transform::thread_add_ln273_150_fu_8279_p2() {
    add_ln273_150_fu_8279_p2 = (!add_ln273_149_fu_8274_p2.read().is_01() || !reg_5761.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_149_fu_8274_p2.read()) + sc_biguint<32>(reg_5761.read()));
}

void sha256_transform::thread_add_ln273_151_fu_8285_p2() {
    add_ln273_151_fu_8285_p2 = (!add_ln273_150_fu_8279_p2.read().is_01() || !add_ln273_148_fu_8268_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_150_fu_8279_p2.read()) + sc_biguint<32>(add_ln273_148_fu_8268_p2.read()));
}

void sha256_transform::thread_add_ln273_152_fu_8319_p2() {
    add_ln273_152_fu_8319_p2 = (!reg_5789.read().is_01() || !ap_const_lv32_81C2C92E.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5789.read()) + sc_bigint<32>(ap_const_lv32_81C2C92E));
}

void sha256_transform::thread_add_ln273_153_fu_8308_p2() {
    add_ln273_153_fu_8308_p2 = (!grp_EP1_fu_5102_ap_return.read().is_01() || !m_38_reg_10459_pp0_iter11_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_5102_ap_return.read()) + sc_biguint<32>(m_38_reg_10459_pp0_iter11_reg.read()));
}

void sha256_transform::thread_add_ln273_154_fu_8313_p2() {
    add_ln273_154_fu_8313_p2 = (!add_ln273_153_fu_8308_p2.read().is_01() || !f_1_35_reg_3034.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_153_fu_8308_p2.read()) + sc_biguint<32>(f_1_35_reg_3034.read()));
}

void sha256_transform::thread_add_ln273_155_fu_8325_p2() {
    add_ln273_155_fu_8325_p2 = (!add_ln273_154_reg_11141.read().is_01() || !add_ln273_152_fu_8319_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_154_reg_11141.read()) + sc_biguint<32>(add_ln273_152_fu_8319_p2.read()));
}

void sha256_transform::thread_add_ln273_156_fu_8348_p2() {
    add_ln273_156_fu_8348_p2 = (!reg_5733.read().is_01() || !ap_const_lv32_92722C85.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5733.read()) + sc_bigint<32>(ap_const_lv32_92722C85));
}

void sha256_transform::thread_add_ln273_157_fu_8354_p2() {
    add_ln273_157_fu_8354_p2 = (!reg_5761.read().is_01() || !m_39_reg_10468_pp0_iter12_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5761.read()) + sc_biguint<32>(m_39_reg_10468_pp0_iter12_reg.read()));
}

void sha256_transform::thread_add_ln273_158_fu_8359_p2() {
    add_ln273_158_fu_8359_p2 = (!add_ln273_157_fu_8354_p2.read().is_01() || !f_1_36_reg_3057.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_157_fu_8354_p2.read()) + sc_biguint<32>(f_1_36_reg_3057.read()));
}

void sha256_transform::thread_add_ln273_159_fu_8365_p2() {
    add_ln273_159_fu_8365_p2 = (!add_ln273_158_fu_8359_p2.read().is_01() || !add_ln273_156_fu_8348_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_158_fu_8359_p2.read()) + sc_biguint<32>(add_ln273_156_fu_8348_p2.read()));
}

void sha256_transform::thread_add_ln273_15_fu_6240_p2() {
    add_ln273_15_fu_6240_p2 = (!add_ln273_14_fu_6234_p2.read().is_01() || !add_ln273_12_fu_6223_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_14_fu_6234_p2.read()) + sc_biguint<32>(add_ln273_12_fu_6223_p2.read()));
}

void sha256_transform::thread_add_ln273_160_fu_8399_p2() {
    add_ln273_160_fu_8399_p2 = (!reg_5769.read().is_01() || !ap_const_lv32_A2BFE8A1.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5769.read()) + sc_bigint<32>(ap_const_lv32_A2BFE8A1));
}

void sha256_transform::thread_add_ln273_161_fu_8388_p2() {
    add_ln273_161_fu_8388_p2 = (!grp_EP1_fu_5092_ap_return.read().is_01() || !m_40_reg_10507_pp0_iter12_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_5092_ap_return.read()) + sc_biguint<32>(m_40_reg_10507_pp0_iter12_reg.read()));
}

void sha256_transform::thread_add_ln273_162_fu_8393_p2() {
    add_ln273_162_fu_8393_p2 = (!add_ln273_161_fu_8388_p2.read().is_01() || !f_1_37_reg_3156.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_161_fu_8388_p2.read()) + sc_biguint<32>(f_1_37_reg_3156.read()));
}

void sha256_transform::thread_add_ln273_163_fu_8405_p2() {
    add_ln273_163_fu_8405_p2 = (!add_ln273_162_reg_11167.read().is_01() || !add_ln273_160_fu_8399_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_162_reg_11167.read()) + sc_biguint<32>(add_ln273_160_fu_8399_p2.read()));
}

void sha256_transform::thread_add_ln273_164_fu_8428_p2() {
    add_ln273_164_fu_8428_p2 = (!reg_5733.read().is_01() || !ap_const_lv32_A81A664B.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5733.read()) + sc_bigint<32>(ap_const_lv32_A81A664B));
}

void sha256_transform::thread_add_ln273_165_fu_8434_p2() {
    add_ln273_165_fu_8434_p2 = (!reg_5761.read().is_01() || !m_41_reg_10514_pp0_iter12_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5761.read()) + sc_biguint<32>(m_41_reg_10514_pp0_iter12_reg.read()));
}

void sha256_transform::thread_add_ln273_166_fu_8439_p2() {
    add_ln273_166_fu_8439_p2 = (!add_ln273_165_fu_8434_p2.read().is_01() || !f_1_38_reg_3179.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_165_fu_8434_p2.read()) + sc_biguint<32>(f_1_38_reg_3179.read()));
}

void sha256_transform::thread_add_ln273_167_fu_8445_p2() {
    add_ln273_167_fu_8445_p2 = (!add_ln273_166_fu_8439_p2.read().is_01() || !add_ln273_164_fu_8428_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_166_fu_8439_p2.read()) + sc_biguint<32>(add_ln273_164_fu_8428_p2.read()));
}

void sha256_transform::thread_add_ln273_168_fu_8479_p2() {
    add_ln273_168_fu_8479_p2 = (!reg_5769.read().is_01() || !f_1_39_reg_3278.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5769.read()) + sc_biguint<32>(f_1_39_reg_3278.read()));
}

void sha256_transform::thread_add_ln273_169_fu_8468_p2() {
    add_ln273_169_fu_8468_p2 = (!m_42_reg_10541_pp0_iter12_reg.read().is_01() || !ap_const_lv32_C24B8B70.is_01())? sc_lv<32>(): (sc_biguint<32>(m_42_reg_10541_pp0_iter12_reg.read()) + sc_bigint<32>(ap_const_lv32_C24B8B70));
}

void sha256_transform::thread_add_ln273_16_fu_6336_p2() {
    add_ln273_16_fu_6336_p2 = (!reg_5629.read().is_01() || !f_1_1_reg_962.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5629.read()) + sc_biguint<32>(f_1_1_reg_962.read()));
}

void sha256_transform::thread_add_ln273_170_fu_8473_p2() {
    add_ln273_170_fu_8473_p2 = (!add_ln273_169_fu_8468_p2.read().is_01() || !grp_EP1_fu_5092_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_169_fu_8468_p2.read()) + sc_biguint<32>(grp_EP1_fu_5092_ap_return.read()));
}

void sha256_transform::thread_add_ln273_171_fu_8485_p2() {
    add_ln273_171_fu_8485_p2 = (!add_ln273_170_reg_11193.read().is_01() || !add_ln273_168_fu_8479_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_170_reg_11193.read()) + sc_biguint<32>(add_ln273_168_fu_8479_p2.read()));
}

void sha256_transform::thread_add_ln273_172_fu_8508_p2() {
    add_ln273_172_fu_8508_p2 = (!reg_5733.read().is_01() || !f_1_40_reg_3301.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5733.read()) + sc_biguint<32>(f_1_40_reg_3301.read()));
}

void sha256_transform::thread_add_ln273_173_fu_8514_p2() {
    add_ln273_173_fu_8514_p2 = (!m_43_reg_10550_pp0_iter13_reg.read().is_01() || !ap_const_lv32_C76C51A3.is_01())? sc_lv<32>(): (sc_biguint<32>(m_43_reg_10550_pp0_iter13_reg.read()) + sc_bigint<32>(ap_const_lv32_C76C51A3));
}

void sha256_transform::thread_add_ln273_174_fu_8519_p2() {
    add_ln273_174_fu_8519_p2 = (!add_ln273_173_fu_8514_p2.read().is_01() || !reg_5761.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_173_fu_8514_p2.read()) + sc_biguint<32>(reg_5761.read()));
}

void sha256_transform::thread_add_ln273_175_fu_8525_p2() {
    add_ln273_175_fu_8525_p2 = (!add_ln273_174_fu_8519_p2.read().is_01() || !add_ln273_172_fu_8508_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_174_fu_8519_p2.read()) + sc_biguint<32>(add_ln273_172_fu_8508_p2.read()));
}

void sha256_transform::thread_add_ln273_176_fu_8558_p2() {
    add_ln273_176_fu_8558_p2 = (!reg_5769.read().is_01() || !f_1_41_reg_3400.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5769.read()) + sc_biguint<32>(f_1_41_reg_3400.read()));
}

void sha256_transform::thread_add_ln273_177_fu_8547_p2() {
    add_ln273_177_fu_8547_p2 = (!m_44_reg_10585_pp0_iter13_reg.read().is_01() || !ap_const_lv32_D192E819.is_01())? sc_lv<32>(): (sc_biguint<32>(m_44_reg_10585_pp0_iter13_reg.read()) + sc_bigint<32>(ap_const_lv32_D192E819));
}

void sha256_transform::thread_add_ln273_178_fu_8552_p2() {
    add_ln273_178_fu_8552_p2 = (!add_ln273_177_fu_8547_p2.read().is_01() || !grp_EP1_fu_5092_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_177_fu_8547_p2.read()) + sc_biguint<32>(grp_EP1_fu_5092_ap_return.read()));
}

void sha256_transform::thread_add_ln273_179_fu_8564_p2() {
    add_ln273_179_fu_8564_p2 = (!add_ln273_178_reg_11224.read().is_01() || !add_ln273_176_fu_8558_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_178_reg_11224.read()) + sc_biguint<32>(add_ln273_176_fu_8558_p2.read()));
}

void sha256_transform::thread_add_ln273_17_fu_6303_p2() {
    add_ln273_17_fu_6303_p2 = (!m_4_reg_9666.read().is_01() || !ap_const_lv32_3956C25B.is_01())? sc_lv<32>(): (sc_biguint<32>(m_4_reg_9666.read()) + sc_biguint<32>(ap_const_lv32_3956C25B));
}

void sha256_transform::thread_add_ln273_180_fu_8587_p2() {
    add_ln273_180_fu_8587_p2 = (!reg_5733.read().is_01() || !f_1_42_reg_3423.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5733.read()) + sc_biguint<32>(f_1_42_reg_3423.read()));
}

void sha256_transform::thread_add_ln273_181_fu_8593_p2() {
    add_ln273_181_fu_8593_p2 = (!m_45_reg_10592_pp0_iter13_reg.read().is_01() || !ap_const_lv32_D6990624.is_01())? sc_lv<32>(): (sc_biguint<32>(m_45_reg_10592_pp0_iter13_reg.read()) + sc_bigint<32>(ap_const_lv32_D6990624));
}

void sha256_transform::thread_add_ln273_182_fu_8598_p2() {
    add_ln273_182_fu_8598_p2 = (!add_ln273_181_fu_8593_p2.read().is_01() || !reg_5761.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_181_fu_8593_p2.read()) + sc_biguint<32>(reg_5761.read()));
}

void sha256_transform::thread_add_ln273_183_fu_8604_p2() {
    add_ln273_183_fu_8604_p2 = (!add_ln273_182_fu_8598_p2.read().is_01() || !add_ln273_180_fu_8587_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_182_fu_8598_p2.read()) + sc_biguint<32>(add_ln273_180_fu_8587_p2.read()));
}

void sha256_transform::thread_add_ln273_184_fu_8638_p2() {
    add_ln273_184_fu_8638_p2 = (!reg_5769.read().is_01() || !f_1_43_reg_3522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5769.read()) + sc_biguint<32>(f_1_43_reg_3522.read()));
}

void sha256_transform::thread_add_ln273_185_fu_8627_p2() {
    add_ln273_185_fu_8627_p2 = (!m_46_reg_10614_pp0_iter13_reg.read().is_01() || !ap_const_lv32_F40E3585.is_01())? sc_lv<32>(): (sc_biguint<32>(m_46_reg_10614_pp0_iter13_reg.read()) + sc_bigint<32>(ap_const_lv32_F40E3585));
}

void sha256_transform::thread_add_ln273_186_fu_8632_p2() {
    add_ln273_186_fu_8632_p2 = (!add_ln273_185_fu_8627_p2.read().is_01() || !grp_EP1_fu_5092_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_185_fu_8627_p2.read()) + sc_biguint<32>(grp_EP1_fu_5092_ap_return.read()));
}

void sha256_transform::thread_add_ln273_187_fu_8644_p2() {
    add_ln273_187_fu_8644_p2 = (!add_ln273_186_reg_11250.read().is_01() || !add_ln273_184_fu_8638_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_186_reg_11250.read()) + sc_biguint<32>(add_ln273_184_fu_8638_p2.read()));
}

void sha256_transform::thread_add_ln273_188_fu_8667_p2() {
    add_ln273_188_fu_8667_p2 = (!reg_5769.read().is_01() || !f_1_44_reg_3545.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5769.read()) + sc_biguint<32>(f_1_44_reg_3545.read()));
}

void sha256_transform::thread_add_ln273_189_fu_8673_p2() {
    add_ln273_189_fu_8673_p2 = (!m_47_reg_10623_pp0_iter13_reg.read().is_01() || !ap_const_lv32_106AA070.is_01())? sc_lv<32>(): (sc_biguint<32>(m_47_reg_10623_pp0_iter13_reg.read()) + sc_biguint<32>(ap_const_lv32_106AA070));
}

void sha256_transform::thread_add_ln273_18_fu_6308_p2() {
    add_ln273_18_fu_6308_p2 = (!add_ln273_17_fu_6303_p2.read().is_01() || !grp_EP1_fu_5032_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_17_fu_6303_p2.read()) + sc_biguint<32>(grp_EP1_fu_5032_ap_return.read()));
}

void sha256_transform::thread_add_ln273_190_fu_8678_p2() {
    add_ln273_190_fu_8678_p2 = (!add_ln273_189_fu_8673_p2.read().is_01() || !reg_5765.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_189_fu_8673_p2.read()) + sc_biguint<32>(reg_5765.read()));
}

void sha256_transform::thread_add_ln273_191_fu_8684_p2() {
    add_ln273_191_fu_8684_p2 = (!add_ln273_190_fu_8678_p2.read().is_01() || !add_ln273_188_fu_8667_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_190_fu_8678_p2.read()) + sc_biguint<32>(add_ln273_188_fu_8667_p2.read()));
}

void sha256_transform::thread_add_ln273_192_fu_8733_p2() {
    add_ln273_192_fu_8733_p2 = (!reg_5769.read().is_01() || !f_1_45_reg_3644.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5769.read()) + sc_biguint<32>(f_1_45_reg_3644.read()));
}

void sha256_transform::thread_add_ln273_193_fu_8722_p2() {
    add_ln273_193_fu_8722_p2 = (!m_48_reg_10667_pp0_iter14_reg.read().is_01() || !ap_const_lv32_19A4C116.is_01())? sc_lv<32>(): (sc_biguint<32>(m_48_reg_10667_pp0_iter14_reg.read()) + sc_biguint<32>(ap_const_lv32_19A4C116));
}

void sha256_transform::thread_add_ln273_194_fu_8727_p2() {
    add_ln273_194_fu_8727_p2 = (!add_ln273_193_fu_8722_p2.read().is_01() || !grp_EP1_fu_5092_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_193_fu_8722_p2.read()) + sc_biguint<32>(grp_EP1_fu_5092_ap_return.read()));
}

void sha256_transform::thread_add_ln273_195_fu_8739_p2() {
    add_ln273_195_fu_8739_p2 = (!add_ln273_194_reg_11281.read().is_01() || !add_ln273_192_fu_8733_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_194_reg_11281.read()) + sc_biguint<32>(add_ln273_192_fu_8733_p2.read()));
}

void sha256_transform::thread_add_ln273_196_fu_8762_p2() {
    add_ln273_196_fu_8762_p2 = (!reg_5789.read().is_01() || !f_1_46_reg_3667.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5789.read()) + sc_biguint<32>(f_1_46_reg_3667.read()));
}

void sha256_transform::thread_add_ln273_197_fu_8768_p2() {
    add_ln273_197_fu_8768_p2 = (!m_49_reg_10673_pp0_iter15_reg.read().is_01() || !ap_const_lv32_1E376C08.is_01())? sc_lv<32>(): (sc_biguint<32>(m_49_reg_10673_pp0_iter15_reg.read()) + sc_biguint<32>(ap_const_lv32_1E376C08));
}

void sha256_transform::thread_add_ln273_198_fu_8773_p2() {
    add_ln273_198_fu_8773_p2 = (!add_ln273_197_fu_8768_p2.read().is_01() || !reg_5817.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_197_fu_8768_p2.read()) + sc_biguint<32>(reg_5817.read()));
}

void sha256_transform::thread_add_ln273_199_fu_8779_p2() {
    add_ln273_199_fu_8779_p2 = (!add_ln273_198_fu_8773_p2.read().is_01() || !add_ln273_196_fu_8762_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_198_fu_8773_p2.read()) + sc_biguint<32>(add_ln273_196_fu_8762_p2.read()));
}

void sha256_transform::thread_add_ln273_19_fu_6342_p2() {
    add_ln273_19_fu_6342_p2 = (!add_ln273_18_reg_10114.read().is_01() || !add_ln273_16_fu_6336_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_18_reg_10114.read()) + sc_biguint<32>(add_ln273_16_fu_6336_p2.read()));
}

void sha256_transform::thread_add_ln273_1_fu_5890_p2() {
    add_ln273_1_fu_5890_p2 = (!m_0_fu_5865_p5.read().is_01() || !ap_const_lv32_428A2F98.is_01())? sc_lv<32>(): (sc_biguint<32>(m_0_fu_5865_p5.read()) + sc_biguint<32>(ap_const_lv32_428A2F98));
}

void sha256_transform::thread_add_ln273_200_fu_8813_p2() {
    add_ln273_200_fu_8813_p2 = (!reg_5789.read().is_01() || !f_1_47_reg_3766.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5789.read()) + sc_biguint<32>(f_1_47_reg_3766.read()));
}

void sha256_transform::thread_add_ln273_201_fu_8802_p2() {
    add_ln273_201_fu_8802_p2 = (!m_50_reg_10689_pp0_iter15_reg.read().is_01() || !ap_const_lv32_2748774C.is_01())? sc_lv<32>(): (sc_biguint<32>(m_50_reg_10689_pp0_iter15_reg.read()) + sc_biguint<32>(ap_const_lv32_2748774C));
}

void sha256_transform::thread_add_ln273_202_fu_8807_p2() {
    add_ln273_202_fu_8807_p2 = (!add_ln273_201_fu_8802_p2.read().is_01() || !grp_EP1_fu_5102_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_201_fu_8802_p2.read()) + sc_biguint<32>(grp_EP1_fu_5102_ap_return.read()));
}

void sha256_transform::thread_add_ln273_203_fu_8819_p2() {
    add_ln273_203_fu_8819_p2 = (!add_ln273_202_reg_11307.read().is_01() || !add_ln273_200_fu_8813_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_202_reg_11307.read()) + sc_biguint<32>(add_ln273_200_fu_8813_p2.read()));
}

void sha256_transform::thread_add_ln273_204_fu_8842_p2() {
    add_ln273_204_fu_8842_p2 = (!reg_5825.read().is_01() || !f_1_48_reg_3789.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5825.read()) + sc_biguint<32>(f_1_48_reg_3789.read()));
}

void sha256_transform::thread_add_ln273_205_fu_8848_p2() {
    add_ln273_205_fu_8848_p2 = (!m_51_reg_10696_pp0_iter15_reg.read().is_01() || !ap_const_lv32_34B0BCB5.is_01())? sc_lv<32>(): (sc_biguint<32>(m_51_reg_10696_pp0_iter15_reg.read()) + sc_biguint<32>(ap_const_lv32_34B0BCB5));
}

void sha256_transform::thread_add_ln273_206_fu_8853_p2() {
    add_ln273_206_fu_8853_p2 = (!add_ln273_205_fu_8848_p2.read().is_01() || !reg_5821.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_205_fu_8848_p2.read()) + sc_biguint<32>(reg_5821.read()));
}

void sha256_transform::thread_add_ln273_207_fu_8859_p2() {
    add_ln273_207_fu_8859_p2 = (!add_ln273_206_fu_8853_p2.read().is_01() || !add_ln273_204_fu_8842_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_206_fu_8853_p2.read()) + sc_biguint<32>(add_ln273_204_fu_8842_p2.read()));
}

void sha256_transform::thread_add_ln273_208_fu_8893_p2() {
    add_ln273_208_fu_8893_p2 = (!reg_5825.read().is_01() || !f_1_49_reg_3888.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5825.read()) + sc_biguint<32>(f_1_49_reg_3888.read()));
}

void sha256_transform::thread_add_ln273_209_fu_8882_p2() {
    add_ln273_209_fu_8882_p2 = (!m_52_reg_10724_pp0_iter15_reg.read().is_01() || !ap_const_lv32_391C0CB3.is_01())? sc_lv<32>(): (sc_biguint<32>(m_52_reg_10724_pp0_iter15_reg.read()) + sc_biguint<32>(ap_const_lv32_391C0CB3));
}

void sha256_transform::thread_add_ln273_20_fu_6405_p2() {
    add_ln273_20_fu_6405_p2 = (!reg_5613.read().is_01() || !f_1_2_reg_983.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5613.read()) + sc_biguint<32>(f_1_2_reg_983.read()));
}

void sha256_transform::thread_add_ln273_210_fu_8887_p2() {
    add_ln273_210_fu_8887_p2 = (!add_ln273_209_fu_8882_p2.read().is_01() || !grp_EP1_fu_5122_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_209_fu_8882_p2.read()) + sc_biguint<32>(grp_EP1_fu_5122_ap_return.read()));
}

void sha256_transform::thread_add_ln273_211_fu_8899_p2() {
    add_ln273_211_fu_8899_p2 = (!add_ln273_210_reg_11333.read().is_01() || !add_ln273_208_fu_8893_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_210_reg_11333.read()) + sc_biguint<32>(add_ln273_208_fu_8893_p2.read()));
}

void sha256_transform::thread_add_ln273_212_fu_8922_p2() {
    add_ln273_212_fu_8922_p2 = (!reg_5789.read().is_01() || !f_1_50_reg_3911.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5789.read()) + sc_biguint<32>(f_1_50_reg_3911.read()));
}

void sha256_transform::thread_add_ln273_213_fu_8928_p2() {
    add_ln273_213_fu_8928_p2 = (!m_53_reg_10730_pp0_iter16_reg.read().is_01() || !ap_const_lv32_4ED8AA4A.is_01())? sc_lv<32>(): (sc_biguint<32>(m_53_reg_10730_pp0_iter16_reg.read()) + sc_biguint<32>(ap_const_lv32_4ED8AA4A));
}

void sha256_transform::thread_add_ln273_214_fu_8933_p2() {
    add_ln273_214_fu_8933_p2 = (!add_ln273_213_fu_8928_p2.read().is_01() || !reg_5817.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_213_fu_8928_p2.read()) + sc_biguint<32>(reg_5817.read()));
}

void sha256_transform::thread_add_ln273_215_fu_8939_p2() {
    add_ln273_215_fu_8939_p2 = (!add_ln273_214_fu_8933_p2.read().is_01() || !add_ln273_212_fu_8922_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_214_fu_8933_p2.read()) + sc_biguint<32>(add_ln273_212_fu_8922_p2.read()));
}

void sha256_transform::thread_add_ln273_216_fu_8973_p2() {
    add_ln273_216_fu_8973_p2 = (!reg_5789.read().is_01() || !f_1_51_reg_4010.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5789.read()) + sc_biguint<32>(f_1_51_reg_4010.read()));
}

void sha256_transform::thread_add_ln273_217_fu_8962_p2() {
    add_ln273_217_fu_8962_p2 = (!m_54_reg_10741_pp0_iter16_reg.read().is_01() || !ap_const_lv32_5B9CCA4F.is_01())? sc_lv<32>(): (sc_biguint<32>(m_54_reg_10741_pp0_iter16_reg.read()) + sc_biguint<32>(ap_const_lv32_5B9CCA4F));
}

void sha256_transform::thread_add_ln273_218_fu_8967_p2() {
    add_ln273_218_fu_8967_p2 = (!add_ln273_217_fu_8962_p2.read().is_01() || !grp_EP1_fu_5102_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_217_fu_8962_p2.read()) + sc_biguint<32>(grp_EP1_fu_5102_ap_return.read()));
}

void sha256_transform::thread_add_ln273_219_fu_8979_p2() {
    add_ln273_219_fu_8979_p2 = (!add_ln273_218_reg_11359.read().is_01() || !add_ln273_216_fu_8973_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_218_reg_11359.read()) + sc_biguint<32>(add_ln273_216_fu_8973_p2.read()));
}

void sha256_transform::thread_add_ln273_21_fu_6411_p2() {
    add_ln273_21_fu_6411_p2 = (!m_5_reg_9672_pp0_iter1_reg.read().is_01() || !ap_const_lv32_59F111F1.is_01())? sc_lv<32>(): (sc_biguint<32>(m_5_reg_9672_pp0_iter1_reg.read()) + sc_biguint<32>(ap_const_lv32_59F111F1));
}

void sha256_transform::thread_add_ln273_220_fu_9012_p2() {
    add_ln273_220_fu_9012_p2 = (!reg_5789.read().is_01() || !f_1_52_reg_4033.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5789.read()) + sc_biguint<32>(f_1_52_reg_4033.read()));
}

void sha256_transform::thread_add_ln273_221_fu_9001_p2() {
    add_ln273_221_fu_9001_p2 = (!m_55_reg_10748_pp0_iter16_reg.read().is_01() || !ap_const_lv32_682E6FF3.is_01())? sc_lv<32>(): (sc_biguint<32>(m_55_reg_10748_pp0_iter16_reg.read()) + sc_biguint<32>(ap_const_lv32_682E6FF3));
}

void sha256_transform::thread_add_ln273_222_fu_9006_p2() {
    add_ln273_222_fu_9006_p2 = (!add_ln273_221_fu_9001_p2.read().is_01() || !grp_EP1_fu_5102_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_221_fu_9001_p2.read()) + sc_biguint<32>(grp_EP1_fu_5102_ap_return.read()));
}

void sha256_transform::thread_add_ln273_223_fu_9018_p2() {
    add_ln273_223_fu_9018_p2 = (!add_ln273_222_reg_11379.read().is_01() || !add_ln273_220_fu_9012_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_222_reg_11379.read()) + sc_biguint<32>(add_ln273_220_fu_9012_p2.read()));
}

void sha256_transform::thread_add_ln273_224_fu_9041_p2() {
    add_ln273_224_fu_9041_p2 = (!reg_5825.read().is_01() || !f_1_53_reg_4132.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5825.read()) + sc_biguint<32>(f_1_53_reg_4132.read()));
}

void sha256_transform::thread_add_ln273_225_fu_9047_p2() {
    add_ln273_225_fu_9047_p2 = (!m_56_reg_10775_pp0_iter16_reg.read().is_01() || !ap_const_lv32_748F82EE.is_01())? sc_lv<32>(): (sc_biguint<32>(m_56_reg_10775_pp0_iter16_reg.read()) + sc_biguint<32>(ap_const_lv32_748F82EE));
}

void sha256_transform::thread_add_ln273_226_fu_9052_p2() {
    add_ln273_226_fu_9052_p2 = (!add_ln273_225_fu_9047_p2.read().is_01() || !reg_5821.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_225_fu_9047_p2.read()) + sc_biguint<32>(reg_5821.read()));
}

void sha256_transform::thread_add_ln273_227_fu_9058_p2() {
    add_ln273_227_fu_9058_p2 = (!add_ln273_226_fu_9052_p2.read().is_01() || !add_ln273_224_fu_9041_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_226_fu_9052_p2.read()) + sc_biguint<32>(add_ln273_224_fu_9041_p2.read()));
}

void sha256_transform::thread_add_ln273_228_fu_9091_p2() {
    add_ln273_228_fu_9091_p2 = (!reg_5825.read().is_01() || !f_1_54_reg_4193.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5825.read()) + sc_biguint<32>(f_1_54_reg_4193.read()));
}

void sha256_transform::thread_add_ln273_229_fu_9080_p2() {
    add_ln273_229_fu_9080_p2 = (!m_57_reg_10781_pp0_iter17_reg.read().is_01() || !ap_const_lv32_78A5636F.is_01())? sc_lv<32>(): (sc_biguint<32>(m_57_reg_10781_pp0_iter17_reg.read()) + sc_biguint<32>(ap_const_lv32_78A5636F));
}

void sha256_transform::thread_add_ln273_22_fu_6416_p2() {
    add_ln273_22_fu_6416_p2 = (!add_ln273_21_fu_6411_p2.read().is_01() || !reg_5609.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_21_fu_6411_p2.read()) + sc_biguint<32>(reg_5609.read()));
}

void sha256_transform::thread_add_ln273_230_fu_9085_p2() {
    add_ln273_230_fu_9085_p2 = (!add_ln273_229_fu_9080_p2.read().is_01() || !grp_EP1_fu_5122_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_229_fu_9080_p2.read()) + sc_biguint<32>(grp_EP1_fu_5122_ap_return.read()));
}

void sha256_transform::thread_add_ln273_231_fu_9097_p2() {
    add_ln273_231_fu_9097_p2 = (!add_ln273_230_reg_11410.read().is_01() || !add_ln273_228_fu_9091_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_230_reg_11410.read()) + sc_biguint<32>(add_ln273_228_fu_9091_p2.read()));
}

void sha256_transform::thread_add_ln273_232_fu_9130_p2() {
    add_ln273_232_fu_9130_p2 = (!reg_5825.read().is_01() || !ap_const_lv32_84C87814.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5825.read()) + sc_bigint<32>(ap_const_lv32_84C87814));
}

void sha256_transform::thread_add_ln273_233_fu_9119_p2() {
    add_ln273_233_fu_9119_p2 = (!grp_EP1_fu_5122_ap_return.read().is_01() || !m_58_reg_10807_pp0_iter18_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_5122_ap_return.read()) + sc_biguint<32>(m_58_reg_10807_pp0_iter18_reg.read()));
}

void sha256_transform::thread_add_ln273_234_fu_9124_p2() {
    add_ln273_234_fu_9124_p2 = (!add_ln273_233_fu_9119_p2.read().is_01() || !f_1_55_reg_4216.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_233_fu_9119_p2.read()) + sc_biguint<32>(f_1_55_reg_4216.read()));
}

void sha256_transform::thread_add_ln273_235_fu_9136_p2() {
    add_ln273_235_fu_9136_p2 = (!add_ln273_234_reg_11430.read().is_01() || !add_ln273_232_fu_9130_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_234_reg_11430.read()) + sc_biguint<32>(add_ln273_232_fu_9130_p2.read()));
}

void sha256_transform::thread_add_ln273_236_fu_9169_p2() {
    add_ln273_236_fu_9169_p2 = (!reg_5789.read().is_01() || !ap_const_lv32_8CC70208.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5789.read()) + sc_bigint<32>(ap_const_lv32_8CC70208));
}

void sha256_transform::thread_add_ln273_237_fu_9158_p2() {
    add_ln273_237_fu_9158_p2 = (!grp_EP1_fu_5102_ap_return.read().is_01() || !m_59_reg_10813_pp0_iter18_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_5102_ap_return.read()) + sc_biguint<32>(m_59_reg_10813_pp0_iter18_reg.read()));
}

void sha256_transform::thread_add_ln273_238_fu_9163_p2() {
    add_ln273_238_fu_9163_p2 = (!add_ln273_237_fu_9158_p2.read().is_01() || !f_1_56_reg_4277.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_237_fu_9158_p2.read()) + sc_biguint<32>(f_1_56_reg_4277.read()));
}

void sha256_transform::thread_add_ln273_239_fu_9175_p2() {
    add_ln273_239_fu_9175_p2 = (!add_ln273_238_reg_11450.read().is_01() || !add_ln273_236_fu_9169_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_238_reg_11450.read()) + sc_biguint<32>(add_ln273_236_fu_9169_p2.read()));
}

void sha256_transform::thread_add_ln273_23_fu_6422_p2() {
    add_ln273_23_fu_6422_p2 = (!add_ln273_22_fu_6416_p2.read().is_01() || !add_ln273_20_fu_6405_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_22_fu_6416_p2.read()) + sc_biguint<32>(add_ln273_20_fu_6405_p2.read()));
}

void sha256_transform::thread_add_ln273_240_fu_9208_p2() {
    add_ln273_240_fu_9208_p2 = (!reg_5789.read().is_01() || !ap_const_lv32_90BEFFFA.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5789.read()) + sc_bigint<32>(ap_const_lv32_90BEFFFA));
}

void sha256_transform::thread_add_ln273_241_fu_9197_p2() {
    add_ln273_241_fu_9197_p2 = (!grp_EP1_fu_5102_ap_return.read().is_01() || !m_60_reg_10844_pp0_iter18_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_5102_ap_return.read()) + sc_biguint<32>(m_60_reg_10844_pp0_iter18_reg.read()));
}

void sha256_transform::thread_add_ln273_242_fu_9202_p2() {
    add_ln273_242_fu_9202_p2 = (!add_ln273_241_fu_9197_p2.read().is_01() || !f_1_57_reg_4338.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_241_fu_9197_p2.read()) + sc_biguint<32>(f_1_57_reg_4338.read()));
}

void sha256_transform::thread_add_ln273_243_fu_9214_p2() {
    add_ln273_243_fu_9214_p2 = (!add_ln273_242_reg_11470.read().is_01() || !add_ln273_240_fu_9208_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_242_reg_11470.read()) + sc_biguint<32>(add_ln273_240_fu_9208_p2.read()));
}

void sha256_transform::thread_add_ln273_244_fu_9247_p2() {
    add_ln273_244_fu_9247_p2 = (!reg_5825.read().is_01() || !ap_const_lv32_A4506CEB.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5825.read()) + sc_bigint<32>(ap_const_lv32_A4506CEB));
}

void sha256_transform::thread_add_ln273_245_fu_9236_p2() {
    add_ln273_245_fu_9236_p2 = (!grp_EP1_fu_5122_ap_return.read().is_01() || !m_61_reg_10856_pp0_iter18_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_5122_ap_return.read()) + sc_biguint<32>(m_61_reg_10856_pp0_iter18_reg.read()));
}

void sha256_transform::thread_add_ln273_246_fu_9241_p2() {
    add_ln273_246_fu_9241_p2 = (!add_ln273_245_fu_9236_p2.read().is_01() || !f_1_58_reg_4437.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_245_fu_9236_p2.read()) + sc_biguint<32>(f_1_58_reg_4437.read()));
}

void sha256_transform::thread_add_ln273_247_fu_9253_p2() {
    add_ln273_247_fu_9253_p2 = (!add_ln273_246_reg_11490.read().is_01() || !add_ln273_244_fu_9247_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_246_reg_11490.read()) + sc_biguint<32>(add_ln273_244_fu_9247_p2.read()));
}

void sha256_transform::thread_add_ln273_248_fu_9276_p2() {
    add_ln273_248_fu_9276_p2 = (!grp_CH_fu_5561_ap_return.read().is_01() || !ap_const_lv32_BEF9A3F7.is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_5561_ap_return.read()) + sc_bigint<32>(ap_const_lv32_BEF9A3F7));
}

void sha256_transform::thread_add_ln273_249_fu_9282_p2() {
    add_ln273_249_fu_9282_p2 = (!f_1_59_reg_4498.read().is_01() || !grp_EP1_fu_5122_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(f_1_59_reg_4498.read()) + sc_biguint<32>(grp_EP1_fu_5122_ap_return.read()));
}

void sha256_transform::thread_add_ln273_24_fu_6518_p2() {
    add_ln273_24_fu_6518_p2 = (!reg_5657.read().is_01() || !ap_const_lv32_923F82A4.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5657.read()) + sc_bigint<32>(ap_const_lv32_923F82A4));
}

void sha256_transform::thread_add_ln273_250_fu_9288_p2() {
    add_ln273_250_fu_9288_p2 = (!add_ln273_249_reg_11510.read().is_01() || !add_ln273_248_reg_11505.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_249_reg_11510.read()) + sc_biguint<32>(add_ln273_248_reg_11505.read()));
}

void sha256_transform::thread_add_ln273_251_fu_7494_p2() {
    add_ln273_251_fu_7494_p2 = (!grp_SIG1_fu_5290_ap_return.read().is_01() || !m_55_reg_10748.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_5290_ap_return.read()) + sc_biguint<32>(m_55_reg_10748.read()));
}

void sha256_transform::thread_add_ln273_252_fu_9292_p2() {
    add_ln273_252_fu_9292_p2 = (!add_ln273_254_reg_10871_pp0_iter19_reg.read().is_01() || !add_ln273_250_fu_9288_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_254_reg_10871_pp0_iter19_reg.read()) + sc_biguint<32>(add_ln273_250_fu_9288_p2.read()));
}

void sha256_transform::thread_add_ln273_253_fu_7499_p2() {
    add_ln273_253_fu_7499_p2 = (!m_46_reg_10614_pp0_iter4_reg.read().is_01() || !tmp_1_45_reg_10652_pp0_iter5_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_46_reg_10614_pp0_iter4_reg.read()) + sc_biguint<32>(tmp_1_45_reg_10652_pp0_iter5_reg.read()));
}

void sha256_transform::thread_add_ln273_254_fu_7503_p2() {
    add_ln273_254_fu_7503_p2 = (!add_ln273_253_fu_7499_p2.read().is_01() || !add_ln273_251_fu_7494_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_253_fu_7499_p2.read()) + sc_biguint<32>(add_ln273_251_fu_7494_p2.read()));
}

void sha256_transform::thread_add_ln273_255_fu_9344_p2() {
    add_ln273_255_fu_9344_p2 = (!add_ln273_261_reg_11271_pp0_iter19_reg.read().is_01() || !add_ln273_258_fu_9340_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_261_reg_11271_pp0_iter19_reg.read()) + sc_biguint<32>(add_ln273_258_fu_9340_p2.read()));
}

void sha256_transform::thread_add_ln273_256_fu_9314_p2() {
    add_ln273_256_fu_9314_p2 = (!grp_CH_fu_5561_ap_return.read().is_01() || !f_1_60_reg_4559.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_5561_ap_return.read()) + sc_biguint<32>(f_1_60_reg_4559.read()));
}

void sha256_transform::thread_add_ln273_257_fu_9320_p2() {
    add_ln273_257_fu_9320_p2 = (!grp_EP1_fu_5122_ap_return.read().is_01() || !tmp_47_reg_10861_pp0_iter19_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_5122_ap_return.read()) + sc_biguint<32>(tmp_47_reg_10861_pp0_iter19_reg.read()));
}

void sha256_transform::thread_add_ln273_258_fu_9340_p2() {
    add_ln273_258_fu_9340_p2 = (!add_ln273_257_reg_11535.read().is_01() || !add_ln273_256_reg_11530.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_257_reg_11535.read()) + sc_biguint<32>(add_ln273_256_reg_11530.read()));
}

void sha256_transform::thread_add_ln273_259_fu_8690_p2() {
    add_ln273_259_fu_8690_p2 = (!m_56_reg_10775_pp0_iter13_reg.read().is_01() || !m_47_reg_10623_pp0_iter13_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_56_reg_10775_pp0_iter13_reg.read()) + sc_biguint<32>(m_47_reg_10623_pp0_iter13_reg.read()));
}

void sha256_transform::thread_add_ln273_25_fu_6497_p2() {
    add_ln273_25_fu_6497_p2 = (!grp_EP1_fu_5042_ap_return.read().is_01() || !m_6_reg_9728_pp0_iter1_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_5042_ap_return.read()) + sc_biguint<32>(m_6_reg_9728_pp0_iter1_reg.read()));
}

void sha256_transform::thread_add_ln273_260_fu_8694_p2() {
    add_ln273_260_fu_8694_p2 = (!tmp_1_46_reg_10679_pp0_iter14_reg.read().is_01() || !ap_const_lv32_C67178F2.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_46_reg_10679_pp0_iter14_reg.read()) + sc_bigint<32>(ap_const_lv32_C67178F2));
}

void sha256_transform::thread_add_ln273_261_fu_8699_p2() {
    add_ln273_261_fu_8699_p2 = (!add_ln273_260_fu_8694_p2.read().is_01() || !add_ln273_259_fu_8690_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_260_fu_8694_p2.read()) + sc_biguint<32>(add_ln273_259_fu_8690_p2.read()));
}

void sha256_transform::thread_add_ln273_26_fu_6502_p2() {
    add_ln273_26_fu_6502_p2 = (!add_ln273_25_fu_6497_p2.read().is_01() || !f_1_3_reg_1082.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_25_fu_6497_p2.read()) + sc_biguint<32>(f_1_3_reg_1082.read()));
}

void sha256_transform::thread_add_ln273_27_fu_6524_p2() {
    add_ln273_27_fu_6524_p2 = (!add_ln273_26_reg_10244.read().is_01() || !add_ln273_24_fu_6518_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_26_reg_10244.read()) + sc_biguint<32>(add_ln273_24_fu_6518_p2.read()));
}

void sha256_transform::thread_add_ln273_28_fu_6599_p2() {
    add_ln273_28_fu_6599_p2 = (!reg_5613.read().is_01() || !ap_const_lv32_AB1C5ED5.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5613.read()) + sc_bigint<32>(ap_const_lv32_AB1C5ED5));
}

void sha256_transform::thread_add_ln273_29_fu_6605_p2() {
    add_ln273_29_fu_6605_p2 = (!reg_5609.read().is_01() || !m_7_reg_9734_pp0_iter1_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5609.read()) + sc_biguint<32>(m_7_reg_9734_pp0_iter1_reg.read()));
}

void sha256_transform::thread_add_ln273_2_fu_5896_p2() {
    add_ln273_2_fu_5896_p2 = (!add_ln273_1_fu_5890_p2.read().is_01() || !reg_5609.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_1_fu_5890_p2.read()) + sc_biguint<32>(reg_5609.read()));
}

void sha256_transform::thread_add_ln273_30_fu_6610_p2() {
    add_ln273_30_fu_6610_p2 = (!add_ln273_29_fu_6605_p2.read().is_01() || !f_1_4_reg_1105.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_29_fu_6605_p2.read()) + sc_biguint<32>(f_1_4_reg_1105.read()));
}

void sha256_transform::thread_add_ln273_31_fu_6616_p2() {
    add_ln273_31_fu_6616_p2 = (!add_ln273_30_fu_6610_p2.read().is_01() || !add_ln273_28_fu_6599_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_30_fu_6610_p2.read()) + sc_biguint<32>(add_ln273_28_fu_6599_p2.read()));
}

void sha256_transform::thread_add_ln273_32_fu_6712_p2() {
    add_ln273_32_fu_6712_p2 = (!reg_5629.read().is_01() || !f_1_5_reg_1204.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5629.read()) + sc_biguint<32>(f_1_5_reg_1204.read()));
}

void sha256_transform::thread_add_ln273_33_fu_6671_p2() {
    add_ln273_33_fu_6671_p2 = (!m_8_reg_9796_pp0_iter1_reg.read().is_01() || !ap_const_lv32_D807AA98.is_01())? sc_lv<32>(): (sc_biguint<32>(m_8_reg_9796_pp0_iter1_reg.read()) + sc_bigint<32>(ap_const_lv32_D807AA98));
}

void sha256_transform::thread_add_ln273_34_fu_6676_p2() {
    add_ln273_34_fu_6676_p2 = (!add_ln273_33_fu_6671_p2.read().is_01() || !grp_EP1_fu_5032_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_33_fu_6671_p2.read()) + sc_biguint<32>(grp_EP1_fu_5032_ap_return.read()));
}

void sha256_transform::thread_add_ln273_35_fu_6718_p2() {
    add_ln273_35_fu_6718_p2 = (!add_ln273_34_reg_10376.read().is_01() || !add_ln273_32_fu_6712_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_34_reg_10376.read()) + sc_biguint<32>(add_ln273_32_fu_6712_p2.read()));
}

void sha256_transform::thread_add_ln273_36_fu_6773_p2() {
    add_ln273_36_fu_6773_p2 = (!reg_5613.read().is_01() || !f_1_6_reg_1227.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5613.read()) + sc_biguint<32>(f_1_6_reg_1227.read()));
}

void sha256_transform::thread_add_ln273_37_fu_6779_p2() {
    add_ln273_37_fu_6779_p2 = (!m_9_reg_9802_pp0_iter2_reg.read().is_01() || !ap_const_lv32_12835B01.is_01())? sc_lv<32>(): (sc_biguint<32>(m_9_reg_9802_pp0_iter2_reg.read()) + sc_biguint<32>(ap_const_lv32_12835B01));
}

void sha256_transform::thread_add_ln273_38_fu_6784_p2() {
    add_ln273_38_fu_6784_p2 = (!add_ln273_37_fu_6779_p2.read().is_01() || !reg_5609.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_37_fu_6779_p2.read()) + sc_biguint<32>(reg_5609.read()));
}

void sha256_transform::thread_add_ln273_39_fu_6790_p2() {
    add_ln273_39_fu_6790_p2 = (!add_ln273_38_fu_6784_p2.read().is_01() || !add_ln273_36_fu_6773_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_38_fu_6784_p2.read()) + sc_biguint<32>(add_ln273_36_fu_6773_p2.read()));
}

void sha256_transform::thread_add_ln273_3_fu_5934_p2() {
    add_ln273_3_fu_5934_p2 = (!add_ln273_2_reg_9576.read().is_01() || !add_ln273_fu_5928_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_2_reg_9576.read()) + sc_biguint<32>(add_ln273_fu_5928_p2.read()));
}

void sha256_transform::thread_add_ln273_40_fu_6886_p2() {
    add_ln273_40_fu_6886_p2 = (!reg_5629.read().is_01() || !f_1_7_reg_1326.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5629.read()) + sc_biguint<32>(f_1_7_reg_1326.read()));
}

void sha256_transform::thread_add_ln273_41_fu_6853_p2() {
    add_ln273_41_fu_6853_p2 = (!m_10_reg_9864_pp0_iter2_reg.read().is_01() || !ap_const_lv32_243185BE.is_01())? sc_lv<32>(): (sc_biguint<32>(m_10_reg_9864_pp0_iter2_reg.read()) + sc_biguint<32>(ap_const_lv32_243185BE));
}

void sha256_transform::thread_add_ln273_42_fu_6858_p2() {
    add_ln273_42_fu_6858_p2 = (!add_ln273_41_fu_6853_p2.read().is_01() || !grp_EP1_fu_5032_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_41_fu_6853_p2.read()) + sc_biguint<32>(grp_EP1_fu_5032_ap_return.read()));
}

void sha256_transform::thread_add_ln273_43_fu_6892_p2() {
    add_ln273_43_fu_6892_p2 = (!add_ln273_42_reg_10502.read().is_01() || !add_ln273_40_fu_6886_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_42_reg_10502.read()) + sc_biguint<32>(add_ln273_40_fu_6886_p2.read()));
}

void sha256_transform::thread_add_ln273_44_fu_6955_p2() {
    add_ln273_44_fu_6955_p2 = (!reg_5613.read().is_01() || !f_1_8_reg_1349.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5613.read()) + sc_biguint<32>(f_1_8_reg_1349.read()));
}

void sha256_transform::thread_add_ln273_45_fu_6961_p2() {
    add_ln273_45_fu_6961_p2 = (!m_11_reg_9871_pp0_iter2_reg.read().is_01() || !ap_const_lv32_550C7DC3.is_01())? sc_lv<32>(): (sc_biguint<32>(m_11_reg_9871_pp0_iter2_reg.read()) + sc_biguint<32>(ap_const_lv32_550C7DC3));
}

void sha256_transform::thread_add_ln273_46_fu_6966_p2() {
    add_ln273_46_fu_6966_p2 = (!add_ln273_45_fu_6961_p2.read().is_01() || !reg_5609.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_45_fu_6961_p2.read()) + sc_biguint<32>(reg_5609.read()));
}

void sha256_transform::thread_add_ln273_47_fu_6972_p2() {
    add_ln273_47_fu_6972_p2 = (!add_ln273_46_fu_6966_p2.read().is_01() || !add_ln273_44_fu_6955_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_46_fu_6966_p2.read()) + sc_biguint<32>(add_ln273_44_fu_6955_p2.read()));
}

void sha256_transform::thread_add_ln273_48_fu_7068_p2() {
    add_ln273_48_fu_7068_p2 = (!reg_5629.read().is_01() || !f_1_9_reg_1448.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5629.read()) + sc_biguint<32>(f_1_9_reg_1448.read()));
}

void sha256_transform::thread_add_ln273_49_fu_7047_p2() {
    add_ln273_49_fu_7047_p2 = (!m_12_reg_9933_pp0_iter2_reg.read().is_01() || !ap_const_lv32_72BE5D74.is_01())? sc_lv<32>(): (sc_biguint<32>(m_12_reg_9933_pp0_iter2_reg.read()) + sc_biguint<32>(ap_const_lv32_72BE5D74));
}

void sha256_transform::thread_add_ln273_4_fu_6008_p2() {
    add_ln273_4_fu_6008_p2 = (!reg_5613.read().is_01() || !ctx_state_6_read_1_reg_9437.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5613.read()) + sc_biguint<32>(ctx_state_6_read_1_reg_9437.read()));
}

void sha256_transform::thread_add_ln273_50_fu_7052_p2() {
    add_ln273_50_fu_7052_p2 = (!add_ln273_49_fu_7047_p2.read().is_01() || !grp_EP1_fu_5032_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_49_fu_7047_p2.read()) + sc_biguint<32>(grp_EP1_fu_5032_ap_return.read()));
}

void sha256_transform::thread_add_ln273_51_fu_7074_p2() {
    add_ln273_51_fu_7074_p2 = (!add_ln273_50_reg_10632.read().is_01() || !add_ln273_48_fu_7068_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_50_reg_10632.read()) + sc_biguint<32>(add_ln273_48_fu_7068_p2.read()));
}

void sha256_transform::thread_add_ln273_52_fu_7148_p2() {
    add_ln273_52_fu_7148_p2 = (!tmp_3_12_reg_10684.read().is_01() || !ap_const_lv32_80DEB1FE.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_3_12_reg_10684.read()) + sc_bigint<32>(ap_const_lv32_80DEB1FE));
}

void sha256_transform::thread_add_ln273_53_fu_7153_p2() {
    add_ln273_53_fu_7153_p2 = (!reg_5609.read().is_01() || !m_13_reg_9940_pp0_iter3_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5609.read()) + sc_biguint<32>(m_13_reg_9940_pp0_iter3_reg.read()));
}

void sha256_transform::thread_add_ln273_54_fu_7158_p2() {
    add_ln273_54_fu_7158_p2 = (!add_ln273_53_fu_7153_p2.read().is_01() || !f_1_10_reg_1471.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_53_fu_7153_p2.read()) + sc_biguint<32>(f_1_10_reg_1471.read()));
}

void sha256_transform::thread_add_ln273_55_fu_7164_p2() {
    add_ln273_55_fu_7164_p2 = (!add_ln273_54_fu_7158_p2.read().is_01() || !add_ln273_52_fu_7148_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_54_fu_7158_p2.read()) + sc_biguint<32>(add_ln273_52_fu_7148_p2.read()));
}

void sha256_transform::thread_add_ln273_56_fu_7258_p2() {
    add_ln273_56_fu_7258_p2 = (!reg_5629.read().is_01() || !ap_const_lv32_9BDC06A7.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5629.read()) + sc_bigint<32>(ap_const_lv32_9BDC06A7));
}

void sha256_transform::thread_add_ln273_57_fu_7217_p2() {
    add_ln273_57_fu_7217_p2 = (!grp_EP1_fu_5032_ap_return.read().is_01() || !m_14_reg_10007_pp0_iter4_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_5032_ap_return.read()) + sc_biguint<32>(m_14_reg_10007_pp0_iter4_reg.read()));
}

void sha256_transform::thread_add_ln273_58_fu_7222_p2() {
    add_ln273_58_fu_7222_p2 = (!add_ln273_57_fu_7217_p2.read().is_01() || !f_1_11_reg_1570.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_57_fu_7217_p2.read()) + sc_biguint<32>(f_1_11_reg_1570.read()));
}

void sha256_transform::thread_add_ln273_59_fu_7264_p2() {
    add_ln273_59_fu_7264_p2 = (!add_ln273_58_reg_10736.read().is_01() || !add_ln273_56_fu_7258_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_58_reg_10736.read()) + sc_biguint<32>(add_ln273_56_fu_7258_p2.read()));
}

void sha256_transform::thread_add_ln273_5_fu_6013_p2() {
    add_ln273_5_fu_6013_p2 = (!m_1_reg_9525.read().is_01() || !ap_const_lv32_71374491.is_01())? sc_lv<32>(): (sc_biguint<32>(m_1_reg_9525.read()) + sc_biguint<32>(ap_const_lv32_71374491));
}

void sha256_transform::thread_add_ln273_60_fu_7317_p2() {
    add_ln273_60_fu_7317_p2 = (!reg_5629.read().is_01() || !f_1_12_reg_1593.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5629.read()) + sc_biguint<32>(f_1_12_reg_1593.read()));
}

void sha256_transform::thread_add_ln273_61_fu_7323_p2() {
    add_ln273_61_fu_7323_p2 = (!m_15_reg_10014_pp0_iter4_reg.read().is_01() || !ap_const_lv32_C19BF174.is_01())? sc_lv<32>(): (sc_biguint<32>(m_15_reg_10014_pp0_iter4_reg.read()) + sc_bigint<32>(ap_const_lv32_C19BF174));
}

void sha256_transform::thread_add_ln273_62_fu_7328_p2() {
    add_ln273_62_fu_7328_p2 = (!add_ln273_61_fu_7323_p2.read().is_01() || !reg_5625.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_61_fu_7323_p2.read()) + sc_biguint<32>(reg_5625.read()));
}

void sha256_transform::thread_add_ln273_63_fu_7334_p2() {
    add_ln273_63_fu_7334_p2 = (!add_ln273_62_fu_7328_p2.read().is_01() || !add_ln273_60_fu_7317_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_62_fu_7328_p2.read()) + sc_biguint<32>(add_ln273_60_fu_7317_p2.read()));
}

void sha256_transform::thread_add_ln273_64_fu_7406_p2() {
    add_ln273_64_fu_7406_p2 = (!reg_5629.read().is_01() || !f_1_13_reg_1692.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5629.read()) + sc_biguint<32>(f_1_13_reg_1692.read()));
}

void sha256_transform::thread_add_ln273_65_fu_7385_p2() {
    add_ln273_65_fu_7385_p2 = (!m_16_reg_10041_pp0_iter4_reg.read().is_01() || !ap_const_lv32_E49B69C1.is_01())? sc_lv<32>(): (sc_biguint<32>(m_16_reg_10041_pp0_iter4_reg.read()) + sc_bigint<32>(ap_const_lv32_E49B69C1));
}

void sha256_transform::thread_add_ln273_66_fu_7390_p2() {
    add_ln273_66_fu_7390_p2 = (!add_ln273_65_fu_7385_p2.read().is_01() || !grp_EP1_fu_5032_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_65_fu_7385_p2.read()) + sc_biguint<32>(grp_EP1_fu_5032_ap_return.read()));
}

void sha256_transform::thread_add_ln273_67_fu_7412_p2() {
    add_ln273_67_fu_7412_p2 = (!add_ln273_66_reg_10819.read().is_01() || !add_ln273_64_fu_7406_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_66_reg_10819.read()) + sc_biguint<32>(add_ln273_64_fu_7406_p2.read()));
}

void sha256_transform::thread_add_ln273_68_fu_7444_p2() {
    add_ln273_68_fu_7444_p2 = (!reg_5657.read().is_01() || !f_1_14_reg_1715.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5657.read()) + sc_biguint<32>(f_1_14_reg_1715.read()));
}

void sha256_transform::thread_add_ln273_69_fu_7450_p2() {
    add_ln273_69_fu_7450_p2 = (!m_17_reg_10048_pp0_iter5_reg.read().is_01() || !ap_const_lv32_EFBE4786.is_01())? sc_lv<32>(): (sc_biguint<32>(m_17_reg_10048_pp0_iter5_reg.read()) + sc_bigint<32>(ap_const_lv32_EFBE4786));
}

void sha256_transform::thread_add_ln273_6_fu_6018_p2() {
    add_ln273_6_fu_6018_p2 = (!add_ln273_5_fu_6013_p2.read().is_01() || !reg_5609.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_5_fu_6013_p2.read()) + sc_biguint<32>(reg_5609.read()));
}

void sha256_transform::thread_add_ln273_70_fu_7455_p2() {
    add_ln273_70_fu_7455_p2 = (!add_ln273_69_fu_7450_p2.read().is_01() || !reg_5705.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_69_fu_7450_p2.read()) + sc_biguint<32>(reg_5705.read()));
}

void sha256_transform::thread_add_ln273_71_fu_7461_p2() {
    add_ln273_71_fu_7461_p2 = (!add_ln273_70_fu_7455_p2.read().is_01() || !add_ln273_68_fu_7444_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_70_fu_7455_p2.read()) + sc_biguint<32>(add_ln273_68_fu_7444_p2.read()));
}

void sha256_transform::thread_add_ln273_72_fu_7520_p2() {
    add_ln273_72_fu_7520_p2 = (!reg_5657.read().is_01() || !f_1_15_reg_1814.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5657.read()) + sc_biguint<32>(f_1_15_reg_1814.read()));
}

void sha256_transform::thread_add_ln273_73_fu_7509_p2() {
    add_ln273_73_fu_7509_p2 = (!m_18_reg_10071_pp0_iter5_reg.read().is_01() || !ap_const_lv32_FC19DC6.is_01())? sc_lv<32>(): (sc_biguint<32>(m_18_reg_10071_pp0_iter5_reg.read()) + sc_biguint<32>(ap_const_lv32_FC19DC6));
}

void sha256_transform::thread_add_ln273_74_fu_7514_p2() {
    add_ln273_74_fu_7514_p2 = (!add_ln273_73_fu_7509_p2.read().is_01() || !grp_EP1_fu_5042_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_73_fu_7509_p2.read()) + sc_biguint<32>(grp_EP1_fu_5042_ap_return.read()));
}

void sha256_transform::thread_add_ln273_75_fu_7526_p2() {
    add_ln273_75_fu_7526_p2 = (!add_ln273_74_reg_10876.read().is_01() || !add_ln273_72_fu_7520_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_74_reg_10876.read()) + sc_biguint<32>(add_ln273_72_fu_7520_p2.read()));
}

void sha256_transform::thread_add_ln273_76_fu_7549_p2() {
    add_ln273_76_fu_7549_p2 = (!reg_5713.read().is_01() || !f_1_16_reg_1837.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5713.read()) + sc_biguint<32>(f_1_16_reg_1837.read()));
}

void sha256_transform::thread_add_ln273_77_fu_7555_p2() {
    add_ln273_77_fu_7555_p2 = (!m_19_reg_10080_pp0_iter5_reg.read().is_01() || !ap_const_lv32_240CA1CC.is_01())? sc_lv<32>(): (sc_biguint<32>(m_19_reg_10080_pp0_iter5_reg.read()) + sc_biguint<32>(ap_const_lv32_240CA1CC));
}

void sha256_transform::thread_add_ln273_78_fu_7560_p2() {
    add_ln273_78_fu_7560_p2 = (!add_ln273_77_fu_7555_p2.read().is_01() || !reg_5709.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_77_fu_7555_p2.read()) + sc_biguint<32>(reg_5709.read()));
}

void sha256_transform::thread_add_ln273_79_fu_7566_p2() {
    add_ln273_79_fu_7566_p2 = (!add_ln273_78_fu_7560_p2.read().is_01() || !add_ln273_76_fu_7549_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_78_fu_7560_p2.read()) + sc_biguint<32>(add_ln273_76_fu_7549_p2.read()));
}

void sha256_transform::thread_add_ln273_7_fu_6024_p2() {
    add_ln273_7_fu_6024_p2 = (!add_ln273_6_fu_6018_p2.read().is_01() || !add_ln273_4_fu_6008_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_6_fu_6018_p2.read()) + sc_biguint<32>(add_ln273_4_fu_6008_p2.read()));
}

void sha256_transform::thread_add_ln273_80_fu_7600_p2() {
    add_ln273_80_fu_7600_p2 = (!reg_5713.read().is_01() || !f_1_17_reg_1936.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5713.read()) + sc_biguint<32>(f_1_17_reg_1936.read()));
}

void sha256_transform::thread_add_ln273_81_fu_7589_p2() {
    add_ln273_81_fu_7589_p2 = (!m_20_reg_10119_pp0_iter5_reg.read().is_01() || !ap_const_lv32_2DE92C6F.is_01())? sc_lv<32>(): (sc_biguint<32>(m_20_reg_10119_pp0_iter5_reg.read()) + sc_biguint<32>(ap_const_lv32_2DE92C6F));
}

void sha256_transform::thread_add_ln273_82_fu_7594_p2() {
    add_ln273_82_fu_7594_p2 = (!add_ln273_81_fu_7589_p2.read().is_01() || !grp_EP1_fu_5062_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_81_fu_7589_p2.read()) + sc_biguint<32>(grp_EP1_fu_5062_ap_return.read()));
}

void sha256_transform::thread_add_ln273_83_fu_7606_p2() {
    add_ln273_83_fu_7606_p2 = (!add_ln273_82_reg_10902.read().is_01() || !add_ln273_80_fu_7600_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_82_reg_10902.read()) + sc_biguint<32>(add_ln273_80_fu_7600_p2.read()));
}

void sha256_transform::thread_add_ln273_84_fu_7629_p2() {
    add_ln273_84_fu_7629_p2 = (!reg_5657.read().is_01() || !f_1_18_reg_1959.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5657.read()) + sc_biguint<32>(f_1_18_reg_1959.read()));
}

void sha256_transform::thread_add_ln273_85_fu_7635_p2() {
    add_ln273_85_fu_7635_p2 = (!m_21_reg_10126_pp0_iter6_reg.read().is_01() || !ap_const_lv32_4A7484AA.is_01())? sc_lv<32>(): (sc_biguint<32>(m_21_reg_10126_pp0_iter6_reg.read()) + sc_biguint<32>(ap_const_lv32_4A7484AA));
}

void sha256_transform::thread_add_ln273_86_fu_7640_p2() {
    add_ln273_86_fu_7640_p2 = (!add_ln273_85_fu_7635_p2.read().is_01() || !reg_5705.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_85_fu_7635_p2.read()) + sc_biguint<32>(reg_5705.read()));
}

void sha256_transform::thread_add_ln273_87_fu_7646_p2() {
    add_ln273_87_fu_7646_p2 = (!add_ln273_86_fu_7640_p2.read().is_01() || !add_ln273_84_fu_7629_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_86_fu_7640_p2.read()) + sc_biguint<32>(add_ln273_84_fu_7629_p2.read()));
}

void sha256_transform::thread_add_ln273_88_fu_7680_p2() {
    add_ln273_88_fu_7680_p2 = (!reg_5733.read().is_01() || !f_1_19_reg_2058.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5733.read()) + sc_biguint<32>(f_1_19_reg_2058.read()));
}

void sha256_transform::thread_add_ln273_89_fu_7669_p2() {
    add_ln273_89_fu_7669_p2 = (!m_22_reg_10153_pp0_iter6_reg.read().is_01() || !ap_const_lv32_5CB0A9DC.is_01())? sc_lv<32>(): (sc_biguint<32>(m_22_reg_10153_pp0_iter6_reg.read()) + sc_biguint<32>(ap_const_lv32_5CB0A9DC));
}

void sha256_transform::thread_add_ln273_8_fu_6134_p2() {
    add_ln273_8_fu_6134_p2 = (!reg_5613.read().is_01() || !ap_const_lv32_B5C0FBCF.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5613.read()) + sc_bigint<32>(ap_const_lv32_B5C0FBCF));
}

void sha256_transform::thread_add_ln273_90_fu_7674_p2() {
    add_ln273_90_fu_7674_p2 = (!add_ln273_89_fu_7669_p2.read().is_01() || !grp_EP1_fu_5072_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_89_fu_7669_p2.read()) + sc_biguint<32>(grp_EP1_fu_5072_ap_return.read()));
}

void sha256_transform::thread_add_ln273_91_fu_7686_p2() {
    add_ln273_91_fu_7686_p2 = (!add_ln273_90_reg_10928.read().is_01() || !add_ln273_88_fu_7680_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_90_reg_10928.read()) + sc_biguint<32>(add_ln273_88_fu_7680_p2.read()));
}

void sha256_transform::thread_add_ln273_92_fu_7709_p2() {
    add_ln273_92_fu_7709_p2 = (!reg_5657.read().is_01() || !f_1_20_reg_2081.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5657.read()) + sc_biguint<32>(f_1_20_reg_2081.read()));
}

void sha256_transform::thread_add_ln273_93_fu_7715_p2() {
    add_ln273_93_fu_7715_p2 = (!m_23_reg_10162_pp0_iter6_reg.read().is_01() || !ap_const_lv32_76F988DA.is_01())? sc_lv<32>(): (sc_biguint<32>(m_23_reg_10162_pp0_iter6_reg.read()) + sc_biguint<32>(ap_const_lv32_76F988DA));
}

void sha256_transform::thread_add_ln273_94_fu_7720_p2() {
    add_ln273_94_fu_7720_p2 = (!add_ln273_93_fu_7715_p2.read().is_01() || !reg_5705.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_93_fu_7715_p2.read()) + sc_biguint<32>(reg_5705.read()));
}

void sha256_transform::thread_add_ln273_95_fu_7726_p2() {
    add_ln273_95_fu_7726_p2 = (!add_ln273_94_fu_7720_p2.read().is_01() || !add_ln273_92_fu_7709_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_94_fu_7720_p2.read()) + sc_biguint<32>(add_ln273_92_fu_7709_p2.read()));
}

void sha256_transform::thread_add_ln273_96_fu_7760_p2() {
    add_ln273_96_fu_7760_p2 = (!reg_5713.read().is_01() || !ap_const_lv32_983E5152.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5713.read()) + sc_bigint<32>(ap_const_lv32_983E5152));
}

void sha256_transform::thread_add_ln273_97_fu_7749_p2() {
    add_ln273_97_fu_7749_p2 = (!grp_EP1_fu_5062_ap_return.read().is_01() || !m_24_reg_10197_pp0_iter6_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_5062_ap_return.read()) + sc_biguint<32>(m_24_reg_10197_pp0_iter6_reg.read()));
}

void sha256_transform::thread_add_ln273_98_fu_7754_p2() {
    add_ln273_98_fu_7754_p2 = (!add_ln273_97_fu_7749_p2.read().is_01() || !f_1_21_reg_2180.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_97_fu_7749_p2.read()) + sc_biguint<32>(f_1_21_reg_2180.read()));
}

void sha256_transform::thread_add_ln273_99_fu_7766_p2() {
    add_ln273_99_fu_7766_p2 = (!add_ln273_98_reg_10954.read().is_01() || !add_ln273_96_fu_7760_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_98_reg_10954.read()) + sc_biguint<32>(add_ln273_96_fu_7760_p2.read()));
}

void sha256_transform::thread_add_ln273_9_fu_6098_p2() {
    add_ln273_9_fu_6098_p2 = (!grp_EP1_fu_5022_ap_return.read().is_01() || !m_2_reg_9594.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_5022_ap_return.read()) + sc_biguint<32>(m_2_reg_9594.read()));
}

void sha256_transform::thread_add_ln273_fu_5928_p2() {
    add_ln273_fu_5928_p2 = (!reg_5613.read().is_01() || !ap_port_reg_ctx_state_7_read.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_5613.read()) + sc_biguint<32>(ap_port_reg_ctx_state_7_read.read()));
}

void sha256_transform::thread_add_ln279_10_fu_6939_p2() {
    add_ln279_10_fu_6939_p2 = (!add_ln273_43_reg_10531.read().is_01() || !c_1_8_reg_1372.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_43_reg_10531.read()) + sc_biguint<32>(c_1_8_reg_1372.read()));
}

void sha256_transform::thread_add_ln279_11_fu_7000_p2() {
    add_ln279_11_fu_7000_p2 = (!add_ln273_47_reg_10579.read().is_01() || !c_1_9_reg_1410.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_47_reg_10579.read()) + sc_biguint<32>(c_1_9_reg_1410.read()));
}

void sha256_transform::thread_add_ln279_12_fu_7112_p2() {
    add_ln279_12_fu_7112_p2 = (!add_ln273_51_reg_10657.read().is_01() || !c_1_10_reg_1494.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_51_reg_10657.read()) + sc_biguint<32>(c_1_10_reg_1494.read()));
}

void sha256_transform::thread_add_ln279_13_fu_7180_p2() {
    add_ln279_13_fu_7180_p2 = (!add_ln273_55_reg_10703.read().is_01() || !c_1_11_reg_1532.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_55_reg_10703.read()) + sc_biguint<32>(c_1_11_reg_1532.read()));
}

void sha256_transform::thread_add_ln279_14_fu_7291_p2() {
    add_ln279_14_fu_7291_p2 = (!add_ln273_59_reg_10755.read().is_01() || !c_1_12_reg_1616.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_59_reg_10755.read()) + sc_biguint<32>(c_1_12_reg_1616.read()));
}

void sha256_transform::thread_add_ln279_15_fu_7350_p2() {
    add_ln279_15_fu_7350_p2 = (!add_ln273_63_reg_10786.read().is_01() || !c_1_13_reg_1654.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_63_reg_10786.read()) + sc_biguint<32>(c_1_13_reg_1654.read()));
}

void sha256_transform::thread_add_ln279_16_fu_7429_p2() {
    add_ln279_16_fu_7429_p2 = (!add_ln273_67_reg_10834.read().is_01() || !c_1_14_reg_1738.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_67_reg_10834.read()) + sc_biguint<32>(c_1_14_reg_1738.read()));
}

void sha256_transform::thread_add_ln279_17_fu_7477_p2() {
    add_ln279_17_fu_7477_p2 = (!add_ln273_71_reg_10850.read().is_01() || !c_1_15_reg_1776.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_71_reg_10850.read()) + sc_biguint<32>(c_1_15_reg_1776.read()));
}

void sha256_transform::thread_add_ln279_18_fu_7543_p2() {
    add_ln279_18_fu_7543_p2 = (!add_ln273_75_reg_10881.read().is_01() || !c_1_16_reg_1860.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_75_reg_10881.read()) + sc_biguint<32>(c_1_16_reg_1860.read()));
}

void sha256_transform::thread_add_ln279_19_fu_7572_p2() {
    add_ln279_19_fu_7572_p2 = (!add_ln273_79_reg_10891.read().is_01() || !c_1_17_reg_1898.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_79_reg_10891.read()) + sc_biguint<32>(c_1_17_reg_1898.read()));
}

void sha256_transform::thread_add_ln279_1_fu_6056_p2() {
    add_ln279_1_fu_6056_p2 = (!add_ln273_7_reg_9790.read().is_01() || !ctx_state_2_read_1_reg_9456.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_7_reg_9790.read()) + sc_biguint<32>(ctx_state_2_read_1_reg_9456.read()));
}

void sha256_transform::thread_add_ln279_20_fu_7623_p2() {
    add_ln279_20_fu_7623_p2 = (!add_ln273_83_reg_10907.read().is_01() || !c_1_18_reg_1982.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_83_reg_10907.read()) + sc_biguint<32>(c_1_18_reg_1982.read()));
}

void sha256_transform::thread_add_ln279_21_fu_7652_p2() {
    add_ln279_21_fu_7652_p2 = (!add_ln273_87_reg_10917.read().is_01() || !c_1_19_reg_2020.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_87_reg_10917.read()) + sc_biguint<32>(c_1_19_reg_2020.read()));
}

void sha256_transform::thread_add_ln279_22_fu_7703_p2() {
    add_ln279_22_fu_7703_p2 = (!add_ln273_91_reg_10933.read().is_01() || !c_1_20_reg_2104.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_91_reg_10933.read()) + sc_biguint<32>(c_1_20_reg_2104.read()));
}

void sha256_transform::thread_add_ln279_23_fu_7732_p2() {
    add_ln279_23_fu_7732_p2 = (!add_ln273_95_reg_10943.read().is_01() || !c_1_21_reg_2142.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_95_reg_10943.read()) + sc_biguint<32>(c_1_21_reg_2142.read()));
}

void sha256_transform::thread_add_ln279_24_fu_7783_p2() {
    add_ln279_24_fu_7783_p2 = (!add_ln273_99_reg_10959.read().is_01() || !c_1_22_reg_2226.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_99_reg_10959.read()) + sc_biguint<32>(c_1_22_reg_2226.read()));
}

void sha256_transform::thread_add_ln279_25_fu_7812_p2() {
    add_ln279_25_fu_7812_p2 = (!add_ln273_103_reg_10969.read().is_01() || !c_1_23_reg_2264.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_103_reg_10969.read()) + sc_biguint<32>(c_1_23_reg_2264.read()));
}

void sha256_transform::thread_add_ln279_26_fu_7863_p2() {
    add_ln279_26_fu_7863_p2 = (!add_ln273_107_reg_10985.read().is_01() || !c_1_24_reg_2348.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_107_reg_10985.read()) + sc_biguint<32>(c_1_24_reg_2348.read()));
}

void sha256_transform::thread_add_ln279_27_fu_7892_p2() {
    add_ln279_27_fu_7892_p2 = (!add_ln273_111_reg_11000.read().is_01() || !c_1_25_reg_2386.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_111_reg_11000.read()) + sc_biguint<32>(c_1_25_reg_2386.read()));
}

void sha256_transform::thread_add_ln279_28_fu_7942_p2() {
    add_ln279_28_fu_7942_p2 = (!add_ln273_115_reg_11016.read().is_01() || !c_1_26_reg_2470.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_115_reg_11016.read()) + sc_biguint<32>(c_1_26_reg_2470.read()));
}

void sha256_transform::thread_add_ln279_29_fu_7971_p2() {
    add_ln279_29_fu_7971_p2 = (!add_ln273_119_reg_11026.read().is_01() || !c_1_27_reg_2508.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_119_reg_11026.read()) + sc_biguint<32>(c_1_27_reg_2508.read()));
}

void sha256_transform::thread_add_ln279_2_fu_6195_p2() {
    add_ln279_2_fu_6195_p2 = (!add_ln273_11_reg_9997.read().is_01() || !c_1_0_reg_888.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_11_reg_9997.read()) + sc_biguint<32>(c_1_0_reg_888.read()));
}

void sha256_transform::thread_add_ln279_30_fu_8022_p2() {
    add_ln279_30_fu_8022_p2 = (!add_ln273_123_reg_11042.read().is_01() || !c_1_28_reg_2592.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_123_reg_11042.read()) + sc_biguint<32>(c_1_28_reg_2592.read()));
}

void sha256_transform::thread_add_ln279_31_fu_8051_p2() {
    add_ln279_31_fu_8051_p2 = (!add_ln273_127_reg_11052.read().is_01() || !c_1_29_reg_2630.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_127_reg_11052.read()) + sc_biguint<32>(c_1_29_reg_2630.read()));
}

void sha256_transform::thread_add_ln279_32_fu_8102_p2() {
    add_ln279_32_fu_8102_p2 = (!add_ln273_131_reg_11068.read().is_01() || !c_1_30_reg_2714.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_131_reg_11068.read()) + sc_biguint<32>(c_1_30_reg_2714.read()));
}

void sha256_transform::thread_add_ln279_33_fu_8131_p2() {
    add_ln279_33_fu_8131_p2 = (!add_ln273_135_reg_11078.read().is_01() || !c_1_31_reg_2752.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_135_reg_11078.read()) + sc_biguint<32>(c_1_31_reg_2752.read()));
}

void sha256_transform::thread_add_ln279_34_fu_8182_p2() {
    add_ln279_34_fu_8182_p2 = (!add_ln273_139_reg_11094.read().is_01() || !c_1_32_reg_2836.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_139_reg_11094.read()) + sc_biguint<32>(c_1_32_reg_2836.read()));
}

void sha256_transform::thread_add_ln279_35_fu_8211_p2() {
    add_ln279_35_fu_8211_p2 = (!add_ln273_143_reg_11104.read().is_01() || !c_1_33_reg_2874.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_143_reg_11104.read()) + sc_biguint<32>(c_1_33_reg_2874.read()));
}

void sha256_transform::thread_add_ln279_36_fu_8262_p2() {
    add_ln279_36_fu_8262_p2 = (!add_ln273_147_reg_11120.read().is_01() || !c_1_34_reg_2958.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_147_reg_11120.read()) + sc_biguint<32>(c_1_34_reg_2958.read()));
}

void sha256_transform::thread_add_ln279_37_fu_8291_p2() {
    add_ln279_37_fu_8291_p2 = (!add_ln273_151_reg_11130.read().is_01() || !c_1_35_reg_2996.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_151_reg_11130.read()) + sc_biguint<32>(c_1_35_reg_2996.read()));
}

void sha256_transform::thread_add_ln279_38_fu_8342_p2() {
    add_ln279_38_fu_8342_p2 = (!add_ln273_155_reg_11146.read().is_01() || !c_1_36_reg_3080.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_155_reg_11146.read()) + sc_biguint<32>(c_1_36_reg_3080.read()));
}

void sha256_transform::thread_add_ln279_39_fu_8371_p2() {
    add_ln279_39_fu_8371_p2 = (!add_ln273_159_reg_11156.read().is_01() || !c_1_37_reg_3118.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_159_reg_11156.read()) + sc_biguint<32>(c_1_37_reg_3118.read()));
}

void sha256_transform::thread_add_ln279_3_fu_6276_p2() {
    add_ln279_3_fu_6276_p2 = (!add_ln273_15_reg_10065.read().is_01() || !c_1_1_reg_924.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_15_reg_10065.read()) + sc_biguint<32>(c_1_1_reg_924.read()));
}

void sha256_transform::thread_add_ln279_40_fu_8422_p2() {
    add_ln279_40_fu_8422_p2 = (!add_ln273_163_reg_11172.read().is_01() || !c_1_38_reg_3202.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_163_reg_11172.read()) + sc_biguint<32>(c_1_38_reg_3202.read()));
}

void sha256_transform::thread_add_ln279_41_fu_8451_p2() {
    add_ln279_41_fu_8451_p2 = (!add_ln273_167_reg_11182.read().is_01() || !c_1_39_reg_3240.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_167_reg_11182.read()) + sc_biguint<32>(c_1_39_reg_3240.read()));
}

void sha256_transform::thread_add_ln279_42_fu_8502_p2() {
    add_ln279_42_fu_8502_p2 = (!add_ln273_171_reg_11198.read().is_01() || !c_1_40_reg_3324.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_171_reg_11198.read()) + sc_biguint<32>(c_1_40_reg_3324.read()));
}

void sha256_transform::thread_add_ln279_43_fu_8531_p2() {
    add_ln279_43_fu_8531_p2 = (!add_ln273_175_reg_11213.read().is_01() || !c_1_41_reg_3362.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_175_reg_11213.read()) + sc_biguint<32>(c_1_41_reg_3362.read()));
}

void sha256_transform::thread_add_ln279_44_fu_8581_p2() {
    add_ln279_44_fu_8581_p2 = (!add_ln273_179_reg_11229.read().is_01() || !c_1_42_reg_3446.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_179_reg_11229.read()) + sc_biguint<32>(c_1_42_reg_3446.read()));
}

void sha256_transform::thread_add_ln279_45_fu_8610_p2() {
    add_ln279_45_fu_8610_p2 = (!add_ln273_183_reg_11239.read().is_01() || !c_1_43_reg_3484.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_183_reg_11239.read()) + sc_biguint<32>(c_1_43_reg_3484.read()));
}

void sha256_transform::thread_add_ln279_46_fu_8661_p2() {
    add_ln279_46_fu_8661_p2 = (!add_ln273_187_reg_11255.read().is_01() || !c_1_44_reg_3568.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_187_reg_11255.read()) + sc_biguint<32>(c_1_44_reg_3568.read()));
}

void sha256_transform::thread_add_ln279_47_fu_8705_p2() {
    add_ln279_47_fu_8705_p2 = (!add_ln273_191_reg_11265.read().is_01() || !c_1_45_reg_3606.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_191_reg_11265.read()) + sc_biguint<32>(c_1_45_reg_3606.read()));
}

void sha256_transform::thread_add_ln279_48_fu_8756_p2() {
    add_ln279_48_fu_8756_p2 = (!add_ln273_195_reg_11286.read().is_01() || !c_1_46_reg_3690.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_195_reg_11286.read()) + sc_biguint<32>(c_1_46_reg_3690.read()));
}

void sha256_transform::thread_add_ln279_49_fu_8785_p2() {
    add_ln279_49_fu_8785_p2 = (!add_ln273_199_reg_11296.read().is_01() || !c_1_47_reg_3728.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_199_reg_11296.read()) + sc_biguint<32>(c_1_47_reg_3728.read()));
}

void sha256_transform::thread_add_ln279_4_fu_6389_p2() {
    add_ln279_4_fu_6389_p2 = (!add_ln273_19_reg_10143.read().is_01() || !c_1_2_reg_1006.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_19_reg_10143.read()) + sc_biguint<32>(c_1_2_reg_1006.read()));
}

void sha256_transform::thread_add_ln279_50_fu_8836_p2() {
    add_ln279_50_fu_8836_p2 = (!add_ln273_203_reg_11312.read().is_01() || !c_1_48_reg_3812.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_203_reg_11312.read()) + sc_biguint<32>(c_1_48_reg_3812.read()));
}

void sha256_transform::thread_add_ln279_51_fu_8865_p2() {
    add_ln279_51_fu_8865_p2 = (!add_ln273_207_reg_11322.read().is_01() || !c_1_49_reg_3850.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_207_reg_11322.read()) + sc_biguint<32>(c_1_49_reg_3850.read()));
}

void sha256_transform::thread_add_ln279_52_fu_8916_p2() {
    add_ln279_52_fu_8916_p2 = (!add_ln273_211_reg_11338.read().is_01() || !c_1_50_reg_3934.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_211_reg_11338.read()) + sc_biguint<32>(c_1_50_reg_3934.read()));
}

void sha256_transform::thread_add_ln279_53_fu_8945_p2() {
    add_ln279_53_fu_8945_p2 = (!add_ln273_215_reg_11348.read().is_01() || !c_1_51_reg_3972.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_215_reg_11348.read()) + sc_biguint<32>(c_1_51_reg_3972.read()));
}

void sha256_transform::thread_add_ln279_54_fu_8996_p2() {
    add_ln279_54_fu_8996_p2 = (!add_ln273_219_reg_11364.read().is_01() || !c_1_52_reg_4056.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_219_reg_11364.read()) + sc_biguint<32>(c_1_52_reg_4056.read()));
}

void sha256_transform::thread_add_ln279_55_fu_9035_p2() {
    add_ln279_55_fu_9035_p2 = (!add_ln273_223_reg_11384.read().is_01() || !c_1_53_reg_4094.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_223_reg_11384.read()) + sc_biguint<32>(c_1_53_reg_4094.read()));
}

void sha256_transform::thread_add_ln279_56_fu_9064_p2() {
    add_ln279_56_fu_9064_p2 = (!add_ln273_227_reg_11394.read().is_01() || !c_1_54_reg_4155.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_227_reg_11394.read()) + sc_biguint<32>(c_1_54_reg_4155.read()));
}

void sha256_transform::thread_add_ln279_57_fu_9114_p2() {
    add_ln279_57_fu_9114_p2 = (!add_ln273_231_reg_11415.read().is_01() || !c_1_55_reg_4239.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_231_reg_11415.read()) + sc_biguint<32>(c_1_55_reg_4239.read()));
}

void sha256_transform::thread_add_ln279_58_fu_9153_p2() {
    add_ln279_58_fu_9153_p2 = (!add_ln273_235_reg_11435.read().is_01() || !c_1_56_reg_4300.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_235_reg_11435.read()) + sc_biguint<32>(c_1_56_reg_4300.read()));
}

void sha256_transform::thread_add_ln279_59_fu_9192_p2() {
    add_ln279_59_fu_9192_p2 = (!add_ln273_239_reg_11455.read().is_01() || !c_1_57_reg_4361.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_239_reg_11455.read()) + sc_biguint<32>(c_1_57_reg_4361.read()));
}

void sha256_transform::thread_add_ln279_5_fu_6450_p2() {
    add_ln279_5_fu_6450_p2 = (!add_ln273_23_reg_10191.read().is_01() || !c_1_3_reg_1044.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_23_reg_10191.read()) + sc_biguint<32>(c_1_3_reg_1044.read()));
}

void sha256_transform::thread_add_ln279_60_fu_9231_p2() {
    add_ln279_60_fu_9231_p2 = (!add_ln273_243_reg_11475.read().is_01() || !c_1_58_reg_4399.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_243_reg_11475.read()) + sc_biguint<32>(c_1_58_reg_4399.read()));
}

void sha256_transform::thread_add_ln279_61_fu_9258_p2() {
    add_ln279_61_fu_9258_p2 = (!add_ln273_247_fu_9253_p2.read().is_01() || !c_1_59_reg_4460.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_247_fu_9253_p2.read()) + sc_biguint<32>(c_1_59_reg_4460.read()));
}

void sha256_transform::thread_add_ln279_62_fu_9309_p2() {
    add_ln279_62_fu_9309_p2 = (!add_ln273_252_reg_11515.read().is_01() || !c_1_60_reg_4521.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_252_reg_11515.read()) + sc_biguint<32>(c_1_60_reg_4521.read()));
}

void sha256_transform::thread_add_ln279_63_fu_9361_p2() {
    add_ln279_63_fu_9361_p2 = (!add_ln273_255_reg_11555.read().is_01() || !c_1_61_reg_4605.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_255_reg_11555.read()) + sc_biguint<32>(c_1_61_reg_4605.read()));
}

void sha256_transform::thread_add_ln279_6_fu_6563_p2() {
    add_ln279_6_fu_6563_p2 = (!add_ln273_27_reg_10269.read().is_01() || !c_1_4_reg_1128.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_27_reg_10269.read()) + sc_biguint<32>(c_1_4_reg_1128.read()));
}

void sha256_transform::thread_add_ln279_7_fu_6632_p2() {
    add_ln279_7_fu_6632_p2 = (!add_ln273_31_reg_10321.read().is_01() || !c_1_5_reg_1166.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_31_reg_10321.read()) + sc_biguint<32>(c_1_5_reg_1166.read()));
}

void sha256_transform::thread_add_ln279_8_fu_6745_p2() {
    add_ln279_8_fu_6745_p2 = (!add_ln273_35_reg_10399.read().is_01() || !c_1_6_reg_1250.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_35_reg_10399.read()) + sc_biguint<32>(c_1_6_reg_1250.read()));
}

void sha256_transform::thread_add_ln279_9_fu_6826_p2() {
    add_ln279_9_fu_6826_p2 = (!add_ln273_39_reg_10453.read().is_01() || !c_1_7_reg_1288.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_39_reg_10453.read()) + sc_biguint<32>(c_1_7_reg_1288.read()));
}

void sha256_transform::thread_add_ln279_fu_5977_p2() {
    add_ln279_fu_5977_p2 = (!add_ln273_3_reg_9656.read().is_01() || !ctx_state_3_read_1_reg_9586.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_3_reg_9656.read()) + sc_biguint<32>(ctx_state_3_read_1_reg_9586.read()));
}

void sha256_transform::thread_add_ln283_100_fu_8250_p2() {
    add_ln283_100_fu_8250_p2 = (!add_ln273_147_fu_8245_p2.read().is_01() || !reg_5781.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_147_fu_8245_p2.read()) + sc_biguint<32>(reg_5781.read()));
}

void sha256_transform::thread_add_ln283_101_fu_8296_p2() {
    add_ln283_101_fu_8296_p2 = (!add_ln273_151_reg_11130.read().is_01() || !reg_5777.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_151_reg_11130.read()) + sc_biguint<32>(reg_5777.read()));
}

void sha256_transform::thread_add_ln283_102_fu_8330_p2() {
    add_ln283_102_fu_8330_p2 = (!add_ln273_155_fu_8325_p2.read().is_01() || !reg_5781.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_155_fu_8325_p2.read()) + sc_biguint<32>(reg_5781.read()));
}

void sha256_transform::thread_add_ln283_103_fu_8376_p2() {
    add_ln283_103_fu_8376_p2 = (!add_ln273_159_reg_11156.read().is_01() || !reg_5777.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_159_reg_11156.read()) + sc_biguint<32>(reg_5777.read()));
}

void sha256_transform::thread_add_ln283_104_fu_8410_p2() {
    add_ln283_104_fu_8410_p2 = (!add_ln273_163_fu_8405_p2.read().is_01() || !reg_5781.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_163_fu_8405_p2.read()) + sc_biguint<32>(reg_5781.read()));
}

void sha256_transform::thread_add_ln283_105_fu_8456_p2() {
    add_ln283_105_fu_8456_p2 = (!add_ln273_167_reg_11182.read().is_01() || !reg_5797.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_167_reg_11182.read()) + sc_biguint<32>(reg_5797.read()));
}

void sha256_transform::thread_add_ln283_106_fu_8490_p2() {
    add_ln283_106_fu_8490_p2 = (!add_ln273_171_fu_8485_p2.read().is_01() || !reg_5801.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_171_fu_8485_p2.read()) + sc_biguint<32>(reg_5801.read()));
}

void sha256_transform::thread_add_ln283_107_fu_8536_p2() {
    add_ln283_107_fu_8536_p2 = (!add_ln273_175_reg_11213.read().is_01() || !reg_5797.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_175_reg_11213.read()) + sc_biguint<32>(reg_5797.read()));
}

void sha256_transform::thread_add_ln283_108_fu_8569_p2() {
    add_ln283_108_fu_8569_p2 = (!add_ln273_179_fu_8564_p2.read().is_01() || !reg_5801.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_179_fu_8564_p2.read()) + sc_biguint<32>(reg_5801.read()));
}

void sha256_transform::thread_add_ln283_109_fu_8615_p2() {
    add_ln283_109_fu_8615_p2 = (!add_ln273_183_reg_11239.read().is_01() || !reg_5797.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_183_reg_11239.read()) + sc_biguint<32>(reg_5797.read()));
}

void sha256_transform::thread_add_ln283_10_fu_6903_p2() {
    add_ln283_10_fu_6903_p2 = (!add_ln283_74_fu_6897_p2.read().is_01() || !reg_5633.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_74_fu_6897_p2.read()) + sc_biguint<32>(reg_5633.read()));
}

void sha256_transform::thread_add_ln283_110_fu_8649_p2() {
    add_ln283_110_fu_8649_p2 = (!add_ln273_187_fu_8644_p2.read().is_01() || !reg_5805.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_187_fu_8644_p2.read()) + sc_biguint<32>(reg_5805.read()));
}

void sha256_transform::thread_add_ln283_111_fu_8710_p2() {
    add_ln283_111_fu_8710_p2 = (!add_ln273_191_reg_11265.read().is_01() || !reg_5805.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_191_reg_11265.read()) + sc_biguint<32>(reg_5805.read()));
}

void sha256_transform::thread_add_ln283_112_fu_8744_p2() {
    add_ln283_112_fu_8744_p2 = (!add_ln273_195_fu_8739_p2.read().is_01() || !reg_5813.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_195_fu_8739_p2.read()) + sc_biguint<32>(reg_5813.read()));
}

void sha256_transform::thread_add_ln283_113_fu_8790_p2() {
    add_ln283_113_fu_8790_p2 = (!add_ln273_199_reg_11296.read().is_01() || !reg_5813.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_199_reg_11296.read()) + sc_biguint<32>(reg_5813.read()));
}

void sha256_transform::thread_add_ln283_114_fu_8824_p2() {
    add_ln283_114_fu_8824_p2 = (!add_ln273_203_fu_8819_p2.read().is_01() || !reg_5813.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_203_fu_8819_p2.read()) + sc_biguint<32>(reg_5813.read()));
}

void sha256_transform::thread_add_ln283_115_fu_8870_p2() {
    add_ln283_115_fu_8870_p2 = (!add_ln273_207_reg_11322.read().is_01() || !reg_5833.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_207_reg_11322.read()) + sc_biguint<32>(reg_5833.read()));
}

void sha256_transform::thread_add_ln283_116_fu_8904_p2() {
    add_ln283_116_fu_8904_p2 = (!add_ln273_211_fu_8899_p2.read().is_01() || !reg_5837.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_211_fu_8899_p2.read()) + sc_biguint<32>(reg_5837.read()));
}

void sha256_transform::thread_add_ln283_117_fu_8950_p2() {
    add_ln283_117_fu_8950_p2 = (!add_ln273_215_reg_11348.read().is_01() || !reg_5833.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_215_reg_11348.read()) + sc_biguint<32>(reg_5833.read()));
}

void sha256_transform::thread_add_ln283_118_fu_8984_p2() {
    add_ln283_118_fu_8984_p2 = (!add_ln273_219_fu_8979_p2.read().is_01() || !reg_5837.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_219_fu_8979_p2.read()) + sc_biguint<32>(reg_5837.read()));
}

void sha256_transform::thread_add_ln283_119_fu_9023_p2() {
    add_ln283_119_fu_9023_p2 = (!add_ln273_223_fu_9018_p2.read().is_01() || !reg_5833.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_223_fu_9018_p2.read()) + sc_biguint<32>(reg_5833.read()));
}

void sha256_transform::thread_add_ln283_11_fu_7010_p2() {
    add_ln283_11_fu_7010_p2 = (!add_ln283_75_fu_7005_p2.read().is_01() || !reg_5681.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_75_fu_7005_p2.read()) + sc_biguint<32>(reg_5681.read()));
}

void sha256_transform::thread_add_ln283_120_fu_9069_p2() {
    add_ln283_120_fu_9069_p2 = (!add_ln273_227_reg_11394.read().is_01() || !reg_5845.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_227_reg_11394.read()) + sc_biguint<32>(reg_5845.read()));
}

void sha256_transform::thread_add_ln283_121_fu_9102_p2() {
    add_ln283_121_fu_9102_p2 = (!add_ln273_231_fu_9097_p2.read().is_01() || !reg_5845.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_231_fu_9097_p2.read()) + sc_biguint<32>(reg_5845.read()));
}

void sha256_transform::thread_add_ln283_122_fu_9141_p2() {
    add_ln283_122_fu_9141_p2 = (!add_ln273_235_fu_9136_p2.read().is_01() || !reg_5837.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_235_fu_9136_p2.read()) + sc_biguint<32>(reg_5837.read()));
}

void sha256_transform::thread_add_ln283_123_fu_9180_p2() {
    add_ln283_123_fu_9180_p2 = (!add_ln273_239_fu_9175_p2.read().is_01() || !reg_5853.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_239_fu_9175_p2.read()) + sc_biguint<32>(reg_5853.read()));
}

void sha256_transform::thread_add_ln283_124_fu_9219_p2() {
    add_ln283_124_fu_9219_p2 = (!add_ln273_243_fu_9214_p2.read().is_01() || !reg_5853.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_243_fu_9214_p2.read()) + sc_biguint<32>(reg_5853.read()));
}

void sha256_transform::thread_add_ln283_125_fu_9264_p2() {
    add_ln283_125_fu_9264_p2 = (!add_ln273_247_fu_9253_p2.read().is_01() || !reg_5853.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_247_fu_9253_p2.read()) + sc_biguint<32>(reg_5853.read()));
}

void sha256_transform::thread_add_ln283_126_fu_9297_p2() {
    add_ln283_126_fu_9297_p2 = (!add_ln273_252_fu_9292_p2.read().is_01() || !reg_5833.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_252_fu_9292_p2.read()) + sc_biguint<32>(reg_5833.read()));
}

void sha256_transform::thread_add_ln283_127_fu_9349_p2() {
    add_ln283_127_fu_9349_p2 = (!add_ln273_255_fu_9344_p2.read().is_01() || !reg_5833.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_255_fu_9344_p2.read()) + sc_biguint<32>(reg_5833.read()));
}

void sha256_transform::thread_add_ln283_12_fu_7085_p2() {
    add_ln283_12_fu_7085_p2 = (!add_ln283_76_fu_7079_p2.read().is_01() || !reg_5633.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_76_fu_7079_p2.read()) + sc_biguint<32>(reg_5633.read()));
}

void sha256_transform::thread_add_ln283_13_fu_7190_p2() {
    add_ln283_13_fu_7190_p2 = (!add_ln283_77_fu_7185_p2.read().is_01() || !reg_5681.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_77_fu_7185_p2.read()) + sc_biguint<32>(reg_5681.read()));
}

void sha256_transform::thread_add_ln283_14_fu_7275_p2() {
    add_ln283_14_fu_7275_p2 = (!add_ln283_78_fu_7269_p2.read().is_01() || !reg_5633.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_78_fu_7269_p2.read()) + sc_biguint<32>(reg_5633.read()));
}

void sha256_transform::thread_add_ln283_15_fu_7360_p2() {
    add_ln283_15_fu_7360_p2 = (!add_ln283_79_fu_7355_p2.read().is_01() || !reg_5697.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_79_fu_7355_p2.read()) + sc_biguint<32>(reg_5697.read()));
}

void sha256_transform::thread_add_ln283_16_fu_7423_p2() {
    add_ln283_16_fu_7423_p2 = (!add_ln283_80_fu_7417_p2.read().is_01() || !reg_5697.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_80_fu_7417_p2.read()) + sc_biguint<32>(reg_5697.read()));
}

void sha256_transform::thread_add_ln283_17_fu_7487_p2() {
    add_ln283_17_fu_7487_p2 = (!add_ln283_81_fu_7482_p2.read().is_01() || !reg_5661.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_81_fu_7482_p2.read()) + sc_biguint<32>(reg_5661.read()));
}

void sha256_transform::thread_add_ln283_18_fu_7537_p2() {
    add_ln283_18_fu_7537_p2 = (!add_ln283_82_fu_7531_p2.read().is_01() || !reg_5661.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_82_fu_7531_p2.read()) + sc_biguint<32>(reg_5661.read()));
}

void sha256_transform::thread_add_ln283_19_fu_7582_p2() {
    add_ln283_19_fu_7582_p2 = (!add_ln283_83_fu_7577_p2.read().is_01() || !reg_5717.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_83_fu_7577_p2.read()) + sc_biguint<32>(reg_5717.read()));
}

void sha256_transform::thread_add_ln283_1_fu_6065_p2() {
    add_ln283_1_fu_6065_p2 = (!add_ln283_65_fu_6060_p2.read().is_01() || !reg_5617.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_65_fu_6060_p2.read()) + sc_biguint<32>(reg_5617.read()));
}

void sha256_transform::thread_add_ln283_20_fu_7617_p2() {
    add_ln283_20_fu_7617_p2 = (!add_ln283_84_fu_7611_p2.read().is_01() || !reg_5717.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_84_fu_7611_p2.read()) + sc_biguint<32>(reg_5717.read()));
}

void sha256_transform::thread_add_ln283_21_fu_7662_p2() {
    add_ln283_21_fu_7662_p2 = (!add_ln283_85_fu_7657_p2.read().is_01() || !reg_5729.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_85_fu_7657_p2.read()) + sc_biguint<32>(reg_5729.read()));
}

void sha256_transform::thread_add_ln283_22_fu_7697_p2() {
    add_ln283_22_fu_7697_p2 = (!add_ln283_86_fu_7691_p2.read().is_01() || !reg_5737.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_86_fu_7691_p2.read()) + sc_biguint<32>(reg_5737.read()));
}

void sha256_transform::thread_add_ln283_23_fu_7742_p2() {
    add_ln283_23_fu_7742_p2 = (!add_ln283_87_fu_7737_p2.read().is_01() || !reg_5729.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_87_fu_7737_p2.read()) + sc_biguint<32>(reg_5729.read()));
}

void sha256_transform::thread_add_ln283_24_fu_7777_p2() {
    add_ln283_24_fu_7777_p2 = (!add_ln283_88_fu_7771_p2.read().is_01() || !reg_5717.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_88_fu_7771_p2.read()) + sc_biguint<32>(reg_5717.read()));
}

void sha256_transform::thread_add_ln283_25_fu_7822_p2() {
    add_ln283_25_fu_7822_p2 = (!add_ln283_89_fu_7817_p2.read().is_01() || !reg_5729.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_89_fu_7817_p2.read()) + sc_biguint<32>(reg_5729.read()));
}

void sha256_transform::thread_add_ln283_26_fu_7857_p2() {
    add_ln283_26_fu_7857_p2 = (!add_ln283_90_fu_7851_p2.read().is_01() || !reg_5717.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_90_fu_7851_p2.read()) + sc_biguint<32>(reg_5717.read()));
}

void sha256_transform::thread_add_ln283_27_fu_7902_p2() {
    add_ln283_27_fu_7902_p2 = (!add_ln283_91_fu_7897_p2.read().is_01() || !tmp_4_26_reg_10995.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_91_fu_7897_p2.read()) + sc_biguint<32>(tmp_4_26_reg_10995.read()));
}

void sha256_transform::thread_add_ln283_28_fu_7936_p2() {
    add_ln283_28_fu_7936_p2 = (!add_ln283_92_fu_7930_p2.read().is_01() || !reg_5717.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_92_fu_7930_p2.read()) + sc_biguint<32>(reg_5717.read()));
}

void sha256_transform::thread_add_ln283_29_fu_7981_p2() {
    add_ln283_29_fu_7981_p2 = (!add_ln283_93_fu_7976_p2.read().is_01() || !reg_5661.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_93_fu_7976_p2.read()) + sc_biguint<32>(reg_5661.read()));
}

void sha256_transform::thread_add_ln283_2_fu_6151_p2() {
    add_ln283_2_fu_6151_p2 = (!add_ln283_66_fu_6145_p2.read().is_01() || !reg_5617.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_66_fu_6145_p2.read()) + sc_biguint<32>(reg_5617.read()));
}

void sha256_transform::thread_add_ln283_30_fu_8016_p2() {
    add_ln283_30_fu_8016_p2 = (!add_ln283_94_fu_8010_p2.read().is_01() || !reg_5717.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_94_fu_8010_p2.read()) + sc_biguint<32>(reg_5717.read()));
}

void sha256_transform::thread_add_ln283_31_fu_8061_p2() {
    add_ln283_31_fu_8061_p2 = (!add_ln283_95_fu_8056_p2.read().is_01() || !reg_5753.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_95_fu_8056_p2.read()) + sc_biguint<32>(reg_5753.read()));
}

void sha256_transform::thread_add_ln283_32_fu_8096_p2() {
    add_ln283_32_fu_8096_p2 = (!add_ln283_96_fu_8090_p2.read().is_01() || !reg_5753.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_96_fu_8090_p2.read()) + sc_biguint<32>(reg_5753.read()));
}

void sha256_transform::thread_add_ln283_33_fu_8141_p2() {
    add_ln283_33_fu_8141_p2 = (!add_ln283_97_fu_8136_p2.read().is_01() || !reg_5737.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_97_fu_8136_p2.read()) + sc_biguint<32>(reg_5737.read()));
}

void sha256_transform::thread_add_ln283_34_fu_8176_p2() {
    add_ln283_34_fu_8176_p2 = (!add_ln283_98_fu_8170_p2.read().is_01() || !reg_5737.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_98_fu_8170_p2.read()) + sc_biguint<32>(reg_5737.read()));
}

void sha256_transform::thread_add_ln283_35_fu_8221_p2() {
    add_ln283_35_fu_8221_p2 = (!add_ln283_99_fu_8216_p2.read().is_01() || !reg_5773.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_99_fu_8216_p2.read()) + sc_biguint<32>(reg_5773.read()));
}

void sha256_transform::thread_add_ln283_36_fu_8256_p2() {
    add_ln283_36_fu_8256_p2 = (!add_ln283_100_fu_8250_p2.read().is_01() || !reg_5773.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_100_fu_8250_p2.read()) + sc_biguint<32>(reg_5773.read()));
}

void sha256_transform::thread_add_ln283_37_fu_8301_p2() {
    add_ln283_37_fu_8301_p2 = (!add_ln283_101_fu_8296_p2.read().is_01() || !reg_5785.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_101_fu_8296_p2.read()) + sc_biguint<32>(reg_5785.read()));
}

void sha256_transform::thread_add_ln283_38_fu_8336_p2() {
    add_ln283_38_fu_8336_p2 = (!add_ln283_102_fu_8330_p2.read().is_01() || !reg_5793.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_102_fu_8330_p2.read()) + sc_biguint<32>(reg_5793.read()));
}

void sha256_transform::thread_add_ln283_39_fu_8381_p2() {
    add_ln283_39_fu_8381_p2 = (!add_ln283_103_fu_8376_p2.read().is_01() || !reg_5785.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_103_fu_8376_p2.read()) + sc_biguint<32>(reg_5785.read()));
}

void sha256_transform::thread_add_ln283_3_fu_6286_p2() {
    add_ln283_3_fu_6286_p2 = (!add_ln283_67_fu_6281_p2.read().is_01() || !reg_5633.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_67_fu_6281_p2.read()) + sc_biguint<32>(reg_5633.read()));
}

void sha256_transform::thread_add_ln283_40_fu_8416_p2() {
    add_ln283_40_fu_8416_p2 = (!add_ln283_104_fu_8410_p2.read().is_01() || !reg_5773.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_104_fu_8410_p2.read()) + sc_biguint<32>(reg_5773.read()));
}

void sha256_transform::thread_add_ln283_41_fu_8461_p2() {
    add_ln283_41_fu_8461_p2 = (!add_ln283_105_fu_8456_p2.read().is_01() || !reg_5785.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_105_fu_8456_p2.read()) + sc_biguint<32>(reg_5785.read()));
}

void sha256_transform::thread_add_ln283_42_fu_8496_p2() {
    add_ln283_42_fu_8496_p2 = (!add_ln283_106_fu_8490_p2.read().is_01() || !reg_5773.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_106_fu_8490_p2.read()) + sc_biguint<32>(reg_5773.read()));
}

void sha256_transform::thread_add_ln283_43_fu_8541_p2() {
    add_ln283_43_fu_8541_p2 = (!add_ln283_107_fu_8536_p2.read().is_01() || !tmp_4_42_reg_11208.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_107_fu_8536_p2.read()) + sc_biguint<32>(tmp_4_42_reg_11208.read()));
}

void sha256_transform::thread_add_ln283_44_fu_8575_p2() {
    add_ln283_44_fu_8575_p2 = (!add_ln283_108_fu_8569_p2.read().is_01() || !reg_5773.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_108_fu_8569_p2.read()) + sc_biguint<32>(reg_5773.read()));
}

void sha256_transform::thread_add_ln283_45_fu_8620_p2() {
    add_ln283_45_fu_8620_p2 = (!add_ln283_109_fu_8615_p2.read().is_01() || !reg_5737.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_109_fu_8615_p2.read()) + sc_biguint<32>(reg_5737.read()));
}

void sha256_transform::thread_add_ln283_46_fu_8655_p2() {
    add_ln283_46_fu_8655_p2 = (!add_ln283_110_fu_8649_p2.read().is_01() || !reg_5773.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_110_fu_8649_p2.read()) + sc_biguint<32>(reg_5773.read()));
}

void sha256_transform::thread_add_ln283_47_fu_8715_p2() {
    add_ln283_47_fu_8715_p2 = (!add_ln283_111_fu_8710_p2.read().is_01() || !reg_5809.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_111_fu_8710_p2.read()) + sc_biguint<32>(reg_5809.read()));
}

void sha256_transform::thread_add_ln283_48_fu_8750_p2() {
    add_ln283_48_fu_8750_p2 = (!add_ln283_112_fu_8744_p2.read().is_01() || !reg_5809.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_112_fu_8744_p2.read()) + sc_biguint<32>(reg_5809.read()));
}

void sha256_transform::thread_add_ln283_49_fu_8795_p2() {
    add_ln283_49_fu_8795_p2 = (!add_ln283_113_fu_8790_p2.read().is_01() || !reg_5793.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_113_fu_8790_p2.read()) + sc_biguint<32>(reg_5793.read()));
}

void sha256_transform::thread_add_ln283_4_fu_6353_p2() {
    add_ln283_4_fu_6353_p2 = (!add_ln283_68_fu_6347_p2.read().is_01() || !reg_5633.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_68_fu_6347_p2.read()) + sc_biguint<32>(reg_5633.read()));
}

void sha256_transform::thread_add_ln283_50_fu_8830_p2() {
    add_ln283_50_fu_8830_p2 = (!add_ln283_114_fu_8824_p2.read().is_01() || !reg_5793.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_114_fu_8824_p2.read()) + sc_biguint<32>(reg_5793.read()));
}

void sha256_transform::thread_add_ln283_51_fu_8875_p2() {
    add_ln283_51_fu_8875_p2 = (!add_ln283_115_fu_8870_p2.read().is_01() || !reg_5829.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_115_fu_8870_p2.read()) + sc_biguint<32>(reg_5829.read()));
}

void sha256_transform::thread_add_ln283_52_fu_8910_p2() {
    add_ln283_52_fu_8910_p2 = (!add_ln283_116_fu_8904_p2.read().is_01() || !reg_5829.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_116_fu_8904_p2.read()) + sc_biguint<32>(reg_5829.read()));
}

void sha256_transform::thread_add_ln283_53_fu_8955_p2() {
    add_ln283_53_fu_8955_p2 = (!add_ln283_117_fu_8950_p2.read().is_01() || !reg_5841.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_117_fu_8950_p2.read()) + sc_biguint<32>(reg_5841.read()));
}

void sha256_transform::thread_add_ln283_54_fu_8990_p2() {
    add_ln283_54_fu_8990_p2 = (!add_ln283_118_fu_8984_p2.read().is_01() || !reg_5793.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_118_fu_8984_p2.read()) + sc_biguint<32>(reg_5793.read()));
}

void sha256_transform::thread_add_ln283_55_fu_9029_p2() {
    add_ln283_55_fu_9029_p2 = (!add_ln283_119_fu_9023_p2.read().is_01() || !reg_5841.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_119_fu_9023_p2.read()) + sc_biguint<32>(reg_5841.read()));
}

void sha256_transform::thread_add_ln283_56_fu_9074_p2() {
    add_ln283_56_fu_9074_p2 = (!add_ln283_120_fu_9069_p2.read().is_01() || !reg_5829.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_120_fu_9069_p2.read()) + sc_biguint<32>(reg_5829.read()));
}

void sha256_transform::thread_add_ln283_57_fu_9108_p2() {
    add_ln283_57_fu_9108_p2 = (!add_ln283_121_fu_9102_p2.read().is_01() || !reg_5849.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_121_fu_9102_p2.read()) + sc_biguint<32>(reg_5849.read()));
}

void sha256_transform::thread_add_ln283_58_fu_9147_p2() {
    add_ln283_58_fu_9147_p2 = (!add_ln283_122_fu_9141_p2.read().is_01() || !reg_5829.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_122_fu_9141_p2.read()) + sc_biguint<32>(reg_5829.read()));
}

void sha256_transform::thread_add_ln283_59_fu_9186_p2() {
    add_ln283_59_fu_9186_p2 = (!add_ln283_123_fu_9180_p2.read().is_01() || !reg_5793.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_123_fu_9180_p2.read()) + sc_biguint<32>(reg_5793.read()));
}

void sha256_transform::thread_add_ln283_5_fu_6460_p2() {
    add_ln283_5_fu_6460_p2 = (!add_ln283_69_fu_6455_p2.read().is_01() || !reg_5653.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_69_fu_6455_p2.read()) + sc_biguint<32>(reg_5653.read()));
}

void sha256_transform::thread_add_ln283_60_fu_9225_p2() {
    add_ln283_60_fu_9225_p2 = (!add_ln283_124_fu_9219_p2.read().is_01() || !reg_5793.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_124_fu_9219_p2.read()) + sc_biguint<32>(reg_5793.read()));
}

void sha256_transform::thread_add_ln283_61_fu_9270_p2() {
    add_ln283_61_fu_9270_p2 = (!add_ln283_125_fu_9264_p2.read().is_01() || !reg_5829.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_125_fu_9264_p2.read()) + sc_biguint<32>(reg_5829.read()));
}

void sha256_transform::thread_add_ln283_62_fu_9303_p2() {
    add_ln283_62_fu_9303_p2 = (!add_ln283_126_fu_9297_p2.read().is_01() || !reg_5849.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_126_fu_9297_p2.read()) + sc_biguint<32>(reg_5849.read()));
}

void sha256_transform::thread_add_ln283_63_fu_9355_p2() {
    add_ln283_63_fu_9355_p2 = (!add_ln283_127_fu_9349_p2.read().is_01() || !reg_5829.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_127_fu_9349_p2.read()) + sc_biguint<32>(reg_5829.read()));
}

void sha256_transform::thread_add_ln283_64_fu_5939_p2() {
    add_ln283_64_fu_5939_p2 = (!add_ln273_3_fu_5934_p2.read().is_01() || !reg_5621.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_3_fu_5934_p2.read()) + sc_biguint<32>(reg_5621.read()));
}

void sha256_transform::thread_add_ln283_65_fu_6060_p2() {
    add_ln283_65_fu_6060_p2 = (!add_ln273_7_reg_9790.read().is_01() || !reg_5621.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_7_reg_9790.read()) + sc_biguint<32>(reg_5621.read()));
}

void sha256_transform::thread_add_ln283_66_fu_6145_p2() {
    add_ln283_66_fu_6145_p2 = (!add_ln273_11_fu_6140_p2.read().is_01() || !reg_5621.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_11_fu_6140_p2.read()) + sc_biguint<32>(reg_5621.read()));
}

void sha256_transform::thread_add_ln283_67_fu_6281_p2() {
    add_ln283_67_fu_6281_p2 = (!add_ln273_15_reg_10065.read().is_01() || !reg_5637.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_15_reg_10065.read()) + sc_biguint<32>(reg_5637.read()));
}

void sha256_transform::thread_add_ln283_68_fu_6347_p2() {
    add_ln283_68_fu_6347_p2 = (!add_ln273_19_fu_6342_p2.read().is_01() || !reg_5649.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_19_fu_6342_p2.read()) + sc_biguint<32>(reg_5649.read()));
}

void sha256_transform::thread_add_ln283_69_fu_6455_p2() {
    add_ln283_69_fu_6455_p2 = (!add_ln273_23_reg_10191.read().is_01() || !reg_5637.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_23_reg_10191.read()) + sc_biguint<32>(reg_5637.read()));
}

void sha256_transform::thread_add_ln283_6_fu_6535_p2() {
    add_ln283_6_fu_6535_p2 = (!add_ln283_70_fu_6529_p2.read().is_01() || !reg_5661.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_70_fu_6529_p2.read()) + sc_biguint<32>(reg_5661.read()));
}

void sha256_transform::thread_add_ln283_70_fu_6529_p2() {
    add_ln283_70_fu_6529_p2 = (!add_ln273_27_fu_6524_p2.read().is_01() || !reg_5649.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_27_fu_6524_p2.read()) + sc_biguint<32>(reg_5649.read()));
}

void sha256_transform::thread_add_ln283_71_fu_6637_p2() {
    add_ln283_71_fu_6637_p2 = (!add_ln273_31_reg_10321.read().is_01() || !reg_5637.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_31_reg_10321.read()) + sc_biguint<32>(reg_5637.read()));
}

void sha256_transform::thread_add_ln283_72_fu_6723_p2() {
    add_ln283_72_fu_6723_p2 = (!add_ln273_35_fu_6718_p2.read().is_01() || !reg_5649.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_35_fu_6718_p2.read()) + sc_biguint<32>(reg_5649.read()));
}

void sha256_transform::thread_add_ln283_73_fu_6831_p2() {
    add_ln283_73_fu_6831_p2 = (!add_ln273_39_reg_10453.read().is_01() || !reg_5665.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_39_reg_10453.read()) + sc_biguint<32>(reg_5665.read()));
}

void sha256_transform::thread_add_ln283_74_fu_6897_p2() {
    add_ln283_74_fu_6897_p2 = (!add_ln273_43_fu_6892_p2.read().is_01() || !reg_5677.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_43_fu_6892_p2.read()) + sc_biguint<32>(reg_5677.read()));
}

void sha256_transform::thread_add_ln283_75_fu_7005_p2() {
    add_ln283_75_fu_7005_p2 = (!add_ln273_47_reg_10579.read().is_01() || !reg_5665.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_47_reg_10579.read()) + sc_biguint<32>(reg_5665.read()));
}

void sha256_transform::thread_add_ln283_76_fu_7079_p2() {
    add_ln283_76_fu_7079_p2 = (!add_ln273_51_fu_7074_p2.read().is_01() || !reg_5677.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_51_fu_7074_p2.read()) + sc_biguint<32>(reg_5677.read()));
}

void sha256_transform::thread_add_ln283_77_fu_7185_p2() {
    add_ln283_77_fu_7185_p2 = (!add_ln273_55_reg_10703.read().is_01() || !reg_5665.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_55_reg_10703.read()) + sc_biguint<32>(reg_5665.read()));
}

void sha256_transform::thread_add_ln283_78_fu_7269_p2() {
    add_ln283_78_fu_7269_p2 = (!add_ln273_59_fu_7264_p2.read().is_01() || !reg_5693.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_59_fu_7264_p2.read()) + sc_biguint<32>(reg_5693.read()));
}

void sha256_transform::thread_add_ln283_79_fu_7355_p2() {
    add_ln283_79_fu_7355_p2 = (!add_ln273_63_reg_10786.read().is_01() || !reg_5693.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_63_reg_10786.read()) + sc_biguint<32>(reg_5693.read()));
}

void sha256_transform::thread_add_ln283_7_fu_6642_p2() {
    add_ln283_7_fu_6642_p2 = (!add_ln283_71_fu_6637_p2.read().is_01() || !reg_5653.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_71_fu_6637_p2.read()) + sc_biguint<32>(reg_5653.read()));
}

void sha256_transform::thread_add_ln283_80_fu_7417_p2() {
    add_ln283_80_fu_7417_p2 = (!add_ln273_67_fu_7412_p2.read().is_01() || !reg_5701.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_67_fu_7412_p2.read()) + sc_biguint<32>(reg_5701.read()));
}

void sha256_transform::thread_add_ln283_81_fu_7482_p2() {
    add_ln283_81_fu_7482_p2 = (!add_ln273_71_reg_10850.read().is_01() || !reg_5701.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_71_reg_10850.read()) + sc_biguint<32>(reg_5701.read()));
}

void sha256_transform::thread_add_ln283_82_fu_7531_p2() {
    add_ln283_82_fu_7531_p2 = (!add_ln273_75_fu_7526_p2.read().is_01() || !reg_5701.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_75_fu_7526_p2.read()) + sc_biguint<32>(reg_5701.read()));
}

void sha256_transform::thread_add_ln283_83_fu_7577_p2() {
    add_ln283_83_fu_7577_p2 = (!add_ln273_79_reg_10891.read().is_01() || !reg_5721.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_79_reg_10891.read()) + sc_biguint<32>(reg_5721.read()));
}

void sha256_transform::thread_add_ln283_84_fu_7611_p2() {
    add_ln283_84_fu_7611_p2 = (!add_ln273_83_fu_7606_p2.read().is_01() || !reg_5725.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_83_fu_7606_p2.read()) + sc_biguint<32>(reg_5725.read()));
}

void sha256_transform::thread_add_ln283_85_fu_7657_p2() {
    add_ln283_85_fu_7657_p2 = (!add_ln273_87_reg_10917.read().is_01() || !reg_5721.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_87_reg_10917.read()) + sc_biguint<32>(reg_5721.read()));
}

void sha256_transform::thread_add_ln283_86_fu_7691_p2() {
    add_ln283_86_fu_7691_p2 = (!add_ln273_91_fu_7686_p2.read().is_01() || !reg_5725.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_91_fu_7686_p2.read()) + sc_biguint<32>(reg_5725.read()));
}

void sha256_transform::thread_add_ln283_87_fu_7737_p2() {
    add_ln283_87_fu_7737_p2 = (!add_ln273_95_reg_10943.read().is_01() || !reg_5721.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_95_reg_10943.read()) + sc_biguint<32>(reg_5721.read()));
}

void sha256_transform::thread_add_ln283_88_fu_7771_p2() {
    add_ln283_88_fu_7771_p2 = (!add_ln273_99_fu_7766_p2.read().is_01() || !reg_5725.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_99_fu_7766_p2.read()) + sc_biguint<32>(reg_5725.read()));
}

void sha256_transform::thread_add_ln283_89_fu_7817_p2() {
    add_ln283_89_fu_7817_p2 = (!add_ln273_103_reg_10969.read().is_01() || !reg_5741.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_103_reg_10969.read()) + sc_biguint<32>(reg_5741.read()));
}

void sha256_transform::thread_add_ln283_8_fu_6729_p2() {
    add_ln283_8_fu_6729_p2 = (!add_ln283_72_fu_6723_p2.read().is_01() || !reg_5633.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_72_fu_6723_p2.read()) + sc_biguint<32>(reg_5633.read()));
}

void sha256_transform::thread_add_ln283_90_fu_7851_p2() {
    add_ln283_90_fu_7851_p2 = (!add_ln273_107_fu_7846_p2.read().is_01() || !reg_5745.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_107_fu_7846_p2.read()) + sc_biguint<32>(reg_5745.read()));
}

void sha256_transform::thread_add_ln283_91_fu_7897_p2() {
    add_ln283_91_fu_7897_p2 = (!add_ln273_111_reg_11000.read().is_01() || !reg_5741.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_111_reg_11000.read()) + sc_biguint<32>(reg_5741.read()));
}

void sha256_transform::thread_add_ln283_92_fu_7930_p2() {
    add_ln283_92_fu_7930_p2 = (!add_ln273_115_fu_7925_p2.read().is_01() || !reg_5745.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_115_fu_7925_p2.read()) + sc_biguint<32>(reg_5745.read()));
}

void sha256_transform::thread_add_ln283_93_fu_7976_p2() {
    add_ln283_93_fu_7976_p2 = (!add_ln273_119_reg_11026.read().is_01() || !reg_5741.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_119_reg_11026.read()) + sc_biguint<32>(reg_5741.read()));
}

void sha256_transform::thread_add_ln283_94_fu_8010_p2() {
    add_ln283_94_fu_8010_p2 = (!add_ln273_123_fu_8005_p2.read().is_01() || !reg_5749.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_123_fu_8005_p2.read()) + sc_biguint<32>(reg_5749.read()));
}

void sha256_transform::thread_add_ln283_95_fu_8056_p2() {
    add_ln283_95_fu_8056_p2 = (!add_ln273_127_reg_11052.read().is_01() || !reg_5749.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_127_reg_11052.read()) + sc_biguint<32>(reg_5749.read()));
}

void sha256_transform::thread_add_ln283_96_fu_8090_p2() {
    add_ln283_96_fu_8090_p2 = (!add_ln273_131_fu_8085_p2.read().is_01() || !reg_5757.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_131_fu_8085_p2.read()) + sc_biguint<32>(reg_5757.read()));
}

void sha256_transform::thread_add_ln283_97_fu_8136_p2() {
    add_ln283_97_fu_8136_p2 = (!add_ln273_135_reg_11078.read().is_01() || !reg_5757.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_135_reg_11078.read()) + sc_biguint<32>(reg_5757.read()));
}

void sha256_transform::thread_add_ln283_98_fu_8170_p2() {
    add_ln283_98_fu_8170_p2 = (!add_ln273_139_fu_8165_p2.read().is_01() || !reg_5757.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_139_fu_8165_p2.read()) + sc_biguint<32>(reg_5757.read()));
}

void sha256_transform::thread_add_ln283_99_fu_8216_p2() {
    add_ln283_99_fu_8216_p2 = (!add_ln273_143_reg_11104.read().is_01() || !reg_5777.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln273_143_reg_11104.read()) + sc_biguint<32>(reg_5777.read()));
}

void sha256_transform::thread_add_ln283_9_fu_6836_p2() {
    add_ln283_9_fu_6836_p2 = (!add_ln283_73_fu_6831_p2.read().is_01() || !reg_5653.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_73_fu_6831_p2.read()) + sc_biguint<32>(reg_5653.read()));
}

void sha256_transform::thread_add_ln283_fu_5945_p2() {
    add_ln283_fu_5945_p2 = (!add_ln283_64_fu_5939_p2.read().is_01() || !reg_5617.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_64_fu_5939_p2.read()) + sc_biguint<32>(reg_5617.read()));
}

void sha256_transform::thread_add_ln308_fu_9367_p2() {
    add_ln308_fu_9367_p2 = (!ap_phi_mux_a_1_63_phi_fu_4751_p4.read().is_01() || !ctx_state_0_read_1_reg_9470_pp0_iter20_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_phi_mux_a_1_63_phi_fu_4751_p4.read()) + sc_biguint<32>(ctx_state_0_read_1_reg_9470_pp0_iter20_reg.read()));
}

void sha256_transform::thread_add_ln309_fu_9372_p2() {
    add_ln309_fu_9372_p2 = (!ap_phi_mux_b_1_63_phi_fu_4739_p4.read().is_01() || !ctx_state_1_read_1_reg_9464_pp0_iter20_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_phi_mux_b_1_63_phi_fu_4739_p4.read()) + sc_biguint<32>(ctx_state_1_read_1_reg_9464_pp0_iter20_reg.read()));
}

void sha256_transform::thread_add_ln310_fu_9377_p2() {
    add_ln310_fu_9377_p2 = (!ap_phi_mux_c_1_63_phi_fu_4727_p4.read().is_01() || !ctx_state_2_read_1_reg_9456_pp0_iter20_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_phi_mux_c_1_63_phi_fu_4727_p4.read()) + sc_biguint<32>(ctx_state_2_read_1_reg_9456_pp0_iter20_reg.read()));
}

void sha256_transform::thread_add_ln311_fu_9325_p2() {
    add_ln311_fu_9325_p2 = (!ap_phi_reg_pp0_iter20_c_1_62_reg_4665.read().is_01() || !ctx_state_3_read_1_reg_9586_pp0_iter19_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_phi_reg_pp0_iter20_c_1_62_reg_4665.read()) + sc_biguint<32>(ctx_state_3_read_1_reg_9586_pp0_iter19_reg.read()));
}

void sha256_transform::thread_add_ln312_fu_9382_p2() {
    add_ln312_fu_9382_p2 = (!ap_phi_mux_e_1_63_phi_fu_4716_p4.read().is_01() || !ctx_state_4_read_1_reg_9450_pp0_iter20_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_phi_mux_e_1_63_phi_fu_4716_p4.read()) + sc_biguint<32>(ctx_state_4_read_1_reg_9450_pp0_iter20_reg.read()));
}

void sha256_transform::thread_add_ln313_fu_9387_p2() {
    add_ln313_fu_9387_p2 = (!ap_phi_mux_f_1_63_phi_fu_4705_p4.read().is_01() || !ctx_state_5_read_1_reg_9443_pp0_iter20_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_phi_mux_f_1_63_phi_fu_4705_p4.read()) + sc_biguint<32>(ctx_state_5_read_1_reg_9443_pp0_iter20_reg.read()));
}

void sha256_transform::thread_add_ln314_fu_9330_p2() {
    add_ln314_fu_9330_p2 = (!ap_phi_reg_pp0_iter20_f_1_62_reg_4643.read().is_01() || !ctx_state_6_read_1_reg_9437_pp0_iter20_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_phi_reg_pp0_iter20_f_1_62_reg_4643.read()) + sc_biguint<32>(ctx_state_6_read_1_reg_9437_pp0_iter20_reg.read()));
}

void sha256_transform::thread_add_ln315_fu_9335_p2() {
    add_ln315_fu_9335_p2 = (!f_1_61_reg_4582.read().is_01() || !ctx_state_7_read_1_reg_9581_pp0_iter19_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(f_1_61_reg_4582.read()) + sc_biguint<32>(ctx_state_7_read_1_reg_9581_pp0_iter19_reg.read()));
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

void sha256_transform::thread_ap_block_state133_pp0_stage4_iter16() {
    ap_block_state133_pp0_stage4_iter16 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state134_pp0_stage5_iter16() {
    ap_block_state134_pp0_stage5_iter16 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state135_pp0_stage6_iter16() {
    ap_block_state135_pp0_stage6_iter16 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state136_pp0_stage7_iter16() {
    ap_block_state136_pp0_stage7_iter16 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state137_pp0_stage0_iter17() {
    ap_block_state137_pp0_stage0_iter17 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state138_pp0_stage1_iter17() {
    ap_block_state138_pp0_stage1_iter17 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state139_pp0_stage2_iter17() {
    ap_block_state139_pp0_stage2_iter17 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state13_pp0_stage4_iter1() {
    ap_block_state13_pp0_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state140_pp0_stage3_iter17() {
    ap_block_state140_pp0_stage3_iter17 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state141_pp0_stage4_iter17() {
    ap_block_state141_pp0_stage4_iter17 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state142_pp0_stage5_iter17() {
    ap_block_state142_pp0_stage5_iter17 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state143_pp0_stage6_iter17() {
    ap_block_state143_pp0_stage6_iter17 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state144_pp0_stage7_iter17() {
    ap_block_state144_pp0_stage7_iter17 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state145_pp0_stage0_iter18() {
    ap_block_state145_pp0_stage0_iter18 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state146_pp0_stage1_iter18() {
    ap_block_state146_pp0_stage1_iter18 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state147_pp0_stage2_iter18() {
    ap_block_state147_pp0_stage2_iter18 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state148_pp0_stage3_iter18() {
    ap_block_state148_pp0_stage3_iter18 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state149_pp0_stage4_iter18() {
    ap_block_state149_pp0_stage4_iter18 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state14_pp0_stage5_iter1() {
    ap_block_state14_pp0_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state150_pp0_stage5_iter18() {
    ap_block_state150_pp0_stage5_iter18 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state151_pp0_stage6_iter18() {
    ap_block_state151_pp0_stage6_iter18 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state152_pp0_stage7_iter18() {
    ap_block_state152_pp0_stage7_iter18 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state153_pp0_stage0_iter19() {
    ap_block_state153_pp0_stage0_iter19 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state154_pp0_stage1_iter19() {
    ap_block_state154_pp0_stage1_iter19 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state155_pp0_stage2_iter19() {
    ap_block_state155_pp0_stage2_iter19 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state156_pp0_stage3_iter19() {
    ap_block_state156_pp0_stage3_iter19 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state157_pp0_stage4_iter19() {
    ap_block_state157_pp0_stage4_iter19 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state158_pp0_stage5_iter19() {
    ap_block_state158_pp0_stage5_iter19 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state159_pp0_stage6_iter19() {
    ap_block_state159_pp0_stage6_iter19 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state15_pp0_stage6_iter1() {
    ap_block_state15_pp0_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state160_pp0_stage7_iter19() {
    ap_block_state160_pp0_stage7_iter19 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state161_pp0_stage0_iter20() {
    ap_block_state161_pp0_stage0_iter20 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state162_pp0_stage1_iter20() {
    ap_block_state162_pp0_stage1_iter20 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state163_pp0_stage2_iter20() {
    ap_block_state163_pp0_stage2_iter20 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state164_pp0_stage3_iter20() {
    ap_block_state164_pp0_stage3_iter20 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state165_pp0_stage4_iter20() {
    ap_block_state165_pp0_stage4_iter20 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
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

void sha256_transform::thread_ap_condition_1010() {
    ap_condition_1010 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0));
}

void sha256_transform::thread_ap_condition_1047() {
    ap_condition_1047 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0));
}

void sha256_transform::thread_ap_condition_10739() {
    ap_condition_10739 = (esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0));
}

void sha256_transform::thread_ap_condition_10742() {
    ap_condition_10742 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(trunc_ln269_reg_9516.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10747() {
    ap_condition_10747 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter9_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10750() {
    ap_condition_10750 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter10_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10753() {
    ap_condition_10753 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter10_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10757() {
    ap_condition_10757 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter9_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()));
}

void sha256_transform::thread_ap_condition_10760() {
    ap_condition_10760 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter10_reg.read()));
}

void sha256_transform::thread_ap_condition_10765() {
    ap_condition_10765 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter10_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10768() {
    ap_condition_10768 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter11_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10771() {
    ap_condition_10771 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter11_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10774() {
    ap_condition_10774 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter11_reg.read()));
}

void sha256_transform::thread_ap_condition_10779() {
    ap_condition_10779 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter12_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10782() {
    ap_condition_10782 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter12_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10785() {
    ap_condition_10785 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter12_reg.read()));
}

void sha256_transform::thread_ap_condition_10790() {
    ap_condition_10790 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter13_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10793() {
    ap_condition_10793 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter13_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10796() {
    ap_condition_10796 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter13_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10799() {
    ap_condition_10799 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter13_reg.read()));
}

void sha256_transform::thread_ap_condition_10802() {
    ap_condition_10802 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter12_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10805() {
    ap_condition_10805 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter13_reg.read()));
}

void sha256_transform::thread_ap_condition_10810() {
    ap_condition_10810 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter14_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10813() {
    ap_condition_10813 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter14_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10816() {
    ap_condition_10816 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter14_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10819() {
    ap_condition_10819 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter14_reg.read()));
}

void sha256_transform::thread_ap_condition_10824() {
    ap_condition_10824 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter14_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10827() {
    ap_condition_10827 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter15_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10830() {
    ap_condition_10830 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter15_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10834() {
    ap_condition_10834 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter14_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()));
}

void sha256_transform::thread_ap_condition_10837() {
    ap_condition_10837 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter15_reg.read()));
}

void sha256_transform::thread_ap_condition_10842() {
    ap_condition_10842 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter15_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10845() {
    ap_condition_10845 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter16_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10848() {
    ap_condition_10848 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter16_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10851() {
    ap_condition_10851 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter16_reg.read()));
}

void sha256_transform::thread_ap_condition_10856() {
    ap_condition_10856 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter17.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter17_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10859() {
    ap_condition_10859 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter17.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter17_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10862() {
    ap_condition_10862 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter17.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter17_reg.read()));
}

void sha256_transform::thread_ap_condition_10865() {
    ap_condition_10865 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter16_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10871() {
    ap_condition_10871 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter17_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter18.read()));
}

void sha256_transform::thread_ap_condition_10874() {
    ap_condition_10874 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter18.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter18_reg.read()));
}

void sha256_transform::thread_ap_condition_10877() {
    ap_condition_10877 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter18.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter18_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10880() {
    ap_condition_10880 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter18.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter18_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10883() {
    ap_condition_10883 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter18.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter18_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10886() {
    ap_condition_10886 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter18.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter18_reg.read()));
}

void sha256_transform::thread_ap_condition_10891() {
    ap_condition_10891 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter19.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter19_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10894() {
    ap_condition_10894 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter19.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter19_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10897() {
    ap_condition_10897 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter19.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter19_reg.read()));
}

void sha256_transform::thread_ap_condition_10900() {
    ap_condition_10900 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter19.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter19_reg.read()));
}

void sha256_transform::thread_ap_condition_10905() {
    ap_condition_10905 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10908() {
    ap_condition_10908 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter1_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10911() {
    ap_condition_10911 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter1_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10916() {
    ap_condition_10916 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter1_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0));
}

void sha256_transform::thread_ap_condition_10921() {
    ap_condition_10921 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter20_reg.read()));
}

void sha256_transform::thread_ap_condition_10924() {
    ap_condition_10924 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter19.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter19_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10929() {
    ap_condition_10929 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter2_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10932() {
    ap_condition_10932 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter2_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10937() {
    ap_condition_10937 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter2_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0));
}

void sha256_transform::thread_ap_condition_10942() {
    ap_condition_10942 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter3_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10945() {
    ap_condition_10945 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter3_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10948() {
    ap_condition_10948 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter3_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10953() {
    ap_condition_10953 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter3_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0));
}

void sha256_transform::thread_ap_condition_10957() {
    ap_condition_10957 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter3_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0));
}

void sha256_transform::thread_ap_condition_10960() {
    ap_condition_10960 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter2_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10965() {
    ap_condition_10965 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter4_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10968() {
    ap_condition_10968 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter4_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_1097() {
    ap_condition_1097 = (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0));
}

void sha256_transform::thread_ap_condition_10971() {
    ap_condition_10971 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter4_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10974() {
    ap_condition_10974 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter4_reg.read()));
}

void sha256_transform::thread_ap_condition_10979() {
    ap_condition_10979 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter4_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10982() {
    ap_condition_10982 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter5_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10985() {
    ap_condition_10985 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter5_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_10989() {
    ap_condition_10989 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter4_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()));
}

void sha256_transform::thread_ap_condition_10992() {
    ap_condition_10992 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter5_reg.read()));
}

void sha256_transform::thread_ap_condition_10997() {
    ap_condition_10997 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter5_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_11000() {
    ap_condition_11000 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter6_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_11003() {
    ap_condition_11003 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter6_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_11006() {
    ap_condition_11006 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter6_reg.read()));
}

void sha256_transform::thread_ap_condition_11011() {
    ap_condition_11011 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter7_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_11014() {
    ap_condition_11014 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter7_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_11017() {
    ap_condition_11017 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter7_reg.read()));
}

void sha256_transform::thread_ap_condition_11022() {
    ap_condition_11022 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter8_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_11025() {
    ap_condition_11025 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter8_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_11028() {
    ap_condition_11028 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter8_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_11031() {
    ap_condition_11031 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter8_reg.read()));
}

void sha256_transform::thread_ap_condition_11034() {
    ap_condition_11034 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter7_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_11037() {
    ap_condition_11037 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter8_reg.read()));
}

void sha256_transform::thread_ap_condition_1104() {
    ap_condition_1104 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()));
}

void sha256_transform::thread_ap_condition_11042() {
    ap_condition_11042 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter9_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_11045() {
    ap_condition_11045 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter9_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_11048() {
    ap_condition_11048 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && esl_seteq<1,1,1>(trunc_ln269_reg_9516_pp0_iter9_reg.read(), ap_const_lv1_0));
}

void sha256_transform::thread_ap_condition_11051() {
    ap_condition_11051 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter9_reg.read()));
}

void sha256_transform::thread_ap_condition_1108() {
    ap_condition_1108 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0));
}

void sha256_transform::thread_ap_condition_1129() {
    ap_condition_1129 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()));
}

void sha256_transform::thread_ap_condition_1163() {
    ap_condition_1163 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()));
}

void sha256_transform::thread_ap_condition_1164() {
    ap_condition_1164 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()));
}

void sha256_transform::thread_ap_condition_1173() {
    ap_condition_1173 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0));
}

void sha256_transform::thread_ap_condition_1179() {
    ap_condition_1179 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0));
}

void sha256_transform::thread_ap_condition_1193() {
    ap_condition_1193 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()));
}

void sha256_transform::thread_ap_condition_1204() {
    ap_condition_1204 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()));
}

void sha256_transform::thread_ap_condition_1212() {
    ap_condition_1212 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()));
}

void sha256_transform::thread_ap_condition_1218() {
    ap_condition_1218 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()));
}

void sha256_transform::thread_ap_condition_1219() {
    ap_condition_1219 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()));
}

void sha256_transform::thread_ap_condition_1225() {
    ap_condition_1225 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()));
}

void sha256_transform::thread_ap_condition_1233() {
    ap_condition_1233 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()));
}

void sha256_transform::thread_ap_condition_1255() {
    ap_condition_1255 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0));
}

void sha256_transform::thread_ap_condition_1262() {
    ap_condition_1262 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0));
}

void sha256_transform::thread_ap_condition_1272() {
    ap_condition_1272 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()));
}

void sha256_transform::thread_ap_condition_1280() {
    ap_condition_1280 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()));
}

void sha256_transform::thread_ap_condition_1289() {
    ap_condition_1289 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()));
}

void sha256_transform::thread_ap_condition_1294() {
    ap_condition_1294 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()));
}

void sha256_transform::thread_ap_condition_130() {
    ap_condition_130 = (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()));
}

void sha256_transform::thread_ap_condition_1308() {
    ap_condition_1308 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()));
}

void sha256_transform::thread_ap_condition_1312() {
    ap_condition_1312 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()));
}

void sha256_transform::thread_ap_condition_1333() {
    ap_condition_1333 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()));
}

void sha256_transform::thread_ap_condition_1360() {
    ap_condition_1360 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()));
}

void sha256_transform::thread_ap_condition_1363() {
    ap_condition_1363 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()));
}

void sha256_transform::thread_ap_condition_1364() {
    ap_condition_1364 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()));
}

void sha256_transform::thread_ap_condition_1369() {
    ap_condition_1369 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()));
}

void sha256_transform::thread_ap_condition_1383() {
    ap_condition_1383 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()));
}

void sha256_transform::thread_ap_condition_1394() {
    ap_condition_1394 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()));
}

void sha256_transform::thread_ap_condition_1402() {
    ap_condition_1402 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()));
}

void sha256_transform::thread_ap_condition_1408() {
    ap_condition_1408 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()));
}

void sha256_transform::thread_ap_condition_1409() {
    ap_condition_1409 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()));
}

void sha256_transform::thread_ap_condition_1415() {
    ap_condition_1415 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()));
}

void sha256_transform::thread_ap_condition_1423() {
    ap_condition_1423 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()));
}

void sha256_transform::thread_ap_condition_1437() {
    ap_condition_1437 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()));
}

void sha256_transform::thread_ap_condition_1441() {
    ap_condition_1441 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()));
}

void sha256_transform::thread_ap_condition_1447() {
    ap_condition_1447 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()));
}

void sha256_transform::thread_ap_condition_1456() {
    ap_condition_1456 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()));
}

void sha256_transform::thread_ap_condition_1461() {
    ap_condition_1461 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()));
}

void sha256_transform::thread_ap_condition_1475() {
    ap_condition_1475 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()));
}

void sha256_transform::thread_ap_condition_1479() {
    ap_condition_1479 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()));
}

void sha256_transform::thread_ap_condition_1500() {
    ap_condition_1500 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()));
}

void sha256_transform::thread_ap_condition_1527() {
    ap_condition_1527 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()));
}

void sha256_transform::thread_ap_condition_1530() {
    ap_condition_1530 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()));
}

void sha256_transform::thread_ap_condition_1531() {
    ap_condition_1531 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()));
}

void sha256_transform::thread_ap_condition_1536() {
    ap_condition_1536 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()));
}

void sha256_transform::thread_ap_condition_1550() {
    ap_condition_1550 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()));
}

void sha256_transform::thread_ap_condition_1561() {
    ap_condition_1561 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()));
}

void sha256_transform::thread_ap_condition_1581() {
    ap_condition_1581 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter18.read()));
}

void sha256_transform::thread_ap_condition_1606() {
    ap_condition_1606 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()));
}

void sha256_transform::thread_ap_condition_1610() {
    ap_condition_1610 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()));
}

void sha256_transform::thread_ap_condition_1616() {
    ap_condition_1616 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()));
}

void sha256_transform::thread_ap_condition_1625() {
    ap_condition_1625 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()));
}

void sha256_transform::thread_ap_condition_1630() {
    ap_condition_1630 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()));
}

void sha256_transform::thread_ap_condition_1640() {
    ap_condition_1640 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()));
}

void sha256_transform::thread_ap_condition_1644() {
    ap_condition_1644 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter17.read()));
}

void sha256_transform::thread_ap_condition_1687() {
    ap_condition_1687 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter17.read()));
}

void sha256_transform::thread_ap_condition_1691() {
    ap_condition_1691 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter19.read()));
}

void sha256_transform::thread_ap_condition_1692() {
    ap_condition_1692 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter19.read()));
}

void sha256_transform::thread_ap_condition_1699() {
    ap_condition_1699 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()));
}

void sha256_transform::thread_ap_condition_1702() {
    ap_condition_1702 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()));
}

void sha256_transform::thread_ap_condition_1703() {
    ap_condition_1703 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()));
}

void sha256_transform::thread_ap_condition_1716() {
    ap_condition_1716 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter18.read()));
}

void sha256_transform::thread_ap_condition_1720() {
    ap_condition_1720 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter19.read()));
}

void sha256_transform::thread_ap_condition_1725() {
    ap_condition_1725 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter19.read()));
}

void sha256_transform::thread_ap_condition_4145() {
    ap_condition_4145 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()));
}

void sha256_transform::thread_ap_condition_4820() {
    ap_condition_4820 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()));
}

void sha256_transform::thread_ap_condition_5017() {
    ap_condition_5017 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()));
}

void sha256_transform::thread_ap_condition_6017() {
    ap_condition_6017 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()));
}

void sha256_transform::thread_ap_condition_6289() {
    ap_condition_6289 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()));
}

void sha256_transform::thread_ap_condition_6872() {
    ap_condition_6872 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter17.read()));
}

void sha256_transform::thread_ap_condition_895() {
    ap_condition_895 = (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0));
}

void sha256_transform::thread_ap_condition_931() {
    ap_condition_931 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0));
}

void sha256_transform::thread_ap_condition_968() {
    ap_condition_968 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0));
}

void sha256_transform::thread_ap_condition_974() {
    ap_condition_974 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()));
}

void sha256_transform::thread_ap_condition_975() {
    ap_condition_975 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage7_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()));
}

void sha256_transform::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read())))) {
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
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter17.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter18.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter19.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter20.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void sha256_transform::thread_ap_idle_pp0_0to19() {
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
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter17.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter18.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter19.read()))) {
        ap_idle_pp0_0to19 = ap_const_logic_1;
    } else {
        ap_idle_pp0_0to19 = ap_const_logic_0;
    }
}

void sha256_transform::thread_ap_idle_pp0_1to20() {
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
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter17.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter18.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter19.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter20.read()))) {
        ap_idle_pp0_1to20 = ap_const_logic_1;
    } else {
        ap_idle_pp0_1to20 = ap_const_logic_0;
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_0_phi_fu_916_p4() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_0_phi_fu_916_p4 = add_ln283_reg_9661.read();
    } else {
        ap_phi_mux_a_1_0_phi_fu_916_p4 = ap_const_lv32_0;
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_10_phi_fu_1524_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_10_phi_fu_1524_p4 = add_ln283_10_reg_10536.read();
    } else {
        ap_phi_mux_a_1_10_phi_fu_1524_p4 = ap_phi_reg_pp0_iter3_a_1_10_reg_1520.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_11_phi_fu_1562_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_11_phi_fu_1562_p4 = add_ln283_11_fu_7010_p2.read();
    } else {
        ap_phi_mux_a_1_11_phi_fu_1562_p4 = ap_phi_reg_pp0_iter3_a_1_11_reg_1558.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_12_phi_fu_1646_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_12_phi_fu_1646_p4 = add_ln283_12_reg_10662.read();
    } else {
        ap_phi_mux_a_1_12_phi_fu_1646_p4 = ap_phi_reg_pp0_iter4_a_1_12_reg_1642.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_13_phi_fu_1684_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_13_phi_fu_1684_p4 = add_ln283_13_fu_7190_p2.read();
    } else {
        ap_phi_mux_a_1_13_phi_fu_1684_p4 = ap_phi_reg_pp0_iter4_a_1_13_reg_1680.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_14_phi_fu_1768_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_14_phi_fu_1768_p4 = add_ln283_14_reg_10760.read();
    } else {
        ap_phi_mux_a_1_14_phi_fu_1768_p4 = ap_phi_reg_pp0_iter4_a_1_14_reg_1764.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_15_phi_fu_1806_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        ap_phi_mux_a_1_15_phi_fu_1806_p4 = add_ln283_15_fu_7360_p2.read();
    } else {
        ap_phi_mux_a_1_15_phi_fu_1806_p4 = ap_phi_reg_pp0_iter5_a_1_15_reg_1802.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_16_phi_fu_1890_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter5_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_16_phi_fu_1890_p4 = add_ln283_16_reg_10839.read();
    } else {
        ap_phi_mux_a_1_16_phi_fu_1890_p4 = ap_phi_reg_pp0_iter5_a_1_16_reg_1886.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_17_phi_fu_1928_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter5_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_17_phi_fu_1928_p4 = add_ln283_17_fu_7487_p2.read();
    } else {
        ap_phi_mux_a_1_17_phi_fu_1928_p4 = ap_phi_reg_pp0_iter5_a_1_17_reg_1924.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_18_phi_fu_2012_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter5_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()))) {
        ap_phi_mux_a_1_18_phi_fu_2012_p4 = add_ln283_18_reg_10886.read();
    } else {
        ap_phi_mux_a_1_18_phi_fu_2012_p4 = ap_phi_reg_pp0_iter6_a_1_18_reg_2008.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_19_phi_fu_2050_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_19_phi_fu_2050_p4 = add_ln283_19_fu_7582_p2.read();
    } else {
        ap_phi_mux_a_1_19_phi_fu_2050_p4 = ap_phi_reg_pp0_iter6_a_1_19_reg_2046.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_1_phi_fu_954_p4() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_1_phi_fu_954_p4 = add_ln283_1_fu_6065_p2.read();
    } else {
        ap_phi_mux_a_1_1_phi_fu_954_p4 = ap_const_lv32_0;
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_20_phi_fu_2134_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_20_phi_fu_2134_p4 = add_ln283_20_reg_10912.read();
    } else {
        ap_phi_mux_a_1_20_phi_fu_2134_p4 = ap_phi_reg_pp0_iter6_a_1_20_reg_2130.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_21_phi_fu_2172_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_21_phi_fu_2172_p4 = add_ln283_21_fu_7662_p2.read();
    } else {
        ap_phi_mux_a_1_21_phi_fu_2172_p4 = ap_phi_reg_pp0_iter6_a_1_21_reg_2168.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_22_phi_fu_2256_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_22_phi_fu_2256_p4 = add_ln283_22_reg_10938.read();
    } else {
        ap_phi_mux_a_1_22_phi_fu_2256_p4 = ap_phi_reg_pp0_iter7_a_1_22_reg_2252.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_23_phi_fu_2294_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_23_phi_fu_2294_p4 = add_ln283_23_fu_7742_p2.read();
    } else {
        ap_phi_mux_a_1_23_phi_fu_2294_p4 = ap_phi_reg_pp0_iter7_a_1_23_reg_2290.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_24_phi_fu_2378_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_24_phi_fu_2378_p4 = add_ln283_24_reg_10964.read();
    } else {
        ap_phi_mux_a_1_24_phi_fu_2378_p4 = ap_phi_reg_pp0_iter7_a_1_24_reg_2374.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_25_phi_fu_2416_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_25_phi_fu_2416_p4 = add_ln283_25_fu_7822_p2.read();
    } else {
        ap_phi_mux_a_1_25_phi_fu_2416_p4 = ap_phi_reg_pp0_iter8_a_1_25_reg_2412.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_26_phi_fu_2500_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_26_phi_fu_2500_p4 = add_ln283_26_reg_10990.read();
    } else {
        ap_phi_mux_a_1_26_phi_fu_2500_p4 = ap_phi_reg_pp0_iter8_a_1_26_reg_2496.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_27_phi_fu_2538_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_27_phi_fu_2538_p4 = add_ln283_27_fu_7902_p2.read();
    } else {
        ap_phi_mux_a_1_27_phi_fu_2538_p4 = ap_phi_reg_pp0_iter8_a_1_27_reg_2534.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_28_phi_fu_2622_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter9_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_28_phi_fu_2622_p4 = add_ln283_28_reg_11021.read();
    } else {
        ap_phi_mux_a_1_28_phi_fu_2622_p4 = ap_phi_reg_pp0_iter9_a_1_28_reg_2618.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_29_phi_fu_2660_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter9_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_29_phi_fu_2660_p4 = add_ln283_29_fu_7981_p2.read();
    } else {
        ap_phi_mux_a_1_29_phi_fu_2660_p4 = ap_phi_reg_pp0_iter9_a_1_29_reg_2656.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_2_phi_fu_1036_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        ap_phi_mux_a_1_2_phi_fu_1036_p4 = add_ln283_2_reg_10002.read();
    } else {
        ap_phi_mux_a_1_2_phi_fu_1036_p4 = ap_const_lv32_0;
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_30_phi_fu_2744_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter9_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_30_phi_fu_2744_p4 = add_ln283_30_reg_11047.read();
    } else {
        ap_phi_mux_a_1_30_phi_fu_2744_p4 = ap_phi_reg_pp0_iter9_a_1_30_reg_2740.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_31_phi_fu_2782_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter9_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ap_phi_mux_a_1_31_phi_fu_2782_p4 = add_ln283_31_fu_8061_p2.read();
    } else {
        ap_phi_mux_a_1_31_phi_fu_2782_p4 = ap_phi_reg_pp0_iter10_a_1_31_reg_2778.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_32_phi_fu_2866_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter10_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_32_phi_fu_2866_p4 = add_ln283_32_reg_11073.read();
    } else {
        ap_phi_mux_a_1_32_phi_fu_2866_p4 = ap_phi_reg_pp0_iter10_a_1_32_reg_2862.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_33_phi_fu_2904_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter10_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_33_phi_fu_2904_p4 = add_ln283_33_fu_8141_p2.read();
    } else {
        ap_phi_mux_a_1_33_phi_fu_2904_p4 = ap_phi_reg_pp0_iter10_a_1_33_reg_2900.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_34_phi_fu_2988_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter10_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ap_phi_mux_a_1_34_phi_fu_2988_p4 = add_ln283_34_reg_11099.read();
    } else {
        ap_phi_mux_a_1_34_phi_fu_2988_p4 = ap_phi_reg_pp0_iter11_a_1_34_reg_2984.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_35_phi_fu_3026_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter11_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_35_phi_fu_3026_p4 = add_ln283_35_fu_8221_p2.read();
    } else {
        ap_phi_mux_a_1_35_phi_fu_3026_p4 = ap_phi_reg_pp0_iter11_a_1_35_reg_3022.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_36_phi_fu_3110_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter11_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_36_phi_fu_3110_p4 = add_ln283_36_reg_11125.read();
    } else {
        ap_phi_mux_a_1_36_phi_fu_3110_p4 = ap_phi_reg_pp0_iter11_a_1_36_reg_3106.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_37_phi_fu_3148_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter11_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_37_phi_fu_3148_p4 = add_ln283_37_fu_8301_p2.read();
    } else {
        ap_phi_mux_a_1_37_phi_fu_3148_p4 = ap_phi_reg_pp0_iter11_a_1_37_reg_3144.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_38_phi_fu_3232_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter12_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_38_phi_fu_3232_p4 = add_ln283_38_reg_11151.read();
    } else {
        ap_phi_mux_a_1_38_phi_fu_3232_p4 = ap_phi_reg_pp0_iter12_a_1_38_reg_3228.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_39_phi_fu_3270_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter12_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_39_phi_fu_3270_p4 = add_ln283_39_fu_8381_p2.read();
    } else {
        ap_phi_mux_a_1_39_phi_fu_3270_p4 = ap_phi_reg_pp0_iter12_a_1_39_reg_3266.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_3_phi_fu_1074_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_3_phi_fu_1074_p4 = add_ln283_3_fu_6286_p2.read();
    } else {
        ap_phi_mux_a_1_3_phi_fu_1074_p4 = ap_phi_reg_pp0_iter1_a_1_3_reg_1070.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_40_phi_fu_3354_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter12_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_40_phi_fu_3354_p4 = add_ln283_40_reg_11177.read();
    } else {
        ap_phi_mux_a_1_40_phi_fu_3354_p4 = ap_phi_reg_pp0_iter12_a_1_40_reg_3350.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_41_phi_fu_3392_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter13_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_41_phi_fu_3392_p4 = add_ln283_41_fu_8461_p2.read();
    } else {
        ap_phi_mux_a_1_41_phi_fu_3392_p4 = ap_phi_reg_pp0_iter13_a_1_41_reg_3388.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_42_phi_fu_3476_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter13_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_42_phi_fu_3476_p4 = add_ln283_42_reg_11203.read();
    } else {
        ap_phi_mux_a_1_42_phi_fu_3476_p4 = ap_phi_reg_pp0_iter13_a_1_42_reg_3472.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_43_phi_fu_3514_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter13_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_43_phi_fu_3514_p4 = add_ln283_43_fu_8541_p2.read();
    } else {
        ap_phi_mux_a_1_43_phi_fu_3514_p4 = ap_phi_reg_pp0_iter13_a_1_43_reg_3510.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_44_phi_fu_3598_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter14_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_44_phi_fu_3598_p4 = add_ln283_44_reg_11234.read();
    } else {
        ap_phi_mux_a_1_44_phi_fu_3598_p4 = ap_phi_reg_pp0_iter14_a_1_44_reg_3594.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_45_phi_fu_3636_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter14_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_45_phi_fu_3636_p4 = add_ln283_45_fu_8620_p2.read();
    } else {
        ap_phi_mux_a_1_45_phi_fu_3636_p4 = ap_phi_reg_pp0_iter14_a_1_45_reg_3632.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_46_phi_fu_3720_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter14_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_46_phi_fu_3720_p4 = add_ln283_46_reg_11260.read();
    } else {
        ap_phi_mux_a_1_46_phi_fu_3720_p4 = ap_phi_reg_pp0_iter14_a_1_46_reg_3716.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_47_phi_fu_3758_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter14_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()))) {
        ap_phi_mux_a_1_47_phi_fu_3758_p4 = add_ln283_47_fu_8715_p2.read();
    } else {
        ap_phi_mux_a_1_47_phi_fu_3758_p4 = ap_phi_reg_pp0_iter15_a_1_47_reg_3754.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_48_phi_fu_3842_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter15_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_48_phi_fu_3842_p4 = add_ln283_48_reg_11291.read();
    } else {
        ap_phi_mux_a_1_48_phi_fu_3842_p4 = ap_phi_reg_pp0_iter15_a_1_48_reg_3838.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_49_phi_fu_3880_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter15_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_49_phi_fu_3880_p4 = add_ln283_49_fu_8795_p2.read();
    } else {
        ap_phi_mux_a_1_49_phi_fu_3880_p4 = ap_phi_reg_pp0_iter15_a_1_49_reg_3876.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_4_phi_fu_1158_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_4_phi_fu_1158_p4 = add_ln283_4_reg_10148.read();
    } else {
        ap_phi_mux_a_1_4_phi_fu_1158_p4 = ap_phi_reg_pp0_iter1_a_1_4_reg_1154.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_50_phi_fu_3964_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter15_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        ap_phi_mux_a_1_50_phi_fu_3964_p4 = add_ln283_50_reg_11317.read();
    } else {
        ap_phi_mux_a_1_50_phi_fu_3964_p4 = ap_phi_reg_pp0_iter16_a_1_50_reg_3960.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_51_phi_fu_4002_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter16_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_51_phi_fu_4002_p4 = add_ln283_51_fu_8875_p2.read();
    } else {
        ap_phi_mux_a_1_51_phi_fu_4002_p4 = ap_phi_reg_pp0_iter16_a_1_51_reg_3998.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_52_phi_fu_4086_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter16_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_52_phi_fu_4086_p4 = add_ln283_52_reg_11343.read();
    } else {
        ap_phi_mux_a_1_52_phi_fu_4086_p4 = ap_phi_reg_pp0_iter16_a_1_52_reg_4082.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_53_phi_fu_4124_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter16_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_53_phi_fu_4124_p4 = add_ln283_53_fu_8955_p2.read();
    } else {
        ap_phi_mux_a_1_53_phi_fu_4124_p4 = ap_phi_reg_pp0_iter16_a_1_53_reg_4120.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_54_phi_fu_4185_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter17.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter17_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_54_phi_fu_4185_p4 = add_ln283_54_reg_11369.read();
    } else {
        ap_phi_mux_a_1_54_phi_fu_4185_p4 = ap_phi_reg_pp0_iter17_a_1_54_reg_4181.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_55_phi_fu_4269_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter17.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter17_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_55_phi_fu_4269_p4 = add_ln283_55_reg_11389.read();
    } else {
        ap_phi_mux_a_1_55_phi_fu_4269_p4 = ap_phi_reg_pp0_iter17_a_1_55_reg_4265.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_58_phi_fu_4429_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter18.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter18_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_58_phi_fu_4429_p4 = add_ln283_58_reg_11440.read();
    } else {
        ap_phi_mux_a_1_58_phi_fu_4429_p4 = ap_phi_reg_pp0_iter18_a_1_58_reg_4425.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_59_phi_fu_4490_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter19.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter19_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_59_phi_fu_4490_p4 = add_ln283_59_reg_11460.read();
    } else {
        ap_phi_mux_a_1_59_phi_fu_4490_p4 = ap_phi_reg_pp0_iter19_a_1_59_reg_4486.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_5_phi_fu_1196_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_5_phi_fu_1196_p4 = add_ln283_5_fu_6460_p2.read();
    } else {
        ap_phi_mux_a_1_5_phi_fu_1196_p4 = ap_phi_reg_pp0_iter1_a_1_5_reg_1192.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_60_phi_fu_4551_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter19.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter19_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_60_phi_fu_4551_p4 = add_ln283_60_reg_11480.read();
    } else {
        ap_phi_mux_a_1_60_phi_fu_4551_p4 = ap_phi_reg_pp0_iter19_a_1_60_reg_4547.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_61_phi_fu_4635_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter19.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter19_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_61_phi_fu_4635_p4 = add_ln283_61_reg_11500.read();
    } else {
        ap_phi_mux_a_1_61_phi_fu_4635_p4 = ap_phi_reg_pp0_iter19_a_1_61_reg_4631.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_63_phi_fu_4751_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter20_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_63_phi_fu_4751_p4 = add_ln283_63_reg_11560.read();
    } else {
        ap_phi_mux_a_1_63_phi_fu_4751_p4 = ap_phi_reg_pp0_iter20_a_1_63_reg_4747.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_6_phi_fu_1280_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_6_phi_fu_1280_p4 = add_ln283_6_reg_10274.read();
    } else {
        ap_phi_mux_a_1_6_phi_fu_1280_p4 = ap_phi_reg_pp0_iter2_a_1_6_reg_1276.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_7_phi_fu_1318_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_7_phi_fu_1318_p4 = add_ln283_7_fu_6642_p2.read();
    } else {
        ap_phi_mux_a_1_7_phi_fu_1318_p4 = ap_phi_reg_pp0_iter2_a_1_7_reg_1314.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_8_phi_fu_1402_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_8_phi_fu_1402_p4 = add_ln283_8_reg_10404.read();
    } else {
        ap_phi_mux_a_1_8_phi_fu_1402_p4 = ap_phi_reg_pp0_iter2_a_1_8_reg_1398.read();
    }
}

void sha256_transform::thread_ap_phi_mux_a_1_9_phi_fu_1440_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_a_1_9_phi_fu_1440_p4 = add_ln283_9_fu_6836_p2.read();
    } else {
        ap_phi_mux_a_1_9_phi_fu_1440_p4 = ap_phi_reg_pp0_iter3_a_1_9_reg_1436.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_0_phi_fu_904_p4() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_0_phi_fu_904_p4 = ctx_state_0_read_1_reg_9470.read();
    } else {
        ap_phi_mux_b_1_0_phi_fu_904_p4 = ap_const_lv32_0;
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_10_phi_fu_1511_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_10_phi_fu_1511_p4 = a_1_9_reg_1436.read();
    } else {
        ap_phi_mux_b_1_10_phi_fu_1511_p4 = ap_phi_reg_pp0_iter3_b_1_10_reg_1507.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_11_phi_fu_1549_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_11_phi_fu_1549_p4 = a_1_10_reg_1520.read();
    } else {
        ap_phi_mux_b_1_11_phi_fu_1549_p4 = ap_phi_reg_pp0_iter3_b_1_11_reg_1545.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_12_phi_fu_1633_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_12_phi_fu_1633_p4 = a_1_11_reg_1558.read();
    } else {
        ap_phi_mux_b_1_12_phi_fu_1633_p4 = ap_phi_reg_pp0_iter4_b_1_12_reg_1629.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_13_phi_fu_1671_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_13_phi_fu_1671_p4 = a_1_12_reg_1642.read();
    } else {
        ap_phi_mux_b_1_13_phi_fu_1671_p4 = ap_phi_reg_pp0_iter4_b_1_13_reg_1667.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_14_phi_fu_1755_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_14_phi_fu_1755_p4 = a_1_13_reg_1680.read();
    } else {
        ap_phi_mux_b_1_14_phi_fu_1755_p4 = ap_phi_reg_pp0_iter4_b_1_14_reg_1751.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_15_phi_fu_1793_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        ap_phi_mux_b_1_15_phi_fu_1793_p4 = a_1_14_reg_1764.read();
    } else {
        ap_phi_mux_b_1_15_phi_fu_1793_p4 = ap_phi_reg_pp0_iter5_b_1_15_reg_1789.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_16_phi_fu_1877_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter5_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_16_phi_fu_1877_p4 = a_1_15_reg_1802.read();
    } else {
        ap_phi_mux_b_1_16_phi_fu_1877_p4 = ap_phi_reg_pp0_iter5_b_1_16_reg_1873.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_17_phi_fu_1915_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter5_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_17_phi_fu_1915_p4 = a_1_16_reg_1886.read();
    } else {
        ap_phi_mux_b_1_17_phi_fu_1915_p4 = ap_phi_reg_pp0_iter5_b_1_17_reg_1911.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_18_phi_fu_1999_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter5_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()))) {
        ap_phi_mux_b_1_18_phi_fu_1999_p4 = a_1_17_reg_1924.read();
    } else {
        ap_phi_mux_b_1_18_phi_fu_1999_p4 = ap_phi_reg_pp0_iter6_b_1_18_reg_1995.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_19_phi_fu_2037_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_19_phi_fu_2037_p4 = a_1_18_reg_2008.read();
    } else {
        ap_phi_mux_b_1_19_phi_fu_2037_p4 = ap_phi_reg_pp0_iter6_b_1_19_reg_2033.read();
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_1_phi_fu_941_p4() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_1_phi_fu_941_p4 = a_1_0_reg_912.read();
    } else {
        ap_phi_mux_b_1_1_phi_fu_941_p4 = ap_const_lv32_0;
    }
}

void sha256_transform::thread_ap_phi_mux_b_1_20_phi_fu_2121_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln269_reg_9516_pp0_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        ap_phi_mux_b_1_20_phi_fu_2121_p4 = a_1_19_reg_2046.read();
    } else {
        ap_phi_mux_b_1_20_phi_fu_2121_p4 = ap_phi_reg_pp0_iter6_b_1_20_reg_2117.read();
    }
}

}

