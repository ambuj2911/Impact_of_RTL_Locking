#include "sha256_transform.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void sha256_transform::thread_add_ln258_100_fu_2485_p2() {
    add_ln258_100_fu_2485_p2 = (!m_42_reg_6053.read().is_01() || !m_33_reg_5839.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_42_reg_6053.read()) + sc_biguint<32>(m_33_reg_5839.read()));
}

void sha256_transform::thread_add_ln258_102_fu_2558_p2() {
    add_ln258_102_fu_2558_p2 = (!reg_1264.read().is_01() || !tmp_1_33_reg_5900.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1264.read()) + sc_biguint<32>(tmp_1_33_reg_5900.read()));
}

void sha256_transform::thread_add_ln258_103_fu_2539_p2() {
    add_ln258_103_fu_2539_p2 = (!m_43_reg_6060.read().is_01() || !m_34_reg_5871.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_43_reg_6060.read()) + sc_biguint<32>(m_34_reg_5871.read()));
}

void sha256_transform::thread_add_ln258_105_fu_2569_p2() {
    add_ln258_105_fu_2569_p2 = (!reg_1268.read().is_01() || !tmp_1_34_reg_5947.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1268.read()) + sc_biguint<32>(tmp_1_34_reg_5947.read()));
}

void sha256_transform::thread_add_ln258_106_fu_2543_p2() {
    add_ln258_106_fu_2543_p2 = (!m_44_reg_6105.read().is_01() || !m_35_reg_5878.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_44_reg_6105.read()) + sc_biguint<32>(m_35_reg_5878.read()));
}

void sha256_transform::thread_add_ln258_108_fu_2615_p2() {
    add_ln258_108_fu_2615_p2 = (!reg_1264.read().is_01() || !tmp_1_35_reg_5952.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1264.read()) + sc_biguint<32>(tmp_1_35_reg_5952.read()));
}

void sha256_transform::thread_add_ln258_109_fu_2580_p2() {
    add_ln258_109_fu_2580_p2 = (!m_45_reg_6112.read().is_01() || !m_36_reg_5923.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_45_reg_6112.read()) + sc_biguint<32>(m_36_reg_5923.read()));
}

void sha256_transform::thread_add_ln258_10_fu_1731_p2() {
    add_ln258_10_fu_1731_p2 = (!m_12_reg_5332.read().is_01() || !m_3_reg_4961.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_12_reg_5332.read()) + sc_biguint<32>(m_3_reg_4961.read()));
}

void sha256_transform::thread_add_ln258_111_fu_2626_p2() {
    add_ln258_111_fu_2626_p2 = (!reg_1268.read().is_01() || !tmp_1_36_reg_5986.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1268.read()) + sc_biguint<32>(tmp_1_36_reg_5986.read()));
}

void sha256_transform::thread_add_ln258_112_fu_2584_p2() {
    add_ln258_112_fu_2584_p2 = (!m_46_reg_6144.read().is_01() || !m_37_reg_5930.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_46_reg_6144.read()) + sc_biguint<32>(m_37_reg_5930.read()));
}

void sha256_transform::thread_add_ln258_114_fu_2655_p2() {
    add_ln258_114_fu_2655_p2 = (!reg_1264.read().is_01() || !tmp_1_37_reg_5991.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1264.read()) + sc_biguint<32>(tmp_1_37_reg_5991.read()));
}

void sha256_transform::thread_add_ln258_115_fu_2637_p2() {
    add_ln258_115_fu_2637_p2 = (!m_47_reg_6151.read().is_01() || !m_38_reg_5962.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_47_reg_6151.read()) + sc_biguint<32>(m_38_reg_5962.read()));
}

void sha256_transform::thread_add_ln258_117_fu_2666_p2() {
    add_ln258_117_fu_2666_p2 = (!reg_1268.read().is_01() || !tmp_1_38_reg_6038.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1268.read()) + sc_biguint<32>(tmp_1_38_reg_6038.read()));
}

void sha256_transform::thread_add_ln258_118_fu_2641_p2() {
    add_ln258_118_fu_2641_p2 = (!m_48_reg_6196.read().is_01() || !m_39_reg_5969.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_48_reg_6196.read()) + sc_biguint<32>(m_39_reg_5969.read()));
}

void sha256_transform::thread_add_ln258_120_fu_2713_p2() {
    add_ln258_120_fu_2713_p2 = (!reg_1264.read().is_01() || !tmp_1_39_reg_6043.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1264.read()) + sc_biguint<32>(tmp_1_39_reg_6043.read()));
}

void sha256_transform::thread_add_ln258_121_fu_2677_p2() {
    add_ln258_121_fu_2677_p2 = (!m_49_reg_6202.read().is_01() || !m_40_reg_6014.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_49_reg_6202.read()) + sc_biguint<32>(m_40_reg_6014.read()));
}

void sha256_transform::thread_add_ln258_123_fu_2724_p2() {
    add_ln258_123_fu_2724_p2 = (!reg_1268.read().is_01() || !tmp_1_40_reg_6077.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1268.read()) + sc_biguint<32>(tmp_1_40_reg_6077.read()));
}

void sha256_transform::thread_add_ln258_124_fu_2681_p2() {
    add_ln258_124_fu_2681_p2 = (!m_50_reg_6228.read().is_01() || !m_41_reg_6021.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_50_reg_6228.read()) + sc_biguint<32>(m_41_reg_6021.read()));
}

void sha256_transform::thread_add_ln258_126_fu_2753_p2() {
    add_ln258_126_fu_2753_p2 = (!reg_1264.read().is_01() || !tmp_1_41_reg_6082.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1264.read()) + sc_biguint<32>(tmp_1_41_reg_6082.read()));
}

void sha256_transform::thread_add_ln258_127_fu_2735_p2() {
    add_ln258_127_fu_2735_p2 = (!m_51_reg_6234.read().is_01() || !m_42_reg_6053.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_51_reg_6234.read()) + sc_biguint<32>(m_42_reg_6053.read()));
}

void sha256_transform::thread_add_ln258_129_fu_2764_p2() {
    add_ln258_129_fu_2764_p2 = (!reg_1268.read().is_01() || !tmp_1_42_reg_6129.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1268.read()) + sc_biguint<32>(tmp_1_42_reg_6129.read()));
}

void sha256_transform::thread_add_ln258_12_fu_1802_p2() {
    add_ln258_12_fu_1802_p2 = (!reg_1224.read().is_01() || !tmp_1_4_reg_5092.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1224.read()) + sc_biguint<32>(tmp_1_4_reg_5092.read()));
}

void sha256_transform::thread_add_ln258_130_fu_2739_p2() {
    add_ln258_130_fu_2739_p2 = (!m_52_reg_6268.read().is_01() || !m_43_reg_6060.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_52_reg_6268.read()) + sc_biguint<32>(m_43_reg_6060.read()));
}

void sha256_transform::thread_add_ln258_132_fu_2811_p2() {
    add_ln258_132_fu_2811_p2 = (!reg_1264.read().is_01() || !tmp_1_43_reg_6134.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1264.read()) + sc_biguint<32>(tmp_1_43_reg_6134.read()));
}

void sha256_transform::thread_add_ln258_133_fu_2775_p2() {
    add_ln258_133_fu_2775_p2 = (!m_53_reg_6274.read().is_01() || !m_44_reg_6105.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_53_reg_6274.read()) + sc_biguint<32>(m_44_reg_6105.read()));
}

void sha256_transform::thread_add_ln258_135_fu_2822_p2() {
    add_ln258_135_fu_2822_p2 = (!reg_1268.read().is_01() || !tmp_1_44_reg_6168.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1268.read()) + sc_biguint<32>(tmp_1_44_reg_6168.read()));
}

void sha256_transform::thread_add_ln258_136_fu_2779_p2() {
    add_ln258_136_fu_2779_p2 = (!m_54_reg_6295.read().is_01() || !m_45_reg_6112.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_54_reg_6295.read()) + sc_biguint<32>(m_45_reg_6112.read()));
}

void sha256_transform::thread_add_ln258_13_fu_1770_p2() {
    add_ln258_13_fu_1770_p2 = (!m_13_reg_5339.read().is_01() || !m_4_reg_5035.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_13_reg_5339.read()) + sc_biguint<32>(m_4_reg_5035.read()));
}

void sha256_transform::thread_add_ln258_15_fu_1814_p2() {
    add_ln258_15_fu_1814_p2 = (!reg_1228.read().is_01() || !tmp_1_5_reg_5154.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1228.read()) + sc_biguint<32>(tmp_1_5_reg_5154.read()));
}

void sha256_transform::thread_add_ln258_16_fu_1774_p2() {
    add_ln258_16_fu_1774_p2 = (!m_14_reg_5401.read().is_01() || !m_5_reg_5041.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_14_reg_5401.read()) + sc_biguint<32>(m_5_reg_5041.read()));
}

void sha256_transform::thread_add_ln258_18_fu_1845_p2() {
    add_ln258_18_fu_1845_p2 = (!reg_1224.read().is_01() || !tmp_1_6_reg_5159.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1224.read()) + sc_biguint<32>(tmp_1_6_reg_5159.read()));
}

void sha256_transform::thread_add_ln258_19_fu_1826_p2() {
    add_ln258_19_fu_1826_p2 = (!m_15_reg_5408.read().is_01() || !m_6_reg_5102.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_15_reg_5408.read()) + sc_biguint<32>(m_6_reg_5102.read()));
}

void sha256_transform::thread_add_ln258_1_fu_1668_p2() {
    add_ln258_1_fu_1668_p2 = (!m_9_reg_5188.read().is_01() || !m_0_reg_4884.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_9_reg_5188.read()) + sc_biguint<32>(m_0_reg_4884.read()));
}

void sha256_transform::thread_add_ln258_21_fu_1857_p2() {
    add_ln258_21_fu_1857_p2 = (!reg_1228.read().is_01() || !tmp_1_7_reg_5235.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1228.read()) + sc_biguint<32>(tmp_1_7_reg_5235.read()));
}

void sha256_transform::thread_add_ln258_22_fu_1830_p2() {
    add_ln258_22_fu_1830_p2 = (!m_16_reg_5453.read().is_01() || !m_7_reg_5108.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_16_reg_5453.read()) + sc_biguint<32>(m_7_reg_5108.read()));
}

void sha256_transform::thread_add_ln258_24_fu_1904_p2() {
    add_ln258_24_fu_1904_p2 = (!reg_1224.read().is_01() || !tmp_1_8_reg_5240.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1224.read()) + sc_biguint<32>(tmp_1_8_reg_5240.read()));
}

void sha256_transform::thread_add_ln258_25_fu_1869_p2() {
    add_ln258_25_fu_1869_p2 = (!m_17_reg_5460.read().is_01() || !m_8_reg_5182.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_17_reg_5460.read()) + sc_biguint<32>(m_8_reg_5182.read()));
}

void sha256_transform::thread_add_ln258_27_fu_1916_p2() {
    add_ln258_27_fu_1916_p2 = (!reg_1228.read().is_01() || !tmp_1_9_reg_5304.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1228.read()) + sc_biguint<32>(tmp_1_9_reg_5304.read()));
}

void sha256_transform::thread_add_ln258_28_fu_1873_p2() {
    add_ln258_28_fu_1873_p2 = (!m_18_reg_5507.read().is_01() || !m_9_reg_5188.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_18_reg_5507.read()) + sc_biguint<32>(m_9_reg_5188.read()));
}

void sha256_transform::thread_add_ln258_30_fu_1946_p2() {
    add_ln258_30_fu_1946_p2 = (!reg_1224.read().is_01() || !tmp_1_s_reg_5309.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1224.read()) + sc_biguint<32>(tmp_1_s_reg_5309.read()));
}

void sha256_transform::thread_add_ln258_31_fu_1928_p2() {
    add_ln258_31_fu_1928_p2 = (!m_19_reg_5514.read().is_01() || !m_10_reg_5250.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_19_reg_5514.read()) + sc_biguint<32>(m_10_reg_5250.read()));
}

void sha256_transform::thread_add_ln258_33_fu_1958_p2() {
    add_ln258_33_fu_1958_p2 = (!reg_1228.read().is_01() || !tmp_1_10_reg_5386.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1228.read()) + sc_biguint<32>(tmp_1_10_reg_5386.read()));
}

void sha256_transform::thread_add_ln258_34_fu_1932_p2() {
    add_ln258_34_fu_1932_p2 = (!m_20_reg_5559.read().is_01() || !m_11_reg_5257.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_20_reg_5559.read()) + sc_biguint<32>(m_11_reg_5257.read()));
}

void sha256_transform::thread_add_ln258_36_fu_2006_p2() {
    add_ln258_36_fu_2006_p2 = (!reg_1224.read().is_01() || !tmp_1_11_reg_5391.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1224.read()) + sc_biguint<32>(tmp_1_11_reg_5391.read()));
}

void sha256_transform::thread_add_ln258_37_fu_1970_p2() {
    add_ln258_37_fu_1970_p2 = (!m_21_reg_5566.read().is_01() || !m_12_reg_5332.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_21_reg_5566.read()) + sc_biguint<32>(m_12_reg_5332.read()));
}

void sha256_transform::thread_add_ln258_39_fu_2018_p2() {
    add_ln258_39_fu_2018_p2 = (!reg_1228.read().is_01() || !tmp_1_12_reg_5425.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1228.read()) + sc_biguint<32>(tmp_1_12_reg_5425.read()));
}

void sha256_transform::thread_add_ln258_3_fu_1715_p2() {
    add_ln258_3_fu_1715_p2 = (!reg_1228.read().is_01() || !tmp_1_1_reg_5007.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1228.read()) + sc_biguint<32>(tmp_1_1_reg_5007.read()));
}

void sha256_transform::thread_add_ln258_40_fu_1974_p2() {
    add_ln258_40_fu_1974_p2 = (!m_22_reg_5598.read().is_01() || !m_13_reg_5339.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_22_reg_5598.read()) + sc_biguint<32>(m_13_reg_5339.read()));
}

void sha256_transform::thread_add_ln258_42_fu_2048_p2() {
    add_ln258_42_fu_2048_p2 = (!reg_1224.read().is_01() || !tmp_1_13_reg_5430.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1224.read()) + sc_biguint<32>(tmp_1_13_reg_5430.read()));
}

void sha256_transform::thread_add_ln258_43_fu_2030_p2() {
    add_ln258_43_fu_2030_p2 = (!m_23_reg_5605.read().is_01() || !m_14_reg_5401.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_23_reg_5605.read()) + sc_biguint<32>(m_14_reg_5401.read()));
}

void sha256_transform::thread_add_ln258_45_fu_2060_p2() {
    add_ln258_45_fu_2060_p2 = (!reg_1228.read().is_01() || !tmp_1_14_reg_5477.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1228.read()) + sc_biguint<32>(tmp_1_14_reg_5477.read()));
}

void sha256_transform::thread_add_ln258_46_fu_2034_p2() {
    add_ln258_46_fu_2034_p2 = (!m_24_reg_5650.read().is_01() || !m_15_reg_5408.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_24_reg_5650.read()) + sc_biguint<32>(m_15_reg_5408.read()));
}

void sha256_transform::thread_add_ln258_48_fu_2108_p2() {
    add_ln258_48_fu_2108_p2 = (!reg_1244.read().is_01() || !tmp_1_15_reg_5482.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1244.read()) + sc_biguint<32>(tmp_1_15_reg_5482.read()));
}

void sha256_transform::thread_add_ln258_49_fu_2072_p2() {
    add_ln258_49_fu_2072_p2 = (!m_25_reg_5657.read().is_01() || !m_16_reg_5453.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_25_reg_5657.read()) + sc_biguint<32>(m_16_reg_5453.read()));
}

void sha256_transform::thread_add_ln258_4_fu_1672_p2() {
    add_ln258_4_fu_1672_p2 = (!m_10_reg_5250.read().is_01() || !m_1_reg_4889.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_10_reg_5250.read()) + sc_biguint<32>(m_1_reg_4889.read()));
}

void sha256_transform::thread_add_ln258_51_fu_2120_p2() {
    add_ln258_51_fu_2120_p2 = (!reg_1248.read().is_01() || !tmp_1_16_reg_5531.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1248.read()) + sc_biguint<32>(tmp_1_16_reg_5531.read()));
}

void sha256_transform::thread_add_ln258_52_fu_2076_p2() {
    add_ln258_52_fu_2076_p2 = (!m_26_reg_5689.read().is_01() || !m_17_reg_5460.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_26_reg_5689.read()) + sc_biguint<32>(m_17_reg_5460.read()));
}

void sha256_transform::thread_add_ln258_54_fu_2151_p2() {
    add_ln258_54_fu_2151_p2 = (!reg_1244.read().is_01() || !tmp_1_17_reg_5536.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1244.read()) + sc_biguint<32>(tmp_1_17_reg_5536.read()));
}

void sha256_transform::thread_add_ln258_55_fu_2132_p2() {
    add_ln258_55_fu_2132_p2 = (!m_27_reg_5696.read().is_01() || !m_18_reg_5507.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_27_reg_5696.read()) + sc_biguint<32>(m_18_reg_5507.read()));
}

void sha256_transform::thread_add_ln258_57_fu_2163_p2() {
    add_ln258_57_fu_2163_p2 = (!reg_1248.read().is_01() || !tmp_1_18_reg_5583.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1248.read()) + sc_biguint<32>(tmp_1_18_reg_5583.read()));
}

void sha256_transform::thread_add_ln258_58_fu_2136_p2() {
    add_ln258_58_fu_2136_p2 = (!m_28_reg_5741.read().is_01() || !m_19_reg_5514.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_28_reg_5741.read()) + sc_biguint<32>(m_19_reg_5514.read()));
}

void sha256_transform::thread_add_ln258_60_fu_2210_p2() {
    add_ln258_60_fu_2210_p2 = (!reg_1244.read().is_01() || !tmp_1_19_reg_5588.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1244.read()) + sc_biguint<32>(tmp_1_19_reg_5588.read()));
}

void sha256_transform::thread_add_ln258_61_fu_2175_p2() {
    add_ln258_61_fu_2175_p2 = (!m_29_reg_5748.read().is_01() || !m_20_reg_5559.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_29_reg_5748.read()) + sc_biguint<32>(m_20_reg_5559.read()));
}

void sha256_transform::thread_add_ln258_63_fu_2222_p2() {
    add_ln258_63_fu_2222_p2 = (!reg_1248.read().is_01() || !tmp_1_20_reg_5622.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1248.read()) + sc_biguint<32>(tmp_1_20_reg_5622.read()));
}

void sha256_transform::thread_add_ln258_64_fu_2179_p2() {
    add_ln258_64_fu_2179_p2 = (!m_30_reg_5780.read().is_01() || !m_21_reg_5566.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_30_reg_5780.read()) + sc_biguint<32>(m_21_reg_5566.read()));
}

void sha256_transform::thread_add_ln258_66_fu_2253_p2() {
    add_ln258_66_fu_2253_p2 = (!reg_1244.read().is_01() || !tmp_1_21_reg_5627.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1244.read()) + sc_biguint<32>(tmp_1_21_reg_5627.read()));
}

void sha256_transform::thread_add_ln258_67_fu_2234_p2() {
    add_ln258_67_fu_2234_p2 = (!m_31_reg_5787.read().is_01() || !m_22_reg_5598.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_31_reg_5787.read()) + sc_biguint<32>(m_22_reg_5598.read()));
}

void sha256_transform::thread_add_ln258_69_fu_2265_p2() {
    add_ln258_69_fu_2265_p2 = (!reg_1248.read().is_01() || !tmp_1_22_reg_5674.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1248.read()) + sc_biguint<32>(tmp_1_22_reg_5674.read()));
}

void sha256_transform::thread_add_ln258_6_fu_1746_p2() {
    add_ln258_6_fu_1746_p2 = (!reg_1224.read().is_01() || !tmp_1_2_reg_5012.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1224.read()) + sc_biguint<32>(tmp_1_2_reg_5012.read()));
}

void sha256_transform::thread_add_ln258_70_fu_2238_p2() {
    add_ln258_70_fu_2238_p2 = (!m_32_reg_5832.read().is_01() || !m_23_reg_5605.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_32_reg_5832.read()) + sc_biguint<32>(m_23_reg_5605.read()));
}

void sha256_transform::thread_add_ln258_72_fu_2312_p2() {
    add_ln258_72_fu_2312_p2 = (!reg_1244.read().is_01() || !tmp_1_23_reg_5679.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1244.read()) + sc_biguint<32>(tmp_1_23_reg_5679.read()));
}

void sha256_transform::thread_add_ln258_73_fu_2277_p2() {
    add_ln258_73_fu_2277_p2 = (!m_33_reg_5839.read().is_01() || !m_24_reg_5650.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_33_reg_5839.read()) + sc_biguint<32>(m_24_reg_5650.read()));
}

void sha256_transform::thread_add_ln258_75_fu_2324_p2() {
    add_ln258_75_fu_2324_p2 = (!reg_1248.read().is_01() || !tmp_1_24_reg_5713.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1248.read()) + sc_biguint<32>(tmp_1_24_reg_5713.read()));
}

void sha256_transform::thread_add_ln258_76_fu_2281_p2() {
    add_ln258_76_fu_2281_p2 = (!m_34_reg_5871.read().is_01() || !m_25_reg_5657.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_34_reg_5871.read()) + sc_biguint<32>(m_25_reg_5657.read()));
}

void sha256_transform::thread_add_ln258_78_fu_2355_p2() {
    add_ln258_78_fu_2355_p2 = (!reg_1244.read().is_01() || !tmp_1_25_reg_5718.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1244.read()) + sc_biguint<32>(tmp_1_25_reg_5718.read()));
}

void sha256_transform::thread_add_ln258_79_fu_2336_p2() {
    add_ln258_79_fu_2336_p2 = (!m_35_reg_5878.read().is_01() || !m_26_reg_5689.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_35_reg_5878.read()) + sc_biguint<32>(m_26_reg_5689.read()));
}

void sha256_transform::thread_add_ln258_7_fu_1727_p2() {
    add_ln258_7_fu_1727_p2 = (!m_11_reg_5257.read().is_01() || !m_2_reg_4955.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_11_reg_5257.read()) + sc_biguint<32>(m_2_reg_4955.read()));
}

void sha256_transform::thread_add_ln258_81_fu_2367_p2() {
    add_ln258_81_fu_2367_p2 = (!reg_1248.read().is_01() || !tmp_1_26_reg_5765.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1248.read()) + sc_biguint<32>(tmp_1_26_reg_5765.read()));
}

void sha256_transform::thread_add_ln258_82_fu_2340_p2() {
    add_ln258_82_fu_2340_p2 = (!m_36_reg_5923.read().is_01() || !m_27_reg_5696.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_36_reg_5923.read()) + sc_biguint<32>(m_27_reg_5696.read()));
}

void sha256_transform::thread_add_ln258_84_fu_2414_p2() {
    add_ln258_84_fu_2414_p2 = (!reg_1244.read().is_01() || !tmp_1_27_reg_5770.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1244.read()) + sc_biguint<32>(tmp_1_27_reg_5770.read()));
}

void sha256_transform::thread_add_ln258_85_fu_2379_p2() {
    add_ln258_85_fu_2379_p2 = (!m_37_reg_5930.read().is_01() || !m_28_reg_5741.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_37_reg_5930.read()) + sc_biguint<32>(m_28_reg_5741.read()));
}

void sha256_transform::thread_add_ln258_87_fu_2426_p2() {
    add_ln258_87_fu_2426_p2 = (!reg_1248.read().is_01() || !tmp_1_28_reg_5804.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1248.read()) + sc_biguint<32>(tmp_1_28_reg_5804.read()));
}

void sha256_transform::thread_add_ln258_88_fu_2383_p2() {
    add_ln258_88_fu_2383_p2 = (!m_38_reg_5962.read().is_01() || !m_29_reg_5748.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_38_reg_5962.read()) + sc_biguint<32>(m_29_reg_5748.read()));
}

void sha256_transform::thread_add_ln258_90_fu_2457_p2() {
    add_ln258_90_fu_2457_p2 = (!reg_1244.read().is_01() || !tmp_1_29_reg_5809.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1244.read()) + sc_biguint<32>(tmp_1_29_reg_5809.read()));
}

void sha256_transform::thread_add_ln258_91_fu_2438_p2() {
    add_ln258_91_fu_2438_p2 = (!m_39_reg_5969.read().is_01() || !m_30_reg_5780.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_39_reg_5969.read()) + sc_biguint<32>(m_30_reg_5780.read()));
}

void sha256_transform::thread_add_ln258_93_fu_2469_p2() {
    add_ln258_93_fu_2469_p2 = (!reg_1248.read().is_01() || !tmp_1_30_reg_5856.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1248.read()) + sc_biguint<32>(tmp_1_30_reg_5856.read()));
}

void sha256_transform::thread_add_ln258_94_fu_2442_p2() {
    add_ln258_94_fu_2442_p2 = (!m_40_reg_6014.read().is_01() || !m_31_reg_5787.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_40_reg_6014.read()) + sc_biguint<32>(m_31_reg_5787.read()));
}

void sha256_transform::thread_add_ln258_96_fu_2516_p2() {
    add_ln258_96_fu_2516_p2 = (!reg_1264.read().is_01() || !tmp_1_31_reg_5861.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1264.read()) + sc_biguint<32>(tmp_1_31_reg_5861.read()));
}

void sha256_transform::thread_add_ln258_97_fu_2481_p2() {
    add_ln258_97_fu_2481_p2 = (!m_41_reg_6021.read().is_01() || !m_32_reg_5832.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_41_reg_6021.read()) + sc_biguint<32>(m_32_reg_5832.read()));
}

void sha256_transform::thread_add_ln258_99_fu_2528_p2() {
    add_ln258_99_fu_2528_p2 = (!reg_1268.read().is_01() || !tmp_1_32_reg_5895.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1268.read()) + sc_biguint<32>(tmp_1_32_reg_5895.read()));
}

void sha256_transform::thread_add_ln258_9_fu_1758_p2() {
    add_ln258_9_fu_1758_p2 = (!reg_1228.read().is_01() || !tmp_1_3_reg_5087.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1228.read()) + sc_biguint<32>(tmp_1_3_reg_5087.read()));
}

void sha256_transform::thread_add_ln258_fu_1703_p2() {
    add_ln258_fu_1703_p2 = (!reg_1224.read().is_01() || !tmp_1_reg_4935.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1224.read()) + sc_biguint<32>(tmp_1_reg_4935.read()));
}

void sha256_transform::thread_add_ln271_100_fu_3238_p2() {
    add_ln271_100_fu_3238_p2 = (!reg_1308.read().is_01() || !ap_const_lv32_A831C66D.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1308.read()) + sc_bigint<32>(ap_const_lv32_A831C66D));
}

void sha256_transform::thread_add_ln271_101_fu_3228_p2() {
    add_ln271_101_fu_3228_p2 = (!grp_EP1_fu_982_ap_return.read().is_01() || !m_25_reg_5657_pp0_iter5_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_982_ap_return.read()) + sc_biguint<32>(m_25_reg_5657_pp0_iter5_reg.read()));
}

void sha256_transform::thread_add_ln271_102_fu_3233_p2() {
    add_ln271_102_fu_3233_p2 = (!add_ln271_101_fu_3228_p2.read().is_01() || !add_ln276_21_reg_6562.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_101_fu_3228_p2.read()) + sc_biguint<32>(add_ln276_21_reg_6562.read()));
}

void sha256_transform::thread_add_ln271_103_fu_3244_p2() {
    add_ln271_103_fu_3244_p2 = (!add_ln271_102_reg_6649.read().is_01() || !add_ln271_100_fu_3238_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_102_reg_6649.read()) + sc_biguint<32>(add_ln271_100_fu_3238_p2.read()));
}

void sha256_transform::thread_add_ln271_104_fu_3276_p2() {
    add_ln271_104_fu_3276_p2 = (!reg_1308.read().is_01() || !ap_const_lv32_B00327C8.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1308.read()) + sc_bigint<32>(ap_const_lv32_B00327C8));
}

void sha256_transform::thread_add_ln271_105_fu_3266_p2() {
    add_ln271_105_fu_3266_p2 = (!grp_EP1_fu_982_ap_return.read().is_01() || !m_26_reg_5689_pp0_iter5_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_982_ap_return.read()) + sc_biguint<32>(m_26_reg_5689_pp0_iter5_reg.read()));
}

void sha256_transform::thread_add_ln271_106_fu_3271_p2() {
    add_ln271_106_fu_3271_p2 = (!add_ln271_105_fu_3266_p2.read().is_01() || !add_ln276_22_reg_6585.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_105_fu_3266_p2.read()) + sc_biguint<32>(add_ln276_22_reg_6585.read()));
}

void sha256_transform::thread_add_ln271_107_fu_3282_p2() {
    add_ln271_107_fu_3282_p2 = (!add_ln271_106_reg_6672.read().is_01() || !add_ln271_104_fu_3276_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_106_reg_6672.read()) + sc_biguint<32>(add_ln271_104_fu_3276_p2.read()));
}

void sha256_transform::thread_add_ln271_108_fu_3314_p2() {
    add_ln271_108_fu_3314_p2 = (!reg_1308.read().is_01() || !ap_const_lv32_BF597FC7.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1308.read()) + sc_bigint<32>(ap_const_lv32_BF597FC7));
}

void sha256_transform::thread_add_ln271_109_fu_3304_p2() {
    add_ln271_109_fu_3304_p2 = (!grp_EP1_fu_982_ap_return.read().is_01() || !m_27_reg_5696_pp0_iter6_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_982_ap_return.read()) + sc_biguint<32>(m_27_reg_5696_pp0_iter6_reg.read()));
}

void sha256_transform::thread_add_ln271_10_fu_1544_p2() {
    add_ln271_10_fu_1544_p2 = (!add_ln271_9_fu_1539_p2.read().is_01() || !ctx_state_5_read_1_reg_4803.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_9_fu_1539_p2.read()) + sc_biguint<32>(ctx_state_5_read_1_reg_4803.read()));
}

void sha256_transform::thread_add_ln271_110_fu_3309_p2() {
    add_ln271_110_fu_3309_p2 = (!add_ln271_109_fu_3304_p2.read().is_01() || !add_ln276_23_reg_6608.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_109_fu_3304_p2.read()) + sc_biguint<32>(add_ln276_23_reg_6608.read()));
}

void sha256_transform::thread_add_ln271_111_fu_3320_p2() {
    add_ln271_111_fu_3320_p2 = (!add_ln271_110_reg_6695.read().is_01() || !add_ln271_108_fu_3314_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_110_reg_6695.read()) + sc_biguint<32>(add_ln271_108_fu_3314_p2.read()));
}

void sha256_transform::thread_add_ln271_112_fu_3353_p2() {
    add_ln271_112_fu_3353_p2 = (!reg_1308.read().is_01() || !add_ln276_24_reg_6631.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1308.read()) + sc_biguint<32>(add_ln276_24_reg_6631.read()));
}

void sha256_transform::thread_add_ln271_113_fu_3342_p2() {
    add_ln271_113_fu_3342_p2 = (!m_28_reg_5741_pp0_iter6_reg.read().is_01() || !ap_const_lv32_C6E00BF3.is_01())? sc_lv<32>(): (sc_biguint<32>(m_28_reg_5741_pp0_iter6_reg.read()) + sc_bigint<32>(ap_const_lv32_C6E00BF3));
}

void sha256_transform::thread_add_ln271_114_fu_3347_p2() {
    add_ln271_114_fu_3347_p2 = (!add_ln271_113_fu_3342_p2.read().is_01() || !grp_EP1_fu_982_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_113_fu_3342_p2.read()) + sc_biguint<32>(grp_EP1_fu_982_ap_return.read()));
}

void sha256_transform::thread_add_ln271_115_fu_3358_p2() {
    add_ln271_115_fu_3358_p2 = (!add_ln271_114_reg_6718.read().is_01() || !add_ln271_112_fu_3353_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_114_reg_6718.read()) + sc_biguint<32>(add_ln271_112_fu_3353_p2.read()));
}

void sha256_transform::thread_add_ln271_116_fu_3391_p2() {
    add_ln271_116_fu_3391_p2 = (!reg_1320.read().is_01() || !add_ln276_25_reg_6654.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1320.read()) + sc_biguint<32>(add_ln276_25_reg_6654.read()));
}

void sha256_transform::thread_add_ln271_117_fu_3380_p2() {
    add_ln271_117_fu_3380_p2 = (!m_29_reg_5748_pp0_iter6_reg.read().is_01() || !ap_const_lv32_D5A79147.is_01())? sc_lv<32>(): (sc_biguint<32>(m_29_reg_5748_pp0_iter6_reg.read()) + sc_bigint<32>(ap_const_lv32_D5A79147));
}

void sha256_transform::thread_add_ln271_118_fu_3385_p2() {
    add_ln271_118_fu_3385_p2 = (!add_ln271_117_fu_3380_p2.read().is_01() || !grp_EP1_fu_989_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_117_fu_3380_p2.read()) + sc_biguint<32>(grp_EP1_fu_989_ap_return.read()));
}

void sha256_transform::thread_add_ln271_119_fu_3396_p2() {
    add_ln271_119_fu_3396_p2 = (!add_ln271_118_reg_6741.read().is_01() || !add_ln271_116_fu_3391_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_118_reg_6741.read()) + sc_biguint<32>(add_ln271_116_fu_3391_p2.read()));
}

void sha256_transform::thread_add_ln271_11_fu_1581_p2() {
    add_ln271_11_fu_1581_p2 = (!add_ln271_10_reg_5245.read().is_01() || !add_ln271_8_fu_1575_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_10_reg_5245.read()) + sc_biguint<32>(add_ln271_8_fu_1575_p2.read()));
}

void sha256_transform::thread_add_ln271_120_fu_3429_p2() {
    add_ln271_120_fu_3429_p2 = (!reg_1320.read().is_01() || !add_ln276_26_reg_6677.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1320.read()) + sc_biguint<32>(add_ln276_26_reg_6677.read()));
}

void sha256_transform::thread_add_ln271_121_fu_3418_p2() {
    add_ln271_121_fu_3418_p2 = (!m_30_reg_5780_pp0_iter7_reg.read().is_01() || !ap_const_lv32_6CA6351.is_01())? sc_lv<32>(): (sc_biguint<32>(m_30_reg_5780_pp0_iter7_reg.read()) + sc_biguint<32>(ap_const_lv32_6CA6351));
}

void sha256_transform::thread_add_ln271_122_fu_3423_p2() {
    add_ln271_122_fu_3423_p2 = (!add_ln271_121_fu_3418_p2.read().is_01() || !grp_EP1_fu_989_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_121_fu_3418_p2.read()) + sc_biguint<32>(grp_EP1_fu_989_ap_return.read()));
}

void sha256_transform::thread_add_ln271_123_fu_3434_p2() {
    add_ln271_123_fu_3434_p2 = (!add_ln271_122_reg_6764.read().is_01() || !add_ln271_120_fu_3429_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_122_reg_6764.read()) + sc_biguint<32>(add_ln271_120_fu_3429_p2.read()));
}

void sha256_transform::thread_add_ln271_124_fu_3467_p2() {
    add_ln271_124_fu_3467_p2 = (!reg_1320.read().is_01() || !add_ln276_27_reg_6700.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1320.read()) + sc_biguint<32>(add_ln276_27_reg_6700.read()));
}

void sha256_transform::thread_add_ln271_125_fu_3456_p2() {
    add_ln271_125_fu_3456_p2 = (!m_31_reg_5787_pp0_iter7_reg.read().is_01() || !ap_const_lv32_14292967.is_01())? sc_lv<32>(): (sc_biguint<32>(m_31_reg_5787_pp0_iter7_reg.read()) + sc_biguint<32>(ap_const_lv32_14292967));
}

void sha256_transform::thread_add_ln271_126_fu_3461_p2() {
    add_ln271_126_fu_3461_p2 = (!add_ln271_125_fu_3456_p2.read().is_01() || !grp_EP1_fu_989_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_125_fu_3456_p2.read()) + sc_biguint<32>(grp_EP1_fu_989_ap_return.read()));
}

void sha256_transform::thread_add_ln271_127_fu_3472_p2() {
    add_ln271_127_fu_3472_p2 = (!add_ln271_126_reg_6787.read().is_01() || !add_ln271_124_fu_3467_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_126_reg_6787.read()) + sc_biguint<32>(add_ln271_124_fu_3467_p2.read()));
}

void sha256_transform::thread_add_ln271_128_fu_3505_p2() {
    add_ln271_128_fu_3505_p2 = (!reg_1320.read().is_01() || !add_ln276_28_reg_6723.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1320.read()) + sc_biguint<32>(add_ln276_28_reg_6723.read()));
}

void sha256_transform::thread_add_ln271_129_fu_3494_p2() {
    add_ln271_129_fu_3494_p2 = (!m_32_reg_5832_pp0_iter7_reg.read().is_01() || !ap_const_lv32_27B70A85.is_01())? sc_lv<32>(): (sc_biguint<32>(m_32_reg_5832_pp0_iter7_reg.read()) + sc_biguint<32>(ap_const_lv32_27B70A85));
}

void sha256_transform::thread_add_ln271_12_fu_1676_p2() {
    add_ln271_12_fu_1676_p2 = (!reg_1212.read().is_01() || !ctx_state_4_read_1_reg_4810.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1212.read()) + sc_biguint<32>(ctx_state_4_read_1_reg_4810.read()));
}

void sha256_transform::thread_add_ln271_130_fu_3499_p2() {
    add_ln271_130_fu_3499_p2 = (!add_ln271_129_fu_3494_p2.read().is_01() || !grp_EP1_fu_989_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_129_fu_3494_p2.read()) + sc_biguint<32>(grp_EP1_fu_989_ap_return.read()));
}

void sha256_transform::thread_add_ln271_131_fu_3510_p2() {
    add_ln271_131_fu_3510_p2 = (!add_ln271_130_reg_6810.read().is_01() || !add_ln271_128_fu_3505_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_130_reg_6810.read()) + sc_biguint<32>(add_ln271_128_fu_3505_p2.read()));
}

void sha256_transform::thread_add_ln271_132_fu_3543_p2() {
    add_ln271_132_fu_3543_p2 = (!reg_1212.read().is_01() || !add_ln276_29_reg_6746_pp0_iter8_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1212.read()) + sc_biguint<32>(add_ln276_29_reg_6746_pp0_iter8_reg.read()));
}

void sha256_transform::thread_add_ln271_133_fu_3532_p2() {
    add_ln271_133_fu_3532_p2 = (!m_33_reg_5839_pp0_iter8_reg.read().is_01() || !ap_const_lv32_2E1B2138.is_01())? sc_lv<32>(): (sc_biguint<32>(m_33_reg_5839_pp0_iter8_reg.read()) + sc_biguint<32>(ap_const_lv32_2E1B2138));
}

void sha256_transform::thread_add_ln271_134_fu_3537_p2() {
    add_ln271_134_fu_3537_p2 = (!add_ln271_133_fu_3532_p2.read().is_01() || !grp_EP1_fu_939_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_133_fu_3532_p2.read()) + sc_biguint<32>(grp_EP1_fu_939_ap_return.read()));
}

void sha256_transform::thread_add_ln271_135_fu_3548_p2() {
    add_ln271_135_fu_3548_p2 = (!add_ln271_134_reg_6833.read().is_01() || !add_ln271_132_fu_3543_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_134_reg_6833.read()) + sc_biguint<32>(add_ln271_132_fu_3543_p2.read()));
}

void sha256_transform::thread_add_ln271_136_fu_3581_p2() {
    add_ln271_136_fu_3581_p2 = (!reg_1212.read().is_01() || !add_ln276_30_reg_6769_pp0_iter8_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1212.read()) + sc_biguint<32>(add_ln276_30_reg_6769_pp0_iter8_reg.read()));
}

void sha256_transform::thread_add_ln271_137_fu_3570_p2() {
    add_ln271_137_fu_3570_p2 = (!m_34_reg_5871_pp0_iter8_reg.read().is_01() || !ap_const_lv32_4D2C6DFC.is_01())? sc_lv<32>(): (sc_biguint<32>(m_34_reg_5871_pp0_iter8_reg.read()) + sc_biguint<32>(ap_const_lv32_4D2C6DFC));
}

void sha256_transform::thread_add_ln271_138_fu_3575_p2() {
    add_ln271_138_fu_3575_p2 = (!add_ln271_137_fu_3570_p2.read().is_01() || !grp_EP1_fu_939_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_137_fu_3570_p2.read()) + sc_biguint<32>(grp_EP1_fu_939_ap_return.read()));
}

void sha256_transform::thread_add_ln271_139_fu_3586_p2() {
    add_ln271_139_fu_3586_p2 = (!add_ln271_138_reg_6856.read().is_01() || !add_ln271_136_fu_3581_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_138_reg_6856.read()) + sc_biguint<32>(add_ln271_136_fu_3581_p2.read()));
}

void sha256_transform::thread_add_ln271_13_fu_1629_p2() {
    add_ln271_13_fu_1629_p2 = (!m_3_reg_4961.read().is_01() || !ap_const_lv32_E9B5DBA5.is_01())? sc_lv<32>(): (sc_biguint<32>(m_3_reg_4961.read()) + sc_bigint<32>(ap_const_lv32_E9B5DBA5));
}

void sha256_transform::thread_add_ln271_140_fu_3619_p2() {
    add_ln271_140_fu_3619_p2 = (!reg_1232.read().is_01() || !add_ln276_31_reg_6792_pp0_iter9_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1232.read()) + sc_biguint<32>(add_ln276_31_reg_6792_pp0_iter9_reg.read()));
}

void sha256_transform::thread_add_ln271_141_fu_3608_p2() {
    add_ln271_141_fu_3608_p2 = (!m_35_reg_5878_pp0_iter8_reg.read().is_01() || !ap_const_lv32_53380D13.is_01())? sc_lv<32>(): (sc_biguint<32>(m_35_reg_5878_pp0_iter8_reg.read()) + sc_biguint<32>(ap_const_lv32_53380D13));
}

void sha256_transform::thread_add_ln271_142_fu_3613_p2() {
    add_ln271_142_fu_3613_p2 = (!add_ln271_141_fu_3608_p2.read().is_01() || !grp_EP1_fu_947_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_141_fu_3608_p2.read()) + sc_biguint<32>(grp_EP1_fu_947_ap_return.read()));
}

void sha256_transform::thread_add_ln271_143_fu_3624_p2() {
    add_ln271_143_fu_3624_p2 = (!add_ln271_142_reg_6879.read().is_01() || !add_ln271_140_fu_3619_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_142_reg_6879.read()) + sc_biguint<32>(add_ln271_140_fu_3619_p2.read()));
}

void sha256_transform::thread_add_ln271_144_fu_3657_p2() {
    add_ln271_144_fu_3657_p2 = (!reg_1212.read().is_01() || !add_ln276_32_reg_6815_pp0_iter9_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1212.read()) + sc_biguint<32>(add_ln276_32_reg_6815_pp0_iter9_reg.read()));
}

void sha256_transform::thread_add_ln271_145_fu_3646_p2() {
    add_ln271_145_fu_3646_p2 = (!m_36_reg_5923_pp0_iter8_reg.read().is_01() || !ap_const_lv32_650A7354.is_01())? sc_lv<32>(): (sc_biguint<32>(m_36_reg_5923_pp0_iter8_reg.read()) + sc_biguint<32>(ap_const_lv32_650A7354));
}

void sha256_transform::thread_add_ln271_146_fu_3651_p2() {
    add_ln271_146_fu_3651_p2 = (!add_ln271_145_fu_3646_p2.read().is_01() || !grp_EP1_fu_939_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_145_fu_3646_p2.read()) + sc_biguint<32>(grp_EP1_fu_939_ap_return.read()));
}

void sha256_transform::thread_add_ln271_147_fu_3662_p2() {
    add_ln271_147_fu_3662_p2 = (!add_ln271_146_reg_6902.read().is_01() || !add_ln271_144_fu_3657_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_146_reg_6902.read()) + sc_biguint<32>(add_ln271_144_fu_3657_p2.read()));
}

void sha256_transform::thread_add_ln271_148_fu_3695_p2() {
    add_ln271_148_fu_3695_p2 = (!reg_1232.read().is_01() || !add_ln276_33_reg_6838.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1232.read()) + sc_biguint<32>(add_ln276_33_reg_6838.read()));
}

void sha256_transform::thread_add_ln271_149_fu_3684_p2() {
    add_ln271_149_fu_3684_p2 = (!m_37_reg_5930_pp0_iter9_reg.read().is_01() || !ap_const_lv32_766A0ABB.is_01())? sc_lv<32>(): (sc_biguint<32>(m_37_reg_5930_pp0_iter9_reg.read()) + sc_biguint<32>(ap_const_lv32_766A0ABB));
}

void sha256_transform::thread_add_ln271_14_fu_1634_p2() {
    add_ln271_14_fu_1634_p2 = (!add_ln271_13_fu_1629_p2.read().is_01() || !grp_EP1_fu_939_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_13_fu_1629_p2.read()) + sc_biguint<32>(grp_EP1_fu_939_ap_return.read()));
}

void sha256_transform::thread_add_ln271_150_fu_3689_p2() {
    add_ln271_150_fu_3689_p2 = (!add_ln271_149_fu_3684_p2.read().is_01() || !grp_EP1_fu_947_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_149_fu_3684_p2.read()) + sc_biguint<32>(grp_EP1_fu_947_ap_return.read()));
}

void sha256_transform::thread_add_ln271_151_fu_3700_p2() {
    add_ln271_151_fu_3700_p2 = (!add_ln271_150_reg_6925.read().is_01() || !add_ln271_148_fu_3695_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_150_reg_6925.read()) + sc_biguint<32>(add_ln271_148_fu_3695_p2.read()));
}

void sha256_transform::thread_add_ln271_152_fu_3732_p2() {
    add_ln271_152_fu_3732_p2 = (!reg_1232.read().is_01() || !ap_const_lv32_81C2C92E.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1232.read()) + sc_bigint<32>(ap_const_lv32_81C2C92E));
}

void sha256_transform::thread_add_ln271_153_fu_3722_p2() {
    add_ln271_153_fu_3722_p2 = (!grp_EP1_fu_947_ap_return.read().is_01() || !m_38_reg_5962_pp0_iter9_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_947_ap_return.read()) + sc_biguint<32>(m_38_reg_5962_pp0_iter9_reg.read()));
}

void sha256_transform::thread_add_ln271_154_fu_3727_p2() {
    add_ln271_154_fu_3727_p2 = (!add_ln271_153_fu_3722_p2.read().is_01() || !add_ln276_34_reg_6861.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_153_fu_3722_p2.read()) + sc_biguint<32>(add_ln276_34_reg_6861.read()));
}

void sha256_transform::thread_add_ln271_155_fu_3738_p2() {
    add_ln271_155_fu_3738_p2 = (!add_ln271_154_reg_6948.read().is_01() || !add_ln271_152_fu_3732_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_154_reg_6948.read()) + sc_biguint<32>(add_ln271_152_fu_3732_p2.read()));
}

void sha256_transform::thread_add_ln271_156_fu_3770_p2() {
    add_ln271_156_fu_3770_p2 = (!reg_1252.read().is_01() || !ap_const_lv32_92722C85.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1252.read()) + sc_bigint<32>(ap_const_lv32_92722C85));
}

void sha256_transform::thread_add_ln271_157_fu_3760_p2() {
    add_ln271_157_fu_3760_p2 = (!grp_EP1_fu_954_ap_return.read().is_01() || !m_39_reg_5969_pp0_iter9_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_954_ap_return.read()) + sc_biguint<32>(m_39_reg_5969_pp0_iter9_reg.read()));
}

void sha256_transform::thread_add_ln271_158_fu_3765_p2() {
    add_ln271_158_fu_3765_p2 = (!add_ln271_157_fu_3760_p2.read().is_01() || !add_ln276_35_reg_6884.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_157_fu_3760_p2.read()) + sc_biguint<32>(add_ln276_35_reg_6884.read()));
}

void sha256_transform::thread_add_ln271_159_fu_3776_p2() {
    add_ln271_159_fu_3776_p2 = (!add_ln271_158_reg_6971.read().is_01() || !add_ln271_156_fu_3770_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_158_reg_6971.read()) + sc_biguint<32>(add_ln271_156_fu_3770_p2.read()));
}

void sha256_transform::thread_add_ln271_15_fu_1681_p2() {
    add_ln271_15_fu_1681_p2 = (!add_ln271_14_reg_5396.read().is_01() || !add_ln271_12_fu_1676_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_14_reg_5396.read()) + sc_biguint<32>(add_ln271_12_fu_1676_p2.read()));
}

void sha256_transform::thread_add_ln271_160_fu_3808_p2() {
    add_ln271_160_fu_3808_p2 = (!reg_1232.read().is_01() || !ap_const_lv32_A2BFE8A1.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1232.read()) + sc_bigint<32>(ap_const_lv32_A2BFE8A1));
}

void sha256_transform::thread_add_ln271_161_fu_3798_p2() {
    add_ln271_161_fu_3798_p2 = (!grp_EP1_fu_947_ap_return.read().is_01() || !m_40_reg_6014_pp0_iter9_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_947_ap_return.read()) + sc_biguint<32>(m_40_reg_6014_pp0_iter9_reg.read()));
}

void sha256_transform::thread_add_ln271_162_fu_3803_p2() {
    add_ln271_162_fu_3803_p2 = (!add_ln271_161_fu_3798_p2.read().is_01() || !add_ln276_36_reg_6907.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_161_fu_3798_p2.read()) + sc_biguint<32>(add_ln276_36_reg_6907.read()));
}

void sha256_transform::thread_add_ln271_163_fu_3814_p2() {
    add_ln271_163_fu_3814_p2 = (!add_ln271_162_reg_6994.read().is_01() || !add_ln271_160_fu_3808_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_162_reg_6994.read()) + sc_biguint<32>(add_ln271_160_fu_3808_p2.read()));
}

void sha256_transform::thread_add_ln271_164_fu_3846_p2() {
    add_ln271_164_fu_3846_p2 = (!reg_1252.read().is_01() || !ap_const_lv32_A81A664B.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1252.read()) + sc_bigint<32>(ap_const_lv32_A81A664B));
}

void sha256_transform::thread_add_ln271_165_fu_3836_p2() {
    add_ln271_165_fu_3836_p2 = (!grp_EP1_fu_954_ap_return.read().is_01() || !m_41_reg_6021_pp0_iter9_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_954_ap_return.read()) + sc_biguint<32>(m_41_reg_6021_pp0_iter9_reg.read()));
}

void sha256_transform::thread_add_ln271_166_fu_3841_p2() {
    add_ln271_166_fu_3841_p2 = (!add_ln271_165_fu_3836_p2.read().is_01() || !add_ln276_37_reg_6930.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_165_fu_3836_p2.read()) + sc_biguint<32>(add_ln276_37_reg_6930.read()));
}

void sha256_transform::thread_add_ln271_167_fu_3852_p2() {
    add_ln271_167_fu_3852_p2 = (!add_ln271_166_reg_7017.read().is_01() || !add_ln271_164_fu_3846_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_166_reg_7017.read()) + sc_biguint<32>(add_ln271_164_fu_3846_p2.read()));
}

void sha256_transform::thread_add_ln271_168_fu_3885_p2() {
    add_ln271_168_fu_3885_p2 = (!reg_1252.read().is_01() || !add_ln276_38_reg_6953.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1252.read()) + sc_biguint<32>(add_ln276_38_reg_6953.read()));
}

void sha256_transform::thread_add_ln271_169_fu_3874_p2() {
    add_ln271_169_fu_3874_p2 = (!m_42_reg_6053_pp0_iter9_reg.read().is_01() || !ap_const_lv32_C24B8B70.is_01())? sc_lv<32>(): (sc_biguint<32>(m_42_reg_6053_pp0_iter9_reg.read()) + sc_bigint<32>(ap_const_lv32_C24B8B70));
}

void sha256_transform::thread_add_ln271_16_fu_1778_p2() {
    add_ln271_16_fu_1778_p2 = (!tmp_3_4_reg_5487.read().is_01() || !add_ln276_reg_5017.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_3_4_reg_5487.read()) + sc_biguint<32>(add_ln276_reg_5017.read()));
}

void sha256_transform::thread_add_ln271_170_fu_3879_p2() {
    add_ln271_170_fu_3879_p2 = (!add_ln271_169_fu_3874_p2.read().is_01() || !grp_EP1_fu_954_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_169_fu_3874_p2.read()) + sc_biguint<32>(grp_EP1_fu_954_ap_return.read()));
}

void sha256_transform::thread_add_ln271_171_fu_3890_p2() {
    add_ln271_171_fu_3890_p2 = (!add_ln271_170_reg_7040.read().is_01() || !add_ln271_168_fu_3885_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_170_reg_7040.read()) + sc_biguint<32>(add_ln271_168_fu_3885_p2.read()));
}

void sha256_transform::thread_add_ln271_172_fu_3923_p2() {
    add_ln271_172_fu_3923_p2 = (!reg_1272.read().is_01() || !add_ln276_39_reg_6976.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1272.read()) + sc_biguint<32>(add_ln276_39_reg_6976.read()));
}

void sha256_transform::thread_add_ln271_173_fu_3912_p2() {
    add_ln271_173_fu_3912_p2 = (!m_43_reg_6060_pp0_iter10_reg.read().is_01() || !ap_const_lv32_C76C51A3.is_01())? sc_lv<32>(): (sc_biguint<32>(m_43_reg_6060_pp0_iter10_reg.read()) + sc_bigint<32>(ap_const_lv32_C76C51A3));
}

void sha256_transform::thread_add_ln271_174_fu_3917_p2() {
    add_ln271_174_fu_3917_p2 = (!add_ln271_173_fu_3912_p2.read().is_01() || !grp_EP1_fu_961_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_173_fu_3912_p2.read()) + sc_biguint<32>(grp_EP1_fu_961_ap_return.read()));
}

void sha256_transform::thread_add_ln271_175_fu_3928_p2() {
    add_ln271_175_fu_3928_p2 = (!add_ln271_174_reg_7063.read().is_01() || !add_ln271_172_fu_3923_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_174_reg_7063.read()) + sc_biguint<32>(add_ln271_172_fu_3923_p2.read()));
}

void sha256_transform::thread_add_ln271_176_fu_3961_p2() {
    add_ln271_176_fu_3961_p2 = (!reg_1252.read().is_01() || !add_ln276_40_reg_6999.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1252.read()) + sc_biguint<32>(add_ln276_40_reg_6999.read()));
}

void sha256_transform::thread_add_ln271_177_fu_3950_p2() {
    add_ln271_177_fu_3950_p2 = (!m_44_reg_6105_pp0_iter10_reg.read().is_01() || !ap_const_lv32_D192E819.is_01())? sc_lv<32>(): (sc_biguint<32>(m_44_reg_6105_pp0_iter10_reg.read()) + sc_bigint<32>(ap_const_lv32_D192E819));
}

void sha256_transform::thread_add_ln271_178_fu_3955_p2() {
    add_ln271_178_fu_3955_p2 = (!add_ln271_177_fu_3950_p2.read().is_01() || !grp_EP1_fu_954_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_177_fu_3950_p2.read()) + sc_biguint<32>(grp_EP1_fu_954_ap_return.read()));
}

void sha256_transform::thread_add_ln271_179_fu_3966_p2() {
    add_ln271_179_fu_3966_p2 = (!add_ln271_178_reg_7086.read().is_01() || !add_ln271_176_fu_3961_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_178_reg_7086.read()) + sc_biguint<32>(add_ln271_176_fu_3961_p2.read()));
}

void sha256_transform::thread_add_ln271_17_fu_1735_p2() {
    add_ln271_17_fu_1735_p2 = (!m_4_reg_5035.read().is_01() || !ap_const_lv32_3956C25B.is_01())? sc_lv<32>(): (sc_biguint<32>(m_4_reg_5035.read()) + sc_biguint<32>(ap_const_lv32_3956C25B));
}

void sha256_transform::thread_add_ln271_180_fu_3999_p2() {
    add_ln271_180_fu_3999_p2 = (!reg_1272.read().is_01() || !add_ln276_41_reg_7022.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1272.read()) + sc_biguint<32>(add_ln276_41_reg_7022.read()));
}

void sha256_transform::thread_add_ln271_181_fu_3988_p2() {
    add_ln271_181_fu_3988_p2 = (!m_45_reg_6112_pp0_iter10_reg.read().is_01() || !ap_const_lv32_D6990624.is_01())? sc_lv<32>(): (sc_biguint<32>(m_45_reg_6112_pp0_iter10_reg.read()) + sc_bigint<32>(ap_const_lv32_D6990624));
}

void sha256_transform::thread_add_ln271_182_fu_3993_p2() {
    add_ln271_182_fu_3993_p2 = (!add_ln271_181_fu_3988_p2.read().is_01() || !grp_EP1_fu_961_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_181_fu_3988_p2.read()) + sc_biguint<32>(grp_EP1_fu_961_ap_return.read()));
}

void sha256_transform::thread_add_ln271_183_fu_4004_p2() {
    add_ln271_183_fu_4004_p2 = (!add_ln271_182_reg_7109.read().is_01() || !add_ln271_180_fu_3999_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_182_reg_7109.read()) + sc_biguint<32>(add_ln271_180_fu_3999_p2.read()));
}

void sha256_transform::thread_add_ln271_184_fu_4037_p2() {
    add_ln271_184_fu_4037_p2 = (!reg_1272.read().is_01() || !add_ln276_42_reg_7045.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1272.read()) + sc_biguint<32>(add_ln276_42_reg_7045.read()));
}

void sha256_transform::thread_add_ln271_185_fu_4026_p2() {
    add_ln271_185_fu_4026_p2 = (!m_46_reg_6144_pp0_iter11_reg.read().is_01() || !ap_const_lv32_F40E3585.is_01())? sc_lv<32>(): (sc_biguint<32>(m_46_reg_6144_pp0_iter11_reg.read()) + sc_bigint<32>(ap_const_lv32_F40E3585));
}

void sha256_transform::thread_add_ln271_186_fu_4031_p2() {
    add_ln271_186_fu_4031_p2 = (!add_ln271_185_fu_4026_p2.read().is_01() || !grp_EP1_fu_961_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_185_fu_4026_p2.read()) + sc_biguint<32>(grp_EP1_fu_961_ap_return.read()));
}

void sha256_transform::thread_add_ln271_187_fu_4042_p2() {
    add_ln271_187_fu_4042_p2 = (!add_ln271_186_reg_7132.read().is_01() || !add_ln271_184_fu_4037_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_186_reg_7132.read()) + sc_biguint<32>(add_ln271_184_fu_4037_p2.read()));
}

void sha256_transform::thread_add_ln271_188_fu_4090_p2() {
    add_ln271_188_fu_4090_p2 = (!reg_1284.read().is_01() || !add_ln276_43_reg_7068.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1284.read()) + sc_biguint<32>(add_ln276_43_reg_7068.read()));
}

void sha256_transform::thread_add_ln271_189_fu_4064_p2() {
    add_ln271_189_fu_4064_p2 = (!m_47_reg_6151_pp0_iter11_reg.read().is_01() || !ap_const_lv32_106AA070.is_01())? sc_lv<32>(): (sc_biguint<32>(m_47_reg_6151_pp0_iter11_reg.read()) + sc_biguint<32>(ap_const_lv32_106AA070));
}

void sha256_transform::thread_add_ln271_18_fu_1740_p2() {
    add_ln271_18_fu_1740_p2 = (!add_ln271_17_fu_1735_p2.read().is_01() || !grp_EP1_fu_939_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_17_fu_1735_p2.read()) + sc_biguint<32>(grp_EP1_fu_939_ap_return.read()));
}

void sha256_transform::thread_add_ln271_190_fu_4069_p2() {
    add_ln271_190_fu_4069_p2 = (!add_ln271_189_fu_4064_p2.read().is_01() || !grp_EP1_fu_968_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_189_fu_4064_p2.read()) + sc_biguint<32>(grp_EP1_fu_968_ap_return.read()));
}

void sha256_transform::thread_add_ln271_191_fu_4095_p2() {
    add_ln271_191_fu_4095_p2 = (!add_ln271_190_reg_7155.read().is_01() || !add_ln271_188_fu_4090_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_190_reg_7155.read()) + sc_biguint<32>(add_ln271_188_fu_4090_p2.read()));
}

void sha256_transform::thread_add_ln271_192_fu_4128_p2() {
    add_ln271_192_fu_4128_p2 = (!reg_1272.read().is_01() || !add_ln276_44_reg_7091.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1272.read()) + sc_biguint<32>(add_ln276_44_reg_7091.read()));
}

void sha256_transform::thread_add_ln271_193_fu_4117_p2() {
    add_ln271_193_fu_4117_p2 = (!m_48_reg_6196_pp0_iter12_reg.read().is_01() || !ap_const_lv32_19A4C116.is_01())? sc_lv<32>(): (sc_biguint<32>(m_48_reg_6196_pp0_iter12_reg.read()) + sc_biguint<32>(ap_const_lv32_19A4C116));
}

void sha256_transform::thread_add_ln271_194_fu_4122_p2() {
    add_ln271_194_fu_4122_p2 = (!add_ln271_193_fu_4117_p2.read().is_01() || !grp_EP1_fu_961_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_193_fu_4117_p2.read()) + sc_biguint<32>(grp_EP1_fu_961_ap_return.read()));
}

void sha256_transform::thread_add_ln271_195_fu_4133_p2() {
    add_ln271_195_fu_4133_p2 = (!add_ln271_194_reg_7183.read().is_01() || !add_ln271_192_fu_4128_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_194_reg_7183.read()) + sc_biguint<32>(add_ln271_192_fu_4128_p2.read()));
}

void sha256_transform::thread_add_ln271_196_fu_4166_p2() {
    add_ln271_196_fu_4166_p2 = (!reg_1284.read().is_01() || !add_ln276_45_reg_7114.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1284.read()) + sc_biguint<32>(add_ln276_45_reg_7114.read()));
}

void sha256_transform::thread_add_ln271_197_fu_4155_p2() {
    add_ln271_197_fu_4155_p2 = (!m_49_reg_6202_pp0_iter12_reg.read().is_01() || !ap_const_lv32_1E376C08.is_01())? sc_lv<32>(): (sc_biguint<32>(m_49_reg_6202_pp0_iter12_reg.read()) + sc_biguint<32>(ap_const_lv32_1E376C08));
}

void sha256_transform::thread_add_ln271_198_fu_4160_p2() {
    add_ln271_198_fu_4160_p2 = (!add_ln271_197_fu_4155_p2.read().is_01() || !grp_EP1_fu_968_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_197_fu_4155_p2.read()) + sc_biguint<32>(grp_EP1_fu_968_ap_return.read()));
}

void sha256_transform::thread_add_ln271_199_fu_4171_p2() {
    add_ln271_199_fu_4171_p2 = (!add_ln271_198_reg_7206.read().is_01() || !add_ln271_196_fu_4166_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_198_reg_7206.read()) + sc_biguint<32>(add_ln271_196_fu_4166_p2.read()));
}

void sha256_transform::thread_add_ln271_19_fu_1782_p2() {
    add_ln271_19_fu_1782_p2 = (!add_ln271_18_reg_5492.read().is_01() || !add_ln271_16_fu_1778_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_18_reg_5492.read()) + sc_biguint<32>(add_ln271_16_fu_1778_p2.read()));
}

void sha256_transform::thread_add_ln271_1_fu_1357_p2() {
    add_ln271_1_fu_1357_p2 = (!m_0_fu_1332_p5.read().is_01() || !ap_const_lv32_428A2F98.is_01())? sc_lv<32>(): (sc_biguint<32>(m_0_fu_1332_p5.read()) + sc_biguint<32>(ap_const_lv32_428A2F98));
}

void sha256_transform::thread_add_ln271_200_fu_4204_p2() {
    add_ln271_200_fu_4204_p2 = (!reg_1284.read().is_01() || !add_ln276_46_reg_7137.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1284.read()) + sc_biguint<32>(add_ln276_46_reg_7137.read()));
}

void sha256_transform::thread_add_ln271_201_fu_4193_p2() {
    add_ln271_201_fu_4193_p2 = (!m_50_reg_6228_pp0_iter12_reg.read().is_01() || !ap_const_lv32_2748774C.is_01())? sc_lv<32>(): (sc_biguint<32>(m_50_reg_6228_pp0_iter12_reg.read()) + sc_biguint<32>(ap_const_lv32_2748774C));
}

void sha256_transform::thread_add_ln271_202_fu_4198_p2() {
    add_ln271_202_fu_4198_p2 = (!add_ln271_201_fu_4193_p2.read().is_01() || !grp_EP1_fu_968_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_201_fu_4193_p2.read()) + sc_biguint<32>(grp_EP1_fu_968_ap_return.read()));
}

void sha256_transform::thread_add_ln271_203_fu_4209_p2() {
    add_ln271_203_fu_4209_p2 = (!add_ln271_202_reg_7229.read().is_01() || !add_ln271_200_fu_4204_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_202_reg_7229.read()) + sc_biguint<32>(add_ln271_200_fu_4204_p2.read()));
}

void sha256_transform::thread_add_ln271_204_fu_4242_p2() {
    add_ln271_204_fu_4242_p2 = (!reg_1296.read().is_01() || !add_ln276_47_reg_7165.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1296.read()) + sc_biguint<32>(add_ln276_47_reg_7165.read()));
}

void sha256_transform::thread_add_ln271_205_fu_4231_p2() {
    add_ln271_205_fu_4231_p2 = (!m_51_reg_6234_pp0_iter12_reg.read().is_01() || !ap_const_lv32_34B0BCB5.is_01())? sc_lv<32>(): (sc_biguint<32>(m_51_reg_6234_pp0_iter12_reg.read()) + sc_biguint<32>(ap_const_lv32_34B0BCB5));
}

void sha256_transform::thread_add_ln271_206_fu_4236_p2() {
    add_ln271_206_fu_4236_p2 = (!add_ln271_205_fu_4231_p2.read().is_01() || !grp_EP1_fu_975_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_205_fu_4231_p2.read()) + sc_biguint<32>(grp_EP1_fu_975_ap_return.read()));
}

void sha256_transform::thread_add_ln271_207_fu_4247_p2() {
    add_ln271_207_fu_4247_p2 = (!add_ln271_206_reg_7252.read().is_01() || !add_ln271_204_fu_4242_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_206_reg_7252.read()) + sc_biguint<32>(add_ln271_204_fu_4242_p2.read()));
}

void sha256_transform::thread_add_ln271_208_fu_4280_p2() {
    add_ln271_208_fu_4280_p2 = (!reg_1284.read().is_01() || !add_ln276_48_reg_7188.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1284.read()) + sc_biguint<32>(add_ln276_48_reg_7188.read()));
}

void sha256_transform::thread_add_ln271_209_fu_4269_p2() {
    add_ln271_209_fu_4269_p2 = (!m_52_reg_6268_pp0_iter12_reg.read().is_01() || !ap_const_lv32_391C0CB3.is_01())? sc_lv<32>(): (sc_biguint<32>(m_52_reg_6268_pp0_iter12_reg.read()) + sc_biguint<32>(ap_const_lv32_391C0CB3));
}

void sha256_transform::thread_add_ln271_20_fu_1877_p2() {
    add_ln271_20_fu_1877_p2 = (!reg_1232.read().is_01() || !add_ln276_1_reg_5164.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1232.read()) + sc_biguint<32>(add_ln276_1_reg_5164.read()));
}

void sha256_transform::thread_add_ln271_210_fu_4274_p2() {
    add_ln271_210_fu_4274_p2 = (!add_ln271_209_fu_4269_p2.read().is_01() || !grp_EP1_fu_968_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_209_fu_4269_p2.read()) + sc_biguint<32>(grp_EP1_fu_968_ap_return.read()));
}

void sha256_transform::thread_add_ln271_211_fu_4285_p2() {
    add_ln271_211_fu_4285_p2 = (!add_ln271_210_reg_7275.read().is_01() || !add_ln271_208_fu_4280_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_210_reg_7275.read()) + sc_biguint<32>(add_ln271_208_fu_4280_p2.read()));
}

void sha256_transform::thread_add_ln271_212_fu_4318_p2() {
    add_ln271_212_fu_4318_p2 = (!reg_1296.read().is_01() || !add_ln276_49_reg_7211.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1296.read()) + sc_biguint<32>(add_ln276_49_reg_7211.read()));
}

void sha256_transform::thread_add_ln271_213_fu_4307_p2() {
    add_ln271_213_fu_4307_p2 = (!m_53_reg_6274_pp0_iter13_reg.read().is_01() || !ap_const_lv32_4ED8AA4A.is_01())? sc_lv<32>(): (sc_biguint<32>(m_53_reg_6274_pp0_iter13_reg.read()) + sc_biguint<32>(ap_const_lv32_4ED8AA4A));
}

void sha256_transform::thread_add_ln271_214_fu_4312_p2() {
    add_ln271_214_fu_4312_p2 = (!add_ln271_213_fu_4307_p2.read().is_01() || !grp_EP1_fu_975_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_213_fu_4307_p2.read()) + sc_biguint<32>(grp_EP1_fu_975_ap_return.read()));
}

void sha256_transform::thread_add_ln271_215_fu_4323_p2() {
    add_ln271_215_fu_4323_p2 = (!add_ln271_214_reg_7298.read().is_01() || !add_ln271_212_fu_4318_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_214_reg_7298.read()) + sc_biguint<32>(add_ln271_212_fu_4318_p2.read()));
}

void sha256_transform::thread_add_ln271_216_fu_4356_p2() {
    add_ln271_216_fu_4356_p2 = (!reg_1296.read().is_01() || !add_ln276_50_reg_7234.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1296.read()) + sc_biguint<32>(add_ln276_50_reg_7234.read()));
}

void sha256_transform::thread_add_ln271_217_fu_4345_p2() {
    add_ln271_217_fu_4345_p2 = (!m_54_reg_6295_pp0_iter13_reg.read().is_01() || !ap_const_lv32_5B9CCA4F.is_01())? sc_lv<32>(): (sc_biguint<32>(m_54_reg_6295_pp0_iter13_reg.read()) + sc_biguint<32>(ap_const_lv32_5B9CCA4F));
}

void sha256_transform::thread_add_ln271_218_fu_4350_p2() {
    add_ln271_218_fu_4350_p2 = (!add_ln271_217_fu_4345_p2.read().is_01() || !grp_EP1_fu_975_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_217_fu_4345_p2.read()) + sc_biguint<32>(grp_EP1_fu_975_ap_return.read()));
}

void sha256_transform::thread_add_ln271_219_fu_4361_p2() {
    add_ln271_219_fu_4361_p2 = (!add_ln271_218_reg_7321.read().is_01() || !add_ln271_216_fu_4356_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_218_reg_7321.read()) + sc_biguint<32>(add_ln271_216_fu_4356_p2.read()));
}

void sha256_transform::thread_add_ln271_21_fu_1834_p2() {
    add_ln271_21_fu_1834_p2 = (!m_5_reg_5041.read().is_01() || !ap_const_lv32_59F111F1.is_01())? sc_lv<32>(): (sc_biguint<32>(m_5_reg_5041.read()) + sc_biguint<32>(ap_const_lv32_59F111F1));
}

void sha256_transform::thread_add_ln271_220_fu_4394_p2() {
    add_ln271_220_fu_4394_p2 = (!reg_1308.read().is_01() || !add_ln276_51_reg_7257.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1308.read()) + sc_biguint<32>(add_ln276_51_reg_7257.read()));
}

void sha256_transform::thread_add_ln271_221_fu_4383_p2() {
    add_ln271_221_fu_4383_p2 = (!m_55_reg_6301_pp0_iter13_reg.read().is_01() || !ap_const_lv32_682E6FF3.is_01())? sc_lv<32>(): (sc_biguint<32>(m_55_reg_6301_pp0_iter13_reg.read()) + sc_biguint<32>(ap_const_lv32_682E6FF3));
}

void sha256_transform::thread_add_ln271_222_fu_4388_p2() {
    add_ln271_222_fu_4388_p2 = (!add_ln271_221_fu_4383_p2.read().is_01() || !grp_EP1_fu_982_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_221_fu_4383_p2.read()) + sc_biguint<32>(grp_EP1_fu_982_ap_return.read()));
}

void sha256_transform::thread_add_ln271_223_fu_4399_p2() {
    add_ln271_223_fu_4399_p2 = (!add_ln271_222_reg_7344.read().is_01() || !add_ln271_220_fu_4394_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_222_reg_7344.read()) + sc_biguint<32>(add_ln271_220_fu_4394_p2.read()));
}

void sha256_transform::thread_add_ln271_224_fu_4432_p2() {
    add_ln271_224_fu_4432_p2 = (!reg_1296.read().is_01() || !add_ln276_52_reg_7280.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1296.read()) + sc_biguint<32>(add_ln276_52_reg_7280.read()));
}

void sha256_transform::thread_add_ln271_225_fu_4421_p2() {
    add_ln271_225_fu_4421_p2 = (!m_56_reg_6335_pp0_iter13_reg.read().is_01() || !ap_const_lv32_748F82EE.is_01())? sc_lv<32>(): (sc_biguint<32>(m_56_reg_6335_pp0_iter13_reg.read()) + sc_biguint<32>(ap_const_lv32_748F82EE));
}

void sha256_transform::thread_add_ln271_226_fu_4426_p2() {
    add_ln271_226_fu_4426_p2 = (!add_ln271_225_fu_4421_p2.read().is_01() || !grp_EP1_fu_975_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_225_fu_4421_p2.read()) + sc_biguint<32>(grp_EP1_fu_975_ap_return.read()));
}

void sha256_transform::thread_add_ln271_227_fu_4437_p2() {
    add_ln271_227_fu_4437_p2 = (!add_ln271_226_reg_7367.read().is_01() || !add_ln271_224_fu_4432_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_226_reg_7367.read()) + sc_biguint<32>(add_ln271_224_fu_4432_p2.read()));
}

void sha256_transform::thread_add_ln271_228_fu_4470_p2() {
    add_ln271_228_fu_4470_p2 = (!reg_1308.read().is_01() || !add_ln276_53_reg_7303.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1308.read()) + sc_biguint<32>(add_ln276_53_reg_7303.read()));
}

void sha256_transform::thread_add_ln271_229_fu_4459_p2() {
    add_ln271_229_fu_4459_p2 = (!m_57_reg_6341_pp0_iter13_reg.read().is_01() || !ap_const_lv32_78A5636F.is_01())? sc_lv<32>(): (sc_biguint<32>(m_57_reg_6341_pp0_iter13_reg.read()) + sc_biguint<32>(ap_const_lv32_78A5636F));
}

void sha256_transform::thread_add_ln271_22_fu_1839_p2() {
    add_ln271_22_fu_1839_p2 = (!add_ln271_21_fu_1834_p2.read().is_01() || !grp_EP1_fu_947_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_21_fu_1834_p2.read()) + sc_biguint<32>(grp_EP1_fu_947_ap_return.read()));
}

void sha256_transform::thread_add_ln271_230_fu_4464_p2() {
    add_ln271_230_fu_4464_p2 = (!add_ln271_229_fu_4459_p2.read().is_01() || !grp_EP1_fu_982_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_229_fu_4459_p2.read()) + sc_biguint<32>(grp_EP1_fu_982_ap_return.read()));
}

void sha256_transform::thread_add_ln271_231_fu_4475_p2() {
    add_ln271_231_fu_4475_p2 = (!add_ln271_230_reg_7390.read().is_01() || !add_ln271_228_fu_4470_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_230_reg_7390.read()) + sc_biguint<32>(add_ln271_228_fu_4470_p2.read()));
}

void sha256_transform::thread_add_ln271_232_fu_4507_p2() {
    add_ln271_232_fu_4507_p2 = (!reg_1308.read().is_01() || !ap_const_lv32_84C87814.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1308.read()) + sc_bigint<32>(ap_const_lv32_84C87814));
}

void sha256_transform::thread_add_ln271_233_fu_4497_p2() {
    add_ln271_233_fu_4497_p2 = (!grp_EP1_fu_982_ap_return.read().is_01() || !m_58_reg_6361_pp0_iter13_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_982_ap_return.read()) + sc_biguint<32>(m_58_reg_6361_pp0_iter13_reg.read()));
}

void sha256_transform::thread_add_ln271_234_fu_4502_p2() {
    add_ln271_234_fu_4502_p2 = (!add_ln271_233_fu_4497_p2.read().is_01() || !add_ln276_54_reg_7326.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_233_fu_4497_p2.read()) + sc_biguint<32>(add_ln276_54_reg_7326.read()));
}

void sha256_transform::thread_add_ln271_235_fu_4513_p2() {
    add_ln271_235_fu_4513_p2 = (!add_ln271_234_reg_7413.read().is_01() || !add_ln271_232_fu_4507_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_234_reg_7413.read()) + sc_biguint<32>(add_ln271_232_fu_4507_p2.read()));
}

void sha256_transform::thread_add_ln271_236_fu_4545_p2() {
    add_ln271_236_fu_4545_p2 = (!reg_1320.read().is_01() || !ap_const_lv32_8CC70208.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1320.read()) + sc_bigint<32>(ap_const_lv32_8CC70208));
}

void sha256_transform::thread_add_ln271_237_fu_4535_p2() {
    add_ln271_237_fu_4535_p2 = (!grp_EP1_fu_989_ap_return.read().is_01() || !m_59_reg_6366_pp0_iter14_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_989_ap_return.read()) + sc_biguint<32>(m_59_reg_6366_pp0_iter14_reg.read()));
}

void sha256_transform::thread_add_ln271_238_fu_4540_p2() {
    add_ln271_238_fu_4540_p2 = (!add_ln271_237_fu_4535_p2.read().is_01() || !add_ln276_55_reg_7349.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_237_fu_4535_p2.read()) + sc_biguint<32>(add_ln276_55_reg_7349.read()));
}

void sha256_transform::thread_add_ln271_239_fu_4551_p2() {
    add_ln271_239_fu_4551_p2 = (!add_ln271_238_reg_7436.read().is_01() || !add_ln271_236_fu_4545_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_238_reg_7436.read()) + sc_biguint<32>(add_ln271_236_fu_4545_p2.read()));
}

void sha256_transform::thread_add_ln271_23_fu_1882_p2() {
    add_ln271_23_fu_1882_p2 = (!add_ln271_22_reg_5593.read().is_01() || !add_ln271_20_fu_1877_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_22_reg_5593.read()) + sc_biguint<32>(add_ln271_20_fu_1877_p2.read()));
}

void sha256_transform::thread_add_ln271_240_fu_4583_p2() {
    add_ln271_240_fu_4583_p2 = (!reg_1308.read().is_01() || !ap_const_lv32_90BEFFFA.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1308.read()) + sc_bigint<32>(ap_const_lv32_90BEFFFA));
}

void sha256_transform::thread_add_ln271_241_fu_4573_p2() {
    add_ln271_241_fu_4573_p2 = (!grp_EP1_fu_982_ap_return.read().is_01() || !m_60_reg_6399_pp0_iter14_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_982_ap_return.read()) + sc_biguint<32>(m_60_reg_6399_pp0_iter14_reg.read()));
}

void sha256_transform::thread_add_ln271_242_fu_4578_p2() {
    add_ln271_242_fu_4578_p2 = (!add_ln271_241_fu_4573_p2.read().is_01() || !add_ln276_56_reg_7372.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_241_fu_4573_p2.read()) + sc_biguint<32>(add_ln276_56_reg_7372.read()));
}

void sha256_transform::thread_add_ln271_243_fu_4589_p2() {
    add_ln271_243_fu_4589_p2 = (!add_ln271_242_reg_7459.read().is_01() || !add_ln271_240_fu_4583_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_242_reg_7459.read()) + sc_biguint<32>(add_ln271_240_fu_4583_p2.read()));
}

void sha256_transform::thread_add_ln271_244_fu_4621_p2() {
    add_ln271_244_fu_4621_p2 = (!reg_1320.read().is_01() || !ap_const_lv32_A4506CEB.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1320.read()) + sc_bigint<32>(ap_const_lv32_A4506CEB));
}

void sha256_transform::thread_add_ln271_245_fu_4611_p2() {
    add_ln271_245_fu_4611_p2 = (!grp_EP1_fu_989_ap_return.read().is_01() || !m_61_reg_6404_pp0_iter14_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_989_ap_return.read()) + sc_biguint<32>(m_61_reg_6404_pp0_iter14_reg.read()));
}

void sha256_transform::thread_add_ln271_246_fu_4616_p2() {
    add_ln271_246_fu_4616_p2 = (!add_ln271_245_fu_4611_p2.read().is_01() || !add_ln276_57_reg_7395.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_245_fu_4611_p2.read()) + sc_biguint<32>(add_ln276_57_reg_7395.read()));
}

void sha256_transform::thread_add_ln271_247_fu_4627_p2() {
    add_ln271_247_fu_4627_p2 = (!add_ln271_246_reg_7482.read().is_01() || !add_ln271_244_fu_4621_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_246_reg_7482.read()) + sc_biguint<32>(add_ln271_244_fu_4621_p2.read()));
}

void sha256_transform::thread_add_ln271_248_fu_4649_p2() {
    add_ln271_248_fu_4649_p2 = (!grp_CH_fu_1203_ap_return.read().is_01() || !ap_const_lv32_BEF9A3F7.is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_1203_ap_return.read()) + sc_bigint<32>(ap_const_lv32_BEF9A3F7));
}

void sha256_transform::thread_add_ln271_249_fu_4655_p2() {
    add_ln271_249_fu_4655_p2 = (!add_ln276_58_reg_7418.read().is_01() || !grp_EP1_fu_989_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln276_58_reg_7418.read()) + sc_biguint<32>(grp_EP1_fu_989_ap_return.read()));
}

void sha256_transform::thread_add_ln271_24_fu_1978_p2() {
    add_ln271_24_fu_1978_p2 = (!reg_1232.read().is_01() || !ap_const_lv32_923F82A4.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1232.read()) + sc_bigint<32>(ap_const_lv32_923F82A4));
}

void sha256_transform::thread_add_ln271_250_fu_4660_p2() {
    add_ln271_250_fu_4660_p2 = (!add_ln271_249_reg_7508.read().is_01() || !add_ln271_248_reg_7503.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_249_reg_7508.read()) + sc_biguint<32>(add_ln271_248_reg_7503.read()));
}

void sha256_transform::thread_add_ln271_251_fu_2871_p2() {
    add_ln271_251_fu_2871_p2 = (!reg_1264.read().is_01() || !m_55_reg_6301.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1264.read()) + sc_biguint<32>(m_55_reg_6301.read()));
}

void sha256_transform::thread_add_ln271_252_fu_4664_p2() {
    add_ln271_252_fu_4664_p2 = (!add_ln271_254_reg_6437_pp0_iter15_reg.read().is_01() || !add_ln271_250_fu_4660_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_254_reg_6437_pp0_iter15_reg.read()) + sc_biguint<32>(add_ln271_250_fu_4660_p2.read()));
}

void sha256_transform::thread_add_ln271_253_fu_2876_p2() {
    add_ln271_253_fu_2876_p2 = (!m_46_reg_6144.read().is_01() || !tmp_1_45_reg_6173.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_46_reg_6144.read()) + sc_biguint<32>(tmp_1_45_reg_6173.read()));
}

void sha256_transform::thread_add_ln271_254_fu_2880_p2() {
    add_ln271_254_fu_2880_p2 = (!add_ln271_253_fu_2876_p2.read().is_01() || !add_ln271_251_fu_2871_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_253_fu_2876_p2.read()) + sc_biguint<32>(add_ln271_251_fu_2871_p2.read()));
}

void sha256_transform::thread_add_ln271_255_fu_4729_p2() {
    add_ln271_255_fu_4729_p2 = (!add_ln271_261_reg_7160_pp0_iter16_reg.read().is_01() || !add_ln271_258_fu_4725_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_261_reg_7160_pp0_iter16_reg.read()) + sc_biguint<32>(add_ln271_258_fu_4725_p2.read()));
}

void sha256_transform::thread_add_ln271_256_fu_4686_p2() {
    add_ln271_256_fu_4686_p2 = (!grp_CH_fu_1203_ap_return.read().is_01() || !add_ln276_59_reg_7441_pp0_iter16_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_1203_ap_return.read()) + sc_biguint<32>(add_ln276_59_reg_7441_pp0_iter16_reg.read()));
}

void sha256_transform::thread_add_ln271_257_fu_4691_p2() {
    add_ln271_257_fu_4691_p2 = (!grp_EP1_fu_989_ap_return.read().is_01() || !tmp_47_reg_6409_pp0_iter15_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_989_ap_return.read()) + sc_biguint<32>(tmp_47_reg_6409_pp0_iter15_reg.read()));
}

void sha256_transform::thread_add_ln271_258_fu_4725_p2() {
    add_ln271_258_fu_4725_p2 = (!add_ln271_257_reg_7532.read().is_01() || !add_ln271_256_reg_7527.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_257_reg_7532.read()) + sc_biguint<32>(add_ln271_256_reg_7527.read()));
}

void sha256_transform::thread_add_ln271_259_fu_4075_p2() {
    add_ln271_259_fu_4075_p2 = (!m_56_reg_6335_pp0_iter11_reg.read().is_01() || !m_47_reg_6151_pp0_iter11_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_56_reg_6335_pp0_iter11_reg.read()) + sc_biguint<32>(m_47_reg_6151_pp0_iter11_reg.read()));
}

void sha256_transform::thread_add_ln271_25_fu_1936_p2() {
    add_ln271_25_fu_1936_p2 = (!grp_EP1_fu_947_ap_return.read().is_01() || !m_6_reg_5102_pp0_iter1_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_947_ap_return.read()) + sc_biguint<32>(m_6_reg_5102_pp0_iter1_reg.read()));
}

void sha256_transform::thread_add_ln271_260_fu_4079_p2() {
    add_ln271_260_fu_4079_p2 = (!tmp_1_46_reg_6218_pp0_iter11_reg.read().is_01() || !ap_const_lv32_C67178F2.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_46_reg_6218_pp0_iter11_reg.read()) + sc_bigint<32>(ap_const_lv32_C67178F2));
}

void sha256_transform::thread_add_ln271_261_fu_4084_p2() {
    add_ln271_261_fu_4084_p2 = (!add_ln271_260_fu_4079_p2.read().is_01() || !add_ln271_259_fu_4075_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_260_fu_4079_p2.read()) + sc_biguint<32>(add_ln271_259_fu_4075_p2.read()));
}

void sha256_transform::thread_add_ln271_26_fu_1941_p2() {
    add_ln271_26_fu_1941_p2 = (!add_ln271_25_fu_1936_p2.read().is_01() || !add_ln276_2_reg_5314.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_25_fu_1936_p2.read()) + sc_biguint<32>(add_ln276_2_reg_5314.read()));
}

void sha256_transform::thread_add_ln271_27_fu_1984_p2() {
    add_ln271_27_fu_1984_p2 = (!add_ln271_26_reg_5684.read().is_01() || !add_ln271_24_fu_1978_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_26_reg_5684.read()) + sc_biguint<32>(add_ln271_24_fu_1978_p2.read()));
}

void sha256_transform::thread_add_ln271_28_fu_2080_p2() {
    add_ln271_28_fu_2080_p2 = (!reg_1232.read().is_01() || !ap_const_lv32_AB1C5ED5.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1232.read()) + sc_bigint<32>(ap_const_lv32_AB1C5ED5));
}

void sha256_transform::thread_add_ln271_29_fu_2038_p2() {
    add_ln271_29_fu_2038_p2 = (!grp_EP1_fu_947_ap_return.read().is_01() || !m_7_reg_5108_pp0_iter1_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_947_ap_return.read()) + sc_biguint<32>(m_7_reg_5108_pp0_iter1_reg.read()));
}

void sha256_transform::thread_add_ln271_2_fu_1363_p2() {
    add_ln271_2_fu_1363_p2 = (!add_ln271_1_fu_1357_p2.read().is_01() || !tmp_48_reg_4879.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_1_fu_1357_p2.read()) + sc_biguint<32>(tmp_48_reg_4879.read()));
}

void sha256_transform::thread_add_ln271_30_fu_2043_p2() {
    add_ln271_30_fu_2043_p2 = (!add_ln271_29_fu_2038_p2.read().is_01() || !add_ln276_3_reg_5435.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_29_fu_2038_p2.read()) + sc_biguint<32>(add_ln276_3_reg_5435.read()));
}

void sha256_transform::thread_add_ln271_31_fu_2086_p2() {
    add_ln271_31_fu_2086_p2 = (!add_ln271_30_reg_5775.read().is_01() || !add_ln271_28_fu_2080_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_30_reg_5775.read()) + sc_biguint<32>(add_ln271_28_fu_2080_p2.read()));
}

void sha256_transform::thread_add_ln271_32_fu_2183_p2() {
    add_ln271_32_fu_2183_p2 = (!reg_1232.read().is_01() || !add_ln276_4_reg_5541.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1232.read()) + sc_biguint<32>(add_ln276_4_reg_5541.read()));
}

void sha256_transform::thread_add_ln271_33_fu_2140_p2() {
    add_ln271_33_fu_2140_p2 = (!m_8_reg_5182_pp0_iter1_reg.read().is_01() || !ap_const_lv32_D807AA98.is_01())? sc_lv<32>(): (sc_biguint<32>(m_8_reg_5182_pp0_iter1_reg.read()) + sc_bigint<32>(ap_const_lv32_D807AA98));
}

void sha256_transform::thread_add_ln271_34_fu_2145_p2() {
    add_ln271_34_fu_2145_p2 = (!add_ln271_33_fu_2140_p2.read().is_01() || !grp_EP1_fu_947_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_33_fu_2140_p2.read()) + sc_biguint<32>(grp_EP1_fu_947_ap_return.read()));
}

void sha256_transform::thread_add_ln271_35_fu_2188_p2() {
    add_ln271_35_fu_2188_p2 = (!add_ln271_34_reg_5866.read().is_01() || !add_ln271_32_fu_2183_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_34_reg_5866.read()) + sc_biguint<32>(add_ln271_32_fu_2183_p2.read()));
}

void sha256_transform::thread_add_ln271_36_fu_2285_p2() {
    add_ln271_36_fu_2285_p2 = (!reg_1252.read().is_01() || !add_ln276_5_reg_5632.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1252.read()) + sc_biguint<32>(add_ln276_5_reg_5632.read()));
}

void sha256_transform::thread_add_ln271_37_fu_2242_p2() {
    add_ln271_37_fu_2242_p2 = (!m_9_reg_5188_pp0_iter1_reg.read().is_01() || !ap_const_lv32_12835B01.is_01())? sc_lv<32>(): (sc_biguint<32>(m_9_reg_5188_pp0_iter1_reg.read()) + sc_biguint<32>(ap_const_lv32_12835B01));
}

void sha256_transform::thread_add_ln271_38_fu_2247_p2() {
    add_ln271_38_fu_2247_p2 = (!add_ln271_37_fu_2242_p2.read().is_01() || !grp_EP1_fu_954_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_37_fu_2242_p2.read()) + sc_biguint<32>(grp_EP1_fu_954_ap_return.read()));
}

void sha256_transform::thread_add_ln271_39_fu_2290_p2() {
    add_ln271_39_fu_2290_p2 = (!add_ln271_38_reg_5957.read().is_01() || !add_ln271_36_fu_2285_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_38_reg_5957.read()) + sc_biguint<32>(add_ln271_36_fu_2285_p2.read()));
}

void sha256_transform::thread_add_ln271_3_fu_1400_p2() {
    add_ln271_3_fu_1400_p2 = (!add_ln271_2_reg_4940.read().is_01() || !add_ln271_fu_1394_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_2_reg_4940.read()) + sc_biguint<32>(add_ln271_fu_1394_p2.read()));
}

void sha256_transform::thread_add_ln271_40_fu_2387_p2() {
    add_ln271_40_fu_2387_p2 = (!reg_1252.read().is_01() || !add_ln276_6_reg_5723.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1252.read()) + sc_biguint<32>(add_ln276_6_reg_5723.read()));
}

void sha256_transform::thread_add_ln271_41_fu_2344_p2() {
    add_ln271_41_fu_2344_p2 = (!m_10_reg_5250_pp0_iter1_reg.read().is_01() || !ap_const_lv32_243185BE.is_01())? sc_lv<32>(): (sc_biguint<32>(m_10_reg_5250_pp0_iter1_reg.read()) + sc_biguint<32>(ap_const_lv32_243185BE));
}

void sha256_transform::thread_add_ln271_42_fu_2349_p2() {
    add_ln271_42_fu_2349_p2 = (!add_ln271_41_fu_2344_p2.read().is_01() || !grp_EP1_fu_954_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_41_fu_2344_p2.read()) + sc_biguint<32>(grp_EP1_fu_954_ap_return.read()));
}

void sha256_transform::thread_add_ln271_43_fu_2392_p2() {
    add_ln271_43_fu_2392_p2 = (!add_ln271_42_reg_6048.read().is_01() || !add_ln271_40_fu_2387_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_42_reg_6048.read()) + sc_biguint<32>(add_ln271_40_fu_2387_p2.read()));
}

void sha256_transform::thread_add_ln271_44_fu_2489_p2() {
    add_ln271_44_fu_2489_p2 = (!reg_1252.read().is_01() || !add_ln276_7_reg_5814.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1252.read()) + sc_biguint<32>(add_ln276_7_reg_5814.read()));
}

void sha256_transform::thread_add_ln271_45_fu_2446_p2() {
    add_ln271_45_fu_2446_p2 = (!m_11_reg_5257_pp0_iter2_reg.read().is_01() || !ap_const_lv32_550C7DC3.is_01())? sc_lv<32>(): (sc_biguint<32>(m_11_reg_5257_pp0_iter2_reg.read()) + sc_biguint<32>(ap_const_lv32_550C7DC3));
}

void sha256_transform::thread_add_ln271_46_fu_2451_p2() {
    add_ln271_46_fu_2451_p2 = (!add_ln271_45_fu_2446_p2.read().is_01() || !grp_EP1_fu_954_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_45_fu_2446_p2.read()) + sc_biguint<32>(grp_EP1_fu_954_ap_return.read()));
}

void sha256_transform::thread_add_ln271_47_fu_2494_p2() {
    add_ln271_47_fu_2494_p2 = (!add_ln271_46_reg_6139.read().is_01() || !add_ln271_44_fu_2489_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_46_reg_6139.read()) + sc_biguint<32>(add_ln271_44_fu_2489_p2.read()));
}

void sha256_transform::thread_add_ln271_48_fu_2588_p2() {
    add_ln271_48_fu_2588_p2 = (!reg_1252.read().is_01() || !add_ln276_8_reg_5905.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1252.read()) + sc_biguint<32>(add_ln276_8_reg_5905.read()));
}

void sha256_transform::thread_add_ln271_49_fu_2547_p2() {
    add_ln271_49_fu_2547_p2 = (!m_12_reg_5332_pp0_iter2_reg.read().is_01() || !ap_const_lv32_72BE5D74.is_01())? sc_lv<32>(): (sc_biguint<32>(m_12_reg_5332_pp0_iter2_reg.read()) + sc_biguint<32>(ap_const_lv32_72BE5D74));
}

void sha256_transform::thread_add_ln271_4_fu_1486_p2() {
    add_ln271_4_fu_1486_p2 = (!reg_1212.read().is_01() || !ctx_state_6_read_1_reg_4797.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1212.read()) + sc_biguint<32>(ctx_state_6_read_1_reg_4797.read()));
}

void sha256_transform::thread_add_ln271_50_fu_2552_p2() {
    add_ln271_50_fu_2552_p2 = (!add_ln271_49_fu_2547_p2.read().is_01() || !grp_EP1_fu_954_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_49_fu_2547_p2.read()) + sc_biguint<32>(grp_EP1_fu_954_ap_return.read()));
}

void sha256_transform::thread_add_ln271_51_fu_2593_p2() {
    add_ln271_51_fu_2593_p2 = (!add_ln271_50_reg_6223.read().is_01() || !add_ln271_48_fu_2588_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_50_reg_6223.read()) + sc_biguint<32>(add_ln271_48_fu_2588_p2.read()));
}

void sha256_transform::thread_add_ln271_52_fu_2685_p2() {
    add_ln271_52_fu_2685_p2 = (!reg_1272.read().is_01() || !ap_const_lv32_80DEB1FE.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1272.read()) + sc_bigint<32>(ap_const_lv32_80DEB1FE));
}

void sha256_transform::thread_add_ln271_53_fu_2645_p2() {
    add_ln271_53_fu_2645_p2 = (!grp_EP1_fu_961_ap_return.read().is_01() || !m_13_reg_5339_pp0_iter2_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_961_ap_return.read()) + sc_biguint<32>(m_13_reg_5339_pp0_iter2_reg.read()));
}

void sha256_transform::thread_add_ln271_54_fu_2650_p2() {
    add_ln271_54_fu_2650_p2 = (!add_ln271_53_fu_2645_p2.read().is_01() || !add_ln276_9_reg_5996.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_53_fu_2645_p2.read()) + sc_biguint<32>(add_ln276_9_reg_5996.read()));
}

void sha256_transform::thread_add_ln271_55_fu_2691_p2() {
    add_ln271_55_fu_2691_p2 = (!add_ln271_54_reg_6290.read().is_01() || !add_ln271_52_fu_2685_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_54_reg_6290.read()) + sc_biguint<32>(add_ln271_52_fu_2685_p2.read()));
}

void sha256_transform::thread_add_ln271_56_fu_2783_p2() {
    add_ln271_56_fu_2783_p2 = (!reg_1272.read().is_01() || !ap_const_lv32_9BDC06A7.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1272.read()) + sc_bigint<32>(ap_const_lv32_9BDC06A7));
}

void sha256_transform::thread_add_ln271_57_fu_2743_p2() {
    add_ln271_57_fu_2743_p2 = (!grp_EP1_fu_961_ap_return.read().is_01() || !m_14_reg_5401_pp0_iter3_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_961_ap_return.read()) + sc_biguint<32>(m_14_reg_5401_pp0_iter3_reg.read()));
}

void sha256_transform::thread_add_ln271_58_fu_2748_p2() {
    add_ln271_58_fu_2748_p2 = (!add_ln271_57_fu_2743_p2.read().is_01() || !add_ln276_10_reg_6087.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_57_fu_2743_p2.read()) + sc_biguint<32>(add_ln276_10_reg_6087.read()));
}

void sha256_transform::thread_add_ln271_59_fu_2789_p2() {
    add_ln271_59_fu_2789_p2 = (!add_ln271_58_reg_6356.read().is_01() || !add_ln271_56_fu_2783_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_58_reg_6356.read()) + sc_biguint<32>(add_ln271_56_fu_2783_p2.read()));
}

void sha256_transform::thread_add_ln271_5_fu_1449_p2() {
    add_ln271_5_fu_1449_p2 = (!m_1_reg_4889.read().is_01() || !ap_const_lv32_71374491.is_01())? sc_lv<32>(): (sc_biguint<32>(m_1_reg_4889.read()) + sc_biguint<32>(ap_const_lv32_71374491));
}

void sha256_transform::thread_add_ln271_60_fu_2844_p2() {
    add_ln271_60_fu_2844_p2 = (!reg_1272.read().is_01() || !add_ln276_11_reg_6178.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1272.read()) + sc_biguint<32>(add_ln276_11_reg_6178.read()));
}

void sha256_transform::thread_add_ln271_61_fu_2833_p2() {
    add_ln271_61_fu_2833_p2 = (!m_15_reg_5408_pp0_iter3_reg.read().is_01() || !ap_const_lv32_C19BF174.is_01())? sc_lv<32>(): (sc_biguint<32>(m_15_reg_5408_pp0_iter3_reg.read()) + sc_bigint<32>(ap_const_lv32_C19BF174));
}

void sha256_transform::thread_add_ln271_62_fu_2838_p2() {
    add_ln271_62_fu_2838_p2 = (!add_ln271_61_fu_2833_p2.read().is_01() || !grp_EP1_fu_961_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_61_fu_2833_p2.read()) + sc_biguint<32>(grp_EP1_fu_961_ap_return.read()));
}

void sha256_transform::thread_add_ln271_63_fu_2849_p2() {
    add_ln271_63_fu_2849_p2 = (!add_ln271_62_reg_6414.read().is_01() || !add_ln271_60_fu_2844_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_62_reg_6414.read()) + sc_biguint<32>(add_ln271_60_fu_2844_p2.read()));
}

void sha256_transform::thread_add_ln271_64_fu_2897_p2() {
    add_ln271_64_fu_2897_p2 = (!reg_1272.read().is_01() || !add_ln276_12_reg_6250.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1272.read()) + sc_biguint<32>(add_ln276_12_reg_6250.read()));
}

void sha256_transform::thread_add_ln271_65_fu_2886_p2() {
    add_ln271_65_fu_2886_p2 = (!m_16_reg_5453_pp0_iter3_reg.read().is_01() || !ap_const_lv32_E49B69C1.is_01())? sc_lv<32>(): (sc_biguint<32>(m_16_reg_5453_pp0_iter3_reg.read()) + sc_bigint<32>(ap_const_lv32_E49B69C1));
}

void sha256_transform::thread_add_ln271_66_fu_2891_p2() {
    add_ln271_66_fu_2891_p2 = (!add_ln271_65_fu_2886_p2.read().is_01() || !grp_EP1_fu_961_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_65_fu_2886_p2.read()) + sc_biguint<32>(grp_EP1_fu_961_ap_return.read()));
}

void sha256_transform::thread_add_ln271_67_fu_2902_p2() {
    add_ln271_67_fu_2902_p2 = (!add_ln271_66_reg_6442.read().is_01() || !add_ln271_64_fu_2897_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_66_reg_6442.read()) + sc_biguint<32>(add_ln271_64_fu_2897_p2.read()));
}

void sha256_transform::thread_add_ln271_68_fu_2935_p2() {
    add_ln271_68_fu_2935_p2 = (!reg_1284.read().is_01() || !add_ln276_13_reg_6317.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1284.read()) + sc_biguint<32>(add_ln276_13_reg_6317.read()));
}

void sha256_transform::thread_add_ln271_69_fu_2924_p2() {
    add_ln271_69_fu_2924_p2 = (!m_17_reg_5460_pp0_iter4_reg.read().is_01() || !ap_const_lv32_EFBE4786.is_01())? sc_lv<32>(): (sc_biguint<32>(m_17_reg_5460_pp0_iter4_reg.read()) + sc_bigint<32>(ap_const_lv32_EFBE4786));
}

void sha256_transform::thread_add_ln271_6_fu_1454_p2() {
    add_ln271_6_fu_1454_p2 = (!add_ln271_5_fu_1449_p2.read().is_01() || !grp_EP1_fu_939_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_5_fu_1449_p2.read()) + sc_biguint<32>(grp_EP1_fu_939_ap_return.read()));
}

void sha256_transform::thread_add_ln271_70_fu_2929_p2() {
    add_ln271_70_fu_2929_p2 = (!add_ln271_69_fu_2924_p2.read().is_01() || !grp_EP1_fu_968_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_69_fu_2924_p2.read()) + sc_biguint<32>(grp_EP1_fu_968_ap_return.read()));
}

void sha256_transform::thread_add_ln271_71_fu_2940_p2() {
    add_ln271_71_fu_2940_p2 = (!add_ln271_70_reg_6465.read().is_01() || !add_ln271_68_fu_2935_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_70_reg_6465.read()) + sc_biguint<32>(add_ln271_68_fu_2935_p2.read()));
}

void sha256_transform::thread_add_ln271_72_fu_2973_p2() {
    add_ln271_72_fu_2973_p2 = (!reg_1284.read().is_01() || !add_ln276_14_reg_6381.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1284.read()) + sc_biguint<32>(add_ln276_14_reg_6381.read()));
}

void sha256_transform::thread_add_ln271_73_fu_2962_p2() {
    add_ln271_73_fu_2962_p2 = (!m_18_reg_5507_pp0_iter4_reg.read().is_01() || !ap_const_lv32_FC19DC6.is_01())? sc_lv<32>(): (sc_biguint<32>(m_18_reg_5507_pp0_iter4_reg.read()) + sc_biguint<32>(ap_const_lv32_FC19DC6));
}

void sha256_transform::thread_add_ln271_74_fu_2967_p2() {
    add_ln271_74_fu_2967_p2 = (!add_ln271_73_fu_2962_p2.read().is_01() || !grp_EP1_fu_968_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_73_fu_2962_p2.read()) + sc_biguint<32>(grp_EP1_fu_968_ap_return.read()));
}

void sha256_transform::thread_add_ln271_75_fu_2978_p2() {
    add_ln271_75_fu_2978_p2 = (!add_ln271_74_reg_6488.read().is_01() || !add_ln271_72_fu_2973_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_74_reg_6488.read()) + sc_biguint<32>(add_ln271_72_fu_2973_p2.read()));
}

void sha256_transform::thread_add_ln271_76_fu_3011_p2() {
    add_ln271_76_fu_3011_p2 = (!reg_1284.read().is_01() || !add_ln276_15_reg_6419.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1284.read()) + sc_biguint<32>(add_ln276_15_reg_6419.read()));
}

void sha256_transform::thread_add_ln271_77_fu_3000_p2() {
    add_ln271_77_fu_3000_p2 = (!m_19_reg_5514_pp0_iter4_reg.read().is_01() || !ap_const_lv32_240CA1CC.is_01())? sc_lv<32>(): (sc_biguint<32>(m_19_reg_5514_pp0_iter4_reg.read()) + sc_biguint<32>(ap_const_lv32_240CA1CC));
}

void sha256_transform::thread_add_ln271_78_fu_3005_p2() {
    add_ln271_78_fu_3005_p2 = (!add_ln271_77_fu_3000_p2.read().is_01() || !grp_EP1_fu_968_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_77_fu_3000_p2.read()) + sc_biguint<32>(grp_EP1_fu_968_ap_return.read()));
}

void sha256_transform::thread_add_ln271_79_fu_3016_p2() {
    add_ln271_79_fu_3016_p2 = (!add_ln271_78_reg_6511.read().is_01() || !add_ln271_76_fu_3011_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_78_reg_6511.read()) + sc_biguint<32>(add_ln271_76_fu_3011_p2.read()));
}

void sha256_transform::thread_add_ln271_7_fu_1491_p2() {
    add_ln271_7_fu_1491_p2 = (!add_ln271_6_reg_5097.read().is_01() || !add_ln271_4_fu_1486_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_6_reg_5097.read()) + sc_biguint<32>(add_ln271_4_fu_1486_p2.read()));
}

void sha256_transform::thread_add_ln271_80_fu_3049_p2() {
    add_ln271_80_fu_3049_p2 = (!reg_1284.read().is_01() || !add_ln276_16_reg_6447.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1284.read()) + sc_biguint<32>(add_ln276_16_reg_6447.read()));
}

void sha256_transform::thread_add_ln271_81_fu_3038_p2() {
    add_ln271_81_fu_3038_p2 = (!m_20_reg_5559_pp0_iter4_reg.read().is_01() || !ap_const_lv32_2DE92C6F.is_01())? sc_lv<32>(): (sc_biguint<32>(m_20_reg_5559_pp0_iter4_reg.read()) + sc_biguint<32>(ap_const_lv32_2DE92C6F));
}

void sha256_transform::thread_add_ln271_82_fu_3043_p2() {
    add_ln271_82_fu_3043_p2 = (!add_ln271_81_fu_3038_p2.read().is_01() || !grp_EP1_fu_968_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_81_fu_3038_p2.read()) + sc_biguint<32>(grp_EP1_fu_968_ap_return.read()));
}

void sha256_transform::thread_add_ln271_83_fu_3054_p2() {
    add_ln271_83_fu_3054_p2 = (!add_ln271_82_reg_6534.read().is_01() || !add_ln271_80_fu_3049_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_82_reg_6534.read()) + sc_biguint<32>(add_ln271_80_fu_3049_p2.read()));
}

void sha256_transform::thread_add_ln271_84_fu_3087_p2() {
    add_ln271_84_fu_3087_p2 = (!reg_1296.read().is_01() || !add_ln276_17_reg_6470.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1296.read()) + sc_biguint<32>(add_ln276_17_reg_6470.read()));
}

void sha256_transform::thread_add_ln271_85_fu_3076_p2() {
    add_ln271_85_fu_3076_p2 = (!m_21_reg_5566_pp0_iter4_reg.read().is_01() || !ap_const_lv32_4A7484AA.is_01())? sc_lv<32>(): (sc_biguint<32>(m_21_reg_5566_pp0_iter4_reg.read()) + sc_biguint<32>(ap_const_lv32_4A7484AA));
}

void sha256_transform::thread_add_ln271_86_fu_3081_p2() {
    add_ln271_86_fu_3081_p2 = (!add_ln271_85_fu_3076_p2.read().is_01() || !grp_EP1_fu_975_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_85_fu_3076_p2.read()) + sc_biguint<32>(grp_EP1_fu_975_ap_return.read()));
}

void sha256_transform::thread_add_ln271_87_fu_3092_p2() {
    add_ln271_87_fu_3092_p2 = (!add_ln271_86_reg_6557.read().is_01() || !add_ln271_84_fu_3087_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_86_reg_6557.read()) + sc_biguint<32>(add_ln271_84_fu_3087_p2.read()));
}

void sha256_transform::thread_add_ln271_88_fu_3125_p2() {
    add_ln271_88_fu_3125_p2 = (!reg_1296.read().is_01() || !add_ln276_18_reg_6493.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1296.read()) + sc_biguint<32>(add_ln276_18_reg_6493.read()));
}

void sha256_transform::thread_add_ln271_89_fu_3114_p2() {
    add_ln271_89_fu_3114_p2 = (!m_22_reg_5598_pp0_iter5_reg.read().is_01() || !ap_const_lv32_5CB0A9DC.is_01())? sc_lv<32>(): (sc_biguint<32>(m_22_reg_5598_pp0_iter5_reg.read()) + sc_biguint<32>(ap_const_lv32_5CB0A9DC));
}

void sha256_transform::thread_add_ln271_8_fu_1575_p2() {
    add_ln271_8_fu_1575_p2 = (!reg_1212.read().is_01() || !ap_const_lv32_B5C0FBCF.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1212.read()) + sc_bigint<32>(ap_const_lv32_B5C0FBCF));
}

void sha256_transform::thread_add_ln271_90_fu_3119_p2() {
    add_ln271_90_fu_3119_p2 = (!add_ln271_89_fu_3114_p2.read().is_01() || !grp_EP1_fu_975_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_89_fu_3114_p2.read()) + sc_biguint<32>(grp_EP1_fu_975_ap_return.read()));
}

void sha256_transform::thread_add_ln271_91_fu_3130_p2() {
    add_ln271_91_fu_3130_p2 = (!add_ln271_90_reg_6580.read().is_01() || !add_ln271_88_fu_3125_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_90_reg_6580.read()) + sc_biguint<32>(add_ln271_88_fu_3125_p2.read()));
}

void sha256_transform::thread_add_ln271_92_fu_3163_p2() {
    add_ln271_92_fu_3163_p2 = (!reg_1296.read().is_01() || !add_ln276_19_reg_6516.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1296.read()) + sc_biguint<32>(add_ln276_19_reg_6516.read()));
}

void sha256_transform::thread_add_ln271_93_fu_3152_p2() {
    add_ln271_93_fu_3152_p2 = (!m_23_reg_5605_pp0_iter5_reg.read().is_01() || !ap_const_lv32_76F988DA.is_01())? sc_lv<32>(): (sc_biguint<32>(m_23_reg_5605_pp0_iter5_reg.read()) + sc_biguint<32>(ap_const_lv32_76F988DA));
}

void sha256_transform::thread_add_ln271_94_fu_3157_p2() {
    add_ln271_94_fu_3157_p2 = (!add_ln271_93_fu_3152_p2.read().is_01() || !grp_EP1_fu_975_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_93_fu_3152_p2.read()) + sc_biguint<32>(grp_EP1_fu_975_ap_return.read()));
}

void sha256_transform::thread_add_ln271_95_fu_3168_p2() {
    add_ln271_95_fu_3168_p2 = (!add_ln271_94_reg_6603.read().is_01() || !add_ln271_92_fu_3163_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_94_reg_6603.read()) + sc_biguint<32>(add_ln271_92_fu_3163_p2.read()));
}

void sha256_transform::thread_add_ln271_96_fu_3200_p2() {
    add_ln271_96_fu_3200_p2 = (!reg_1296.read().is_01() || !ap_const_lv32_983E5152.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1296.read()) + sc_bigint<32>(ap_const_lv32_983E5152));
}

void sha256_transform::thread_add_ln271_97_fu_3190_p2() {
    add_ln271_97_fu_3190_p2 = (!grp_EP1_fu_975_ap_return.read().is_01() || !m_24_reg_5650_pp0_iter5_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_975_ap_return.read()) + sc_biguint<32>(m_24_reg_5650_pp0_iter5_reg.read()));
}

void sha256_transform::thread_add_ln271_98_fu_3195_p2() {
    add_ln271_98_fu_3195_p2 = (!add_ln271_97_fu_3190_p2.read().is_01() || !add_ln276_20_reg_6539.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_97_fu_3190_p2.read()) + sc_biguint<32>(add_ln276_20_reg_6539.read()));
}

void sha256_transform::thread_add_ln271_99_fu_3206_p2() {
    add_ln271_99_fu_3206_p2 = (!add_ln271_98_reg_6626.read().is_01() || !add_ln271_96_fu_3200_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_98_reg_6626.read()) + sc_biguint<32>(add_ln271_96_fu_3200_p2.read()));
}

void sha256_transform::thread_add_ln271_9_fu_1539_p2() {
    add_ln271_9_fu_1539_p2 = (!grp_EP1_fu_939_ap_return.read().is_01() || !m_2_reg_4955.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_939_ap_return.read()) + sc_biguint<32>(m_2_reg_4955.read()));
}

void sha256_transform::thread_add_ln271_fu_1394_p2() {
    add_ln271_fu_1394_p2 = (!reg_1212.read().is_01() || !ap_port_reg_ctx_state_7_read.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1212.read()) + sc_biguint<32>(ap_port_reg_ctx_state_7_read.read()));
}

void sha256_transform::thread_add_ln276_10_fu_2397_p2() {
    add_ln276_10_fu_2397_p2 = (!add_ln271_43_fu_2392_p2.read().is_01() || !add_ln280_6_reg_5732.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_43_fu_2392_p2.read()) + sc_biguint<32>(add_ln280_6_reg_5732.read()));
}

void sha256_transform::thread_add_ln276_11_fu_2499_p2() {
    add_ln276_11_fu_2499_p2 = (!add_ln271_47_fu_2494_p2.read().is_01() || !add_ln280_7_reg_5823.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_47_fu_2494_p2.read()) + sc_biguint<32>(add_ln280_7_reg_5823.read()));
}

void sha256_transform::thread_add_ln276_12_fu_2598_p2() {
    add_ln276_12_fu_2598_p2 = (!add_ln271_51_fu_2593_p2.read().is_01() || !add_ln280_8_reg_5914.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_51_fu_2593_p2.read()) + sc_biguint<32>(add_ln280_8_reg_5914.read()));
}

void sha256_transform::thread_add_ln276_13_fu_2696_p2() {
    add_ln276_13_fu_2696_p2 = (!add_ln271_55_fu_2691_p2.read().is_01() || !add_ln280_9_reg_6005.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_55_fu_2691_p2.read()) + sc_biguint<32>(add_ln280_9_reg_6005.read()));
}

void sha256_transform::thread_add_ln276_14_fu_2794_p2() {
    add_ln276_14_fu_2794_p2 = (!add_ln271_59_fu_2789_p2.read().is_01() || !add_ln280_10_reg_6096.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_59_fu_2789_p2.read()) + sc_biguint<32>(add_ln280_10_reg_6096.read()));
}

void sha256_transform::thread_add_ln276_15_fu_2854_p2() {
    add_ln276_15_fu_2854_p2 = (!add_ln271_63_fu_2849_p2.read().is_01() || !add_ln280_11_reg_6187.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_63_fu_2849_p2.read()) + sc_biguint<32>(add_ln280_11_reg_6187.read()));
}

void sha256_transform::thread_add_ln276_16_fu_2907_p2() {
    add_ln276_16_fu_2907_p2 = (!add_ln271_67_fu_2902_p2.read().is_01() || !add_ln280_12_reg_6259.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_67_fu_2902_p2.read()) + sc_biguint<32>(add_ln280_12_reg_6259.read()));
}

void sha256_transform::thread_add_ln276_17_fu_2945_p2() {
    add_ln276_17_fu_2945_p2 = (!add_ln271_71_fu_2940_p2.read().is_01() || !add_ln280_13_reg_6326.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_71_fu_2940_p2.read()) + sc_biguint<32>(add_ln280_13_reg_6326.read()));
}

void sha256_transform::thread_add_ln276_18_fu_2983_p2() {
    add_ln276_18_fu_2983_p2 = (!add_ln271_75_fu_2978_p2.read().is_01() || !add_ln280_14_reg_6390.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_75_fu_2978_p2.read()) + sc_biguint<32>(add_ln280_14_reg_6390.read()));
}

void sha256_transform::thread_add_ln276_19_fu_3021_p2() {
    add_ln276_19_fu_3021_p2 = (!add_ln271_79_fu_3016_p2.read().is_01() || !add_ln280_15_reg_6428.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_79_fu_3016_p2.read()) + sc_biguint<32>(add_ln280_15_reg_6428.read()));
}

void sha256_transform::thread_add_ln276_1_fu_1496_p2() {
    add_ln276_1_fu_1496_p2 = (!add_ln271_7_fu_1491_p2.read().is_01() || !ctx_state_2_read_1_reg_4818.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_7_fu_1491_p2.read()) + sc_biguint<32>(ctx_state_2_read_1_reg_4818.read()));
}

void sha256_transform::thread_add_ln276_20_fu_3059_p2() {
    add_ln276_20_fu_3059_p2 = (!add_ln271_83_fu_3054_p2.read().is_01() || !add_ln280_16_reg_6456.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_83_fu_3054_p2.read()) + sc_biguint<32>(add_ln280_16_reg_6456.read()));
}

void sha256_transform::thread_add_ln276_21_fu_3097_p2() {
    add_ln276_21_fu_3097_p2 = (!add_ln271_87_fu_3092_p2.read().is_01() || !add_ln280_17_reg_6479.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_87_fu_3092_p2.read()) + sc_biguint<32>(add_ln280_17_reg_6479.read()));
}

void sha256_transform::thread_add_ln276_22_fu_3135_p2() {
    add_ln276_22_fu_3135_p2 = (!add_ln271_91_fu_3130_p2.read().is_01() || !add_ln280_18_reg_6502.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_91_fu_3130_p2.read()) + sc_biguint<32>(add_ln280_18_reg_6502.read()));
}

void sha256_transform::thread_add_ln276_23_fu_3173_p2() {
    add_ln276_23_fu_3173_p2 = (!add_ln271_95_fu_3168_p2.read().is_01() || !add_ln280_19_reg_6525.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_95_fu_3168_p2.read()) + sc_biguint<32>(add_ln280_19_reg_6525.read()));
}

void sha256_transform::thread_add_ln276_24_fu_3211_p2() {
    add_ln276_24_fu_3211_p2 = (!add_ln271_99_fu_3206_p2.read().is_01() || !add_ln280_20_reg_6548.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_99_fu_3206_p2.read()) + sc_biguint<32>(add_ln280_20_reg_6548.read()));
}

void sha256_transform::thread_add_ln276_25_fu_3249_p2() {
    add_ln276_25_fu_3249_p2 = (!add_ln271_103_fu_3244_p2.read().is_01() || !add_ln280_21_reg_6571.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_103_fu_3244_p2.read()) + sc_biguint<32>(add_ln280_21_reg_6571.read()));
}

void sha256_transform::thread_add_ln276_26_fu_3287_p2() {
    add_ln276_26_fu_3287_p2 = (!add_ln271_107_fu_3282_p2.read().is_01() || !add_ln280_22_reg_6594.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_107_fu_3282_p2.read()) + sc_biguint<32>(add_ln280_22_reg_6594.read()));
}

void sha256_transform::thread_add_ln276_27_fu_3325_p2() {
    add_ln276_27_fu_3325_p2 = (!add_ln271_111_fu_3320_p2.read().is_01() || !add_ln280_23_reg_6617.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_111_fu_3320_p2.read()) + sc_biguint<32>(add_ln280_23_reg_6617.read()));
}

void sha256_transform::thread_add_ln276_28_fu_3363_p2() {
    add_ln276_28_fu_3363_p2 = (!add_ln271_115_fu_3358_p2.read().is_01() || !add_ln280_24_reg_6640.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_115_fu_3358_p2.read()) + sc_biguint<32>(add_ln280_24_reg_6640.read()));
}

void sha256_transform::thread_add_ln276_29_fu_3401_p2() {
    add_ln276_29_fu_3401_p2 = (!add_ln271_119_fu_3396_p2.read().is_01() || !add_ln280_25_reg_6663.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_119_fu_3396_p2.read()) + sc_biguint<32>(add_ln280_25_reg_6663.read()));
}

void sha256_transform::thread_add_ln276_2_fu_1586_p2() {
    add_ln276_2_fu_1586_p2 = (!add_ln271_11_fu_1581_p2.read().is_01() || !ctx_state_1_read_1_reg_4824.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_11_fu_1581_p2.read()) + sc_biguint<32>(ctx_state_1_read_1_reg_4824.read()));
}

void sha256_transform::thread_add_ln276_30_fu_3439_p2() {
    add_ln276_30_fu_3439_p2 = (!add_ln271_123_fu_3434_p2.read().is_01() || !add_ln280_26_reg_6686.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_123_fu_3434_p2.read()) + sc_biguint<32>(add_ln280_26_reg_6686.read()));
}

void sha256_transform::thread_add_ln276_31_fu_3477_p2() {
    add_ln276_31_fu_3477_p2 = (!add_ln271_127_fu_3472_p2.read().is_01() || !add_ln280_27_reg_6709.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_127_fu_3472_p2.read()) + sc_biguint<32>(add_ln280_27_reg_6709.read()));
}

void sha256_transform::thread_add_ln276_32_fu_3515_p2() {
    add_ln276_32_fu_3515_p2 = (!add_ln271_131_fu_3510_p2.read().is_01() || !add_ln280_28_reg_6732.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_131_fu_3510_p2.read()) + sc_biguint<32>(add_ln280_28_reg_6732.read()));
}

void sha256_transform::thread_add_ln276_33_fu_3553_p2() {
    add_ln276_33_fu_3553_p2 = (!add_ln271_135_fu_3548_p2.read().is_01() || !add_ln280_29_reg_6755_pp0_iter8_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_135_fu_3548_p2.read()) + sc_biguint<32>(add_ln280_29_reg_6755_pp0_iter8_reg.read()));
}

void sha256_transform::thread_add_ln276_34_fu_3591_p2() {
    add_ln276_34_fu_3591_p2 = (!add_ln271_139_fu_3586_p2.read().is_01() || !add_ln280_30_reg_6778_pp0_iter8_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_139_fu_3586_p2.read()) + sc_biguint<32>(add_ln280_30_reg_6778_pp0_iter8_reg.read()));
}

void sha256_transform::thread_add_ln276_35_fu_3629_p2() {
    add_ln276_35_fu_3629_p2 = (!add_ln271_143_fu_3624_p2.read().is_01() || !add_ln280_31_reg_6801_pp0_iter9_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_143_fu_3624_p2.read()) + sc_biguint<32>(add_ln280_31_reg_6801_pp0_iter9_reg.read()));
}

void sha256_transform::thread_add_ln276_36_fu_3667_p2() {
    add_ln276_36_fu_3667_p2 = (!add_ln271_147_fu_3662_p2.read().is_01() || !add_ln280_32_reg_6824_pp0_iter9_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_147_fu_3662_p2.read()) + sc_biguint<32>(add_ln280_32_reg_6824_pp0_iter9_reg.read()));
}

void sha256_transform::thread_add_ln276_37_fu_3705_p2() {
    add_ln276_37_fu_3705_p2 = (!add_ln271_151_fu_3700_p2.read().is_01() || !add_ln280_33_reg_6847.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_151_fu_3700_p2.read()) + sc_biguint<32>(add_ln280_33_reg_6847.read()));
}

void sha256_transform::thread_add_ln276_38_fu_3743_p2() {
    add_ln276_38_fu_3743_p2 = (!add_ln271_155_fu_3738_p2.read().is_01() || !add_ln280_34_reg_6870.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_155_fu_3738_p2.read()) + sc_biguint<32>(add_ln280_34_reg_6870.read()));
}

void sha256_transform::thread_add_ln276_39_fu_3781_p2() {
    add_ln276_39_fu_3781_p2 = (!add_ln271_159_fu_3776_p2.read().is_01() || !add_ln280_35_reg_6893.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_159_fu_3776_p2.read()) + sc_biguint<32>(add_ln280_35_reg_6893.read()));
}

void sha256_transform::thread_add_ln276_3_fu_1686_p2() {
    add_ln276_3_fu_1686_p2 = (!add_ln271_15_fu_1681_p2.read().is_01() || !ctx_state_0_read_1_reg_4831.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_15_fu_1681_p2.read()) + sc_biguint<32>(ctx_state_0_read_1_reg_4831.read()));
}

void sha256_transform::thread_add_ln276_40_fu_3819_p2() {
    add_ln276_40_fu_3819_p2 = (!add_ln271_163_fu_3814_p2.read().is_01() || !add_ln280_36_reg_6916.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_163_fu_3814_p2.read()) + sc_biguint<32>(add_ln280_36_reg_6916.read()));
}

void sha256_transform::thread_add_ln276_41_fu_3857_p2() {
    add_ln276_41_fu_3857_p2 = (!add_ln271_167_fu_3852_p2.read().is_01() || !add_ln280_37_reg_6939.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_167_fu_3852_p2.read()) + sc_biguint<32>(add_ln280_37_reg_6939.read()));
}

void sha256_transform::thread_add_ln276_42_fu_3895_p2() {
    add_ln276_42_fu_3895_p2 = (!add_ln271_171_fu_3890_p2.read().is_01() || !add_ln280_38_reg_6962.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_171_fu_3890_p2.read()) + sc_biguint<32>(add_ln280_38_reg_6962.read()));
}

void sha256_transform::thread_add_ln276_43_fu_3933_p2() {
    add_ln276_43_fu_3933_p2 = (!add_ln271_175_fu_3928_p2.read().is_01() || !add_ln280_39_reg_6985.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_175_fu_3928_p2.read()) + sc_biguint<32>(add_ln280_39_reg_6985.read()));
}

void sha256_transform::thread_add_ln276_44_fu_3971_p2() {
    add_ln276_44_fu_3971_p2 = (!add_ln271_179_fu_3966_p2.read().is_01() || !add_ln280_40_reg_7008.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_179_fu_3966_p2.read()) + sc_biguint<32>(add_ln280_40_reg_7008.read()));
}

void sha256_transform::thread_add_ln276_45_fu_4009_p2() {
    add_ln276_45_fu_4009_p2 = (!add_ln271_183_fu_4004_p2.read().is_01() || !add_ln280_41_reg_7031.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_183_fu_4004_p2.read()) + sc_biguint<32>(add_ln280_41_reg_7031.read()));
}

void sha256_transform::thread_add_ln276_46_fu_4047_p2() {
    add_ln276_46_fu_4047_p2 = (!add_ln271_187_fu_4042_p2.read().is_01() || !add_ln280_42_reg_7054.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_187_fu_4042_p2.read()) + sc_biguint<32>(add_ln280_42_reg_7054.read()));
}

void sha256_transform::thread_add_ln276_47_fu_4100_p2() {
    add_ln276_47_fu_4100_p2 = (!add_ln271_191_fu_4095_p2.read().is_01() || !add_ln280_43_reg_7077.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_191_fu_4095_p2.read()) + sc_biguint<32>(add_ln280_43_reg_7077.read()));
}

void sha256_transform::thread_add_ln276_48_fu_4138_p2() {
    add_ln276_48_fu_4138_p2 = (!add_ln271_195_fu_4133_p2.read().is_01() || !add_ln280_44_reg_7100.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_195_fu_4133_p2.read()) + sc_biguint<32>(add_ln280_44_reg_7100.read()));
}

void sha256_transform::thread_add_ln276_49_fu_4176_p2() {
    add_ln276_49_fu_4176_p2 = (!add_ln271_199_fu_4171_p2.read().is_01() || !add_ln280_45_reg_7123.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_199_fu_4171_p2.read()) + sc_biguint<32>(add_ln280_45_reg_7123.read()));
}

void sha256_transform::thread_add_ln276_4_fu_1787_p2() {
    add_ln276_4_fu_1787_p2 = (!add_ln271_19_fu_1782_p2.read().is_01() || !add_ln280_reg_5026.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_19_fu_1782_p2.read()) + sc_biguint<32>(add_ln280_reg_5026.read()));
}

void sha256_transform::thread_add_ln276_50_fu_4214_p2() {
    add_ln276_50_fu_4214_p2 = (!add_ln271_203_fu_4209_p2.read().is_01() || !add_ln280_46_reg_7146.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_203_fu_4209_p2.read()) + sc_biguint<32>(add_ln280_46_reg_7146.read()));
}

void sha256_transform::thread_add_ln276_51_fu_4252_p2() {
    add_ln276_51_fu_4252_p2 = (!add_ln271_207_fu_4247_p2.read().is_01() || !add_ln280_47_reg_7174.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_207_fu_4247_p2.read()) + sc_biguint<32>(add_ln280_47_reg_7174.read()));
}

void sha256_transform::thread_add_ln276_52_fu_4290_p2() {
    add_ln276_52_fu_4290_p2 = (!add_ln271_211_fu_4285_p2.read().is_01() || !add_ln280_48_reg_7197.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_211_fu_4285_p2.read()) + sc_biguint<32>(add_ln280_48_reg_7197.read()));
}

void sha256_transform::thread_add_ln276_53_fu_4328_p2() {
    add_ln276_53_fu_4328_p2 = (!add_ln271_215_fu_4323_p2.read().is_01() || !add_ln280_49_reg_7220.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_215_fu_4323_p2.read()) + sc_biguint<32>(add_ln280_49_reg_7220.read()));
}

void sha256_transform::thread_add_ln276_54_fu_4366_p2() {
    add_ln276_54_fu_4366_p2 = (!add_ln271_219_fu_4361_p2.read().is_01() || !add_ln280_50_reg_7243.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_219_fu_4361_p2.read()) + sc_biguint<32>(add_ln280_50_reg_7243.read()));
}

void sha256_transform::thread_add_ln276_55_fu_4404_p2() {
    add_ln276_55_fu_4404_p2 = (!add_ln271_223_fu_4399_p2.read().is_01() || !add_ln280_51_reg_7266.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_223_fu_4399_p2.read()) + sc_biguint<32>(add_ln280_51_reg_7266.read()));
}

void sha256_transform::thread_add_ln276_56_fu_4442_p2() {
    add_ln276_56_fu_4442_p2 = (!add_ln271_227_fu_4437_p2.read().is_01() || !add_ln280_52_reg_7289.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_227_fu_4437_p2.read()) + sc_biguint<32>(add_ln280_52_reg_7289.read()));
}

void sha256_transform::thread_add_ln276_57_fu_4480_p2() {
    add_ln276_57_fu_4480_p2 = (!add_ln271_231_fu_4475_p2.read().is_01() || !add_ln280_53_reg_7312.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_231_fu_4475_p2.read()) + sc_biguint<32>(add_ln280_53_reg_7312.read()));
}

void sha256_transform::thread_add_ln276_58_fu_4518_p2() {
    add_ln276_58_fu_4518_p2 = (!add_ln271_235_fu_4513_p2.read().is_01() || !add_ln280_54_reg_7335.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_235_fu_4513_p2.read()) + sc_biguint<32>(add_ln280_54_reg_7335.read()));
}

void sha256_transform::thread_add_ln276_59_fu_4556_p2() {
    add_ln276_59_fu_4556_p2 = (!add_ln271_239_fu_4551_p2.read().is_01() || !add_ln280_55_reg_7358.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_239_fu_4551_p2.read()) + sc_biguint<32>(add_ln280_55_reg_7358.read()));
}

void sha256_transform::thread_add_ln276_5_fu_1887_p2() {
    add_ln276_5_fu_1887_p2 = (!add_ln271_23_fu_1882_p2.read().is_01() || !add_ln280_1_reg_5173.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_23_fu_1882_p2.read()) + sc_biguint<32>(add_ln280_1_reg_5173.read()));
}

void sha256_transform::thread_add_ln276_60_fu_4594_p2() {
    add_ln276_60_fu_4594_p2 = (!add_ln271_243_fu_4589_p2.read().is_01() || !add_ln280_56_reg_7381.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_243_fu_4589_p2.read()) + sc_biguint<32>(add_ln280_56_reg_7381.read()));
}

void sha256_transform::thread_add_ln276_61_fu_4632_p2() {
    add_ln276_61_fu_4632_p2 = (!add_ln271_247_fu_4627_p2.read().is_01() || !add_ln280_57_reg_7404.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_247_fu_4627_p2.read()) + sc_biguint<32>(add_ln280_57_reg_7404.read()));
}

void sha256_transform::thread_add_ln276_62_fu_4669_p2() {
    add_ln276_62_fu_4669_p2 = (!add_ln271_252_fu_4664_p2.read().is_01() || !add_ln280_58_reg_7427.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_252_fu_4664_p2.read()) + sc_biguint<32>(add_ln280_58_reg_7427.read()));
}

void sha256_transform::thread_add_ln276_6_fu_1989_p2() {
    add_ln276_6_fu_1989_p2 = (!add_ln271_27_fu_1984_p2.read().is_01() || !add_ln280_2_reg_5323.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_27_fu_1984_p2.read()) + sc_biguint<32>(add_ln280_2_reg_5323.read()));
}

void sha256_transform::thread_add_ln276_7_fu_2091_p2() {
    add_ln276_7_fu_2091_p2 = (!add_ln271_31_fu_2086_p2.read().is_01() || !add_ln280_3_reg_5444.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_31_fu_2086_p2.read()) + sc_biguint<32>(add_ln280_3_reg_5444.read()));
}

void sha256_transform::thread_add_ln276_8_fu_2193_p2() {
    add_ln276_8_fu_2193_p2 = (!add_ln271_35_fu_2188_p2.read().is_01() || !add_ln280_4_reg_5550.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_35_fu_2188_p2.read()) + sc_biguint<32>(add_ln280_4_reg_5550.read()));
}

void sha256_transform::thread_add_ln276_9_fu_2295_p2() {
    add_ln276_9_fu_2295_p2 = (!add_ln271_39_fu_2290_p2.read().is_01() || !add_ln280_5_reg_5641.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_39_fu_2290_p2.read()) + sc_biguint<32>(add_ln280_5_reg_5641.read()));
}

void sha256_transform::thread_add_ln276_fu_1405_p2() {
    add_ln276_fu_1405_p2 = (!add_ln271_3_fu_1400_p2.read().is_01() || !ap_port_reg_ctx_state_3_read.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_3_fu_1400_p2.read()) + sc_biguint<32>(ap_port_reg_ctx_state_3_read.read()));
}

void sha256_transform::thread_add_ln280_100_fu_3710_p2() {
    add_ln280_100_fu_3710_p2 = (!add_ln271_151_fu_3700_p2.read().is_01() || !reg_1240.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_151_fu_3700_p2.read()) + sc_biguint<32>(reg_1240.read()));
}

void sha256_transform::thread_add_ln280_101_fu_3748_p2() {
    add_ln280_101_fu_3748_p2 = (!add_ln271_155_fu_3738_p2.read().is_01() || !reg_1240.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_155_fu_3738_p2.read()) + sc_biguint<32>(reg_1240.read()));
}

void sha256_transform::thread_add_ln280_102_fu_3786_p2() {
    add_ln280_102_fu_3786_p2 = (!add_ln271_159_fu_3776_p2.read().is_01() || !reg_1260.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_159_fu_3776_p2.read()) + sc_biguint<32>(reg_1260.read()));
}

void sha256_transform::thread_add_ln280_103_fu_3824_p2() {
    add_ln280_103_fu_3824_p2 = (!add_ln271_163_fu_3814_p2.read().is_01() || !reg_1240.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_163_fu_3814_p2.read()) + sc_biguint<32>(reg_1240.read()));
}

void sha256_transform::thread_add_ln280_104_fu_3862_p2() {
    add_ln280_104_fu_3862_p2 = (!add_ln271_167_fu_3852_p2.read().is_01() || !reg_1260.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_167_fu_3852_p2.read()) + sc_biguint<32>(reg_1260.read()));
}

void sha256_transform::thread_add_ln280_105_fu_3900_p2() {
    add_ln280_105_fu_3900_p2 = (!add_ln271_171_fu_3890_p2.read().is_01() || !reg_1260.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_171_fu_3890_p2.read()) + sc_biguint<32>(reg_1260.read()));
}

void sha256_transform::thread_add_ln280_106_fu_3938_p2() {
    add_ln280_106_fu_3938_p2 = (!add_ln271_175_fu_3928_p2.read().is_01() || !reg_1280.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_175_fu_3928_p2.read()) + sc_biguint<32>(reg_1280.read()));
}

void sha256_transform::thread_add_ln280_107_fu_3976_p2() {
    add_ln280_107_fu_3976_p2 = (!add_ln271_179_fu_3966_p2.read().is_01() || !reg_1260.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_179_fu_3966_p2.read()) + sc_biguint<32>(reg_1260.read()));
}

void sha256_transform::thread_add_ln280_108_fu_4014_p2() {
    add_ln280_108_fu_4014_p2 = (!add_ln271_183_fu_4004_p2.read().is_01() || !reg_1280.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_183_fu_4004_p2.read()) + sc_biguint<32>(reg_1280.read()));
}

void sha256_transform::thread_add_ln280_109_fu_4052_p2() {
    add_ln280_109_fu_4052_p2 = (!add_ln271_187_fu_4042_p2.read().is_01() || !reg_1280.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_187_fu_4042_p2.read()) + sc_biguint<32>(reg_1280.read()));
}

void sha256_transform::thread_add_ln280_10_fu_2408_p2() {
    add_ln280_10_fu_2408_p2 = (!add_ln280_73_fu_2402_p2.read().is_01() || !reg_1256.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_73_fu_2402_p2.read()) + sc_biguint<32>(reg_1256.read()));
}

void sha256_transform::thread_add_ln280_110_fu_4105_p2() {
    add_ln280_110_fu_4105_p2 = (!add_ln271_191_fu_4095_p2.read().is_01() || !reg_1292.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_191_fu_4095_p2.read()) + sc_biguint<32>(reg_1292.read()));
}

void sha256_transform::thread_add_ln280_111_fu_4143_p2() {
    add_ln280_111_fu_4143_p2 = (!add_ln271_195_fu_4133_p2.read().is_01() || !reg_1280.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_195_fu_4133_p2.read()) + sc_biguint<32>(reg_1280.read()));
}

void sha256_transform::thread_add_ln280_112_fu_4181_p2() {
    add_ln280_112_fu_4181_p2 = (!add_ln271_199_fu_4171_p2.read().is_01() || !reg_1292.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_199_fu_4171_p2.read()) + sc_biguint<32>(reg_1292.read()));
}

void sha256_transform::thread_add_ln280_113_fu_4219_p2() {
    add_ln280_113_fu_4219_p2 = (!add_ln271_203_fu_4209_p2.read().is_01() || !reg_1292.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_203_fu_4209_p2.read()) + sc_biguint<32>(reg_1292.read()));
}

void sha256_transform::thread_add_ln280_114_fu_4257_p2() {
    add_ln280_114_fu_4257_p2 = (!add_ln271_207_fu_4247_p2.read().is_01() || !reg_1304.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_207_fu_4247_p2.read()) + sc_biguint<32>(reg_1304.read()));
}

void sha256_transform::thread_add_ln280_115_fu_4295_p2() {
    add_ln280_115_fu_4295_p2 = (!add_ln271_211_fu_4285_p2.read().is_01() || !reg_1292.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_211_fu_4285_p2.read()) + sc_biguint<32>(reg_1292.read()));
}

void sha256_transform::thread_add_ln280_116_fu_4333_p2() {
    add_ln280_116_fu_4333_p2 = (!add_ln271_215_fu_4323_p2.read().is_01() || !reg_1304.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_215_fu_4323_p2.read()) + sc_biguint<32>(reg_1304.read()));
}

void sha256_transform::thread_add_ln280_117_fu_4371_p2() {
    add_ln280_117_fu_4371_p2 = (!add_ln271_219_fu_4361_p2.read().is_01() || !reg_1304.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_219_fu_4361_p2.read()) + sc_biguint<32>(reg_1304.read()));
}

void sha256_transform::thread_add_ln280_118_fu_4409_p2() {
    add_ln280_118_fu_4409_p2 = (!add_ln271_223_fu_4399_p2.read().is_01() || !reg_1316.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_223_fu_4399_p2.read()) + sc_biguint<32>(reg_1316.read()));
}

void sha256_transform::thread_add_ln280_119_fu_4447_p2() {
    add_ln280_119_fu_4447_p2 = (!add_ln271_227_fu_4437_p2.read().is_01() || !reg_1304.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_227_fu_4437_p2.read()) + sc_biguint<32>(reg_1304.read()));
}

void sha256_transform::thread_add_ln280_11_fu_2510_p2() {
    add_ln280_11_fu_2510_p2 = (!add_ln280_74_fu_2504_p2.read().is_01() || !reg_1256.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_74_fu_2504_p2.read()) + sc_biguint<32>(reg_1256.read()));
}

void sha256_transform::thread_add_ln280_120_fu_4485_p2() {
    add_ln280_120_fu_4485_p2 = (!add_ln271_231_fu_4475_p2.read().is_01() || !reg_1316.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_231_fu_4475_p2.read()) + sc_biguint<32>(reg_1316.read()));
}

void sha256_transform::thread_add_ln280_121_fu_4523_p2() {
    add_ln280_121_fu_4523_p2 = (!add_ln271_235_fu_4513_p2.read().is_01() || !reg_1316.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_235_fu_4513_p2.read()) + sc_biguint<32>(reg_1316.read()));
}

void sha256_transform::thread_add_ln280_122_fu_4561_p2() {
    add_ln280_122_fu_4561_p2 = (!add_ln271_239_fu_4551_p2.read().is_01() || !reg_1328.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_239_fu_4551_p2.read()) + sc_biguint<32>(reg_1328.read()));
}

void sha256_transform::thread_add_ln280_123_fu_4599_p2() {
    add_ln280_123_fu_4599_p2 = (!add_ln271_243_fu_4589_p2.read().is_01() || !reg_1316.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_243_fu_4589_p2.read()) + sc_biguint<32>(reg_1316.read()));
}

void sha256_transform::thread_add_ln280_124_fu_4637_p2() {
    add_ln280_124_fu_4637_p2 = (!add_ln271_247_fu_4627_p2.read().is_01() || !reg_1328.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_247_fu_4627_p2.read()) + sc_biguint<32>(reg_1328.read()));
}

void sha256_transform::thread_add_ln280_125_fu_4674_p2() {
    add_ln280_125_fu_4674_p2 = (!add_ln271_252_fu_4664_p2.read().is_01() || !reg_1328.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_252_fu_4664_p2.read()) + sc_biguint<32>(reg_1328.read()));
}

void sha256_transform::thread_add_ln280_12_fu_2609_p2() {
    add_ln280_12_fu_2609_p2 = (!add_ln280_75_fu_2603_p2.read().is_01() || !reg_1256.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_75_fu_2603_p2.read()) + sc_biguint<32>(reg_1256.read()));
}

void sha256_transform::thread_add_ln280_13_fu_2707_p2() {
    add_ln280_13_fu_2707_p2 = (!add_ln280_76_fu_2701_p2.read().is_01() || !reg_1276.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_76_fu_2701_p2.read()) + sc_biguint<32>(reg_1276.read()));
}

void sha256_transform::thread_add_ln280_14_fu_2805_p2() {
    add_ln280_14_fu_2805_p2 = (!add_ln280_77_fu_2799_p2.read().is_01() || !reg_1276.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_77_fu_2799_p2.read()) + sc_biguint<32>(reg_1276.read()));
}

void sha256_transform::thread_add_ln280_15_fu_2865_p2() {
    add_ln280_15_fu_2865_p2 = (!add_ln280_78_fu_2859_p2.read().is_01() || !reg_1276.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_78_fu_2859_p2.read()) + sc_biguint<32>(reg_1276.read()));
}

void sha256_transform::thread_add_ln280_16_fu_2918_p2() {
    add_ln280_16_fu_2918_p2 = (!add_ln280_79_fu_2912_p2.read().is_01() || !reg_1276.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_79_fu_2912_p2.read()) + sc_biguint<32>(reg_1276.read()));
}

void sha256_transform::thread_add_ln280_17_fu_2956_p2() {
    add_ln280_17_fu_2956_p2 = (!add_ln280_80_fu_2950_p2.read().is_01() || !reg_1288.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_80_fu_2950_p2.read()) + sc_biguint<32>(reg_1288.read()));
}

void sha256_transform::thread_add_ln280_18_fu_2994_p2() {
    add_ln280_18_fu_2994_p2 = (!add_ln280_81_fu_2988_p2.read().is_01() || !reg_1288.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_81_fu_2988_p2.read()) + sc_biguint<32>(reg_1288.read()));
}

void sha256_transform::thread_add_ln280_19_fu_3032_p2() {
    add_ln280_19_fu_3032_p2 = (!add_ln280_82_fu_3026_p2.read().is_01() || !reg_1288.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_82_fu_3026_p2.read()) + sc_biguint<32>(reg_1288.read()));
}

void sha256_transform::thread_add_ln280_1_fu_1507_p2() {
    add_ln280_1_fu_1507_p2 = (!add_ln280_64_fu_1501_p2.read().is_01() || !reg_1216.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_64_fu_1501_p2.read()) + sc_biguint<32>(reg_1216.read()));
}

void sha256_transform::thread_add_ln280_20_fu_3070_p2() {
    add_ln280_20_fu_3070_p2 = (!add_ln280_83_fu_3064_p2.read().is_01() || !reg_1288.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_83_fu_3064_p2.read()) + sc_biguint<32>(reg_1288.read()));
}

void sha256_transform::thread_add_ln280_21_fu_3108_p2() {
    add_ln280_21_fu_3108_p2 = (!add_ln280_84_fu_3102_p2.read().is_01() || !reg_1300.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_84_fu_3102_p2.read()) + sc_biguint<32>(reg_1300.read()));
}

void sha256_transform::thread_add_ln280_22_fu_3146_p2() {
    add_ln280_22_fu_3146_p2 = (!add_ln280_85_fu_3140_p2.read().is_01() || !reg_1300.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_85_fu_3140_p2.read()) + sc_biguint<32>(reg_1300.read()));
}

void sha256_transform::thread_add_ln280_23_fu_3184_p2() {
    add_ln280_23_fu_3184_p2 = (!add_ln280_86_fu_3178_p2.read().is_01() || !reg_1300.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_86_fu_3178_p2.read()) + sc_biguint<32>(reg_1300.read()));
}

void sha256_transform::thread_add_ln280_24_fu_3222_p2() {
    add_ln280_24_fu_3222_p2 = (!add_ln280_87_fu_3216_p2.read().is_01() || !reg_1300.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_87_fu_3216_p2.read()) + sc_biguint<32>(reg_1300.read()));
}

void sha256_transform::thread_add_ln280_25_fu_3260_p2() {
    add_ln280_25_fu_3260_p2 = (!add_ln280_88_fu_3254_p2.read().is_01() || !reg_1312.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_88_fu_3254_p2.read()) + sc_biguint<32>(reg_1312.read()));
}

void sha256_transform::thread_add_ln280_26_fu_3298_p2() {
    add_ln280_26_fu_3298_p2 = (!add_ln280_89_fu_3292_p2.read().is_01() || !reg_1312.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_89_fu_3292_p2.read()) + sc_biguint<32>(reg_1312.read()));
}

void sha256_transform::thread_add_ln280_27_fu_3336_p2() {
    add_ln280_27_fu_3336_p2 = (!add_ln280_90_fu_3330_p2.read().is_01() || !reg_1312.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_90_fu_3330_p2.read()) + sc_biguint<32>(reg_1312.read()));
}

void sha256_transform::thread_add_ln280_28_fu_3374_p2() {
    add_ln280_28_fu_3374_p2 = (!add_ln280_91_fu_3368_p2.read().is_01() || !reg_1312.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_91_fu_3368_p2.read()) + sc_biguint<32>(reg_1312.read()));
}

void sha256_transform::thread_add_ln280_29_fu_3412_p2() {
    add_ln280_29_fu_3412_p2 = (!add_ln280_92_fu_3406_p2.read().is_01() || !reg_1324.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_92_fu_3406_p2.read()) + sc_biguint<32>(reg_1324.read()));
}

void sha256_transform::thread_add_ln280_2_fu_1597_p2() {
    add_ln280_2_fu_1597_p2 = (!add_ln280_65_fu_1591_p2.read().is_01() || !reg_1216.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_65_fu_1591_p2.read()) + sc_biguint<32>(reg_1216.read()));
}

void sha256_transform::thread_add_ln280_30_fu_3450_p2() {
    add_ln280_30_fu_3450_p2 = (!add_ln280_93_fu_3444_p2.read().is_01() || !reg_1324.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_93_fu_3444_p2.read()) + sc_biguint<32>(reg_1324.read()));
}

void sha256_transform::thread_add_ln280_31_fu_3488_p2() {
    add_ln280_31_fu_3488_p2 = (!add_ln280_94_fu_3482_p2.read().is_01() || !reg_1324.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_94_fu_3482_p2.read()) + sc_biguint<32>(reg_1324.read()));
}

void sha256_transform::thread_add_ln280_32_fu_3526_p2() {
    add_ln280_32_fu_3526_p2 = (!add_ln280_95_fu_3520_p2.read().is_01() || !reg_1324.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_95_fu_3520_p2.read()) + sc_biguint<32>(reg_1324.read()));
}

void sha256_transform::thread_add_ln280_33_fu_3564_p2() {
    add_ln280_33_fu_3564_p2 = (!add_ln280_96_fu_3558_p2.read().is_01() || !reg_1216.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_96_fu_3558_p2.read()) + sc_biguint<32>(reg_1216.read()));
}

void sha256_transform::thread_add_ln280_34_fu_3602_p2() {
    add_ln280_34_fu_3602_p2 = (!add_ln280_97_fu_3596_p2.read().is_01() || !reg_1216.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_97_fu_3596_p2.read()) + sc_biguint<32>(reg_1216.read()));
}

void sha256_transform::thread_add_ln280_35_fu_3640_p2() {
    add_ln280_35_fu_3640_p2 = (!add_ln280_98_fu_3634_p2.read().is_01() || !reg_1236.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_98_fu_3634_p2.read()) + sc_biguint<32>(reg_1236.read()));
}

void sha256_transform::thread_add_ln280_36_fu_3678_p2() {
    add_ln280_36_fu_3678_p2 = (!add_ln280_99_fu_3672_p2.read().is_01() || !reg_1216.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_99_fu_3672_p2.read()) + sc_biguint<32>(reg_1216.read()));
}

void sha256_transform::thread_add_ln280_37_fu_3716_p2() {
    add_ln280_37_fu_3716_p2 = (!add_ln280_100_fu_3710_p2.read().is_01() || !reg_1236.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_100_fu_3710_p2.read()) + sc_biguint<32>(reg_1236.read()));
}

void sha256_transform::thread_add_ln280_38_fu_3754_p2() {
    add_ln280_38_fu_3754_p2 = (!add_ln280_101_fu_3748_p2.read().is_01() || !reg_1236.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_101_fu_3748_p2.read()) + sc_biguint<32>(reg_1236.read()));
}

void sha256_transform::thread_add_ln280_39_fu_3792_p2() {
    add_ln280_39_fu_3792_p2 = (!add_ln280_102_fu_3786_p2.read().is_01() || !reg_1256.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_102_fu_3786_p2.read()) + sc_biguint<32>(reg_1256.read()));
}

void sha256_transform::thread_add_ln280_3_fu_1697_p2() {
    add_ln280_3_fu_1697_p2 = (!add_ln280_66_fu_1691_p2.read().is_01() || !reg_1216.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_66_fu_1691_p2.read()) + sc_biguint<32>(reg_1216.read()));
}

void sha256_transform::thread_add_ln280_40_fu_3830_p2() {
    add_ln280_40_fu_3830_p2 = (!add_ln280_103_fu_3824_p2.read().is_01() || !reg_1236.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_103_fu_3824_p2.read()) + sc_biguint<32>(reg_1236.read()));
}

void sha256_transform::thread_add_ln280_41_fu_3868_p2() {
    add_ln280_41_fu_3868_p2 = (!add_ln280_104_fu_3862_p2.read().is_01() || !reg_1256.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_104_fu_3862_p2.read()) + sc_biguint<32>(reg_1256.read()));
}

void sha256_transform::thread_add_ln280_42_fu_3906_p2() {
    add_ln280_42_fu_3906_p2 = (!add_ln280_105_fu_3900_p2.read().is_01() || !reg_1256.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_105_fu_3900_p2.read()) + sc_biguint<32>(reg_1256.read()));
}

void sha256_transform::thread_add_ln280_43_fu_3944_p2() {
    add_ln280_43_fu_3944_p2 = (!add_ln280_106_fu_3938_p2.read().is_01() || !reg_1276.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_106_fu_3938_p2.read()) + sc_biguint<32>(reg_1276.read()));
}

void sha256_transform::thread_add_ln280_44_fu_3982_p2() {
    add_ln280_44_fu_3982_p2 = (!add_ln280_107_fu_3976_p2.read().is_01() || !reg_1256.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_107_fu_3976_p2.read()) + sc_biguint<32>(reg_1256.read()));
}

void sha256_transform::thread_add_ln280_45_fu_4020_p2() {
    add_ln280_45_fu_4020_p2 = (!add_ln280_108_fu_4014_p2.read().is_01() || !reg_1276.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_108_fu_4014_p2.read()) + sc_biguint<32>(reg_1276.read()));
}

void sha256_transform::thread_add_ln280_46_fu_4058_p2() {
    add_ln280_46_fu_4058_p2 = (!add_ln280_109_fu_4052_p2.read().is_01() || !reg_1276.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_109_fu_4052_p2.read()) + sc_biguint<32>(reg_1276.read()));
}

void sha256_transform::thread_add_ln280_47_fu_4111_p2() {
    add_ln280_47_fu_4111_p2 = (!add_ln280_110_fu_4105_p2.read().is_01() || !reg_1288.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_110_fu_4105_p2.read()) + sc_biguint<32>(reg_1288.read()));
}

void sha256_transform::thread_add_ln280_48_fu_4149_p2() {
    add_ln280_48_fu_4149_p2 = (!add_ln280_111_fu_4143_p2.read().is_01() || !reg_1276.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_111_fu_4143_p2.read()) + sc_biguint<32>(reg_1276.read()));
}

void sha256_transform::thread_add_ln280_49_fu_4187_p2() {
    add_ln280_49_fu_4187_p2 = (!add_ln280_112_fu_4181_p2.read().is_01() || !reg_1288.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_112_fu_4181_p2.read()) + sc_biguint<32>(reg_1288.read()));
}

void sha256_transform::thread_add_ln280_4_fu_1797_p2() {
    add_ln280_4_fu_1797_p2 = (!add_ln280_67_fu_1792_p2.read().is_01() || !tmp_4_4_reg_5497.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_67_fu_1792_p2.read()) + sc_biguint<32>(tmp_4_4_reg_5497.read()));
}

void sha256_transform::thread_add_ln280_50_fu_4225_p2() {
    add_ln280_50_fu_4225_p2 = (!add_ln280_113_fu_4219_p2.read().is_01() || !reg_1288.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_113_fu_4219_p2.read()) + sc_biguint<32>(reg_1288.read()));
}

void sha256_transform::thread_add_ln280_51_fu_4263_p2() {
    add_ln280_51_fu_4263_p2 = (!add_ln280_114_fu_4257_p2.read().is_01() || !reg_1300.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_114_fu_4257_p2.read()) + sc_biguint<32>(reg_1300.read()));
}

void sha256_transform::thread_add_ln280_52_fu_4301_p2() {
    add_ln280_52_fu_4301_p2 = (!add_ln280_115_fu_4295_p2.read().is_01() || !reg_1288.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_115_fu_4295_p2.read()) + sc_biguint<32>(reg_1288.read()));
}

void sha256_transform::thread_add_ln280_53_fu_4339_p2() {
    add_ln280_53_fu_4339_p2 = (!add_ln280_116_fu_4333_p2.read().is_01() || !reg_1300.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_116_fu_4333_p2.read()) + sc_biguint<32>(reg_1300.read()));
}

void sha256_transform::thread_add_ln280_54_fu_4377_p2() {
    add_ln280_54_fu_4377_p2 = (!add_ln280_117_fu_4371_p2.read().is_01() || !reg_1300.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_117_fu_4371_p2.read()) + sc_biguint<32>(reg_1300.read()));
}

void sha256_transform::thread_add_ln280_55_fu_4415_p2() {
    add_ln280_55_fu_4415_p2 = (!add_ln280_118_fu_4409_p2.read().is_01() || !reg_1312.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_118_fu_4409_p2.read()) + sc_biguint<32>(reg_1312.read()));
}

void sha256_transform::thread_add_ln280_56_fu_4453_p2() {
    add_ln280_56_fu_4453_p2 = (!add_ln280_119_fu_4447_p2.read().is_01() || !reg_1300.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_119_fu_4447_p2.read()) + sc_biguint<32>(reg_1300.read()));
}

void sha256_transform::thread_add_ln280_57_fu_4491_p2() {
    add_ln280_57_fu_4491_p2 = (!add_ln280_120_fu_4485_p2.read().is_01() || !reg_1312.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_120_fu_4485_p2.read()) + sc_biguint<32>(reg_1312.read()));
}

void sha256_transform::thread_add_ln280_58_fu_4529_p2() {
    add_ln280_58_fu_4529_p2 = (!add_ln280_121_fu_4523_p2.read().is_01() || !reg_1312.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_121_fu_4523_p2.read()) + sc_biguint<32>(reg_1312.read()));
}

void sha256_transform::thread_add_ln280_59_fu_4567_p2() {
    add_ln280_59_fu_4567_p2 = (!add_ln280_122_fu_4561_p2.read().is_01() || !reg_1324.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_122_fu_4561_p2.read()) + sc_biguint<32>(reg_1324.read()));
}

void sha256_transform::thread_add_ln280_5_fu_1898_p2() {
    add_ln280_5_fu_1898_p2 = (!add_ln280_68_fu_1892_p2.read().is_01() || !reg_1236.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_68_fu_1892_p2.read()) + sc_biguint<32>(reg_1236.read()));
}

void sha256_transform::thread_add_ln280_60_fu_4605_p2() {
    add_ln280_60_fu_4605_p2 = (!add_ln280_123_fu_4599_p2.read().is_01() || !reg_1312.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_123_fu_4599_p2.read()) + sc_biguint<32>(reg_1312.read()));
}

void sha256_transform::thread_add_ln280_61_fu_4643_p2() {
    add_ln280_61_fu_4643_p2 = (!add_ln280_124_fu_4637_p2.read().is_01() || !reg_1324.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_124_fu_4637_p2.read()) + sc_biguint<32>(reg_1324.read()));
}

void sha256_transform::thread_add_ln280_62_fu_4680_p2() {
    add_ln280_62_fu_4680_p2 = (!add_ln280_125_fu_4674_p2.read().is_01() || !reg_1324.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_125_fu_4674_p2.read()) + sc_biguint<32>(reg_1324.read()));
}

void sha256_transform::thread_add_ln280_63_fu_1411_p2() {
    add_ln280_63_fu_1411_p2 = (!add_ln271_3_fu_1400_p2.read().is_01() || !reg_1220.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_3_fu_1400_p2.read()) + sc_biguint<32>(reg_1220.read()));
}

void sha256_transform::thread_add_ln280_64_fu_1501_p2() {
    add_ln280_64_fu_1501_p2 = (!add_ln271_7_fu_1491_p2.read().is_01() || !reg_1220.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_7_fu_1491_p2.read()) + sc_biguint<32>(reg_1220.read()));
}

void sha256_transform::thread_add_ln280_65_fu_1591_p2() {
    add_ln280_65_fu_1591_p2 = (!add_ln271_11_fu_1581_p2.read().is_01() || !reg_1220.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_11_fu_1581_p2.read()) + sc_biguint<32>(reg_1220.read()));
}

void sha256_transform::thread_add_ln280_66_fu_1691_p2() {
    add_ln280_66_fu_1691_p2 = (!add_ln271_15_fu_1681_p2.read().is_01() || !reg_1220.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_15_fu_1681_p2.read()) + sc_biguint<32>(reg_1220.read()));
}

void sha256_transform::thread_add_ln280_67_fu_1792_p2() {
    add_ln280_67_fu_1792_p2 = (!add_ln271_19_fu_1782_p2.read().is_01() || !tmp_5_4_reg_5502.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_19_fu_1782_p2.read()) + sc_biguint<32>(tmp_5_4_reg_5502.read()));
}

void sha256_transform::thread_add_ln280_68_fu_1892_p2() {
    add_ln280_68_fu_1892_p2 = (!add_ln271_23_fu_1882_p2.read().is_01() || !reg_1240.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_23_fu_1882_p2.read()) + sc_biguint<32>(reg_1240.read()));
}

void sha256_transform::thread_add_ln280_69_fu_1994_p2() {
    add_ln280_69_fu_1994_p2 = (!add_ln271_27_fu_1984_p2.read().is_01() || !reg_1240.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_27_fu_1984_p2.read()) + sc_biguint<32>(reg_1240.read()));
}

void sha256_transform::thread_add_ln280_6_fu_2000_p2() {
    add_ln280_6_fu_2000_p2 = (!add_ln280_69_fu_1994_p2.read().is_01() || !reg_1236.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_69_fu_1994_p2.read()) + sc_biguint<32>(reg_1236.read()));
}

void sha256_transform::thread_add_ln280_70_fu_2096_p2() {
    add_ln280_70_fu_2096_p2 = (!add_ln271_31_fu_2086_p2.read().is_01() || !reg_1240.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_31_fu_2086_p2.read()) + sc_biguint<32>(reg_1240.read()));
}

void sha256_transform::thread_add_ln280_71_fu_2198_p2() {
    add_ln280_71_fu_2198_p2 = (!add_ln271_35_fu_2188_p2.read().is_01() || !reg_1240.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_35_fu_2188_p2.read()) + sc_biguint<32>(reg_1240.read()));
}

void sha256_transform::thread_add_ln280_72_fu_2300_p2() {
    add_ln280_72_fu_2300_p2 = (!add_ln271_39_fu_2290_p2.read().is_01() || !reg_1260.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_39_fu_2290_p2.read()) + sc_biguint<32>(reg_1260.read()));
}

void sha256_transform::thread_add_ln280_73_fu_2402_p2() {
    add_ln280_73_fu_2402_p2 = (!add_ln271_43_fu_2392_p2.read().is_01() || !reg_1260.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_43_fu_2392_p2.read()) + sc_biguint<32>(reg_1260.read()));
}

void sha256_transform::thread_add_ln280_74_fu_2504_p2() {
    add_ln280_74_fu_2504_p2 = (!add_ln271_47_fu_2494_p2.read().is_01() || !reg_1260.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_47_fu_2494_p2.read()) + sc_biguint<32>(reg_1260.read()));
}

void sha256_transform::thread_add_ln280_75_fu_2603_p2() {
    add_ln280_75_fu_2603_p2 = (!add_ln271_51_fu_2593_p2.read().is_01() || !reg_1260.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_51_fu_2593_p2.read()) + sc_biguint<32>(reg_1260.read()));
}

void sha256_transform::thread_add_ln280_76_fu_2701_p2() {
    add_ln280_76_fu_2701_p2 = (!add_ln271_55_fu_2691_p2.read().is_01() || !reg_1280.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_55_fu_2691_p2.read()) + sc_biguint<32>(reg_1280.read()));
}

void sha256_transform::thread_add_ln280_77_fu_2799_p2() {
    add_ln280_77_fu_2799_p2 = (!add_ln271_59_fu_2789_p2.read().is_01() || !reg_1280.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_59_fu_2789_p2.read()) + sc_biguint<32>(reg_1280.read()));
}

void sha256_transform::thread_add_ln280_78_fu_2859_p2() {
    add_ln280_78_fu_2859_p2 = (!add_ln271_63_fu_2849_p2.read().is_01() || !reg_1280.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_63_fu_2849_p2.read()) + sc_biguint<32>(reg_1280.read()));
}

void sha256_transform::thread_add_ln280_79_fu_2912_p2() {
    add_ln280_79_fu_2912_p2 = (!add_ln271_67_fu_2902_p2.read().is_01() || !reg_1280.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_67_fu_2902_p2.read()) + sc_biguint<32>(reg_1280.read()));
}

void sha256_transform::thread_add_ln280_7_fu_2102_p2() {
    add_ln280_7_fu_2102_p2 = (!add_ln280_70_fu_2096_p2.read().is_01() || !reg_1236.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_70_fu_2096_p2.read()) + sc_biguint<32>(reg_1236.read()));
}

void sha256_transform::thread_add_ln280_80_fu_2950_p2() {
    add_ln280_80_fu_2950_p2 = (!add_ln271_71_fu_2940_p2.read().is_01() || !reg_1292.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_71_fu_2940_p2.read()) + sc_biguint<32>(reg_1292.read()));
}

void sha256_transform::thread_add_ln280_81_fu_2988_p2() {
    add_ln280_81_fu_2988_p2 = (!add_ln271_75_fu_2978_p2.read().is_01() || !reg_1292.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_75_fu_2978_p2.read()) + sc_biguint<32>(reg_1292.read()));
}

void sha256_transform::thread_add_ln280_82_fu_3026_p2() {
    add_ln280_82_fu_3026_p2 = (!add_ln271_79_fu_3016_p2.read().is_01() || !reg_1292.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_79_fu_3016_p2.read()) + sc_biguint<32>(reg_1292.read()));
}

void sha256_transform::thread_add_ln280_83_fu_3064_p2() {
    add_ln280_83_fu_3064_p2 = (!add_ln271_83_fu_3054_p2.read().is_01() || !reg_1292.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_83_fu_3054_p2.read()) + sc_biguint<32>(reg_1292.read()));
}

void sha256_transform::thread_add_ln280_84_fu_3102_p2() {
    add_ln280_84_fu_3102_p2 = (!add_ln271_87_fu_3092_p2.read().is_01() || !reg_1304.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_87_fu_3092_p2.read()) + sc_biguint<32>(reg_1304.read()));
}

void sha256_transform::thread_add_ln280_85_fu_3140_p2() {
    add_ln280_85_fu_3140_p2 = (!add_ln271_91_fu_3130_p2.read().is_01() || !reg_1304.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_91_fu_3130_p2.read()) + sc_biguint<32>(reg_1304.read()));
}

void sha256_transform::thread_add_ln280_86_fu_3178_p2() {
    add_ln280_86_fu_3178_p2 = (!add_ln271_95_fu_3168_p2.read().is_01() || !reg_1304.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_95_fu_3168_p2.read()) + sc_biguint<32>(reg_1304.read()));
}

void sha256_transform::thread_add_ln280_87_fu_3216_p2() {
    add_ln280_87_fu_3216_p2 = (!add_ln271_99_fu_3206_p2.read().is_01() || !reg_1304.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_99_fu_3206_p2.read()) + sc_biguint<32>(reg_1304.read()));
}

void sha256_transform::thread_add_ln280_88_fu_3254_p2() {
    add_ln280_88_fu_3254_p2 = (!add_ln271_103_fu_3244_p2.read().is_01() || !reg_1316.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_103_fu_3244_p2.read()) + sc_biguint<32>(reg_1316.read()));
}

void sha256_transform::thread_add_ln280_89_fu_3292_p2() {
    add_ln280_89_fu_3292_p2 = (!add_ln271_107_fu_3282_p2.read().is_01() || !reg_1316.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_107_fu_3282_p2.read()) + sc_biguint<32>(reg_1316.read()));
}

void sha256_transform::thread_add_ln280_8_fu_2204_p2() {
    add_ln280_8_fu_2204_p2 = (!add_ln280_71_fu_2198_p2.read().is_01() || !reg_1236.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_71_fu_2198_p2.read()) + sc_biguint<32>(reg_1236.read()));
}

void sha256_transform::thread_add_ln280_90_fu_3330_p2() {
    add_ln280_90_fu_3330_p2 = (!add_ln271_111_fu_3320_p2.read().is_01() || !reg_1316.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_111_fu_3320_p2.read()) + sc_biguint<32>(reg_1316.read()));
}

void sha256_transform::thread_add_ln280_91_fu_3368_p2() {
    add_ln280_91_fu_3368_p2 = (!add_ln271_115_fu_3358_p2.read().is_01() || !reg_1316.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_115_fu_3358_p2.read()) + sc_biguint<32>(reg_1316.read()));
}

void sha256_transform::thread_add_ln280_92_fu_3406_p2() {
    add_ln280_92_fu_3406_p2 = (!add_ln271_119_fu_3396_p2.read().is_01() || !reg_1328.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_119_fu_3396_p2.read()) + sc_biguint<32>(reg_1328.read()));
}

void sha256_transform::thread_add_ln280_93_fu_3444_p2() {
    add_ln280_93_fu_3444_p2 = (!add_ln271_123_fu_3434_p2.read().is_01() || !reg_1328.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_123_fu_3434_p2.read()) + sc_biguint<32>(reg_1328.read()));
}

void sha256_transform::thread_add_ln280_94_fu_3482_p2() {
    add_ln280_94_fu_3482_p2 = (!add_ln271_127_fu_3472_p2.read().is_01() || !reg_1328.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_127_fu_3472_p2.read()) + sc_biguint<32>(reg_1328.read()));
}

void sha256_transform::thread_add_ln280_95_fu_3520_p2() {
    add_ln280_95_fu_3520_p2 = (!add_ln271_131_fu_3510_p2.read().is_01() || !reg_1328.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_131_fu_3510_p2.read()) + sc_biguint<32>(reg_1328.read()));
}

void sha256_transform::thread_add_ln280_96_fu_3558_p2() {
    add_ln280_96_fu_3558_p2 = (!add_ln271_135_fu_3548_p2.read().is_01() || !reg_1220.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_135_fu_3548_p2.read()) + sc_biguint<32>(reg_1220.read()));
}

void sha256_transform::thread_add_ln280_97_fu_3596_p2() {
    add_ln280_97_fu_3596_p2 = (!add_ln271_139_fu_3586_p2.read().is_01() || !reg_1220.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_139_fu_3586_p2.read()) + sc_biguint<32>(reg_1220.read()));
}

void sha256_transform::thread_add_ln280_98_fu_3634_p2() {
    add_ln280_98_fu_3634_p2 = (!add_ln271_143_fu_3624_p2.read().is_01() || !reg_1240.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_143_fu_3624_p2.read()) + sc_biguint<32>(reg_1240.read()));
}

void sha256_transform::thread_add_ln280_99_fu_3672_p2() {
    add_ln280_99_fu_3672_p2 = (!add_ln271_147_fu_3662_p2.read().is_01() || !reg_1220.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln271_147_fu_3662_p2.read()) + sc_biguint<32>(reg_1220.read()));
}

void sha256_transform::thread_add_ln280_9_fu_2306_p2() {
    add_ln280_9_fu_2306_p2 = (!add_ln280_72_fu_2300_p2.read().is_01() || !reg_1256.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_72_fu_2300_p2.read()) + sc_biguint<32>(reg_1256.read()));
}

void sha256_transform::thread_add_ln280_fu_1417_p2() {
    add_ln280_fu_1417_p2 = (!add_ln280_63_fu_1411_p2.read().is_01() || !reg_1216.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_63_fu_1411_p2.read()) + sc_biguint<32>(reg_1216.read()));
}

void sha256_transform::thread_add_ln283_1_fu_4734_p2() {
    add_ln283_1_fu_4734_p2 = (!reg_1324.read().is_01() || !add_ln271_255_fu_4729_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1324.read()) + sc_biguint<32>(add_ln271_255_fu_4729_p2.read()));
}

void sha256_transform::thread_add_ln283_2_fu_4696_p2() {
    add_ln283_2_fu_4696_p2 = (!grp_MAJ_fu_930_ap_return.read().is_01() || !ctx_state_0_read_1_reg_4831_pp0_iter16_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_MAJ_fu_930_ap_return.read()) + sc_biguint<32>(ctx_state_0_read_1_reg_4831_pp0_iter16_reg.read()));
}

void sha256_transform::thread_add_ln283_fu_4740_p2() {
    add_ln283_fu_4740_p2 = (!add_ln283_2_reg_7537.read().is_01() || !add_ln283_1_fu_4734_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln283_2_reg_7537.read()) + sc_biguint<32>(add_ln283_1_fu_4734_p2.read()));
}

void sha256_transform::thread_add_ln284_fu_4701_p2() {
    add_ln284_fu_4701_p2 = (!add_ln280_62_reg_7520.read().is_01() || !ctx_state_1_read_1_reg_4824_pp0_iter16_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_62_reg_7520.read()) + sc_biguint<32>(ctx_state_1_read_1_reg_4824_pp0_iter16_reg.read()));
}

void sha256_transform::thread_add_ln285_fu_4705_p2() {
    add_ln285_fu_4705_p2 = (!add_ln280_61_reg_7495.read().is_01() || !ctx_state_2_read_1_reg_4818_pp0_iter16_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_61_reg_7495.read()) + sc_biguint<32>(ctx_state_2_read_1_reg_4818_pp0_iter16_reg.read()));
}

void sha256_transform::thread_add_ln286_fu_4709_p2() {
    add_ln286_fu_4709_p2 = (!add_ln280_60_reg_7473.read().is_01() || !ctx_state_3_read_1_reg_4950_pp0_iter15_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_60_reg_7473.read()) + sc_biguint<32>(ctx_state_3_read_1_reg_4950_pp0_iter15_reg.read()));
}

void sha256_transform::thread_add_ln287_1_fu_4745_p2() {
    add_ln287_1_fu_4745_p2 = (!add_ln280_59_reg_7450_pp0_iter16_reg.read().is_01() || !ctx_state_4_read_1_reg_4810_pp0_iter16_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln280_59_reg_7450_pp0_iter16_reg.read()) + sc_biguint<32>(ctx_state_4_read_1_reg_4810_pp0_iter16_reg.read()));
}

void sha256_transform::thread_add_ln287_fu_4749_p2() {
    add_ln287_fu_4749_p2 = (!add_ln287_1_fu_4745_p2.read().is_01() || !add_ln271_255_fu_4729_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln287_1_fu_4745_p2.read()) + sc_biguint<32>(add_ln271_255_fu_4729_p2.read()));
}

void sha256_transform::thread_add_ln288_fu_4713_p2() {
    add_ln288_fu_4713_p2 = (!add_ln276_62_reg_7513.read().is_01() || !ctx_state_5_read_1_reg_4803_pp0_iter16_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln276_62_reg_7513.read()) + sc_biguint<32>(ctx_state_5_read_1_reg_4803_pp0_iter16_reg.read()));
}

void sha256_transform::thread_add_ln289_fu_4717_p2() {
    add_ln289_fu_4717_p2 = (!add_ln276_61_reg_7487.read().is_01() || !ctx_state_6_read_1_reg_4797_pp0_iter16_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln276_61_reg_7487.read()) + sc_biguint<32>(ctx_state_6_read_1_reg_4797_pp0_iter16_reg.read()));
}

void sha256_transform::thread_add_ln290_fu_4721_p2() {
    add_ln290_fu_4721_p2 = (!add_ln276_60_reg_7464.read().is_01() || !ctx_state_7_read_1_reg_4945_pp0_iter15_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln276_60_reg_7464.read()) + sc_biguint<32>(ctx_state_7_read_1_reg_4945_pp0_iter15_reg.read()));
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

void sha256_transform::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
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

void sha256_transform::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()))) {
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
    ap_return_0 = add_ln283_fu_4740_p2.read();
}

void sha256_transform::thread_ap_return_1() {
    ap_return_1 = add_ln284_reg_7542.read();
}

void sha256_transform::thread_ap_return_2() {
    ap_return_2 = add_ln285_reg_7547.read();
}

void sha256_transform::thread_ap_return_3() {
    ap_return_3 = add_ln286_reg_7552.read();
}

void sha256_transform::thread_ap_return_4() {
    ap_return_4 = add_ln287_fu_4749_p2.read();
}

void sha256_transform::thread_ap_return_5() {
    ap_return_5 = add_ln288_reg_7557.read();
}

void sha256_transform::thread_ap_return_6() {
    ap_return_6 = add_ln289_reg_7562.read();
}

void sha256_transform::thread_ap_return_7() {
    ap_return_7 = add_ln290_reg_7567.read();
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)))) {
        data_0_ce0 = ap_const_logic_1;
    } else {
        data_0_ce0 = ap_const_logic_0;
    }
}

void sha256_transform::thread_data_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)))) {
        data_1_ce0 = ap_const_logic_1;
    } else {
        data_1_ce0 = ap_const_logic_0;
    }
}

void sha256_transform::thread_data_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)))) {
        data_2_ce0 = ap_const_logic_1;
    } else {
        data_2_ce0 = ap_const_logic_0;
    }
}

void sha256_transform::thread_data_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)))) {
        data_3_ce0 = ap_const_logic_1;
    } else {
        data_3_ce0 = ap_const_logic_0;
    }
}

void sha256_transform::thread_data_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)))) {
        data_3_ce1 = ap_const_logic_1;
    } else {
        data_3_ce1 = ap_const_logic_0;
    }
}

void sha256_transform::thread_grp_CH_fu_1137_rtl_key_r() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)))) {
        grp_CH_fu_1137_rtl_key_r = ap_port_reg_rtl_key_r.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_CH_fu_1137_rtl_key_r = rtl_key_r.read();
    } else {
        grp_CH_fu_1137_rtl_key_r =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_1137_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_1137_x = add_ln276_35_reg_6884.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_1137_x = add_ln276_33_reg_6838.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_1137_x = add_ln276_32_reg_6815.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_1137_x = add_ln276_3_reg_5435.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_1137_x = add_ln276_2_reg_5314.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_1137_x = add_ln276_1_reg_5164.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_1137_x = add_ln276_reg_5017.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_CH_fu_1137_x = ctx_state_4_read.read();
    } else {
        grp_CH_fu_1137_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_1137_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_1137_y = add_ln276_34_reg_6861.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_1137_y = add_ln276_32_reg_6815.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_1137_y = add_ln276_31_reg_6792.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_1137_y = add_ln276_2_reg_5314.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_1137_y = add_ln276_1_reg_5164.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_1137_y = add_ln276_reg_5017.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_1137_y = ctx_state_4_read_1_reg_4810.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_CH_fu_1137_y = ctx_state_5_read.read();
    } else {
        grp_CH_fu_1137_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_1137_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_1137_z = add_ln276_33_reg_6838.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_1137_z = add_ln276_31_reg_6792.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_1137_z = add_ln276_30_reg_6769.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_1137_z = add_ln276_1_reg_5164.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_1137_z = add_ln276_reg_5017.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_1137_z = ctx_state_4_read_1_reg_4810.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_1137_z = ctx_state_5_read_1_reg_4803.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_CH_fu_1137_z = ctx_state_6_read.read();
    } else {
        grp_CH_fu_1137_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_1149_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_1149_x = add_ln276_39_reg_6976.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_1149_x = add_ln276_37_reg_6930.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_1149_x = add_ln276_36_reg_6907.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        grp_CH_fu_1149_x = add_ln276_34_reg_6861.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_1149_x = add_ln276_7_reg_5814.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_1149_x = add_ln276_6_reg_5723.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_1149_x = add_ln276_5_reg_5632.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_1149_x = add_ln276_4_reg_5541.read();
    } else {
        grp_CH_fu_1149_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_1149_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_1149_y = add_ln276_38_reg_6953.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_1149_y = add_ln276_36_reg_6907.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_1149_y = add_ln276_35_reg_6884.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        grp_CH_fu_1149_y = add_ln276_33_reg_6838.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_1149_y = add_ln276_6_reg_5723.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_1149_y = add_ln276_5_reg_5632.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_1149_y = add_ln276_4_reg_5541.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_1149_y = add_ln276_3_reg_5435.read();
    } else {
        grp_CH_fu_1149_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_1149_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_1149_z = add_ln276_37_reg_6930.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_1149_z = add_ln276_35_reg_6884.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_1149_z = add_ln276_34_reg_6861.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        grp_CH_fu_1149_z = add_ln276_32_reg_6815.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_1149_z = add_ln276_5_reg_5632.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_1149_z = add_ln276_4_reg_5541.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_1149_z = add_ln276_3_reg_5435.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_1149_z = add_ln276_2_reg_5314.read();
    } else {
        grp_CH_fu_1149_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_1158_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_1158_x = add_ln276_43_reg_7068.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_1158_x = add_ln276_41_reg_7022.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_1158_x = add_ln276_40_reg_6999.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        grp_CH_fu_1158_x = add_ln276_38_reg_6953.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_1158_x = add_ln276_11_reg_6178.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_1158_x = add_ln276_10_reg_6087.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_1158_x = add_ln276_9_reg_5996.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_1158_x = add_ln276_8_reg_5905.read();
    } else {
        grp_CH_fu_1158_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_1158_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_1158_y = add_ln276_42_reg_7045.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_1158_y = add_ln276_40_reg_6999.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_1158_y = add_ln276_39_reg_6976.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        grp_CH_fu_1158_y = add_ln276_37_reg_6930.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_1158_y = add_ln276_10_reg_6087.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_1158_y = add_ln276_9_reg_5996.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_1158_y = add_ln276_8_reg_5905.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_1158_y = add_ln276_7_reg_5814.read();
    } else {
        grp_CH_fu_1158_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_1158_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_1158_z = add_ln276_41_reg_7022.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_1158_z = add_ln276_39_reg_6976.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_1158_z = add_ln276_38_reg_6953.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        grp_CH_fu_1158_z = add_ln276_36_reg_6907.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_1158_z = add_ln276_9_reg_5996.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_1158_z = add_ln276_8_reg_5905.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_1158_z = add_ln276_7_reg_5814.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_1158_z = add_ln276_6_reg_5723.read();
    } else {
        grp_CH_fu_1158_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_1167_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_1167_x = add_ln276_47_reg_7165.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_1167_x = add_ln276_45_reg_7114.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_1167_x = add_ln276_44_reg_7091.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        grp_CH_fu_1167_x = add_ln276_42_reg_7045.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_1167_x = add_ln276_15_reg_6419.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_1167_x = add_ln276_14_reg_6381.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_1167_x = add_ln276_13_reg_6317.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_1167_x = add_ln276_12_reg_6250.read();
    } else {
        grp_CH_fu_1167_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_1167_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_1167_y = add_ln276_46_reg_7137.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_1167_y = add_ln276_44_reg_7091.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_1167_y = add_ln276_43_reg_7068.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        grp_CH_fu_1167_y = add_ln276_41_reg_7022.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_1167_y = add_ln276_14_reg_6381.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_1167_y = add_ln276_13_reg_6317.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_1167_y = add_ln276_12_reg_6250.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_1167_y = add_ln276_11_reg_6178.read();
    } else {
        grp_CH_fu_1167_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_1167_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_1167_z = add_ln276_45_reg_7114.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_1167_z = add_ln276_43_reg_7068.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_1167_z = add_ln276_42_reg_7045.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        grp_CH_fu_1167_z = add_ln276_40_reg_6999.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_1167_z = add_ln276_13_reg_6317.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_1167_z = add_ln276_12_reg_6250.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_1167_z = add_ln276_11_reg_6178.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_1167_z = add_ln276_10_reg_6087.read();
    } else {
        grp_CH_fu_1167_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_1176_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_1176_x = add_ln276_51_reg_7257.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_1176_x = add_ln276_49_reg_7211.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_1176_x = add_ln276_48_reg_7188.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        grp_CH_fu_1176_x = add_ln276_46_reg_7137.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_1176_x = add_ln276_19_reg_6516.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_1176_x = add_ln276_18_reg_6493.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_1176_x = add_ln276_17_reg_6470.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_1176_x = add_ln276_16_reg_6447.read();
    } else {
        grp_CH_fu_1176_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_1176_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_1176_y = add_ln276_50_reg_7234.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_1176_y = add_ln276_48_reg_7188.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_1176_y = add_ln276_47_reg_7165.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        grp_CH_fu_1176_y = add_ln276_45_reg_7114.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_1176_y = add_ln276_18_reg_6493.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_1176_y = add_ln276_17_reg_6470.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_1176_y = add_ln276_16_reg_6447.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_1176_y = add_ln276_15_reg_6419.read();
    } else {
        grp_CH_fu_1176_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_1176_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_1176_z = add_ln276_49_reg_7211.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_1176_z = add_ln276_47_reg_7165.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_1176_z = add_ln276_46_reg_7137.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        grp_CH_fu_1176_z = add_ln276_44_reg_7091.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_1176_z = add_ln276_17_reg_6470.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_1176_z = add_ln276_16_reg_6447.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_1176_z = add_ln276_15_reg_6419.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_1176_z = add_ln276_14_reg_6381.read();
    } else {
        grp_CH_fu_1176_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_1185_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_1185_x = add_ln276_55_reg_7349.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_1185_x = add_ln276_53_reg_7303.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_1185_x = add_ln276_52_reg_7280.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()))) {
        grp_CH_fu_1185_x = add_ln276_50_reg_7234.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_1185_x = add_ln276_23_reg_6608.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_1185_x = add_ln276_22_reg_6585.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_1185_x = add_ln276_21_reg_6562.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_1185_x = add_ln276_20_reg_6539.read();
    } else {
        grp_CH_fu_1185_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_1185_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_1185_y = add_ln276_54_reg_7326.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_1185_y = add_ln276_52_reg_7280.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_1185_y = add_ln276_51_reg_7257.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()))) {
        grp_CH_fu_1185_y = add_ln276_49_reg_7211.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_1185_y = add_ln276_22_reg_6585.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_1185_y = add_ln276_21_reg_6562.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_1185_y = add_ln276_20_reg_6539.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_1185_y = add_ln276_19_reg_6516.read();
    } else {
        grp_CH_fu_1185_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_1185_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_1185_z = add_ln276_53_reg_7303.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_1185_z = add_ln276_51_reg_7257.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_1185_z = add_ln276_50_reg_7234.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()))) {
        grp_CH_fu_1185_z = add_ln276_48_reg_7188.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_1185_z = add_ln276_21_reg_6562.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_1185_z = add_ln276_20_reg_6539.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_1185_z = add_ln276_19_reg_6516.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_1185_z = add_ln276_18_reg_6493.read();
    } else {
        grp_CH_fu_1185_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_1194_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_1194_x = add_ln276_59_reg_7441.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_1194_x = add_ln276_57_reg_7395.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_1194_x = add_ln276_56_reg_7372.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        grp_CH_fu_1194_x = add_ln276_54_reg_7326.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_1194_x = add_ln276_27_reg_6700.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_1194_x = add_ln276_26_reg_6677.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_1194_x = add_ln276_25_reg_6654.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_1194_x = add_ln276_24_reg_6631.read();
    } else {
        grp_CH_fu_1194_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_1194_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_1194_y = add_ln276_58_reg_7418.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_1194_y = add_ln276_56_reg_7372.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_1194_y = add_ln276_55_reg_7349.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        grp_CH_fu_1194_y = add_ln276_53_reg_7303.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_1194_y = add_ln276_26_reg_6677.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_1194_y = add_ln276_25_reg_6654.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_1194_y = add_ln276_24_reg_6631.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_1194_y = add_ln276_23_reg_6608.read();
    } else {
        grp_CH_fu_1194_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_1194_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_1194_z = add_ln276_57_reg_7395.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_1194_z = add_ln276_55_reg_7349.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_1194_z = add_ln276_54_reg_7326.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        grp_CH_fu_1194_z = add_ln276_52_reg_7280.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_1194_z = add_ln276_25_reg_6654.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_1194_z = add_ln276_24_reg_6631.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_1194_z = add_ln276_23_reg_6608.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_1194_z = add_ln276_22_reg_6585.read();
    } else {
        grp_CH_fu_1194_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_1203_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_1203_x = add_ln276_62_reg_7513.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_1203_x = add_ln276_61_reg_7487.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_1203_x = add_ln276_60_reg_7464.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()))) {
        grp_CH_fu_1203_x = add_ln276_58_reg_7418.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_1203_x = add_ln276_31_reg_6792.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_1203_x = add_ln276_30_reg_6769.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_1203_x = add_ln276_29_reg_6746.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_1203_x = add_ln276_28_reg_6723.read();
    } else {
        grp_CH_fu_1203_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_1203_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_1203_y = add_ln276_61_reg_7487.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_1203_y = add_ln276_60_reg_7464.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_1203_y = add_ln276_59_reg_7441.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()))) {
        grp_CH_fu_1203_y = add_ln276_57_reg_7395.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_1203_y = add_ln276_30_reg_6769.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_1203_y = add_ln276_29_reg_6746.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_1203_y = add_ln276_28_reg_6723.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_1203_y = add_ln276_27_reg_6700.read();
    } else {
        grp_CH_fu_1203_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_1203_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_1203_z = add_ln276_60_reg_7464.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_1203_z = add_ln276_59_reg_7441.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_1203_z = add_ln276_58_reg_7418.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()))) {
        grp_CH_fu_1203_z = add_ln276_56_reg_7372.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_1203_z = add_ln276_29_reg_6746.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_1203_z = add_ln276_28_reg_6723.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_1203_z = add_ln276_27_reg_6700.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_1203_z = add_ln276_26_reg_6677.read();
    } else {
        grp_CH_fu_1203_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP0_fu_1004_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1004_x = add_ln280_39_reg_6985.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1004_x = add_ln280_37_reg_6939.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1004_x = add_ln280_36_reg_6916.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        grp_EP0_fu_1004_x = add_ln280_34_reg_6870.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1004_x = add_ln280_7_reg_5823.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1004_x = add_ln280_6_reg_5732.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1004_x = add_ln280_5_reg_5641.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1004_x = add_ln280_4_reg_5550.read();
    } else {
        grp_EP0_fu_1004_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP0_fu_1011_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1011_x = add_ln280_43_reg_7077.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1011_x = add_ln280_41_reg_7031.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1011_x = add_ln280_40_reg_7008.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        grp_EP0_fu_1011_x = add_ln280_38_reg_6962.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1011_x = add_ln280_11_reg_6187.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1011_x = add_ln280_10_reg_6096.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1011_x = add_ln280_9_reg_6005.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1011_x = add_ln280_8_reg_5914.read();
    } else {
        grp_EP0_fu_1011_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP0_fu_1018_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1018_x = add_ln280_47_reg_7174.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1018_x = add_ln280_45_reg_7123.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1018_x = add_ln280_44_reg_7100.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        grp_EP0_fu_1018_x = add_ln280_42_reg_7054.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1018_x = add_ln280_15_reg_6428.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1018_x = add_ln280_14_reg_6390.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1018_x = add_ln280_13_reg_6326.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1018_x = add_ln280_12_reg_6259.read();
    } else {
        grp_EP0_fu_1018_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP0_fu_1025_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1025_x = add_ln280_51_reg_7266.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1025_x = add_ln280_49_reg_7220.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1025_x = add_ln280_48_reg_7197.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        grp_EP0_fu_1025_x = add_ln280_46_reg_7146.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1025_x = add_ln280_19_reg_6525.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1025_x = add_ln280_18_reg_6502.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1025_x = add_ln280_17_reg_6479.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1025_x = add_ln280_16_reg_6456.read();
    } else {
        grp_EP0_fu_1025_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP0_fu_1032_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1032_x = add_ln280_55_reg_7358.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1032_x = add_ln280_53_reg_7312.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1032_x = add_ln280_52_reg_7289.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()))) {
        grp_EP0_fu_1032_x = add_ln280_50_reg_7243.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1032_x = add_ln280_23_reg_6617.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1032_x = add_ln280_22_reg_6594.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1032_x = add_ln280_21_reg_6571.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1032_x = add_ln280_20_reg_6548.read();
    } else {
        grp_EP0_fu_1032_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP0_fu_1039_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1039_x = add_ln280_59_reg_7450.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1039_x = add_ln280_57_reg_7404.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1039_x = add_ln280_56_reg_7381.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        grp_EP0_fu_1039_x = add_ln280_54_reg_7335.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1039_x = add_ln280_27_reg_6709.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1039_x = add_ln280_26_reg_6686.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1039_x = add_ln280_25_reg_6663.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1039_x = add_ln280_24_reg_6640.read();
    } else {
        grp_EP0_fu_1039_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP0_fu_1046_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1046_x = add_ln280_62_reg_7520.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1046_x = add_ln280_61_reg_7495.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1046_x = add_ln280_60_reg_7473.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()))) {
        grp_EP0_fu_1046_x = add_ln280_58_reg_7427.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1046_x = add_ln280_31_reg_6801.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1046_x = add_ln280_30_reg_6778.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1046_x = add_ln280_29_reg_6755.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1046_x = add_ln280_28_reg_6732.read();
    } else {
        grp_EP0_fu_1046_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP0_fu_996_rtl_key_r() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)))) {
        grp_EP0_fu_996_rtl_key_r = ap_port_reg_rtl_key_r.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_EP0_fu_996_rtl_key_r = rtl_key_r.read();
    } else {
        grp_EP0_fu_996_rtl_key_r =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP0_fu_996_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP0_fu_996_x = add_ln280_35_reg_6893.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP0_fu_996_x = add_ln280_33_reg_6847.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP0_fu_996_x = add_ln280_32_reg_6824.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP0_fu_996_x = add_ln280_3_reg_5444.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP0_fu_996_x = add_ln280_2_reg_5323.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP0_fu_996_x = add_ln280_1_reg_5173.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP0_fu_996_x = add_ln280_reg_5026.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_EP0_fu_996_x = ctx_state_0_read.read();
    } else {
        grp_EP0_fu_996_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP1_fu_939_rtl_key_r() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)))) {
        grp_EP1_fu_939_rtl_key_r = ap_port_reg_rtl_key_r.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_EP1_fu_939_rtl_key_r = rtl_key_r.read();
    } else {
        grp_EP1_fu_939_rtl_key_r =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP1_fu_939_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP1_fu_939_x = add_ln276_35_reg_6884.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP1_fu_939_x = add_ln276_33_reg_6838.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP1_fu_939_x = add_ln276_32_reg_6815.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP1_fu_939_x = add_ln276_3_reg_5435.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP1_fu_939_x = add_ln276_2_reg_5314.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP1_fu_939_x = add_ln276_1_reg_5164.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP1_fu_939_x = add_ln276_reg_5017.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_EP1_fu_939_x = ctx_state_4_read.read();
    } else {
        grp_EP1_fu_939_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP1_fu_947_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP1_fu_947_x = add_ln276_39_reg_6976.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP1_fu_947_x = add_ln276_37_reg_6930.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP1_fu_947_x = add_ln276_36_reg_6907.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        grp_EP1_fu_947_x = add_ln276_34_reg_6861.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP1_fu_947_x = add_ln276_7_reg_5814.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP1_fu_947_x = add_ln276_6_reg_5723.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP1_fu_947_x = add_ln276_5_reg_5632.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP1_fu_947_x = add_ln276_4_reg_5541.read();
    } else {
        grp_EP1_fu_947_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP1_fu_954_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP1_fu_954_x = add_ln276_43_reg_7068.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP1_fu_954_x = add_ln276_41_reg_7022.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP1_fu_954_x = add_ln276_40_reg_6999.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        grp_EP1_fu_954_x = add_ln276_38_reg_6953.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP1_fu_954_x = add_ln276_11_reg_6178.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP1_fu_954_x = add_ln276_10_reg_6087.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP1_fu_954_x = add_ln276_9_reg_5996.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP1_fu_954_x = add_ln276_8_reg_5905.read();
    } else {
        grp_EP1_fu_954_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP1_fu_961_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP1_fu_961_x = add_ln276_47_reg_7165.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP1_fu_961_x = add_ln276_45_reg_7114.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP1_fu_961_x = add_ln276_44_reg_7091.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        grp_EP1_fu_961_x = add_ln276_42_reg_7045.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP1_fu_961_x = add_ln276_15_reg_6419.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP1_fu_961_x = add_ln276_14_reg_6381.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP1_fu_961_x = add_ln276_13_reg_6317.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP1_fu_961_x = add_ln276_12_reg_6250.read();
    } else {
        grp_EP1_fu_961_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP1_fu_968_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP1_fu_968_x = add_ln276_51_reg_7257.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP1_fu_968_x = add_ln276_49_reg_7211.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP1_fu_968_x = add_ln276_48_reg_7188.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        grp_EP1_fu_968_x = add_ln276_46_reg_7137.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP1_fu_968_x = add_ln276_19_reg_6516.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP1_fu_968_x = add_ln276_18_reg_6493.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP1_fu_968_x = add_ln276_17_reg_6470.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP1_fu_968_x = add_ln276_16_reg_6447.read();
    } else {
        grp_EP1_fu_968_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP1_fu_975_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP1_fu_975_x = add_ln276_55_reg_7349.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP1_fu_975_x = add_ln276_53_reg_7303.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP1_fu_975_x = add_ln276_52_reg_7280.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()))) {
        grp_EP1_fu_975_x = add_ln276_50_reg_7234.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP1_fu_975_x = add_ln276_23_reg_6608.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP1_fu_975_x = add_ln276_22_reg_6585.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP1_fu_975_x = add_ln276_21_reg_6562.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP1_fu_975_x = add_ln276_20_reg_6539.read();
    } else {
        grp_EP1_fu_975_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP1_fu_982_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP1_fu_982_x = add_ln276_59_reg_7441.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP1_fu_982_x = add_ln276_57_reg_7395.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP1_fu_982_x = add_ln276_56_reg_7372.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        grp_EP1_fu_982_x = add_ln276_54_reg_7326.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP1_fu_982_x = add_ln276_27_reg_6700.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP1_fu_982_x = add_ln276_26_reg_6677.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP1_fu_982_x = add_ln276_25_reg_6654.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP1_fu_982_x = add_ln276_24_reg_6631.read();
    } else {
        grp_EP1_fu_982_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP1_fu_989_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP1_fu_989_x = add_ln276_62_reg_7513.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP1_fu_989_x = add_ln276_61_reg_7487.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP1_fu_989_x = add_ln276_60_reg_7464.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()))) {
        grp_EP1_fu_989_x = add_ln276_58_reg_7418.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP1_fu_989_x = add_ln276_31_reg_6792.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP1_fu_989_x = add_ln276_30_reg_6769.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP1_fu_989_x = add_ln276_29_reg_6746.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP1_fu_989_x = add_ln276_28_reg_6723.read();
    } else {
        grp_EP1_fu_989_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_864_rtl_key_r() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)))) {
        grp_MAJ_fu_864_rtl_key_r = ap_port_reg_rtl_key_r.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_864_rtl_key_r = rtl_key_r.read();
    } else {
        grp_MAJ_fu_864_rtl_key_r =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_864_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_864_x = add_ln280_35_reg_6893.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_864_x = add_ln280_33_reg_6847.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_864_x = add_ln280_32_reg_6824.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_864_x = add_ln280_3_reg_5444.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_864_x = add_ln280_2_reg_5323.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_864_x = add_ln280_1_reg_5173.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_864_x = add_ln280_reg_5026.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_864_x = ctx_state_0_read.read();
    } else {
        grp_MAJ_fu_864_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_864_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_864_y = add_ln280_34_reg_6870.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_864_y = add_ln280_32_reg_6824.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_864_y = add_ln280_31_reg_6801.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_864_y = add_ln280_2_reg_5323.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_864_y = add_ln280_1_reg_5173.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_864_y = add_ln280_reg_5026.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_864_y = ctx_state_0_read_1_reg_4831.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_864_y = ctx_state_1_read.read();
    } else {
        grp_MAJ_fu_864_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_864_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_864_z = add_ln280_33_reg_6847.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_864_z = add_ln280_31_reg_6801.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_864_z = add_ln280_30_reg_6778.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_864_z = add_ln280_1_reg_5173.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_864_z = add_ln280_reg_5026.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_864_z = ctx_state_0_read_1_reg_4831.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_864_z = ctx_state_1_read_1_reg_4824.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_864_z = ctx_state_2_read.read();
    } else {
        grp_MAJ_fu_864_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_876_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_876_x = add_ln280_39_reg_6985.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_876_x = add_ln280_37_reg_6939.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_876_x = add_ln280_36_reg_6916.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        grp_MAJ_fu_876_x = add_ln280_34_reg_6870.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_876_x = add_ln280_7_reg_5823.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_876_x = add_ln280_6_reg_5732.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_876_x = add_ln280_5_reg_5641.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_876_x = add_ln280_4_reg_5550.read();
    } else {
        grp_MAJ_fu_876_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_876_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_876_y = add_ln280_38_reg_6962.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_876_y = add_ln280_36_reg_6916.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_876_y = add_ln280_35_reg_6893.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        grp_MAJ_fu_876_y = add_ln280_33_reg_6847.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_876_y = add_ln280_6_reg_5732.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_876_y = add_ln280_5_reg_5641.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_876_y = add_ln280_4_reg_5550.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_876_y = add_ln280_3_reg_5444.read();
    } else {
        grp_MAJ_fu_876_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_876_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_876_z = add_ln280_37_reg_6939.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_876_z = add_ln280_35_reg_6893.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_876_z = add_ln280_34_reg_6870.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        grp_MAJ_fu_876_z = add_ln280_32_reg_6824.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_876_z = add_ln280_5_reg_5641.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_876_z = add_ln280_4_reg_5550.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_876_z = add_ln280_3_reg_5444.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_876_z = add_ln280_2_reg_5323.read();
    } else {
        grp_MAJ_fu_876_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_885_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_885_x = add_ln280_43_reg_7077.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_885_x = add_ln280_41_reg_7031.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_885_x = add_ln280_40_reg_7008.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        grp_MAJ_fu_885_x = add_ln280_38_reg_6962.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_885_x = add_ln280_11_reg_6187.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_885_x = add_ln280_10_reg_6096.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_885_x = add_ln280_9_reg_6005.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_885_x = add_ln280_8_reg_5914.read();
    } else {
        grp_MAJ_fu_885_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_885_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_885_y = add_ln280_42_reg_7054.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_885_y = add_ln280_40_reg_7008.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_885_y = add_ln280_39_reg_6985.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        grp_MAJ_fu_885_y = add_ln280_37_reg_6939.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_885_y = add_ln280_10_reg_6096.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_885_y = add_ln280_9_reg_6005.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_885_y = add_ln280_8_reg_5914.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_885_y = add_ln280_7_reg_5823.read();
    } else {
        grp_MAJ_fu_885_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_885_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_885_z = add_ln280_41_reg_7031.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_885_z = add_ln280_39_reg_6985.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_885_z = add_ln280_38_reg_6962.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        grp_MAJ_fu_885_z = add_ln280_36_reg_6916.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_885_z = add_ln280_9_reg_6005.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_885_z = add_ln280_8_reg_5914.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_885_z = add_ln280_7_reg_5823.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_885_z = add_ln280_6_reg_5732.read();
    } else {
        grp_MAJ_fu_885_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_894_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_894_x = add_ln280_47_reg_7174.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_894_x = add_ln280_45_reg_7123.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_894_x = add_ln280_44_reg_7100.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        grp_MAJ_fu_894_x = add_ln280_42_reg_7054.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_894_x = add_ln280_15_reg_6428.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_894_x = add_ln280_14_reg_6390.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_894_x = add_ln280_13_reg_6326.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_894_x = add_ln280_12_reg_6259.read();
    } else {
        grp_MAJ_fu_894_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_894_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_894_y = add_ln280_46_reg_7146.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_894_y = add_ln280_44_reg_7100.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_894_y = add_ln280_43_reg_7077.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        grp_MAJ_fu_894_y = add_ln280_41_reg_7031.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_894_y = add_ln280_14_reg_6390.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_894_y = add_ln280_13_reg_6326.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_894_y = add_ln280_12_reg_6259.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_894_y = add_ln280_11_reg_6187.read();
    } else {
        grp_MAJ_fu_894_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_894_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_894_z = add_ln280_45_reg_7123.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_894_z = add_ln280_43_reg_7077.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_894_z = add_ln280_42_reg_7054.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        grp_MAJ_fu_894_z = add_ln280_40_reg_7008.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_894_z = add_ln280_13_reg_6326.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_894_z = add_ln280_12_reg_6259.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_894_z = add_ln280_11_reg_6187.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_894_z = add_ln280_10_reg_6096.read();
    } else {
        grp_MAJ_fu_894_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_903_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_903_x = add_ln280_51_reg_7266.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_903_x = add_ln280_49_reg_7220.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_903_x = add_ln280_48_reg_7197.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        grp_MAJ_fu_903_x = add_ln280_46_reg_7146.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_903_x = add_ln280_19_reg_6525.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_903_x = add_ln280_18_reg_6502.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_903_x = add_ln280_17_reg_6479.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_903_x = add_ln280_16_reg_6456.read();
    } else {
        grp_MAJ_fu_903_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_903_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_903_y = add_ln280_50_reg_7243.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_903_y = add_ln280_48_reg_7197.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_903_y = add_ln280_47_reg_7174.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        grp_MAJ_fu_903_y = add_ln280_45_reg_7123.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_903_y = add_ln280_18_reg_6502.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_903_y = add_ln280_17_reg_6479.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_903_y = add_ln280_16_reg_6456.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_903_y = add_ln280_15_reg_6428.read();
    } else {
        grp_MAJ_fu_903_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_903_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_903_z = add_ln280_49_reg_7220.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_903_z = add_ln280_47_reg_7174.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_903_z = add_ln280_46_reg_7146.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        grp_MAJ_fu_903_z = add_ln280_44_reg_7100.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_903_z = add_ln280_17_reg_6479.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_903_z = add_ln280_16_reg_6456.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_903_z = add_ln280_15_reg_6428.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_903_z = add_ln280_14_reg_6390.read();
    } else {
        grp_MAJ_fu_903_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_912_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_912_x = add_ln280_55_reg_7358.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_912_x = add_ln280_53_reg_7312.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_912_x = add_ln280_52_reg_7289.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()))) {
        grp_MAJ_fu_912_x = add_ln280_50_reg_7243.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_912_x = add_ln280_23_reg_6617.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_912_x = add_ln280_22_reg_6594.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_912_x = add_ln280_21_reg_6571.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_912_x = add_ln280_20_reg_6548.read();
    } else {
        grp_MAJ_fu_912_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_912_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_912_y = add_ln280_54_reg_7335.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_912_y = add_ln280_52_reg_7289.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_912_y = add_ln280_51_reg_7266.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()))) {
        grp_MAJ_fu_912_y = add_ln280_49_reg_7220.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_912_y = add_ln280_22_reg_6594.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_912_y = add_ln280_21_reg_6571.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_912_y = add_ln280_20_reg_6548.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_912_y = add_ln280_19_reg_6525.read();
    } else {
        grp_MAJ_fu_912_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_912_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_912_z = add_ln280_53_reg_7312.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_912_z = add_ln280_51_reg_7266.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_912_z = add_ln280_50_reg_7243.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter13.read()))) {
        grp_MAJ_fu_912_z = add_ln280_48_reg_7197.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_912_z = add_ln280_21_reg_6571.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_912_z = add_ln280_20_reg_6548.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_912_z = add_ln280_19_reg_6525.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_912_z = add_ln280_18_reg_6502.read();
    } else {
        grp_MAJ_fu_912_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_921_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_x = add_ln280_59_reg_7450.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_x = add_ln280_57_reg_7404.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_x = add_ln280_56_reg_7381.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        grp_MAJ_fu_921_x = add_ln280_54_reg_7335.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_x = add_ln280_27_reg_6709.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_x = add_ln280_26_reg_6686.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_x = add_ln280_25_reg_6663.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_x = add_ln280_24_reg_6640.read();
    } else {
        grp_MAJ_fu_921_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_921_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_y = add_ln280_58_reg_7427.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_y = add_ln280_56_reg_7381.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_y = add_ln280_55_reg_7358.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        grp_MAJ_fu_921_y = add_ln280_53_reg_7312.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_y = add_ln280_26_reg_6686.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_y = add_ln280_25_reg_6663.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_y = add_ln280_24_reg_6640.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_y = add_ln280_23_reg_6617.read();
    } else {
        grp_MAJ_fu_921_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_921_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_z = add_ln280_57_reg_7404.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_z = add_ln280_55_reg_7358.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_z = add_ln280_54_reg_7335.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        grp_MAJ_fu_921_z = add_ln280_52_reg_7289.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_z = add_ln280_25_reg_6663.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_z = add_ln280_24_reg_6640.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_z = add_ln280_23_reg_6617.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_921_z = add_ln280_22_reg_6594.read();
    } else {
        grp_MAJ_fu_921_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_930_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_930_x = add_ln280_62_reg_7520.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_930_x = add_ln280_61_reg_7495.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_930_x = add_ln280_60_reg_7473.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()))) {
        grp_MAJ_fu_930_x = add_ln280_58_reg_7427.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_930_x = add_ln280_31_reg_6801.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_930_x = add_ln280_30_reg_6778.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_930_x = add_ln280_29_reg_6755.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_930_x = add_ln280_28_reg_6732.read();
    } else {
        grp_MAJ_fu_930_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_930_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_930_y = add_ln280_61_reg_7495.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_930_y = add_ln280_60_reg_7473.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_930_y = add_ln280_59_reg_7450.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()))) {
        grp_MAJ_fu_930_y = add_ln280_57_reg_7404.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_930_y = add_ln280_30_reg_6778.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_930_y = add_ln280_29_reg_6755.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_930_y = add_ln280_28_reg_6732.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_930_y = add_ln280_27_reg_6709.read();
    } else {
        grp_MAJ_fu_930_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_930_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_930_z = add_ln280_60_reg_7473.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_930_z = add_ln280_59_reg_7450.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_930_z = add_ln280_58_reg_7427.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()))) {
        grp_MAJ_fu_930_z = add_ln280_56_reg_7381.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_930_z = add_ln280_29_reg_6755.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_930_z = add_ln280_28_reg_6732.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_930_z = add_ln280_27_reg_6709.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_930_z = add_ln280_26_reg_6686.read();
    } else {
        grp_MAJ_fu_930_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG0_fu_1095_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_SIG0_fu_1095_x = m_14_fu_1640_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1095_x = m_12_fu_1603_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1095_x = m_10_fu_1549_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1095_x = m_8_fu_1513_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1095_x = m_6_fu_1460_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1095_x = m_4_fu_1423_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1095_x = m_2_fu_1368_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1095_x = m_1_fu_1344_p5.read();
    } else {
        grp_SIG0_fu_1095_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG0_fu_1102_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1102_x = m_16_fu_1708_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_SIG0_fu_1102_x = m_15_fu_1654_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1102_x = m_13_fu_1616_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1102_x = m_11_fu_1562_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1102_x = m_9_fu_1526_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1102_x = m_7_fu_1473_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1102_x = m_5_fu_1436_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1102_x = m_3_fu_1381_p5.read();
    } else {
        grp_SIG0_fu_1102_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG0_fu_1109_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_SIG0_fu_1109_x = m_30_fu_2053_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1109_x = m_28_fu_2011_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1109_x = m_26_fu_1951_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1109_x = m_24_fu_1909_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1109_x = m_22_fu_1850_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1109_x = m_20_fu_1807_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1109_x = m_18_fu_1751_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1109_x = m_17_fu_1720_p2.read();
    } else {
        grp_SIG0_fu_1109_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG0_fu_1116_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1116_x = m_32_fu_2113_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_SIG0_fu_1116_x = m_31_fu_2065_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1116_x = m_29_fu_2023_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1116_x = m_27_fu_1963_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1116_x = m_25_fu_1921_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1116_x = m_23_fu_1862_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1116_x = m_21_fu_1819_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1116_x = m_19_fu_1763_p2.read();
    } else {
        grp_SIG0_fu_1116_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG0_fu_1123_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_SIG0_fu_1123_x = m_46_fu_2462_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1123_x = m_44_fu_2419_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1123_x = m_42_fu_2360_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1123_x = m_40_fu_2317_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1123_x = m_38_fu_2258_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1123_x = m_36_fu_2215_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1123_x = m_34_fu_2156_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1123_x = m_33_fu_2125_p2.read();
    } else {
        grp_SIG0_fu_1123_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG0_fu_1130_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1130_x = m_48_fu_2521_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_SIG0_fu_1130_x = m_47_fu_2474_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1130_x = m_45_fu_2431_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1130_x = m_43_fu_2372_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1130_x = m_41_fu_2329_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1130_x = m_39_fu_2270_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1130_x = m_37_fu_2227_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1130_x = m_35_fu_2168_p2.read();
    } else {
        grp_SIG0_fu_1130_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG1_fu_1053_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1053_x = m_28_fu_2011_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1053_x = m_26_fu_1951_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1053_x = m_24_fu_1909_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1053_x = m_22_fu_1850_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1053_x = m_20_fu_1807_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1053_x = m_18_fu_1751_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1053_x = m_16_fu_1708_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1053_x = m_14_fu_1640_p5.read();
        } else {
            grp_SIG1_fu_1053_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_SIG1_fu_1053_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG1_fu_1060_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1060_x = m_29_fu_2023_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1060_x = m_27_fu_1963_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1060_x = m_25_fu_1921_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1060_x = m_23_fu_1862_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1060_x = m_21_fu_1819_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1060_x = m_19_fu_1763_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1060_x = m_17_fu_1720_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1060_x = m_15_fu_1654_p5.read();
        } else {
            grp_SIG1_fu_1060_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_SIG1_fu_1060_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG1_fu_1067_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1067_x = m_44_fu_2419_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1067_x = m_42_fu_2360_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1067_x = m_40_fu_2317_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1067_x = m_38_fu_2258_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1067_x = m_36_fu_2215_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1067_x = m_34_fu_2156_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1067_x = m_32_fu_2113_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1067_x = m_30_fu_2053_p2.read();
        } else {
            grp_SIG1_fu_1067_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_SIG1_fu_1067_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG1_fu_1074_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1074_x = m_45_fu_2431_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1074_x = m_43_fu_2372_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1074_x = m_41_fu_2329_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1074_x = m_39_fu_2270_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1074_x = m_37_fu_2227_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1074_x = m_35_fu_2168_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1074_x = m_33_fu_2125_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1074_x = m_31_fu_2065_p2.read();
        } else {
            grp_SIG1_fu_1074_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_SIG1_fu_1074_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG1_fu_1081_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1081_x = m_60_fu_2816_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1081_x = m_58_fu_2758_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1081_x = m_56_fu_2718_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1081_x = m_54_fu_2660_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1081_x = m_52_fu_2620_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1081_x = m_50_fu_2563_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1081_x = m_48_fu_2521_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1081_x = m_46_fu_2462_p2.read();
        } else {
            grp_SIG1_fu_1081_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_SIG1_fu_1081_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG1_fu_1088_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1088_x = m_61_fu_2827_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1088_x = m_59_fu_2769_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1088_x = m_57_fu_2729_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1088_x = m_55_fu_2671_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1088_x = m_53_fu_2631_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1088_x = m_51_fu_2574_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1088_x = m_49_fu_2533_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1088_x = m_47_fu_2474_p2.read();
        } else {
            grp_SIG1_fu_1088_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_SIG1_fu_1088_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_m_0_fu_1332_p5() {
    m_0_fu_1332_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q0.read(), data_1_q0.read()), data_2_q0.read()), data_3_q0.read());
}

void sha256_transform::thread_m_10_fu_1549_p5() {
    m_10_fu_1549_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q0.read(), data_1_q0.read()), data_2_q0.read()), data_3_q0.read());
}

void sha256_transform::thread_m_11_fu_1562_p5() {
    m_11_fu_1562_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q1.read(), data_1_q1.read()), data_2_q1.read()), data_3_q1.read());
}

void sha256_transform::thread_m_12_fu_1603_p5() {
    m_12_fu_1603_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q0.read(), data_1_q0.read()), data_2_q0.read()), data_3_q0.read());
}

void sha256_transform::thread_m_13_fu_1616_p5() {
    m_13_fu_1616_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q1.read(), data_1_q1.read()), data_2_q1.read()), data_3_q1.read());
}

void sha256_transform::thread_m_14_fu_1640_p5() {
    m_14_fu_1640_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q0.read(), data_1_q0.read()), data_2_q0.read()), data_3_q0.read());
}

void sha256_transform::thread_m_15_fu_1654_p5() {
    m_15_fu_1654_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q1.read(), data_1_q1.read()), data_2_q1.read()), data_3_q1.read());
}

void sha256_transform::thread_m_16_fu_1708_p2() {
    m_16_fu_1708_p2 = (!add_ln258_1_reg_5415.read().is_01() || !add_ln258_fu_1703_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_1_reg_5415.read()) + sc_biguint<32>(add_ln258_fu_1703_p2.read()));
}

void sha256_transform::thread_m_17_fu_1720_p2() {
    m_17_fu_1720_p2 = (!add_ln258_4_reg_5420.read().is_01() || !add_ln258_3_fu_1715_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_4_reg_5420.read()) + sc_biguint<32>(add_ln258_3_fu_1715_p2.read()));
}

void sha256_transform::thread_m_18_fu_1751_p2() {
    m_18_fu_1751_p2 = (!add_ln258_7_reg_5467.read().is_01() || !add_ln258_6_fu_1746_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_7_reg_5467.read()) + sc_biguint<32>(add_ln258_6_fu_1746_p2.read()));
}

void sha256_transform::thread_m_19_fu_1763_p2() {
    m_19_fu_1763_p2 = (!add_ln258_10_reg_5472.read().is_01() || !add_ln258_9_fu_1758_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_10_reg_5472.read()) + sc_biguint<32>(add_ln258_9_fu_1758_p2.read()));
}

void sha256_transform::thread_m_1_fu_1344_p5() {
    m_1_fu_1344_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q1.read(), data_1_q1.read()), data_2_q1.read()), data_3_q1.read());
}

void sha256_transform::thread_m_20_fu_1807_p2() {
    m_20_fu_1807_p2 = (!add_ln258_13_reg_5521.read().is_01() || !add_ln258_12_fu_1802_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_13_reg_5521.read()) + sc_biguint<32>(add_ln258_12_fu_1802_p2.read()));
}

void sha256_transform::thread_m_21_fu_1819_p2() {
    m_21_fu_1819_p2 = (!add_ln258_16_reg_5526.read().is_01() || !add_ln258_15_fu_1814_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_16_reg_5526.read()) + sc_biguint<32>(add_ln258_15_fu_1814_p2.read()));
}

void sha256_transform::thread_m_22_fu_1850_p2() {
    m_22_fu_1850_p2 = (!add_ln258_19_reg_5573.read().is_01() || !add_ln258_18_fu_1845_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_19_reg_5573.read()) + sc_biguint<32>(add_ln258_18_fu_1845_p2.read()));
}

void sha256_transform::thread_m_23_fu_1862_p2() {
    m_23_fu_1862_p2 = (!add_ln258_22_reg_5578.read().is_01() || !add_ln258_21_fu_1857_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_22_reg_5578.read()) + sc_biguint<32>(add_ln258_21_fu_1857_p2.read()));
}

void sha256_transform::thread_m_24_fu_1909_p2() {
    m_24_fu_1909_p2 = (!add_ln258_25_reg_5612.read().is_01() || !add_ln258_24_fu_1904_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_25_reg_5612.read()) + sc_biguint<32>(add_ln258_24_fu_1904_p2.read()));
}

void sha256_transform::thread_m_25_fu_1921_p2() {
    m_25_fu_1921_p2 = (!add_ln258_28_reg_5617.read().is_01() || !add_ln258_27_fu_1916_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_28_reg_5617.read()) + sc_biguint<32>(add_ln258_27_fu_1916_p2.read()));
}

void sha256_transform::thread_m_26_fu_1951_p2() {
    m_26_fu_1951_p2 = (!add_ln258_31_reg_5664.read().is_01() || !add_ln258_30_fu_1946_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_31_reg_5664.read()) + sc_biguint<32>(add_ln258_30_fu_1946_p2.read()));
}

void sha256_transform::thread_m_27_fu_1963_p2() {
    m_27_fu_1963_p2 = (!add_ln258_34_reg_5669.read().is_01() || !add_ln258_33_fu_1958_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_34_reg_5669.read()) + sc_biguint<32>(add_ln258_33_fu_1958_p2.read()));
}

void sha256_transform::thread_m_28_fu_2011_p2() {
    m_28_fu_2011_p2 = (!add_ln258_37_reg_5703.read().is_01() || !add_ln258_36_fu_2006_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_37_reg_5703.read()) + sc_biguint<32>(add_ln258_36_fu_2006_p2.read()));
}

void sha256_transform::thread_m_29_fu_2023_p2() {
    m_29_fu_2023_p2 = (!add_ln258_40_reg_5708.read().is_01() || !add_ln258_39_fu_2018_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_40_reg_5708.read()) + sc_biguint<32>(add_ln258_39_fu_2018_p2.read()));
}

void sha256_transform::thread_m_2_fu_1368_p5() {
    m_2_fu_1368_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q0.read(), data_1_q0.read()), data_2_q0.read()), data_3_q0.read());
}

void sha256_transform::thread_m_30_fu_2053_p2() {
    m_30_fu_2053_p2 = (!add_ln258_43_reg_5755.read().is_01() || !add_ln258_42_fu_2048_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_43_reg_5755.read()) + sc_biguint<32>(add_ln258_42_fu_2048_p2.read()));
}

void sha256_transform::thread_m_31_fu_2065_p2() {
    m_31_fu_2065_p2 = (!add_ln258_46_reg_5760.read().is_01() || !add_ln258_45_fu_2060_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_46_reg_5760.read()) + sc_biguint<32>(add_ln258_45_fu_2060_p2.read()));
}

void sha256_transform::thread_m_32_fu_2113_p2() {
    m_32_fu_2113_p2 = (!add_ln258_49_reg_5794.read().is_01() || !add_ln258_48_fu_2108_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_49_reg_5794.read()) + sc_biguint<32>(add_ln258_48_fu_2108_p2.read()));
}

void sha256_transform::thread_m_33_fu_2125_p2() {
    m_33_fu_2125_p2 = (!add_ln258_52_reg_5799.read().is_01() || !add_ln258_51_fu_2120_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_52_reg_5799.read()) + sc_biguint<32>(add_ln258_51_fu_2120_p2.read()));
}

void sha256_transform::thread_m_34_fu_2156_p2() {
    m_34_fu_2156_p2 = (!add_ln258_55_reg_5846.read().is_01() || !add_ln258_54_fu_2151_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_55_reg_5846.read()) + sc_biguint<32>(add_ln258_54_fu_2151_p2.read()));
}

void sha256_transform::thread_m_35_fu_2168_p2() {
    m_35_fu_2168_p2 = (!add_ln258_58_reg_5851.read().is_01() || !add_ln258_57_fu_2163_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_58_reg_5851.read()) + sc_biguint<32>(add_ln258_57_fu_2163_p2.read()));
}

void sha256_transform::thread_m_36_fu_2215_p2() {
    m_36_fu_2215_p2 = (!add_ln258_61_reg_5885.read().is_01() || !add_ln258_60_fu_2210_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_61_reg_5885.read()) + sc_biguint<32>(add_ln258_60_fu_2210_p2.read()));
}

void sha256_transform::thread_m_37_fu_2227_p2() {
    m_37_fu_2227_p2 = (!add_ln258_64_reg_5890.read().is_01() || !add_ln258_63_fu_2222_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_64_reg_5890.read()) + sc_biguint<32>(add_ln258_63_fu_2222_p2.read()));
}

void sha256_transform::thread_m_38_fu_2258_p2() {
    m_38_fu_2258_p2 = (!add_ln258_67_reg_5937.read().is_01() || !add_ln258_66_fu_2253_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_67_reg_5937.read()) + sc_biguint<32>(add_ln258_66_fu_2253_p2.read()));
}

void sha256_transform::thread_m_39_fu_2270_p2() {
    m_39_fu_2270_p2 = (!add_ln258_70_reg_5942.read().is_01() || !add_ln258_69_fu_2265_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_70_reg_5942.read()) + sc_biguint<32>(add_ln258_69_fu_2265_p2.read()));
}

void sha256_transform::thread_m_3_fu_1381_p5() {
    m_3_fu_1381_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q1.read(), data_1_q1.read()), data_2_q1.read()), data_3_q1.read());
}

void sha256_transform::thread_m_40_fu_2317_p2() {
    m_40_fu_2317_p2 = (!add_ln258_73_reg_5976.read().is_01() || !add_ln258_72_fu_2312_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_73_reg_5976.read()) + sc_biguint<32>(add_ln258_72_fu_2312_p2.read()));
}

void sha256_transform::thread_m_41_fu_2329_p2() {
    m_41_fu_2329_p2 = (!add_ln258_76_reg_5981.read().is_01() || !add_ln258_75_fu_2324_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_76_reg_5981.read()) + sc_biguint<32>(add_ln258_75_fu_2324_p2.read()));
}

void sha256_transform::thread_m_42_fu_2360_p2() {
    m_42_fu_2360_p2 = (!add_ln258_79_reg_6028.read().is_01() || !add_ln258_78_fu_2355_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_79_reg_6028.read()) + sc_biguint<32>(add_ln258_78_fu_2355_p2.read()));
}

void sha256_transform::thread_m_43_fu_2372_p2() {
    m_43_fu_2372_p2 = (!add_ln258_82_reg_6033.read().is_01() || !add_ln258_81_fu_2367_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_82_reg_6033.read()) + sc_biguint<32>(add_ln258_81_fu_2367_p2.read()));
}

void sha256_transform::thread_m_44_fu_2419_p2() {
    m_44_fu_2419_p2 = (!add_ln258_85_reg_6067.read().is_01() || !add_ln258_84_fu_2414_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_85_reg_6067.read()) + sc_biguint<32>(add_ln258_84_fu_2414_p2.read()));
}

void sha256_transform::thread_m_45_fu_2431_p2() {
    m_45_fu_2431_p2 = (!add_ln258_88_reg_6072.read().is_01() || !add_ln258_87_fu_2426_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_88_reg_6072.read()) + sc_biguint<32>(add_ln258_87_fu_2426_p2.read()));
}

void sha256_transform::thread_m_46_fu_2462_p2() {
    m_46_fu_2462_p2 = (!add_ln258_91_reg_6119.read().is_01() || !add_ln258_90_fu_2457_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_91_reg_6119.read()) + sc_biguint<32>(add_ln258_90_fu_2457_p2.read()));
}

void sha256_transform::thread_m_47_fu_2474_p2() {
    m_47_fu_2474_p2 = (!add_ln258_94_reg_6124.read().is_01() || !add_ln258_93_fu_2469_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_94_reg_6124.read()) + sc_biguint<32>(add_ln258_93_fu_2469_p2.read()));
}

void sha256_transform::thread_m_48_fu_2521_p2() {
    m_48_fu_2521_p2 = (!add_ln258_97_reg_6158.read().is_01() || !add_ln258_96_fu_2516_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_97_reg_6158.read()) + sc_biguint<32>(add_ln258_96_fu_2516_p2.read()));
}

void sha256_transform::thread_m_49_fu_2533_p2() {
    m_49_fu_2533_p2 = (!add_ln258_100_reg_6163.read().is_01() || !add_ln258_99_fu_2528_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_100_reg_6163.read()) + sc_biguint<32>(add_ln258_99_fu_2528_p2.read()));
}

void sha256_transform::thread_m_4_fu_1423_p5() {
    m_4_fu_1423_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q0.read(), data_1_q0.read()), data_2_q0.read()), data_3_q0.read());
}

void sha256_transform::thread_m_50_fu_2563_p2() {
    m_50_fu_2563_p2 = (!add_ln258_103_reg_6208.read().is_01() || !add_ln258_102_fu_2558_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_103_reg_6208.read()) + sc_biguint<32>(add_ln258_102_fu_2558_p2.read()));
}

void sha256_transform::thread_m_51_fu_2574_p2() {
    m_51_fu_2574_p2 = (!add_ln258_106_reg_6213.read().is_01() || !add_ln258_105_fu_2569_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_106_reg_6213.read()) + sc_biguint<32>(add_ln258_105_fu_2569_p2.read()));
}

void sha256_transform::thread_m_52_fu_2620_p2() {
    m_52_fu_2620_p2 = (!add_ln258_109_reg_6240.read().is_01() || !add_ln258_108_fu_2615_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_109_reg_6240.read()) + sc_biguint<32>(add_ln258_108_fu_2615_p2.read()));
}

void sha256_transform::thread_m_53_fu_2631_p2() {
    m_53_fu_2631_p2 = (!add_ln258_112_reg_6245.read().is_01() || !add_ln258_111_fu_2626_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_112_reg_6245.read()) + sc_biguint<32>(add_ln258_111_fu_2626_p2.read()));
}

void sha256_transform::thread_m_54_fu_2660_p2() {
    m_54_fu_2660_p2 = (!add_ln258_115_reg_6280.read().is_01() || !add_ln258_114_fu_2655_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_115_reg_6280.read()) + sc_biguint<32>(add_ln258_114_fu_2655_p2.read()));
}

void sha256_transform::thread_m_55_fu_2671_p2() {
    m_55_fu_2671_p2 = (!add_ln258_118_reg_6285.read().is_01() || !add_ln258_117_fu_2666_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_118_reg_6285.read()) + sc_biguint<32>(add_ln258_117_fu_2666_p2.read()));
}

void sha256_transform::thread_m_56_fu_2718_p2() {
    m_56_fu_2718_p2 = (!add_ln258_121_reg_6307.read().is_01() || !add_ln258_120_fu_2713_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_121_reg_6307.read()) + sc_biguint<32>(add_ln258_120_fu_2713_p2.read()));
}

void sha256_transform::thread_m_57_fu_2729_p2() {
    m_57_fu_2729_p2 = (!add_ln258_124_reg_6312.read().is_01() || !add_ln258_123_fu_2724_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_124_reg_6312.read()) + sc_biguint<32>(add_ln258_123_fu_2724_p2.read()));
}

void sha256_transform::thread_m_58_fu_2758_p2() {
    m_58_fu_2758_p2 = (!add_ln258_127_reg_6346.read().is_01() || !add_ln258_126_fu_2753_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_127_reg_6346.read()) + sc_biguint<32>(add_ln258_126_fu_2753_p2.read()));
}

void sha256_transform::thread_m_59_fu_2769_p2() {
    m_59_fu_2769_p2 = (!add_ln258_130_reg_6351.read().is_01() || !add_ln258_129_fu_2764_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_130_reg_6351.read()) + sc_biguint<32>(add_ln258_129_fu_2764_p2.read()));
}

void sha256_transform::thread_m_5_fu_1436_p5() {
    m_5_fu_1436_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q1.read(), data_1_q1.read()), data_2_q1.read()), data_3_q1.read());
}

void sha256_transform::thread_m_60_fu_2816_p2() {
    m_60_fu_2816_p2 = (!add_ln258_133_reg_6371.read().is_01() || !add_ln258_132_fu_2811_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_133_reg_6371.read()) + sc_biguint<32>(add_ln258_132_fu_2811_p2.read()));
}

void sha256_transform::thread_m_61_fu_2827_p2() {
    m_61_fu_2827_p2 = (!add_ln258_136_reg_6376.read().is_01() || !add_ln258_135_fu_2822_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln258_136_reg_6376.read()) + sc_biguint<32>(add_ln258_135_fu_2822_p2.read()));
}

void sha256_transform::thread_m_6_fu_1460_p5() {
    m_6_fu_1460_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q0.read(), data_1_q0.read()), data_2_q0.read()), data_3_q0.read());
}

void sha256_transform::thread_m_7_fu_1473_p5() {
    m_7_fu_1473_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q1.read(), data_1_q1.read()), data_2_q1.read()), data_3_q1.read());
}

void sha256_transform::thread_m_8_fu_1513_p5() {
    m_8_fu_1513_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q0.read(), data_1_q0.read()), data_2_q0.read()), data_3_q0.read());
}

void sha256_transform::thread_m_9_fu_1526_p5() {
    m_9_fu_1526_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q1.read(), data_1_q1.read()), data_2_q1.read()), data_3_q1.read());
}

}

