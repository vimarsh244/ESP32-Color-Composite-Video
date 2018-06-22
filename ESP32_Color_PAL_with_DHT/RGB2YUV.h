const unsigned short RGB2YUV[] = {
32896, 32896, 37249, 37249, 41329, 41329, 45682, 45682, 49778, 50035, 54115, 54115, 58468, 58468, 62564, 62564, 33153, 33153, 37233, 37233, 37490, 41586, 41586, 45939, 45923, 50019, 50276, 54372, 54372, 58468, 58709, 62805, 29041, 33137, 33394, 37490, 37490, 41843, 41827, 41827, 46180, 46180, 50276, 50276, 54613, 54613, 58709, 58966, 29298, 29298, 33394, 33651, 37731, 37731, 42084, 42084, 46180, 46180, 46421, 50517, 50517, 54870, 54870, 58966, 
25202, 29555, 29539, 33635, 33892, 37988, 37988, 42084, 42341, 46421, 46421, 50774, 50774, 54870, 55127, 55111, 25443, 29539, 29796, 29796, 33892, 33892, 38245, 38229, 42325, 42582, 46678, 46678, 51031, 51015, 55111, 55111, 25700, 25700, 29796, 29796, 34149, 34133, 34133, 38486, 38486, 42582, 42839, 46919, 46919, 51015, 51272, 55368, 21604, 25700, 25957, 30037, 30037, 34390, 34390, 38486, 38743, 38727, 42823, 42823, 47176, 47176, 51272, 51513, 
21861, 21845, 25941, 26198, 30294, 30294, 34390, 34631, 38727, 38727, 43080, 43080, 43080, 47417, 47417, 51513, 17749, 22102, 22102, 26198, 26198, 30535, 30535, 34631, 34888, 38984, 38984, 43321, 43321, 47417, 47417, 47674, 18006, 22102, 22102, 22343, 26439, 26439, 30792, 30792, 34888, 35129, 39225, 39225, 43321, 43578, 47674, 47674, 18006, 18247, 22343, 22343, 26696, 26696, 30792, 31033, 31033, 35129, 35129, 39482, 39482, 43578, 43819, 47915, 
14151, 18247, 18504, 22600, 22600, 26953, 26937, 31033, 31033, 35386, 35386, 35386, 39723, 39723, 43819, 44076, 14408, 14408, 18504, 18761, 22841, 22841, 26937, 27194, 31290, 31290, 35627, 35627, 39723, 39980, 39980, 44076, 14408, 14665, 14649, 18745, 18745, 23098, 23098, 27194, 27435, 31531, 31531, 35884, 35884, 39980, 39964, 44317, 10553, 14649, 14649, 19002, 19002, 19002, 23339, 23339, 27435, 27435, 31788, 31788, 35868, 36125, 40221, 40221, 
32896, 32896, 37249, 37249, 41345, 41602, 45698, 45682, 50035, 50035, 54131, 54131, 58484, 58468, 58468, 62821, 33153, 33153, 33153, 37506, 37506, 41586, 41586, 45939, 45939, 50035, 50292, 54372, 54372, 58725, 58725, 62821, 29057, 33410, 33410, 37490, 37490, 37747, 41843, 41843, 46196, 46180, 50276, 50533, 54629, 54629, 58725, 58966, 29314, 29298, 33394, 33651, 37747, 37747, 42100, 42084, 42084, 46437, 46437, 50533, 50533, 54870, 54870, 58966, 
25202, 29555, 29555, 33651, 33908, 37988, 37988, 42341, 42341, 46437, 46437, 46678, 50774, 50774, 55127, 55127, 25459, 25459, 29812, 29796, 33892, 34149, 38245, 38245, 42341, 42598, 46678, 46678, 51031, 51031, 55127, 55384, 25716, 25700, 29796, 30053, 30053, 34149, 34149, 38502, 38486, 42582, 42839, 46935, 46935, 51288, 51272, 55368, 21604, 25957, 25957, 30053, 30053, 34406, 34390, 34390, 38743, 38743, 42839, 43096, 47176, 47176, 51272, 51529, 
21861, 21861, 25957, 26214, 30294, 30294, 34647, 34647, 38743, 39000, 38984, 43080, 43080, 47433, 47433, 51529, 17765, 22118, 22102, 26198, 26455, 30551, 30551, 34647, 34888, 38984, 38984, 43337, 43337, 43337, 47674, 47674, 18006, 18006, 22359, 22359, 26455, 26455, 30792, 30792, 34888, 35145, 39241, 39241, 43578, 43578, 47674, 47674, 18263, 18263, 22359, 22359, 22600, 26696, 26696, 31049, 31049, 35145, 35386, 39482, 39482, 43578, 43835, 47931, 
14167, 18263, 18504, 22600, 22600, 26953, 26953, 31049, 31290, 31290, 35386, 35386, 39739, 39739, 43835, 44076, 14408, 14408, 18504, 18761, 22857, 22857, 27210, 27194, 31290, 31290, 35643, 35643, 35643, 39980, 39980, 44076, 10312, 14665, 14665, 18761, 19018, 23098, 23098, 27194, 27451, 31547, 31547, 35884, 35884, 39980, 40237, 40237, 10569, 14665, 14922, 14906, 19002, 19002, 23355, 23355, 27451, 27692, 31788, 31788, 36141, 36141, 40237, 40221, 
32912, 33169, 37265, 37249, 41345, 41602, 45698, 45698, 50051, 50051, 54131, 54388, 54388, 58484, 58484, 62837, 29073, 33153, 33153, 37506, 37506, 41602, 41859, 45955, 45939, 50292, 50292, 54388, 54388, 58741, 58725, 58725, 29057, 33410, 33410, 33410, 37763, 37763, 41843, 41843, 46196, 46196, 50292, 50549, 54629, 54629, 58982, 58982, 29314, 29314, 33667, 33667, 37747, 37747, 38004, 42100, 42100, 46453, 46437, 50533, 50790, 54886, 54886, 58982, 
25475, 29571, 29555, 33651, 33908, 38004, 38004, 42357, 42341, 42341, 46694, 46694, 50790, 50790, 55127, 55127, 25459, 25459, 29812, 29812, 33908, 34165, 38245, 38245, 42598, 42598, 46694, 46694, 46935, 51031, 51031, 55384, 25716, 25716, 25716, 30069, 30053, 34149, 34406, 38502, 38502, 42598, 42855, 46935, 46935, 51288, 51288, 55384, 21620, 25973, 25957, 30053, 30310, 30310, 34406, 34406, 38759, 38743, 42839, 43096, 47192, 47192, 51545, 51529, 
21861, 21861, 26214, 26214, 30310, 30310, 34663, 34647, 34647, 39000, 39000, 43096, 43353, 47433, 47433, 51529, 18022, 22118, 22118, 26214, 26471, 30551, 30551, 34904, 34904, 39000, 39257, 39241, 43337, 43337, 47690, 47690, 18022, 18022, 22375, 22359, 26455, 26712, 30808, 30808, 34904, 35145, 39241, 39241, 43594, 43594, 43594, 47931, 18279, 18263, 18263, 22616, 22616, 26712, 26712, 31049, 31049, 35145, 35402, 39498, 39498, 43835, 43835, 47931, 
14167, 18520, 18520, 22616, 22616, 22857, 26953, 26953, 31306, 31306, 35402, 35643, 39739, 39739, 43835, 44092, 14424, 14424, 18520, 18761, 22857, 22857, 27210, 27210, 31306, 31547, 31547, 35643, 35643, 39996, 39996, 44092, 10328, 14665, 14665, 18761, 19018, 23114, 23114, 27467, 27451, 31547, 31547, 35900, 35900, 35900, 40237, 40237, 10569, 10569, 14922, 14922, 19018, 19275, 23355, 23355, 27451, 27708, 31804, 31804, 36141, 36141, 40237, 40494, 
32912, 33169, 37265, 37265, 41618, 41618, 45698, 45698, 50051, 50051, 50051, 54404, 54404, 58484, 58741, 62837, 29073, 33169, 33426, 37522, 37506, 41602, 41859, 45955, 45955, 50308, 50308, 54388, 54645, 54645, 58741, 58741, 29330, 29330, 33410, 33410, 37763, 37763, 41859, 42116, 46212, 46196, 50549, 50549, 54645, 54645, 58998, 58982, 29314, 29314, 33667, 33667, 33667, 38020, 38020, 42100, 42100, 46453, 46453, 50549, 50806, 54886, 54886, 59239, 
25475, 29571, 29571, 33924, 33924, 38004, 38004, 38261, 42357, 42357, 46710, 46694, 50790, 51047, 55143, 55143, 25475, 25732, 29828, 29812, 33908, 34165, 38261, 38261, 42614, 42598, 42598, 46951, 46951, 51047, 51047, 55384, 21636, 25716, 25716, 30069, 30069, 34165, 34422, 38502, 38502, 42855, 42855, 46951, 46951, 47192, 51288, 51288, 21620, 25973, 25973, 25973, 30326, 30310, 34406, 34663, 38759, 38759, 42855, 43112, 47192, 47192, 51545, 51545, 
21877, 21877, 26230, 26214, 30310, 30567, 30567, 34663, 34663, 39016, 39000, 43096, 43353, 47449, 47449, 51802, 18038, 22118, 22118, 26471, 26471, 30567, 30567, 34920, 34904, 34904, 39257, 39257, 43353, 43610, 47690, 47690, 18022, 18279, 22375, 22375, 26471, 26728, 30808, 30808, 35161, 35161, 39257, 39514, 39498, 43594, 43594, 47947, 14183, 18279, 18279, 22632, 22616, 26712, 26969, 31065, 31065, 35161, 35402, 39498, 39498, 43851, 43851, 43851, 
14183, 18536, 18520, 18520, 22873, 22873, 26969, 26969, 31306, 31306, 35402, 35659, 39755, 39755, 44092, 44092, 14424, 14424, 18777, 18777, 22873, 22873, 23114, 27210, 27210, 31563, 31563, 35659, 35900, 39996, 39996, 44092, 10585, 14681, 14681, 18777, 19018, 23114, 23114, 27467, 27467, 31563, 31804, 31804, 35900, 35900, 40253, 40253, 10585, 10585, 14922, 14922, 19018, 19275, 23371, 23371, 27724, 27708, 31804, 31804, 36157, 36157, 36157, 40494, 
32928, 33185, 37281, 37265, 41618, 41618, 41618, 45971, 45971, 50051, 50051, 54404, 54404, 58500, 58757, 62853, 29089, 33169, 33426, 37522, 37522, 41875, 41875, 45955, 45955, 50308, 50308, 50308, 54661, 54661, 58741, 58998, 29330, 29330, 33426, 33683, 37779, 37763, 41859, 42116, 46212, 46212, 50565, 50565, 54645, 54902, 54902, 58998, 29330, 29587, 29587, 33667, 33667, 38020, 38020, 42116, 42373, 46469, 46453, 50806, 50806, 54902, 54902, 59255, 
25491, 29571, 29571, 33924, 33924, 33924, 38277, 38277, 42357, 42357, 46710, 46710, 50806, 51063, 55143, 55143, 25475, 25732, 29828, 29828, 34181, 34181, 38261, 38261, 38518, 42614, 42614, 46967, 46951, 51047, 51304, 55400, 21636, 25732, 25989, 30085, 30069, 34165, 34422, 38518, 38518, 42871, 42855, 42855, 47208, 47208, 51304, 51304, 21893, 21893, 25973, 25973, 30326, 30326, 34422, 34679, 38759, 38759, 43112, 43112, 47208, 47208, 47449, 51545, 
21877, 21877, 26230, 26230, 26230, 30583, 30567, 34663, 34920, 39016, 39016, 43112, 43369, 47449, 47449, 51802, 18038, 22134, 22134, 26487, 26471, 30567, 30824, 30824, 34920, 34920, 39273, 39257, 43353, 43610, 47706, 47706, 18038, 18295, 22375, 22375, 26728, 26728, 30824, 30824, 35177, 35161, 35161, 39514, 39514, 43610, 43867, 47947, 14183, 18279, 18536, 22632, 22632, 26728, 26985, 31065, 31065, 35418, 35418, 39514, 39771, 39755, 43851, 43851, 
14440, 14440, 18536, 18536, 22889, 22873, 26969, 27226, 31322, 31322, 35418, 35659, 39755, 39755, 44108, 44108, 14440, 14440, 18793, 18777, 18777, 23130, 23130, 27226, 27226, 31563, 31563, 35659, 35916, 40012, 40012, 44349, 10601, 14681, 14681, 19034, 19034, 23130, 23130, 23371, 27467, 27467, 31820, 31820, 35916, 36157, 40253, 40253, 10585, 10842, 14938, 14938, 19034, 19275, 23371, 23371, 27724, 27724, 31820, 32061, 32061, 36157, 36157, 40510, 
33185, 33185, 37281, 37281, 37538, 41634, 41618, 45971, 45971, 50067, 50324, 54420, 54404, 58500, 58757, 62853, 29089, 33185, 33442, 37538, 37522, 41875, 41875, 41875, 46228, 46228, 50308, 50308, 54661, 54661, 58757, 59014, 29346, 29346, 33426, 33683, 37779, 37779, 42132, 42132, 46212, 46212, 50565, 50565, 50565, 54918, 54918, 58998, 25234, 29587, 29587, 33683, 33940, 38036, 38020, 42116, 42373, 46469, 46469, 50822, 50822, 54902, 55159, 55159, 
25491, 29587, 29844, 29844, 33924, 33924, 38277, 38277, 42373, 42630, 46726, 46710, 51063, 51063, 55159, 55159, 25748, 25748, 29828, 29828, 34181, 34181, 34181, 38534, 38534, 42614, 42614, 46967, 46967, 51063, 51320, 55400, 21636, 25732, 25989, 30085, 30085, 34438, 34438, 38518, 38518, 38775, 42871, 42871, 47224, 47208, 51304, 51561, 21893, 21893, 25989, 26246, 30342, 30326, 34422, 34679, 38775, 38775, 43128, 43112, 43112, 47465, 47465, 51561, 
17797, 22150, 22150, 26230, 26230, 30583, 30583, 34679, 34936, 39016, 39016, 43369, 43369, 47465, 47465, 47706, 18054, 22134, 22134, 26487, 26487, 26487, 30840, 30824, 34920, 35177, 39273, 39273, 43369, 43626, 47706, 47706, 18038, 18295, 22391, 22391, 26744, 26728, 30824, 31081, 31081, 35177, 35177, 39530, 39514, 43610, 43867, 47963, 14199, 18295, 18552, 22632, 22632, 26985, 26985, 31081, 31081, 35434, 35418, 35418, 39771, 39771, 43867, 44124, 
14456, 14440, 18536, 18793, 22889, 22889, 26985, 27242, 31322, 31322, 35675, 35675, 39771, 40028, 40012, 44108, 14440, 14697, 14697, 18793, 18793, 23146, 23130, 27226, 27483, 31579, 31579, 35675, 35916, 40012, 40012, 44365, 10601, 14697, 14697, 19050, 19034, 19034, 23387, 23387, 27483, 27483, 31820, 31820, 35916, 36173, 40269, 40269, 10601, 10858, 14938, 14938, 19291, 19291, 23387, 23387, 23628, 27724, 27724, 32077, 32077, 36173, 36414, 40510, 
33201, 33201, 33185, 37538, 37538, 41634, 41634, 45987, 45987, 50067, 50324, 54420, 54420, 58773, 58773, 62853, 29089, 33442, 33442, 37538, 37538, 37795, 41891, 41875, 46228, 46228, 50324, 50581, 54677, 54661, 58757, 59014, 29346, 29346, 33442, 33699, 37795, 37779, 42132, 42132, 42132, 46485, 46485, 50565, 50565, 54918, 54918, 59014, 25250, 29603, 29603, 33683, 33940, 38036, 38036, 42389, 42389, 46469, 46469, 50822, 50822, 50822, 55175, 55175, 
25507, 25491, 29844, 29844, 33940, 34197, 38293, 38277, 42373, 42630, 46726, 46726, 51079, 51079, 55159, 55416, 25748, 25748, 29844, 30101, 30101, 34181, 34181, 38534, 38534, 42630, 42887, 46983, 46967, 51320, 51320, 55416, 21652, 26005, 26005, 30085, 30085, 34438, 34438, 34438, 38791, 38791, 42871, 42871, 47224, 47224, 51320, 51577, 21909, 21893, 25989, 26246, 30342, 30342, 34695, 34695, 38775, 38775, 39032, 43128, 43128, 47481, 47465, 51561, 
17797, 22150, 22150, 26246, 26503, 30599, 30583, 34679, 34936, 39032, 39032, 43385, 43369, 43369, 47722, 47722, 18054, 18054, 22407, 22407, 26487, 26487, 30840, 30840, 34936, 35193, 39273, 39273, 43626, 43626, 47722, 47722, 18311, 18311, 22391, 22391, 26744, 26744, 26744, 31097, 31081, 35177, 35434, 39530, 39530, 43626, 43883, 47963, 14199, 18295, 18552, 22648, 22648, 27001, 26985, 31081, 31338, 31338, 35434, 35434, 39787, 39771, 43867, 44124, 
14456, 14456, 18552, 18809, 22889, 22889, 27242, 27242, 31338, 31338, 35691, 35675, 35675, 40028, 40028, 44124, 10360, 14713, 14697, 18793, 19050, 23146, 23146, 27242, 27499, 31579, 31579, 35932, 35932, 40028, 40285, 40269, 10601, 14697, 14697, 14954, 19050, 19050, 23403, 23387, 27483, 27740, 31836, 31836, 35932, 36173, 40269, 40269, 10601, 10858, 14954, 14954, 19307, 19291, 19291, 23644, 23644, 27740, 27740, 32077, 32077, 36173, 36430, 40526, 
29105, 33201, 33201, 37554, 37554, 41634, 41891, 45987, 45987, 50083, 50340, 54436, 54420, 58773, 58773, 58773, 29105, 33458, 33458, 33442, 37795, 37795, 41891, 41891, 46244, 46244, 50324, 50581, 54677, 54677, 59030, 59030, 29362, 29346, 33699, 33699, 37795, 37795, 38052, 42148, 42132, 46485, 46485, 50581, 50838, 54934, 54918, 59014, 25507, 29603, 29603, 33699, 33956, 38052, 38036, 42389, 42389, 42389, 46742, 46742, 50822, 50822, 55175, 55175, 
25507, 25507, 29860, 29860, 33940, 34197, 38293, 38293, 42646, 42646, 46726, 46726, 51079, 51079, 51079, 55432, 25764, 25764, 25748, 30101, 30101, 34197, 34454, 38550, 38534, 42630, 42887, 46983, 46983, 51336, 51336, 55416, 21652, 26005, 26005, 30101, 30358, 30358, 34438, 34438, 38791, 38791, 42887, 43144, 47240, 47224, 51577, 51577, 21909, 21909, 26262, 26262, 30342, 30342, 34695, 34695, 34695, 39048, 39048, 43128, 43128, 47481, 47481, 51577, 
17813, 22166, 22150, 26246, 26503, 30599, 30599, 34952, 34952, 39032, 39032, 39289, 43385, 43385, 47738, 47722, 18054, 18054, 22407, 22407, 26503, 26760, 30856, 30840, 34936, 35193, 39289, 39289, 43642, 43626, 43626, 47979, 18311, 18311, 18311, 22664, 22664, 26744, 26744, 31097, 31097, 35193, 35450, 39530, 39530, 43883, 43883, 47979, 14215, 18568, 18568, 22648, 22648, 27001, 27001, 27001, 31354, 31338, 35434, 35691, 39787, 39787, 43883, 44140, 
14472, 14456, 18552, 18809, 22905, 22905, 27258, 27242, 31338, 31595, 31595, 35691, 35691, 40044, 40028, 44124, 10360, 14713, 14713, 18809, 19066, 23146, 23146, 27499, 27499, 31595, 31595, 35948, 35932, 35932, 40285, 40285, 10617, 10617, 14970, 14954, 19050, 19307, 23403, 23403, 27499, 27756, 31836, 31836, 36189, 36189, 40285, 40542, 10874, 10858, 14954, 15211, 15211, 19307, 19307, 23660, 23644, 27740, 27997, 32093, 32093, 36189, 36430, 40526, 
29121, 33217, 33458, 37554, 37554, 41650, 41907, 46003, 45987, 50340, 50340, 54436, 54693, 54693, 58789, 58773, 29105, 29362, 33458, 33458, 37811, 37811, 41891, 42148, 46244, 46244, 50340, 50597, 54693, 54677, 59030, 59030, 29362, 29362, 33715, 33715, 33699, 38052, 38052, 42148, 42148, 46501, 46501, 50581, 50838, 54934, 54934, 59287, 25523, 29619, 29603, 33956, 33956, 38052, 38052, 38309, 42405, 42389, 46742, 46742, 50838, 51095, 55191, 55175, 
25507, 25764, 29860, 29860, 33956, 34213, 38309, 38293, 42646, 42646, 42646, 46999, 46999, 51079, 51079, 55432, 21668, 25764, 25764, 30117, 30117, 34197, 34454, 38550, 38550, 42903, 42903, 46983, 46983, 51336, 51336, 51336, 21668, 26021, 26021, 26005, 30358, 30358, 34454, 34711, 38807, 38791, 42887, 43144, 47240, 47240, 51593, 51593, 21925, 21909, 26262, 26262, 30358, 30615, 30615, 34695, 34695, 39048, 39048, 43144, 43401, 47497, 47481, 51834, 
18070, 22166, 22166, 26519, 26519, 30599, 30599, 34952, 34952, 34952, 39305, 39305, 43385, 43385, 47738, 47738, 18070, 18070, 22423, 22407, 26503, 26760, 30856, 30856, 35209, 35209, 39289, 39289, 39546, 43642, 43642, 47995, 14231, 18311, 18311, 22664, 22664, 26760, 27017, 31113, 31097, 35193, 35450, 39546, 39546, 43899, 43883, 43883, 14215, 18568, 18568, 18568, 22921, 22921, 27001, 27001, 31354, 31354, 35450, 35707, 39787, 39787, 44140, 44140, 
14472, 14472, 18825, 18825, 22905, 22905, 27258, 27258, 27258, 31611, 31595, 35691, 35948, 40044, 40044, 44140, 10633, 14729, 14713, 18809, 19066, 23162, 23162, 27515, 27499, 31595, 31852, 31852, 35948, 35948, 40301, 40285, 10617, 10617, 14970, 14970, 19066, 19323, 23403, 23403, 27756, 27756, 31852, 31852, 36205, 36189, 36189, 40542, 10874, 10874, 10874, 15227, 15211, 19307, 19564, 23660, 23660, 27756, 28013, 32093, 32093, 36446, 36446, 40542, 
29121, 33217, 33474, 37570, 37570, 41907, 41907, 46003, 46003, 50356, 50356, 50340, 54693, 54693, 58789, 59046, 29378, 29378, 33474, 33715, 37811, 37811, 41907, 42164, 46260, 46244, 50597, 50597, 54693, 54950, 54950, 59046, 29378, 29362, 29619, 33715, 33715, 38068, 38068, 42148, 42405, 46501, 46501, 50597, 50854, 54950, 54934, 59287, 25523, 29619, 29619, 33972, 33972, 33956, 38309, 38309, 42405, 42405, 46758, 46758, 50838, 51095, 55191, 55191, 
25523, 25780, 29876, 29860, 34213, 34213, 38309, 38309, 38566, 42662, 42646, 46999, 46999, 51095, 51352, 55448, 21684, 25764, 26021, 30117, 30117, 34213, 34470, 38566, 38550, 42903, 42903, 42903, 47256, 47256, 51336, 51336, 21925, 21925, 26021, 26021, 30374, 30374, 34454, 34711, 38807, 38807, 43160, 43160, 47240, 47240, 51593, 51593, 21925, 21925, 26278, 26278, 26262, 30615, 30615, 34711, 34968, 39064, 39048, 43144, 43401, 47497, 47497, 51850, 
18086, 22182, 22166, 26519, 26519, 30615, 30872, 30872, 34952, 34952, 39305, 39305, 43401, 43658, 47754, 47738, 18070, 18327, 22423, 22423, 26776, 26776, 30856, 30856, 35209, 35209, 35209, 39562, 39562, 43642, 43642, 47995, 14231, 18327, 18327, 22680, 22664, 26760, 27017, 31113, 31113, 35466, 35466, 39546, 39546, 39803, 43899, 43899, 14231, 14488, 18568, 18568, 22921, 22921, 27017, 27274, 31370, 31354, 35450, 35707, 39803, 39803, 44156, 44140, 
14472, 14472, 18825, 18825, 18825, 23178, 23178, 27258, 27258, 31611, 31611, 35707, 35964, 40044, 40044, 44397, 10633, 14729, 14729, 19082, 19082, 23162, 23162, 27515, 27515, 27515, 31868, 31852, 35948, 36205, 40301, 40301, 10633, 10890, 14986, 14970, 19066, 19323, 23419, 23419, 27772, 27756, 31852, 32109, 32109, 36205, 36205, 40558, 6794, 10874, 10874, 15227, 15227, 19323, 19580, 23660, 23660, 28013, 28013, 32109, 32109, 36462, 36446, 36446, 
29137, 33233, 33474, 37570, 37570, 41923, 41923, 46019, 46260, 46260, 50356, 50356, 54709, 54709, 58789, 59046, 29378, 29378, 33474, 33731, 37827, 37827, 42164, 42164, 46260, 46260, 50613, 50613, 50597, 54950, 54950, 59046, 25282, 29635, 29635, 33731, 33972, 38068, 38068, 42164, 42421, 46517, 46501, 50854, 50854, 54950, 55207, 55207, 25539, 29635, 29619, 29876, 33972, 33972, 38325, 38325, 42405, 42662, 46758, 46758, 50854, 51111, 55207, 55191, 
25523, 25780, 29876, 29876, 34229, 34229, 34213, 38566, 38566, 42662, 42662, 47015, 47015, 51095, 51352, 55448, 21684, 25780, 26037, 30133, 30117, 34470, 34470, 38566, 38566, 38823, 42919, 42903, 47256, 47256, 51352, 51609, 21941, 21941, 26021, 26278, 30374, 30374, 34470, 34727, 38823, 38807, 43160, 43160, 43160, 47513, 47513, 51593, 21941, 22182, 22182, 26278, 26278, 30631, 30631, 34711, 34968, 39064, 39064, 43417, 43417, 47497, 47497, 51850, 
18086, 22182, 22182, 26535, 26535, 26519, 30872, 30872, 34968, 35225, 39321, 39305, 43401, 43658, 47754, 47754, 18086, 18343, 22439, 22423, 26776, 26776, 30872, 31129, 31129, 35209, 35209, 39562, 39562, 43658, 43915, 48011, 14247, 18327, 18584, 22680, 22680, 27033, 27033, 31113, 31113, 35466, 35466, 35466, 39819, 39819, 43899, 43899, 14488, 14488, 18584, 18584, 22937, 22921, 27017, 27274, 31370, 31370, 35723, 35723, 39803, 39803, 40060, 44156, 
14488, 14488, 14745, 18825, 18825, 23178, 23178, 27274, 27531, 31627, 31611, 35707, 35964, 40060, 40060, 44413, 10649, 14729, 14729, 19082, 19082, 19082, 23435, 23435, 27515, 27515, 31868, 31868, 35964, 36221, 40301, 40301, 10633, 10890, 14986, 14986, 19339, 19339, 23419, 23419, 27772, 27772, 27772, 32125, 32109, 36205, 36462, 40558, 6794, 10890, 11147, 15243, 15227, 19323, 19580, 23676, 23676, 28029, 28013, 32109, 32366, 32366, 36462, 36462, 
29137, 33490, 33490, 37586, 37586, 37827, 41923, 41923, 46276, 46276, 50372, 50613, 54709, 54709, 58805, 59062, 29394, 29394, 33490, 33731, 37827, 37827, 42180, 42180, 46276, 46517, 46517, 50613, 50613, 54966, 54966, 59046, 25298, 29635, 29635, 33731, 33988, 38084, 38084, 42421, 42421, 46517, 46517, 50870, 50870, 50854, 55207, 55207, 25539, 25539, 29892, 29892, 33988, 34229, 38325, 38325, 42421, 42678, 46774, 46758, 51111, 51111, 55207, 55464, 
25796, 25796, 29892, 29876, 30133, 34229, 34229, 38582, 38582, 42662, 42919, 47015, 47015, 51111, 51368, 55464, 21700, 25780, 26037, 30133, 30133, 34486, 34486, 34470, 38823, 38823, 42919, 42919, 47272, 47272, 51352, 51609, 21941, 21941, 26037, 26294, 30390, 30374, 34727, 34727, 38823, 38823, 39080, 43176, 43160, 47513, 47513, 51609, 17845, 22198, 22198, 26278, 26535, 30631, 30631, 34727, 34984, 39080, 39064, 43417, 43417, 43417, 47770, 47770, 
18102, 22198, 22439, 22439, 26535, 26535, 30888, 30888, 34968, 35225, 39321, 39321, 43674, 43674, 47754, 47754, 18343, 18343, 22439, 22439, 26792, 26792, 26776, 31129, 31129, 35225, 35482, 39578, 39562, 43658, 43915, 48011, 14247, 18343, 18600, 22696, 22680, 27033, 27033, 31129, 31386, 31386, 35466, 35466, 39819, 39819, 43915, 44172, 14504, 14504, 18584, 18841, 22937, 22937, 27290, 27290, 31370, 31370, 35723, 35723, 35723, 40076, 40076, 44156, 
10392, 14745, 14745, 18841, 18841, 23194, 23178, 27274, 27531, 31627, 31627, 35980, 35980, 40060, 40060, 40317, 10649, 14745, 14745, 15002, 19082, 19082, 23435, 23435, 27531, 27788, 31884, 31868, 35964, 36221, 40317, 40317, 10649, 10906, 14986, 14986, 19339, 19339, 19339, 23692, 23692, 27772, 27772, 32125, 32125, 36221, 36478, 40558, 6794, 10890, 11147, 15243, 15243, 19596, 19596, 23676, 23676, 28029, 28029, 28029, 32382, 32366, 36462, 36719, 
29153, 33490, 33490, 33490, 37843, 37843, 41939, 41923, 46276, 46276, 50372, 50629, 54725, 54725, 59062, 59062, 29394, 29394, 33747, 33747, 37843, 37843, 38084, 42180, 42180, 46533, 46533, 50629, 50870, 54966, 54966, 59062, 25555, 29651, 29651, 33747, 33988, 38084, 38084, 42437, 42437, 46533, 46774, 46774, 50870, 50870, 55223, 55223, 25555, 25555, 29892, 29892, 33988, 34245, 38341, 38341, 42678, 42678, 46774, 46774, 51127, 51127, 51111, 55464, 
25796, 25796, 25796, 30149, 30149, 34245, 34486, 38582, 38582, 42678, 42935, 47031, 47015, 51368, 51368, 55464, 21700, 26053, 26053, 30149, 30133, 30390, 34486, 34486, 38839, 38839, 42919, 43176, 47272, 47272, 51368, 51625, 21957, 21957, 26037, 26294, 30390, 30390, 34743, 34743, 34727, 39080, 39080, 43176, 43176, 47529, 47529, 51609, 17845, 22198, 22198, 26294, 26551, 30647, 30631, 34984, 34984, 39080, 39080, 39337, 43433, 43417, 47770, 47770, 
18102, 18102, 22455, 22455, 26535, 26792, 30888, 30888, 34984, 35241, 39337, 39321, 43674, 43674, 43674, 48027, 18359, 18359, 22455, 22696, 22696, 26792, 26792, 31145, 31145, 35225, 35482, 39578, 39578, 43931, 43931, 48011, 14263, 18600, 18600, 22696, 22696, 27049, 27049, 27033, 31386, 31386, 35482, 35739, 39835, 39819, 43915, 44172, 14504, 14504, 18600, 18857, 22953, 22937, 27290, 27290, 31386, 31643, 31643, 35723, 35723, 40076, 40076, 44172, 
10408, 14761, 14761, 18841, 19098, 23194, 23194, 27547, 27547, 31627, 31627, 35980, 35980, 35980, 40333, 40333, 10665, 10649, 15002, 15002, 19098, 19098, 23451, 23435, 27531, 27788, 31884, 31884, 36237, 36237, 40317, 40317, 10906, 10906, 15002, 15002, 15259, 19339, 19339, 23692, 23692, 27788, 28045, 32141, 32125, 36221, 36478, 40574, 6810, 10906, 11163, 15243, 15243, 19596, 19596, 19596, 23949, 23949, 28029, 28029, 32382, 32382, 36478, 36735, 
29153, 29410, 33506, 33506, 37843, 37843, 41939, 42196, 46292, 46292, 50372, 50629, 54725, 54725, 59078, 59078, 29410, 29410, 33747, 33747, 33747, 38100, 38100, 42196, 42180, 46533, 46533, 50629, 50886, 54982, 54982, 59319, 25555, 29651, 29651, 34004, 34004, 38100, 38100, 38341, 42437, 42437, 46790, 46790, 50886, 51127, 55223, 55223, 25555, 25812, 29908, 29908, 34004, 34245, 38341, 38341, 42694, 42694, 46790, 47031, 47031, 51127, 51127, 55480, 
21716, 25812, 25812, 30149, 30149, 34245, 34502, 38598, 38598, 42935, 42935, 47031, 47031, 51384, 51384, 51368, 21716, 26053, 26053, 26053, 30406, 30406, 34502, 34743, 38839, 38839, 42935, 43192, 47288, 47272, 51625, 51625, 21957, 21957, 26310, 26310, 30406, 30390, 30647, 34743, 34743, 39096, 39096, 43176, 43433, 47529, 47529, 51625, 18118, 22214, 22214, 26294, 26551, 30647, 30647, 35000, 35000, 34984, 39337, 39337, 43433, 43433, 47786, 47786, 
18118, 18102, 22455, 22455, 26551, 26808, 30904, 30888, 35241, 35241, 39337, 39337, 39594, 43690, 43674, 48027, 14263, 18359, 18359, 22712, 22712, 26792, 27049, 31145, 31145, 35241, 35498, 39594, 39578, 43931, 43931, 43931, 14263, 18616, 18616, 22712, 22953, 22953, 27049, 27049, 31402, 31402, 35482, 35739, 39835, 39835, 44188, 44188, 14520, 14520, 18857, 18857, 22953, 22953, 27306, 27306, 27290, 31643, 31643, 35739, 35996, 40092, 40076, 44172, 
10665, 14761, 14761, 18857, 19114, 23210, 23194, 27547, 27547, 31643, 31900, 31900, 35980, 35980, 40333, 40333, 10665, 10665, 15018, 15018, 19098, 19355, 23451, 23451, 27804, 27804, 31884, 31884, 36237, 36237, 36237, 40590, 10922, 10922, 10906, 15259, 15259, 19355, 19355, 23708, 23692, 27788, 28045, 32141, 32141, 36494, 36494, 40574, 6810, 11163, 11163, 15259, 15259, 15516, 19596, 19596, 23949, 23949, 28045, 28302, 32398, 32382, 36478, 36735, 
29426, 29410, 33506, 33506, 37859, 37859, 41955, 42196, 46292, 46292, 50645, 50645, 54741, 54725, 54982, 59078, 29410, 29410, 29667, 33763, 33763, 38100, 38100, 42196, 42453, 46549, 46549, 50629, 50886, 54982, 54982, 59335, 25571, 29667, 29667, 34004, 34004, 34004, 38357, 38357, 42453, 42437, 46790, 46790, 50886, 51143, 55239, 55239, 25571, 25812, 29908, 29908, 34261, 34261, 38357, 38357, 38598, 42694, 42694, 47047, 47047, 51143, 51384, 55480, 
21716, 25812, 26069, 30165, 30165, 34261, 34502, 38598, 38598, 42951, 42951, 47047, 47288, 47288, 51384, 51384, 21973, 21973, 26069, 26069, 30406, 30406, 34502, 34759, 38855, 38855, 43192, 43192, 47288, 47288, 51641, 51641, 21973, 21973, 26310, 26310, 26310, 30663, 30663, 34759, 35000, 39096, 39096, 43192, 43449, 47545, 47529, 51882, 18118, 22214, 22214, 26567, 26567, 30663, 30647, 30904, 35000, 35000, 39353, 39353, 43433, 43690, 47786, 47786, 
18118, 18375, 22471, 22471, 26551, 26808, 30904, 30904, 35257, 35257, 35241, 39594, 39594, 43690, 43690, 48043, 14279, 18375, 18359, 22712, 22712, 26808, 27065, 31161, 31145, 35498, 35498, 39594, 39594, 39851, 43947, 43931, 14263, 14520, 18616, 18616, 22969, 22969, 27049, 27306, 31402, 31402, 35498, 35755, 39851, 39835, 44188, 44188, 14520, 14520, 18873, 18873, 22969, 23210, 23210, 27306, 27306, 31659, 31659, 35739, 35996, 40092, 40092, 44445, 
10681, 14777, 14777, 19114, 19114, 23210, 23210, 27563, 27563, 27547, 31900, 31900, 35996, 36253, 40349, 40333, 10681, 10922, 15018, 15018, 19114, 19371, 23467, 23451, 27804, 27804, 31900, 32157, 32157, 36237, 36237, 40590, 6826, 10922, 10922, 15275, 15275, 19355, 19612, 23708, 23708, 28061, 28061, 32141, 32141, 36494, 36494, 36494, 6826, 11179, 11179, 11163, 15516, 15516, 19612, 19612, 23965, 23949, 28045, 28302, 32398, 32398, 36751, 36751, 
29426, 29426, 33522, 33779, 37859, 37859, 42212, 42212, 46308, 46308, 50645, 50645, 50645, 54998, 54998, 59094, 25330, 29683, 29667, 33763, 33763, 38116, 38116, 42212, 42453, 46549, 46549, 50902, 50902, 54998, 54982, 55239, 25571, 29667, 29667, 29924, 34020, 34020, 38357, 38357, 42453, 42710, 46806, 46806, 50886, 51143, 55239, 55239, 25571, 25828, 29924, 29924, 34261, 34261, 34261, 38614, 38614, 42710, 42694, 47047, 47047, 51143, 51400, 55496, 
21732, 25828, 26069, 30165, 30165, 34518, 34518, 38614, 38614, 38855, 42951, 42951, 47304, 47304, 51400, 51641, 21973, 21973, 26069, 26326, 30422, 30422, 34518, 34759, 38855, 38855, 43208, 43208, 47304, 47545, 47545, 51641, 21973, 22230, 22230, 26326, 26326, 30663, 30663, 34759, 35016, 39112, 39112, 43449, 43449, 47545, 47545, 51898, 18134, 22230, 22230, 26567, 26567, 26567, 30920, 30920, 35016, 35257, 39353, 39353, 43449, 43706, 47802, 47786, 
18134, 18375, 22471, 22471, 26824, 26824, 30920, 30904, 31161, 35257, 35257, 39610, 39610, 43690, 43947, 48043, 14279, 18375, 18632, 22728, 22728, 26808, 27065, 31161, 31161, 35514, 35514, 35498, 39851, 39851, 43947, 43947, 14536, 14536, 18632, 18616, 22969, 22969, 27065, 27322, 31418, 31402, 35755, 35755, 39851, 39851, 40108, 44204, 14536, 14520, 14777, 18873, 18873, 23226, 23226, 27306, 27563, 31659, 31659, 35755, 36012, 40108, 40092, 44445, 
10681, 14777, 14777, 19130, 19130, 23226, 23467, 23467, 27563, 27563, 31916, 31916, 35996, 36253, 40349, 40349, 10681, 10938, 15034, 15034, 19371, 19371, 23467, 23467, 27820, 27820, 27804, 32157, 32157, 36253, 36510, 40606, 6842, 10938, 11179, 15275, 15275, 19371, 19628, 23724, 23708, 28061, 28061, 32157, 32414, 32414, 36494, 36494, 7083, 7083, 11179, 11179, 15532, 15532, 19612, 19869, 23965, 23965, 28318, 28318, 32398, 32398, 36751, 36751, };

