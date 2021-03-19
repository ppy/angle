// GENERATED FILE - DO NOT EDIT.
// Generated by gen_builtin_symbols.py using data from builtin_variables.json and
// builtin_function_declarations.txt.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// ImmutableString_autogen.cpp: Wrapper for static or pool allocated char arrays, that are
// guaranteed to be valid and unchanged for the duration of the compilation. Implements
// mangledNameHash using perfect hash function from gen_builtin_symbols.py

#include "compiler/translator/ImmutableString.h"

std::ostream &operator<<(std::ostream &os, const sh::ImmutableString &str)
{
    return os.write(str.data(), str.length());
}

#if defined(_MSC_VER)
#    pragma warning(disable : 4309)  // truncation of constant value
#endif

namespace
{

constexpr int mangledkT1[] = {1888, 2201, 3289, 4099, 2901, 1271, 747,  2683, 1761, 343,
                              3222, 1316, 1508, 3696, 1896, 3255, 3463, 226,  1192, 2360,
                              3131, 2856, 731,  1833, 362,  3777, 1563, 811,  24,   1643,
                              4057, 1674, 4003, 1264, 35,   4299, 3725, 656,  3730, 1580};
constexpr int mangledkT2[] = {3077, 2281, 2698, 1599, 4129, 1937, 298,  4024, 2022, 1682,
                              2301, 357,  642,  1898, 3243, 2527, 364,  1671, 2441, 3982,
                              924,  3750, 2979, 828,  2934, 2541, 2369, 557,  3564, 3320,
                              4253, 3872, 1318, 605,  3381, 2622, 1467, 2787, 4008, 3439};
constexpr int mangledkG[]  = {
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    4024, 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    2571, 0,    0,    0,    0,    0,    0,    0,    0,    1355, 0,    0,    0,    0,    0,    0,
    0,    2193, 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    3739, 0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    4377, 0,    0,    2790, 0,    1419,
    0,    0,    383,  0,    0,    0,    0,    627,  0,    0,    2149, 0,    0,    0,    0,    161,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    3699, 0,    0,    0,    0,
    0,    0,    20,   0,    4081, 0,    0,    3359, 0,    0,    0,    0,    2198, 0,    3804, 0,
    0,    339,  0,    3532, 0,    0,    0,    2703, 0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    220,  0,    0,    0,    0,    2907, 0,    0,
    0,    0,    2776, 0,    0,    0,    0,    0,    0,    0,    0,    2815, 4211, 0,    0,    0,
    0,    0,    0,    0,    379,  1076, 0,    803,  0,    0,    0,    3831, 0,    533,  3698, 0,
    0,    0,    1620, 0,    0,    1409, 0,    0,    0,    0,    0,    0,    1382, 0,    0,    0,
    0,    0,    4507, 0,    3481, 0,    0,    0,    0,    0,    0,    0,    4180, 0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    2874, 0,    0,
    0,    0,    0,    310,  0,    0,    0,    0,    0,    4048, 0,    0,    1411, 696,  0,    0,
    0,    0,    1074, 0,    0,    0,    0,    3020, 0,    0,    0,    1998, 0,    0,    0,    0,
    80,   1020, 0,    989,  0,    1517, 0,    0,    1585, 0,    0,    144,  0,    1726, 0,    0,
    0,    0,    0,    0,    0,    0,    0,    1963, 1033, 3939, 0,    0,    0,    4210, 0,    0,
    0,    2000, 0,    2650, 0,    0,    0,    0,    0,    0,    0,    2014, 0,    0,    0,    0,
    0,    1629, 0,    0,    4472, 0,    0,    0,    0,    0,    0,    0,    0,    4340, 3259, 0,
    0,    0,    769,  0,    3612, 0,    86,   2744, 0,    0,    0,    742,  2877, 0,    2927, 0,
    0,    0,    291,  0,    1762, 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    3695, 0,    852,  0,    0,    0,    954,  2381, 0,    496,  0,    0,    0,    0,
    0,    2876, 1498, 1718, 0,    0,    0,    1470, 0,    2919, 0,    0,    0,    0,    3949, 0,
    0,    0,    0,    0,    91,   4394, 4469, 0,    0,    0,    0,    0,    0,    0,    215,  0,
    0,    0,    526,  0,    0,    3164, 3081, 0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    4429, 0,    3760, 0,    0,    0,    0,    0,    267,  0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    1281, 0,    0,    0,    0,    0,    3536, 0,    0,
    0,    0,    1397, 0,    0,    0,    0,    0,    1772, 0,    0,    556,  0,    0,    0,    0,
    0,    369,  1419, 0,    0,    700,  0,    0,    1517, 0,    0,    0,    0,    331,  0,    3449,
    1560, 4,    0,    0,    1861, 3457, 0,    0,    0,    0,    0,    0,    1232, 0,    0,    0,
    0,    0,    4005, 0,    4048, 0,    0,    0,    0,    0,    0,    0,    0,    2114, 0,    0,
    0,    0,    0,    1997, 1386, 0,    0,    0,    0,    3545, 0,    4236, 0,    0,    0,    0,
    0,    0,    1008, 1013, 0,    3802, 1314, 1472, 0,    0,    0,    0,    1380, 2264, 0,    0,
    1575, 573,  1572, 0,    0,    4297, 0,    0,    1801, 3658, 0,    0,    0,    0,    0,    0,
    269,  0,    0,    0,    1070, 1761, 0,    1061, 0,    0,    0,    124,  0,    0,    0,    2598,
    0,    0,    0,    0,    0,    0,    0,    0,    919,  1879, 0,    0,    0,    0,    0,    0,
    1983, 0,    0,    0,    4007, 4004, 0,    0,    1983, 1464, 2556, 3126, 0,    0,    0,    0,
    0,    0,    0,    0,    3649, 1472, 813,  0,    0,    0,    0,    737,  0,    0,    257,  3627,
    0,    2613, 967,  0,    2630, 3309, 0,    0,    579,  0,    0,    0,    0,    0,    576,  0,
    0,    0,    410,  0,    0,    0,    0,    0,    0,    1156, 0,    0,    0,    0,    1429, 0,
    3859, 487,  0,    0,    0,    2969, 0,    0,    0,    0,    0,    1589, 3606, 747,  1853, 0,
    0,    22,   2020, 4440, 0,    729,  3491, 0,    0,    0,    2476, 0,    2688, 0,    0,    0,
    1368, 2317, 0,    0,    0,    0,    0,    782,  0,    0,    0,    0,    0,    3066, 0,    0,
    590,  0,    0,    0,    0,    0,    763,  0,    0,    0,    0,    0,    3301, 0,    4189, 545,
    0,    0,    2796, 0,    1782, 0,    0,    0,    0,    420,  338,  0,    0,    0,    4008, 0,
    1764, 2414, 0,    0,    0,    543,  1531, 1495, 903,  1971, 1737, 0,    0,    4523, 847,  0,
    4475, 1014, 0,    0,    2336, 4235, 0,    0,    3454, 3152, 0,    0,    0,    2174, 0,    0,
    0,    227,  1563, 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    1303, 0,    577,
    1,    0,    1042, 0,    0,    0,    0,    0,    4353, 3158, 654,  0,    0,    0,    0,    135,
    0,    0,    1723, 0,    0,    500,  4223, 3770, 0,    0,    0,    0,    1362, 0,    1656, 0,
    0,    0,    834,  827,  1780, 0,    3478, 2979, 0,    0,    162,  0,    932,  0,    0,    0,
    0,    3844, 4505, 3086, 834,  4478, 0,    0,    0,    0,    0,    3638, 0,    0,    0,    0,
    0,    0,    2644, 18,   1144, 1811, 202,  0,    0,    0,    1193, 479,  214,  0,    588,  0,
    745,  0,    0,    0,    0,    0,    2152, 0,    1321, 1174, 0,    4245, 537,  0,    4475, 0,
    1938, 0,    0,    4413, 76,   0,    1576, 1531, 0,    1038, 0,    2061, 0,    0,    3061, 4345,
    4402, 412,  0,    0,    0,    2004, 0,    1147, 0,    62,   0,    380,  1718, 3942, 0,    0,
    0,    0,    0,    0,    0,    422,  1503, 0,    0,    2475, 0,    0,    0,    4134, 0,    0,
    0,    3900, 0,    0,    4378, 0,    0,    2551, 898,  0,    0,    0,    1320, 0,    0,    0,
    1225, 0,    0,    0,    0,    4293, 4360, 0,    0,    0,    205,  472,  451,  0,    0,    2965,
    1650, 88,   0,    4411, 0,    0,    0,    0,    32,   495,  0,    0,    4083, 3617, 0,    630,
    0,    1205, 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    273,  0,    0,    0,
    1086, 0,    0,    4178, 0,    2561, 0,    0,    2695, 0,    0,    1533, 3778, 0,    0,    3643,
    441,  0,    0,    0,    0,    404,  3981, 0,    0,    0,    579,  0,    0,    0,    440,  1083,
    0,    0,    0,    0,    0,    0,    387,  0,    0,    0,    0,    3652, 0,    0,    275,  0,
    1100, 0,    4359, 0,    0,    0,    3685, 4140, 3696, 0,    0,    4006, 0,    0,    0,    2558,
    0,    224,  0,    0,    964,  883,  0,    0,    396,  0,    0,    4403, 974,  0,    1937, 0,
    0,    0,    4350, 0,    0,    0,    0,    0,    0,    0,    0,    0,    428,  0,    2042, 1301,
    0,    0,    1855, 0,    4350, 0,    0,    794,  0,    0,    1414, 1525, 868,  0,    0,    15,
    0,    0,    1712, 0,    1579, 0,    2210, 0,    1963, 4022, 1272, 0,    423,  0,    1171, 0,
    0,    140,  0,    1791, 0,    4442, 812,  0,    373,  4296, 0,    1413, 0,    0,    0,    0,
    2668, 1820, 4041, 0,    0,    125,  0,    3033, 0,    0,    0,    2214, 0,    873,  0,    659,
    0,    4394, 197,  0,    0,    0,    3628, 4057, 0,    0,    0,    0,    1319, 3858, 1872, 283,
    0,    0,    0,    0,    1104, 0,    0,    717,  0,    0,    1760, 0,    0,    0,    1265, 0,
    1395, 0,    0,    0,    452,  628,  0,    0,    0,    0,    0,    1257, 0,    178,  992,  2180,
    0,    3014, 1466, 0,    0,    1347, 0,    2156, 2313, 2583, 0,    2048, 0,    661,  0,    0,
    0,    0,    1223, 2272, 28,   712,  987,  712,  740,  0,    578,  0,    0,    360,  0,    1816,
    0,    3009, 1658, 0,    1338, 0,    1269, 3965, 0,    1989, 512,  0,    3756, 1426, 0,    0,
    0,    2892, 2088, 0,    0,    1555, 0,    897,  0,    0,    0,    0,    0,    351,  0,    825,
    1044, 0,    0,    0,    1392, 2154, 0,    0,    0,    1940, 0,    0,    0,    0,    0,    0,
    0,    446,  1083, 0,    0,    0,    412,  0,    68,   2050, 1107, 1820, 1455, 1290, 0,    809,
    0,    1282, 3504, 0,    0,    0,    752,  0,    0,    1949, 4354, 0,    0,    0,    0,    3323,
    0,    0,    2044, 0,    1298, 0,    0,    0,    0,    0,    215,  637,  1771, 821,  25,   0,
    0,    0,    3048, 988,  0,    0,    3610, 3842, 0,    1187, 0,    1960, 0,    4255, 110,  3969,
    3725, 0,    0,    0,    0,    0,    0,    3543, 0,    630,  0,    0,    0,    0,    0,    219,
    0,    4312, 0,    0,    0,    1183, 4144, 0,    1516, 1402, 0,    0,    1953, 3790, 0,    1389,
    0,    0,    2130, 0,    1212, 0,    0,    0,    3251, 0,    0,    0,    0,    647,  2100, 0,
    0,    1155, 0,    0,    0,    897,  4318, 0,    0,    701,  3674, 3857, 1139, 0,    1944, 4480,
    169,  0,    214,  0,    0,    0,    0,    0,    200,  925,  1032, 264,  271,  1456, 0,    4025,
    3903, 2165, 874,  0,    0,    0,    0,    1979, 0,    4299, 722,  3755, 578,  50,   0,    0,
    0,    321,  955,  4384, 1706, 2966, 1703, 0,    0,    0,    0,    3356, 1648, 0,    0,    354,
    0,    0,    3316, 0,    1295, 0,    0,    0,    691,  4477, 0,    0,    898,  3820, 0,    0,
    0,    1729, 1561, 1333, 741,  0,    0,    0,    927,  4469, 0,    2830, 0,    0,    0,    0,
    0,    1241, 0,    0,    567,  670,  0,    0,    0,    0,    1912, 556,  0,    0,    0,    0,
    0,    1551, 1763, 0,    4312, 1462, 0,    0,    0,    0,    0,    4359, 0,    811,  0,    0,
    1168, 979,  0,    0,    2024, 0,    0,    0,    0,    0,    0,    0,    0,    0,    262,  4032,
    1642, 943,  0,    0,    4477, 0,    0,    3098, 0,    0,    45,   3771, 0,    0,    4494, 3609,
    0,    0,    3132, 0,    0,    1768, 0,    0,    0,    0,    1479, 0,    605,  0,    1263, 0,
    0,    4253, 0,    2377, 0,    163,  0,    0,    787,  0,    0,    0,    193,  1534, 921,  0,
    0,    0,    0,    1966, 0,    3025, 606,  757,  0,    3420, 0,    1331, 0,    0,    0,    1841,
    0,    156,  4419, 7,    0,    565,  0,    0,    0,    3325, 668,  1004, 4102, 1705, 0,    0,
    0,    0,    0,    930,  71,   1301, 0,    0,    3875, 0,    0,    231,  0,    0,    2312, 157,
    3671, 880,  0,    0,    2760, 1962, 2996, 0,    2109, 705,  987,  1605, 3646, 1501, 0,    0,
    0,    0,    0,    3314, 2240, 0,    2957, 0,    0,    1128, 0,    232,  1482, 1403, 0,    0,
    0,    0,    0,    3905, 0,    3378, 0,    1213, 4240, 1113, 2465, 1939, 0,    110,  0,    0,
    0,    2250, 178,  1079, 4094, 208,  0,    2270, 1136, 1498, 0,    0,    2254, 0,    4219, 0,
    3678, 0,    0,    0,    38,   390,  330,  0,    0,    1818, 0,    0,    0,    0,    0,    1393,
    1680, 0,    0,    2144, 4037, 3062, 0,    3837, 3724, 0,    4490, 430,  0,    1841, 0,    298,
    1303, 1570, 0,    0,    68,   0,    909,  0,    397,  207,  1524, 0,    0,    0,    0,    0,
    0,    0,    0,    888,  0,    0,    0,    0,    0,    0,    36,   164,  0,    0,    550,  0,
    938,  743,  4197, 279,  0,    4357, 0,    900,  1486, 257,  0,    0,    0,    127,  1375, 2029,
    0,    694,  15,   674,  0,    1788, 0,    4433, 344,  44,   1676, 0,    0,    890,  3605, 0,
    0,    0,    0,    3738, 3702, 0,    210,  199,  0,    734,  3335, 0,    976,  0,    2442, 309,
    0,    0,    0,    0,    1152, 0,    3068, 0,    0,    1410, 0,    309,  1675, 2070, 0,    0,
    4070, 0,    0,    0,    711,  0,    0,    3949, 0,    3826, 1466, 4358, 0,    0,    0,    0,
    0,    2029, 1190, 464,  0,    1988, 3664, 0,    1383, 0,    488,  0,    558,  0,    1842, 0,
    3288, 531,  3460, 1350, 451,  0,    3753, 0,    4210, 1756, 0,    0,    1970, 0,    3586, 2057,
    4036, 702,  0,    1192, 3611, 0,    1179, 1130, 2981, 4166, 0,    0,    1216, 0,    0,    0,
    4368, 0,    0,    0,    0,    3698, 845,  0,    2927, 0,    0,    0,    935,  0,    0,    824,
    909,  0,    0,    0,    959,  0,    1086, 0,    1730, 0,    0,    1830, 1775, 2123, 0,    0,
    113,  0,    4484, 1245, 504,  1560, 1230, 0,    1769, 0,    0,    225,  432,  0,    1901, 1586,
    1568, 2632, 1823, 902,  1727, 1386, 0,    0,    74,   3397, 1622, 0,    2005, 0,    0,    0,
    0,    0,    894,  0,    2986, 3145, 510,  0,    149,  1163, 0,    2239, 1341, 0,    0,    0,
    1930, 2135, 4416, 0,    41,   0,    0,    0,    0,    240,  1223, 0,    464,  0,    0,    792,
    0,    0,    81,   1111, 3425, 0,    0,    0,    0,    0,    0,    0,    0,    0,    2024, 177,
    6,    9,    3773, 664,  0,    0,    1111, 3745, 0,    0,    0,    0,    400,  1277, 0,    1786,
    4234, 0,    472,  0,    1670, 0,    0,    2021, 0,    0,    0,    0,    2003, 0,    0,    0,
    779,  0,    0,    0,    295,  0,    700,  0,    2692, 311,  2495, 0,    0,    3621, 3344, 3658,
    897,  1022, 2846, 3285, 699,  165,  1017, 0,    0,    1003, 4050, 3768, 649,  0,    748,  0,
    0,    0,    4459, 0,    0,    129,  2019, 0,    0,    0,    1026, 4340, 3955, 4361, 3983, 0,
    0,    0,    0,    0,    3587, 1639, 0,    168,  356,  0,    155,  0,    0,    76,   238,  1179,
    0,    1503, 993,  4114, 0,    0,    1857, 0,    0,    1082, 1439, 1639, 0,    0,    0,    0,
    580,  0,    2787, 0,    609,  0,    0,    1720, 0,    0,    0,    685,  0,    1030, 0,    1905,
    896,  1648, 0,    434,  0,    3400, 0,    0,    634,  2077, 0,    119,  0,    285,  0,    0,
    21,   423,  1013, 0,    1091, 0,    0,    1798, 820,  0,    0,    0,    0,    0,    1394, 2176,
    381,  0,    3502, 0,    1688, 4387, 0,    0,    0,    3814, 4359, 99,   636,  0,    0,    328,
    0,    0,    1813, 1344, 0,    1900, 0,    3800, 0,    563,  461,  0,    1814, 2390, 0,    2263,
    1363, 0,    0,    0,    3895, 1415, 0,    0,    0,    56,   0,    1465, 1685, 2377, 421,  3047,
    0,    159,  1459, 859,  0,    3498, 4137, 1200, 1159, 264,  582,  0,    0,    0,    3264, 0,
    0,    0,    3549, 107,  1539, 0,    1746, 0,    0,    0,    0,    0,    1088, 0,    4256, 508,
    3010, 0,    5,    4093, 0,    2526, 0,    0,    0,    0,    0,    0,    0,    0,    1055, 3507,
    0,    0,    966,  3629, 0,    0,    2888, 4184, 643,  0,    716,  67,   0,    1848, 0,    196,
    1673, 770,  3503, 1230, 136,  1835, 1418, 360,  0,    0,    1975, 760,  0,    1562, 794,  0,
    0,    113,  0,    0,    3021, 1157, 1458, 3958, 1976, 0,    0,    0,    4280, 0,    0,    0,
    4190, 0,    0,    0,    0,    925,  1435, 0,    0,    0,    4463, 4052, 522,  985,  3481, 1123,
    3390, 989,  3328, 3912, 0,    0,    0,    1628, 0,    3856, 784,  1296, 545,  768,  4063, 2832,
    0,    0,    1480, 0,    71,   1854, 1416, 0,    839,  1212, 555,  0,    0,    4436, 958,  2112,
    586,  0,    3466, 0,    861,  0,    0,    1732, 0,    0,    425,  595,  601,  0,    0,    0,
    0,    709,  0,    401,  0,    0,    1768, 885,  1168, 0,    2374, 1585, 0,    0,    0,    0,
    0,    3380, 0,    0,    0,    0,    2882, 377,  471,  0,    0,    0,    0,    696,  1107, 0,
    0,    989,  0,    0,    4027, 3280, 847,  0,    0,    4084, 0,    698,  934,  94,   1973, 4167,
    40,   0,    737,  1921, 0,    0,    305,  471,  2395, 0,    1841, 4233, 0,    0,    0,    0,
    531,  31,   0,    3536, 733,  0,    0,    14,   0,    0,    0,    519,  0,    1208, 761,  0,
    0,    673,  0,    0,    0,    0,    2774, 0,    0,    0,    194,  4022, 0,    1112, 1262, 2266,
    4400, 1568, 1521, 1032, 0,    107,  0,    0,    4289, 1848, 0,    1378, 0,    0,    4357, 2142,
    1686, 0,    543,  3294, 0,    0,    0,    0,    0,    2899, 3208, 947,  1660, 458,  3836, 104,
    1713, 0,    176,  1424, 1561, 0,    2279, 420,  4077, 4072, 0,    2452, 2336, 796,  189,  0,
    1755, 0,    0,    359,  0,    469,  2113, 3939, 0,    0,    0,    0,    1860, 0,    0,    0,
    1280, 0,    1271, 196,  0,    0,    0,    3994, 707,  1641, 1191, 633,  0,    970,  0,    0,
    1316, 0,    2092, 0,    0,    1049, 0,    0,    0,    0,    0,    1540, 229,  1537, 0,    3447,
    0,    1778, 0,    0,    0,    0,    0,    2782, 0,    0,    0,    0,    0,    1034, 3509, 0,
    1615, 0,    272,  0,    0,    0,    563,  2254, 0,    0,    259,  2579, 361,  1614, 0,    0,
    254,  1017, 809,  0,    0,    0,    1150, 0,    0,    2643, 0,    0,    4492, 923,  0,    745,
    0,    0,    23,   0,    3692, 4339, 3632, 0,    0,    1451, 0,    0,    657,  0,    0,    0,
    0,    0,    0,    0,    0,    1360, 283,  1099, 985,  1153, 1662, 175,  0,    0,    1693, 0,
    297,  3768, 565,  2378, 0,    605,  0,    0,    1369, 4317, 0,    0,    0,    0,    0,    4344,
    0,    1279, 353,  0,    1339, 3978, 1492, 4028, 0,    0,    1638, 1851, 891,  0,    818,  2405,
    0,    0,    0,    4503, 0,    1338, 0,    443,  0,    673,  0,    283,  0,    2959, 0,    638,
    1549, 2039, 1087, 1112, 1735, 1206, 0,    0,    4235, 0,    1028, 1072, 381,  533,  0,    707,
    0,    4145, 155,  3907, 3513, 1312, 762,  545,  1871, 1678, 0,    0,    0,    1137, 0,    0,
    3006, 0,    0,    0,    840,  0,    2136, 0,    526,  0,    0,    3595, 0,    1490, 0,    0,
    366,  945,  0,    0,    0,    0,    0,    3083, 1101, 1296, 2970, 437,  2050, 0,    0,    0,
    0,    304,  2088, 3799, 0,    840,  2052, 0,    0,    386,  1131, 1553, 367,  0,    0,    3297,
    217,  1302, 0,    0,    4138, 0,    625,  2029, 4332, 448,  0,    606,  229,  773,  0,    1011,
    0,    3753, 804,  178,  629,  772,  2554, 660,  1592, 242,  0,    497,  0,    106,  0,    0,
    242,  0,    1949, 389,  0,    1672, 1067, 0,    1270, 0,    0,    1124, 0,    3594, 535,  0,
    0,    0,    0,    0,    0,    0,    3746, 2064, 4147, 2422, 914,  0,    0,    0,    1406, 0,
    1498, 1277, 612,  1717, 1860, 0,    0,    2032, 0,    3707, 1117, 1787, 0,    0,    726,  304,
    597,  501,  4368, 0,    1067, 0,    0,    0,    0,    4040, 635,  0,    4372, 3160, 0,    0,
    0,    342,  0,    2347, 0,    981,  0,    0,    1507, 1625, 0,    0,    123,  2679, 3911, 4450,
    1292, 2756, 205,  418,  0,    0,    0,    0,    3379, 0,    0,    3832, 537,  0,    1896, 0,
    1228, 2737, 0,    4385, 4091, 0,    0,    0,    2149, 1659, 1304, 0,    0,    0,    531,  0,
    3391, 2865, 284,  3845, 0,    0,    0,    4102, 0,    276,  4200, 0,    0,    0,    0,    0,
    0,    1369, 0,    570,  3895, 1119, 2544, 0,    0,    767,  0,    1679, 0,    0,    4290, 649,
    1227, 0,    4293, 3895, 0,    0,    4219, 853,  4322, 0,    0,    0,    0,    4286, 0,    469,
    0,    4415, 496,  0,    0,    2733, 12,   267,  0,    1668, 0,    226,  0,    0,    0,    2072,
    0,    1860, 0,    0,    1800, 0,    731,  0,    4401, 0,    3244, 0,    4247, 0,    716,  0,
    183,  735,  0,    0,    3970, 0,    0,    1024, 547,  2749, 0,    2869, 0,    0,    2509, 0,
    0,    2024, 0,    0,    0,    0,    499,  1574, 688,  0,    1593, 842,  1752, 1395, 0,    1776,
    0,    4201, 1715, 3533, 0,    0,    0,    0,    168,  0,    4413, 949,  3582, 2575, 4459, 0,
    261,  3602, 0,    0,    967,  1366, 0,    3212, 1878, 0,    403,  1692, 0,    3341, 0,    1345,
    3774, 1206, 646,  0,    758,  0,    0,    862,  0,    395,  472,  1354, 1158, 1791, 1014, 1738,
    0,    2629, 3590, 3782, 130,  0,    2122, 1204, 0,    0,    3072, 0,    0,    0,    0,    2092,
    711,  0,    4269, 370,  0,    0,    4425, 59,   3247, 4306, 0,    0,    3970, 0,    132,  0,
    552,  588,  1231, 0,    3398, 1073, 0,    2079, 553,  1645, 1494, 1707, 623,  1704, 0,    2169,
    0,    0,    0,    0,    0,    2601, 1778, 534,  627,  1886, 0,    375,  3679, 0,    393,  0,
    0,    1470, 0,    0,    0,    0,    1915, 13,   1060, 4089, 0,    0,    4223, 0,    218,  3157,
    0,    0,    0,    0,    740,  554,  1055, 0,    3460, 3238, 0,    3402, 0,    199,  0,    2859,
    1268, 1821, 3497, 3326, 1834, 0,    837,  0,    1844, 290,  664,  4423, 0,    1971, 4340, 0,
    0,    1908, 0,    1408, 0,    0,    2038, 245,  0,    0,    0,    1529, 0,    0,    2078, 0,
    1967, 0,    750,  0,    0,    950,  4201, 212,  0,    550,  2122, 0,    0,    0,    855,  0,
    1398, 2057, 3735, 1225, 0,    3495, 546,  0,    473,  410,  0,    91,   4299, 0,    3354, 1474,
    3562, 1471, 0,    520,  0,    0,    0,    683,  0,    0,    22,   685,  2008, 0,    0,    0,
    181,  850,  0,    0,    1535, 0,    0,    1993, 356,  0,    0,    0,    1046, 28,   821,  0,
    0,    0,    0,    0,    4112, 0,    548,  2594, 0,    4484, 0,    225,  4497, 0,    3905, 0,
    0,    526,  0,    1279, 0,    0,    2309, 1365, 0,    0,    2404, 4007, 1745, 0,    2171, 0,
    0,    0,    0,    1415, 630,  1532, 4223, 0,    704,  3570, 0,    1267, 630,  0,    916,  0,
    2443, 0,    309,  4326, 426,  0,    1234, 3454, 692,  0,    483,  1927, 1481, 108,  3347, 1288,
    0,    0,    3246, 0,    0,    0,    375,  822,  0,    293,  3698, 4293, 1835, 851,  431,  1273,
    0,    0,    903,  0,    0,    97,   0,    1784, 574,  3951, 1484, 0,    882,  2129, 1950, 96,
    294,  1331, 0,    439,  856,  0,    0,    1928, 0,    129,  924,  1894, 3792, 0,    0,    3607,
    1700, 518,  0,    394,  4416, 216,  1132, 3809, 1876, 4045, 0,    0,    1010, 0,    0,    1520,
    0,    1971, 0,    1403, 0,    1688, 1574, 1589, 1571, 0,    1845, 0,    48,   2911, 0,    933,
    0,    333,  0,    0,    0,    1493, 315,  280,  0,    0,    0,    3785, 0,    2018, 4160, 1321,
    19,   4353, 1500, 0,    0,    952,  1884, 542,  1808, 404,  912,  1739, 807,  2724, 0,    1487,
    352,  0,    398,  0,    2944, 0,    2055, 0,    0,    788,  0,    1111, 63,   519,  1644, 2640,
    0,    1677, 0,    142,  971,  4335, 4218, 2029, 2097, 0,    0,    369,  1976, 0,    1444, 244,
    3851, 1429, 0,    3187, 0,    1733, 1468, 0,    2334, 0,    3181, 1430, 0,    3114, 3017, 0,
    0,    3874, 0,    0,    0,    0,    1461, 616,  0,    0,    895,  0,    0,    0,    520,  0,
    0,    0,    464,  0,    0,    1934, 415,  0,    0,    2228, 2165, 0,    0,    652,  1114, 0,
    3894, 1601, 0,    1878, 995,  3074, 3446, 1533, 0,    0,    856,  1861, 830,  361,  915,  0,
    318,  3225, 1310, 0,    4116, 4503, 2085, 0,    0,    111,  0,    0,    2222, 1382, 4234, 0,
    0,    0,    424,  978,  1385, 0,    1329, 1367, 759,  816,  0,    0,    260,  1665, 0,    0,
    0,    957,  2518, 0,    2116, 632,  2996, 0,    9,    358,  0,    590,  4110, 0,    1825, 2289,
    443,  0,    0,    0,    462,  0,    18,   2075, 1959, 1476, 1891, 4224, 248,  1282, 0,    525,
    0,    3186, 1416, 1625, 0,    1446, 1587, 1547, 532,  1741, 0,    1728, 2555, 1167, 1787, 4071,
    1935, 2779, 0,    3,    0,    0,    727,  4214, 1796, 0,    0,    0,    0,    0,    3771, 354,
    0,    1945, 4009, 0,    4315, 458,  0,    0,    1957, 0,    0,    0,    0,    494,  0,    0,
    0,    2062, 0,    749,  201,  666,  0,    869,  1846, 3372, 1809, 0,    3727, 2634, 0,    461,
    0,    1092, 0,    1640, 1316, 1637, 122,  376,  942,  1904, 1052, 812,  2051, 0,    0,    4298,
    2514, 0,    0,    2028, 237,  0,    581,  0,    0,    0,    1538, 1417, 3060, 0,    150,  0,
    1401, 2148, 2504, 1721, 4030, 0,    4214, 0,    1658, 1250, 4428, 0,    1663, 0,    0,    1025,
    0,    0,    727,  0,    799,  0,    1081, 686,  424,  1237, 453,  0,    4202, 4518, 0,    0,
    0,    4327, 0,    1850, 1810, 0,    0,    0,    0,    1630, 3932, 42,   4298, 0,    282,  1313,
    2120, 1627, 3726, 0,    1122, 0,    0,    0,    501,  3043, 1704, 0,    0,    1487, 2166, 2880,
    3093, 2146, 1451, 0,    737,  2166, 3616, 4405, 0,    1335, 679,  0,    187,  2169, 364,  171,
    1287, 0,    0,    3454, 0,    2322, 59,   0,    620,  0,    1097, 226,  0,    1457, 4112, 4267,
    323,  0,    425,  677,  3863, 0,    2133, 2056, 2166, 4394, 1334, 0,    0,    1664, 0,    1753,
    911,  0,    1120, 53,   1222, 0,    986,  3617, 0,    1177, 461,  1591, 0,    1611, 680,  1000,
    3009, 0,    144,  0,    486,  0,    2817, 89,   1925, 679,  4144, 803,  2103, 0,    0,    1183,
    699,  1530, 1975, 441,  0,    431,  0,    1108, 0,    133,  0,    0,    0,    3503, 0,    0,
    4310, 4208, 0,    1917, 0,    0,    0,    0,    1072, 2131, 843,  1389, 1933, 0,    0,    0,
    2806, 294,  2773, 247,  1613, 0,    1564, 0,    0,    4071, 2017, 0,    252,  0,    1062, 507,
    0,    3313, 0,    929,  0,    449,  1595, 487,  1195, 0,    1379, 889,  1169, 0,    650,  0,
    0,    854,  3013, 0,    0,    1341, 250,  0,    0,    4010, 0,    0,    4091, 0,    1984, 1031,
    2063, 529,  935,  82,   0,    0,    4251, 833,  4336, 2606, 1645, 0,    0,    571,  0,    644,
    979,  0,    0,    1996, 2453, 0,    1196, 4122, 1689, 955,  4211, 3934, 1428, 0,    40,   0,
    1869, 0,    3730, 100,  0,    2146, 0,    0,    0,    0,    4309, 0,    3531, 2402, 214,  0,
    123,  1093, 1842, 2408, 0,    0,    1326, 1759, 0,    0,    0,    28,   0,    1805, 4479, 0,
    0,    3970, 4173, 4196, 811,  0,    0,    1121, 356,  0,    0,    4144, 4078, 0,    1750, 1409,
    2860, 0,    0,    387,  514,  0,    97,   1915, 0,    1911, 2639, 942,  3656, 2205, 0,    911,
    2711, 108,  940,  1858, 667,  152,  1073, 0,    0,    118,  268,  0,    0,    0,    0,    0,
    1936, 0,    1827, 4208, 1973, 0,    2938, 0,    0,    892,  357,  2146, 0,    544,  1934, 689,
    2962, 1443, 3680, 0,    462,  0,    1709, 1994, 0,    0,    2160, 3844, 0,    0,    289,  13,
    0,    1325, 2049, 2126, 2537, 766,  0,    0,    0,    2930, 1508, 1523, 1414, 0,    0,    568,
    1903, 0,    1931, 0,    0,    941,  1582, 904,  1657, 2076, 0,    1523, 0,    3774, 200,  1309,
    77,   0,    0,    16,   2162, 0,    41,   1173, 1393, 1886, 0,    562,  1503, 3631, 1246, 0,
    4467, 500,  3727, 1877, 1080, 0,    3702, 2218, 0,    610,  4040, 0,    0,    261,  3399, 0,
    0,    1558, 0,    0,    2127, 0,    44,   1353, 728,  0,    4043, 774,  413,  0,    0,    2090,
    1607, 0,    427,  127,  1737, 0,    0,    1190, 1666, 0,    1322, 401,  181,  0,    186,  713,
    0,    0,    3809, 1661, 0,    222,  112,  2143, 2930, 852,  1040, 3283, 224,  0,    0,    0,
    0,    383,  1866, 39,   0,    0,    1084, 3118, 0,    1801, 0,    1509, 2170, 0,    0,    4256,
    0,    312,  4423, 465,  1007, 1629, 49,   0,    1587, 265,  0,    105,  0,    0,    65,   538,
    1263, 1215, 85,   1831, 3660, 25,   1242, 2218, 0,    0,    999,  1914, 3882, 0,    384,  661,
    1327, 1245, 839,  4494, 2290, 0,    0,    3870, 795,  2084, 4072, 0,    1438, 0,    918,  0,
    0,    412,  1726, 0,    3400, 1328, 0,    0,    1259, 857,  2363, 0,    0,    0,    0,    0,
    0,    969,  477,  796,  0,    928,  4331, 3193, 1109, 4247, 1207, 78,   3223, 3321, 0,    678,
    0,    1604, 1817, 0,    0,    3913, 0,    0,    350,  0,    3267, 759,  0,    1203, 0,    0,
    3363, 1589, 1045, 786,  395,  0,    818,  270,  38,   572,  2407, 376,  1702, 4363, 693,  0,
    4131, 468,  0,    719,  2937, 170,  569,  3307, 392,  3247, 0,    0,    0,    0,    3882, 871,
    0,    3698, 432,  1150, 0,    1994, 686,  1638, 0,    296,  1395, 0,    0,    3763, 0,    2150,
    2831, 0,    0,    1275, 0,    1038, 177,  0,    3937, 1148, 3372, 0,    3546, 0,    0,    1804,
    51,   1549, 1744, 1184, 357,  0,    780,  1550, 2631, 3578, 3274, 0,    1635, 0,    0,    4231,
    0,    0,    903,  3665, 4311, 0,    0,    0,    0,    3823, 2653, 0,    2119, 0,    844,  2037,
    0,    0,    2084, 3858, 1160, 488,  0,    0,    0,    479,  0,    0,    2507, 0,    3463, 0,
    0,    0,    4517, 0,    0,    0,    0,    781,  1153, 0,    1980, 0,    1654, 1947, 0,    1065,
    634,  0,    0,    478,  1033, 48,   0,    317,  1896, 0,    2292, 0,    0,    0,    0,    1472,
    393,  945,  1083, 0,    1594, 1451, 0,    3174, 1455, 0,    2108, 789,  811,  1164, 3720, 2097,
    224,  1422, 1581, 2819, 0,    0,    0,    0,    4209, 0,    0,    587,  0};

int MangledHashG(const char *key, const int *T)
{
    int sum = 0;

    for (int i = 0; key[i] != '\0'; i++)
    {
        sum += T[i] * key[i];
        sum %= 4525;
    }
    return mangledkG[sum];
}

int MangledPerfectHash(const char *key)
{
    if (strlen(key) > 40)
        return 0;

    return (MangledHashG(key, mangledkT1) + MangledHashG(key, mangledkT2)) % 4525;
}

constexpr int unmangledkT1[] = {171, 270, 202, 193, 51,  273, 319, 29,  312, 81,  181, 247, 334,
                                160, 186, 252, 234, 137, 189, 99,  312, 59,  196, 157, 87,  15};
constexpr int unmangledkT2[] = {0,  91, 210, 328, 207, 176, 17,  91,  234, 148, 315, 152, 334,
                                51, 88, 18,  221, 3,   190, 126, 270, 105, 214, 314, 190, 315};
constexpr int unmangledkG[]  = {
    0,   0,   0,   0,   0,   0,   319, 209, 71,  0,   156, 0,   0,   0,   0,   89,  0,   0,   0,
    0,   202, 145, 90,  254, 178, 0,   0,   0,   8,   0,   0,   140, 105, 0,   107, 0,   264, 28,
    193, 0,   0,   0,   0,   0,   0,   56,  38,  0,   136, 299, 142, 188, 137, 0,   19,  327, 0,
    7,   0,   0,   0,   108, 194, 0,   68,  186, 0,   181, 2,   305, 0,   281, 221, 0,   0,   0,
    0,   0,   39,  51,  0,   94,  138, 336, 344, 328, 0,   0,   0,   281, 86,  0,   0,   0,   301,
    41,  210, 254, 0,   113, 0,   0,   113, 0,   224, 132, 140, 0,   83,  0,   0,   101, 138, 164,
    151, 0,   254, 0,   0,   0,   123, 36,  0,   59,  189, 187, 0,   230, 348, 308, 2,   2,   0,
    0,   345, 0,   272, 83,  309, 0,   327, 0,   207, 202, 86,  331, 242, 0,   0,   0,   66,  0,
    0,   108, 0,   315, 0,   4,   0,   0,   5,   27,  251, 141, 185, 0,   206, 0,   0,   34,  61,
    326, 91,  279, 265, 312, 24,  156, 127, 238, 0,   68,  0,   0,   15,  198, 331, 198, 0,   196,
    31,  0,   135, 0,   0,   111, 71,  130, 0,   220, 192, 0,   321, 0,   212, 209, 0,   0,   124,
    219, 42,  52,  0,   0,   0,   168, 143, 0,   0,   20,  241, 0,   0,   172, 324, 122, 139, 0,
    159, 216, 42,  0,   0,   32,  31,  200, 39,  319, 0,   0,   17,  0,   0,   0,   0,   27,  193,
    150, 165, 29,  168, 0,   54,  110, 197, 172, 10,  169, 75,  304, 0,   0,   65,  96,  0,   0,
    21,  115, 0,   116, 79,  164, 73,  191, 324, 64,  6,   291, 38,  0,   199, 68,  16,  148, 283,
    197, 0,   0,   111, 12,  0,   255, 219, 344, 0,   76,  0,   302, 260, 258, 0,   344, 110, 187,
    0,   349, 82,  0,   0,   89,  0,   9,   0,   0,   16,  315, 74,  11,  111, 0,   0,   291, 0,
    0,   97,  39,  0,   1,   329, 0,   121, 0,   69,  0,   124, 0,   0,   53,  156, 164, 207, 117,
    0,   289, 0,   0,   0,   154, 0,   0,   0,   264, 262};

int UnmangledHashG(const char *key, const int *T)
{
    int sum = 0;

    for (int i = 0; key[i] != '\0'; i++)
    {
        sum += T[i] * key[i];
        sum %= 353;
    }
    return unmangledkG[sum];
}

int UnmangledPerfectHash(const char *key)
{
    if (strlen(key) > 26)
        return 0;

    return (UnmangledHashG(key, unmangledkT1) + UnmangledHashG(key, unmangledkT2)) % 353;
}

}  // namespace

namespace sh
{

template <>
const size_t ImmutableString::FowlerNollVoHash<4>::kFnvPrime = 16777619u;

template <>
const size_t ImmutableString::FowlerNollVoHash<4>::kFnvOffsetBasis = 0x811c9dc5u;

template <>
const size_t ImmutableString::FowlerNollVoHash<8>::kFnvPrime =
    static_cast<size_t>(1099511628211ull);

template <>
const size_t ImmutableString::FowlerNollVoHash<8>::kFnvOffsetBasis =
    static_cast<size_t>(0xcbf29ce484222325ull);

uint32_t ImmutableString::mangledNameHash() const
{
    return MangledPerfectHash(data());
}

uint32_t ImmutableString::unmangledNameHash() const
{
    return UnmangledPerfectHash(data());
}

}  // namespace sh
