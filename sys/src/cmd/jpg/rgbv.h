/*
 * This file is part of the UCB release of Plan 9. It is subject to the license
 * terms in the LICENSE file found in the top-level directory of this
 * distribution and at http://akaros.cs.berkeley.edu/files/Plan9License. No
 * part of the UCB release of Plan 9, including this file, may be copied,
 * modified, propagated, or distributed except according to the terms contained
 * in the LICENSE file.
 */

uint rgbmap[256] = {
	0x000000, 0x000044, 0x000088, 0x0000CC, 0x004400, 0x004444, 0x004488, 0x0044CC, 
	0x008800, 0x008844, 0x008888, 0x0088CC, 0x00CC00, 0x00CC44, 0x00CC88, 0x00CCCC, 
	0x00DDDD, 0x111111, 0x000055, 0x000099, 0x0000DD, 0x005500, 0x005555, 0x004C99, 
	0x0049DD, 0x009900, 0x00994C, 0x009999, 0x0093DD, 0x00DD00, 0x00DD49, 0x00DD93, 
	0x00EE9E, 0x00EEEE, 0x222222, 0x000066, 0x0000AA, 0x0000EE, 0x006600, 0x006666, 
	0x0055AA, 0x004FEE, 0x00AA00, 0x00AA55, 0x00AAAA, 0x009EEE, 0x00EE00, 0x00EE4F, 
	0x00FF55, 0x00FFAA, 0x00FFFF, 0x333333, 0x000077, 0x0000BB, 0x0000FF, 0x007700, 
	0x007777, 0x005DBB, 0x0055FF, 0x00BB00, 0x00BB5D, 0x00BBBB, 0x00AAFF, 0x00FF00, 
	0x440044, 0x440088, 0x4400CC, 0x444400, 0x444444, 0x444488, 0x4444CC, 0x448800, 
	0x448844, 0x448888, 0x4488CC, 0x44CC00, 0x44CC44, 0x44CC88, 0x44CCCC, 0x440000, 
	0x550000, 0x550055, 0x4C0099, 0x4900DD, 0x555500, 0x555555, 0x4C4C99, 0x4949DD, 
	0x4C9900, 0x4C994C, 0x4C9999, 0x4993DD, 0x49DD00, 0x49DD49, 0x49DD93, 0x49DDDD, 
	0x4FEEEE, 0x660000, 0x660066, 0x5500AA, 0x4F00EE, 0x666600, 0x666666, 0x5555AA, 
	0x4F4FEE, 0x55AA00, 0x55AA55, 0x55AAAA, 0x4F9EEE, 0x4FEE00, 0x4FEE4F, 0x4FEE9E, 
	0x55FFAA, 0x55FFFF, 0x770000, 0x770077, 0x5D00BB, 0x5500FF, 0x777700, 0x777777, 
	0x5D5DBB, 0x5555FF, 0x5DBB00, 0x5DBB5D, 0x5DBBBB, 0x55AAFF, 0x55FF00, 0x55FF55, 
	0x880088, 0x8800CC, 0x884400, 0x884444, 0x884488, 0x8844CC, 0x888800, 0x888844, 
	0x888888, 0x8888CC, 0x88CC00, 0x88CC44, 0x88CC88, 0x88CCCC, 0x880000, 0x880044, 
	0x99004C, 0x990099, 0x9300DD, 0x994C00, 0x994C4C, 0x994C99, 0x9349DD, 0x999900, 
	0x99994C, 0x999999, 0x9393DD, 0x93DD00, 0x93DD49, 0x93DD93, 0x93DDDD, 0x990000, 
	0xAA0000, 0xAA0055, 0xAA00AA, 0x9E00EE, 0xAA5500, 0xAA5555, 0xAA55AA, 0x9E4FEE, 
	0xAAAA00, 0xAAAA55, 0xAAAAAA, 0x9E9EEE, 0x9EEE00, 0x9EEE4F, 0x9EEE9E, 0x9EEEEE, 
	0xAAFFFF, 0xBB0000, 0xBB005D, 0xBB00BB, 0xAA00FF, 0xBB5D00, 0xBB5D5D, 0xBB5DBB, 
	0xAA55FF, 0xBBBB00, 0xBBBB5D, 0xBBBBBB, 0xAAAAFF, 0xAAFF00, 0xAAFF55, 0xAAFFAA, 
	0xCC00CC, 0xCC4400, 0xCC4444, 0xCC4488, 0xCC44CC, 0xCC8800, 0xCC8844, 0xCC8888, 
	0xCC88CC, 0xCCCC00, 0xCCCC44, 0xCCCC88, 0xCCCCCC, 0xCC0000, 0xCC0044, 0xCC0088, 
	0xDD0093, 0xDD00DD, 0xDD4900, 0xDD4949, 0xDD4993, 0xDD49DD, 0xDD9300, 0xDD9349, 
	0xDD9393, 0xDD93DD, 0xDDDD00, 0xDDDD49, 0xDDDD93, 0xDDDDDD, 0xDD0000, 0xDD0049, 
	0xEE004F, 0xEE009E, 0xEE00EE, 0xEE4F00, 0xEE4F4F, 0xEE4F9E, 0xEE4FEE, 0xEE9E00, 
	0xEE9E4F, 0xEE9E9E, 0xEE9EEE, 0xEEEE00, 0xEEEE4F, 0xEEEE9E, 0xEEEEEE, 0xEE0000, 
	0xFF0000, 0xFF0055, 0xFF00AA, 0xFF00FF, 0xFF5500, 0xFF5555, 0xFF55AA, 0xFF55FF, 
	0xFFAA00, 0xFFAA55, 0xFFAAAA, 0xFFAAFF, 0xFFFF00, 0xFFFF55, 0xFFFFAA, 0xFFFFFF, 
};

uchar closestrgb[16*16*16] = {
	0,17,17,1,1,18,35,52,2,19,36,53,3,20,37,54,
	17,17,17,1,1,18,35,52,2,19,36,53,3,20,37,54,
	17,17,34,5,5,5,35,6,6,6,23,7,7,7,24,41,
	4,4,5,5,5,5,6,6,6,6,23,7,7,7,24,41,
	4,4,5,5,5,22,22,6,6,23,40,40,7,24,41,41,
	21,21,5,5,22,22,39,39,6,23,40,57,57,24,41,58,
	38,38,38,9,22,39,39,56,56,40,40,57,57,57,41,58,
	55,55,9,9,9,39,56,56,10,10,57,11,11,11,28,58,
	8,8,9,9,9,9,56,10,10,10,27,11,11,11,28,45,
	25,25,9,9,26,26,43,10,10,27,27,44,11,28,45,45,
	42,42,26,26,43,43,43,60,27,27,44,44,61,28,45,62,
	59,59,13,13,43,60,60,14,14,44,44,61,61,15,45,62,
	12,12,13,13,13,60,60,14,14,14,61,61,15,15,16,62,
	29,29,13,13,30,30,60,14,14,31,31,15,15,16,16,33,
	46,46,30,30,47,47,47,31,31,32,32,32,16,16,33,33,
	63,63,47,47,47,48,48,48,32,32,49,49,49,33,33,50,
	17,17,17,1,1,18,35,52,2,19,36,53,3,20,37,54,
	17,17,34,34,1,18,35,52,2,19,36,53,3,20,37,54,
	17,34,34,34,51,5,35,6,6,6,23,7,7,7,24,41,
	4,34,34,51,5,5,6,6,6,6,23,7,7,7,24,41,
	4,4,51,5,5,22,22,6,6,23,40,40,7,24,41,41,
	21,21,5,5,22,22,39,39,6,23,40,57,57,24,41,58,
	38,38,38,9,22,39,39,56,56,40,40,57,57,57,41,58,
	55,55,9,9,9,39,56,56,10,10,57,11,11,11,28,58,
	8,8,9,9,9,9,56,10,10,10,27,11,11,11,28,45,
	25,25,9,9,26,26,43,10,10,27,27,44,11,28,45,45,
	42,42,26,26,43,43,43,60,27,27,44,44,61,28,45,62,
	59,59,13,13,43,60,60,14,14,44,44,61,61,15,45,62,
	12,12,13,13,13,60,60,14,14,14,61,61,15,15,16,62,
	29,29,13,13,30,30,60,14,14,31,31,15,15,16,16,33,
	46,46,30,30,47,47,47,31,31,32,32,32,16,16,33,33,
	63,63,47,47,47,48,48,48,32,32,49,49,49,33,33,50,
	17,17,34,64,64,64,35,65,65,65,82,66,66,66,83,100,
	17,34,34,34,51,64,35,65,65,65,82,66,66,66,83,100,
	34,34,34,51,51,51,69,69,69,69,69,70,70,70,87,87,
	67,34,51,51,51,68,69,69,69,69,86,70,70,70,87,87,
	67,51,51,51,68,68,69,69,69,69,86,70,70,70,87,104,
	67,67,51,68,68,68,39,69,69,69,40,70,70,70,87,58,
	38,38,72,72,72,39,39,56,73,73,40,57,74,74,87,58,
	71,71,72,72,72,72,56,73,73,73,73,74,74,74,74,91,
	71,71,72,72,72,72,73,73,73,73,73,74,74,74,91,91,
	71,71,72,72,72,72,73,73,73,73,90,74,74,91,91,108,
	88,88,72,89,89,43,43,73,73,90,44,44,74,91,91,62,
	75,75,76,76,76,76,60,77,77,77,44,78,78,78,78,62,
	75,75,76,76,76,76,77,77,77,77,77,78,78,78,78,95,
	75,75,76,76,76,76,77,77,77,94,94,78,78,78,95,95,
	92,92,93,93,93,93,93,77,94,94,94,78,78,95,95,96,
	109,109,93,93,110,48,48,94,94,111,49,49,95,95,96,50,
	79,79,64,64,64,64,65,65,65,65,82,66,66,66,83,100,
	79,34,34,51,64,64,65,65,65,65,82,66,66,66,83,100,
	67,34,51,51,51,68,69,69,69,69,86,70,70,70,87,87,
	67,51,51,51,68,68,69,69,69,69,86,70,70,70,87,104,
	67,67,51,68,68,68,69,69,69,69,86,70,70,70,87,104,
	67,67,68,68,68,85,85,69,69,86,86,70,70,87,87,104,
	71,71,72,72,72,85,85,73,73,86,103,103,74,87,104,121,
	71,71,72,72,72,72,73,73,73,73,73,74,74,74,91,91,
	71,71,72,72,72,72,73,73,73,73,90,74,74,74,91,108,
	71,71,72,72,72,89,89,73,73,90,90,74,74,91,91,108,
	88,88,89,89,89,89,106,73,90,90,107,107,91,91,108,108,
	75,75,76,76,76,76,106,77,77,77,107,78,78,78,108,125,
	75,75,76,76,76,76,77,77,77,77,94,78,78,78,95,95,
	75,75,76,76,76,93,93,77,77,94,94,78,78,95,95,95,
	92,92,93,93,93,93,110,94,94,94,111,111,95,95,95,96,
	109,109,93,110,110,110,127,94,111,111,111,112,95,95,96,96,
	79,79,64,64,64,81,81,65,65,82,99,99,66,83,100,100,
	79,79,51,64,64,81,81,65,65,82,99,99,66,83,100,100,
	67,51,51,51,68,68,69,69,69,69,86,70,70,70,87,104,
	67,67,51,68,68,68,69,69,69,69,86,70,70,70,87,104,
	67,67,68,68,68,85,85,69,69,86,86,70,70,87,87,104,
	84,84,68,68,85,85,85,69,69,86,103,103,70,87,104,121,
	84,84,72,72,85,85,85,102,73,86,103,120,120,87,104,121,
	71,71,72,72,72,72,102,73,73,73,73,74,74,74,91,121,
	71,71,72,72,72,72,73,73,73,73,90,74,74,91,91,108,
	88,88,72,72,89,89,89,73,73,90,90,74,74,91,108,108,
	105,105,89,89,89,106,106,73,90,90,107,107,91,91,108,125,
	105,105,76,76,76,106,123,77,77,77,107,124,78,78,108,125,
	75,75,76,76,76,76,123,77,77,77,94,78,78,78,95,125,
	92,92,76,76,93,93,93,77,94,94,94,78,78,95,95,96,
	109,109,93,93,93,110,110,94,94,111,111,111,95,95,96,96,
	109,109,110,110,110,127,127,127,111,111,112,112,112,96,96,96,
	80,80,64,64,81,81,98,98,65,82,99,116,116,83,100,117,
	80,80,64,64,81,81,98,98,65,82,99,116,116,83,100,117,
	67,67,51,68,68,68,98,69,69,69,99,70,70,70,87,117,
	67,67,68,68,68,85,85,69,69,86,86,70,70,87,87,104,
	84,84,68,68,85,85,85,69,69,86,103,103,70,87,104,121,
	84,84,68,85,85,85,85,102,86,86,103,120,120,87,104,121,
	101,101,101,85,85,85,102,102,86,103,103,120,120,120,104,121,
	101,101,72,72,72,102,102,102,73,73,120,120,74,74,91,121,
	71,71,72,72,72,89,89,73,73,90,90,74,74,91,91,108,
	88,88,72,89,89,89,106,73,90,90,107,107,74,91,108,108,
	105,105,105,89,106,106,106,123,90,107,107,107,124,108,108,125,
	122,122,76,76,106,123,123,123,77,107,107,124,124,124,125,125,
	122,122,76,76,76,123,123,77,77,77,124,124,124,78,95,125,
	92,92,76,93,93,93,123,77,94,94,111,124,78,95,95,96,
	109,109,93,93,110,110,110,94,94,111,111,112,95,95,96,96,
	126,126,126,110,127,127,127,127,111,111,112,112,112,96,96,113,
	97,97,97,143,81,98,98,115,115,99,99,116,116,116,100,117,
	97,97,97,143,81,98,98,115,115,99,99,116,116,116,100,117,
	97,97,131,131,131,98,98,115,132,132,99,116,133,133,87,117,
	130,130,131,131,131,85,85,132,132,86,103,103,133,87,104,121,
	84,84,131,131,85,85,85,102,132,86,103,120,120,87,104,121,
	101,101,101,85,85,85,102,102,86,103,103,120,120,120,104,121,
	101,101,101,85,85,102,102,102,119,103,120,120,120,120,121,121,
	118,118,118,135,102,102,102,119,119,119,120,120,120,137,91,121,
	118,118,135,135,135,89,119,119,119,90,90,137,137,91,108,108,
	105,105,135,89,89,106,106,119,90,90,107,107,137,91,108,125,
	105,105,105,106,106,106,123,123,90,107,107,124,124,108,108,125,
	122,122,122,106,123,123,123,123,140,107,124,124,124,124,125,125,
	122,122,139,139,123,123,123,123,140,140,124,124,124,124,95,125,
	122,122,139,93,93,123,123,140,94,94,111,124,124,95,95,96,
	109,109,93,110,110,110,127,94,111,111,111,112,95,95,96,96,
	126,126,126,127,127,127,127,127,111,112,112,112,112,96,96,113,
	114,114,143,143,143,98,115,115,128,128,116,129,129,129,146,117,
	114,114,143,143,143,98,115,115,128,128,116,129,129,129,146,117,
	130,130,131,131,131,131,115,132,132,132,132,133,133,133,133,150,
	130,130,131,131,131,131,132,132,132,132,132,133,133,133,150,150,
	130,130,131,131,131,131,102,132,132,132,132,133,133,133,150,121,
	101,101,131,131,131,102,102,102,132,132,120,120,133,133,150,121,
	118,118,118,135,102,102,102,119,119,119,120,120,120,137,150,121,
	118,118,135,135,135,102,119,119,119,136,136,137,137,137,137,154,
	134,134,135,135,135,135,119,119,136,136,136,137,137,137,154,154,
	134,134,135,135,135,135,119,136,136,136,153,137,137,137,154,154,
	122,122,135,135,135,123,123,136,136,153,107,124,124,154,154,125,
	138,138,139,139,139,123,123,140,140,140,124,124,141,141,141,125,
	138,138,139,139,139,139,123,140,140,140,124,141,141,141,141,158,
	138,138,139,139,139,139,140,140,140,140,157,141,141,141,158,158,
	155,155,139,156,156,156,156,140,157,157,157,141,141,158,158,158,
	126,126,156,156,127,127,127,157,157,157,112,112,158,158,158,113,
	142,142,143,143,143,143,115,128,128,128,145,129,129,129,146,163,
	142,142,143,143,143,143,115,128,128,128,145,129,129,129,146,163,
	130,130,131,131,131,131,132,132,132,132,132,133,133,133,150,150,
	130,130,131,131,131,131,132,132,132,132,149,133,133,133,150,167,
	130,130,131,131,131,131,132,132,132,132,149,133,133,150,150,167,
	130,130,131,131,131,148,148,132,132,149,149,133,133,150,150,167,
	118,118,135,135,135,148,119,119,119,149,149,137,137,150,167,167,
	134,134,135,135,135,135,119,119,136,136,136,137,137,137,154,154,
	134,134,135,135,135,135,119,136,136,136,153,137,137,137,154,154,
	134,134,135,135,135,152,152,136,136,153,153,137,137,154,154,171,
	151,151,135,152,152,152,152,136,153,153,153,170,154,154,171,171,
	138,138,139,139,139,139,140,140,140,140,170,141,141,141,141,171,
	138,138,139,139,139,139,140,140,140,140,157,141,141,141,158,158,
	138,138,139,139,156,156,156,140,140,157,157,141,141,158,158,158,
	155,155,156,156,156,156,173,157,157,157,174,141,158,158,158,175,
	172,172,156,173,173,173,173,157,157,174,174,174,158,158,175,175,
	159,159,143,143,144,144,161,128,128,145,145,162,129,146,163,163,
	159,159,143,143,144,144,161,128,128,145,145,162,129,146,163,163,
	130,130,131,131,131,131,132,132,132,132,149,133,133,150,150,167,
	130,130,131,131,131,148,148,132,132,149,149,133,133,150,150,167,
	147,147,131,131,148,148,148,132,132,149,149,133,133,150,167,167,
	147,147,131,148,148,148,165,132,149,149,166,166,133,150,167,167,
	164,164,135,148,148,165,165,119,149,149,166,166,137,150,167,184,
	134,134,135,135,135,135,119,136,136,136,153,137,137,137,154,154,
	134,134,135,135,135,152,152,136,136,153,153,137,137,154,154,171,
	151,151,135,152,152,152,152,136,153,153,153,170,154,154,171,171,
	151,151,152,152,152,169,169,153,153,153,170,170,154,154,171,171,
	168,168,139,139,139,169,169,140,140,170,170,170,141,141,171,188,
	138,138,139,139,139,139,140,140,140,157,157,141,141,141,158,158,
	155,155,156,156,156,156,156,140,157,157,157,141,141,158,158,175,
	172,172,156,156,173,173,173,157,157,174,174,174,158,158,175,175,
	172,172,173,173,173,173,190,157,174,174,174,191,158,175,175,175,
	160,160,144,144,161,161,161,178,145,145,162,162,179,146,163,180,
	160,160,144,144,161,161,161,178,145,145,162,162,179,146,163,180,
	147,147,131,148,148,161,161,132,132,149,162,162,133,150,150,180,
	147,147,148,148,148,148,165,132,149,149,166,166,150,150,167,167,
	164,164,148,148,148,165,165,132,149,149,166,166,150,150,167,184,
	164,164,164,148,165,165,165,182,149,166,166,166,183,167,167,184,
	164,164,164,165,165,165,182,182,149,166,166,183,183,167,167,184,
	181,181,135,135,135,182,182,136,136,153,166,183,183,154,154,184,
	151,151,135,152,152,152,152,136,153,153,153,170,154,154,171,171,
	151,151,152,152,152,169,169,153,153,153,170,170,154,154,171,171,
	168,168,168,169,169,169,169,169,153,170,170,170,187,171,171,188,
	168,168,168,169,169,169,186,186,170,170,170,187,187,187,188,188,
	185,185,139,156,156,186,186,186,157,157,187,187,187,158,158,188,
	155,155,156,156,156,173,173,157,157,157,174,187,158,158,158,175,
	172,172,156,173,173,173,173,157,174,174,174,191,158,158,175,175,
	189,189,189,173,190,190,190,190,174,174,191,191,191,175,175,176,
	177,177,206,206,161,178,178,207,207,162,162,179,179,192,163,180,
	177,177,206,206,161,178,178,207,207,162,162,179,179,192,163,180,
	193,193,194,194,194,194,178,195,195,195,162,196,196,196,196,180,
	193,193,194,194,194,194,165,195,195,195,166,196,196,196,167,184,
	164,164,194,194,194,165,182,195,195,195,166,183,196,196,167,184,
	181,181,194,194,165,182,182,182,195,166,166,183,183,183,184,184,
	181,181,181,165,182,182,182,182,199,166,183,183,183,183,184,184,
	197,197,198,198,198,182,182,199,199,199,183,183,200,200,200,184,
	197,197,198,198,198,198,199,199,199,199,170,200,200,200,200,171,
	168,168,198,198,198,169,169,199,199,170,170,170,200,200,171,188,
	168,168,168,169,169,169,186,186,170,170,170,187,187,187,188,188,
	185,185,202,202,186,186,186,186,203,170,187,187,187,187,188,188,
	185,185,202,202,202,186,186,203,203,203,187,187,187,204,204,188,
	201,201,202,202,202,186,186,203,203,203,187,187,204,204,175,175,
	172,172,202,173,173,190,190,203,203,174,191,191,204,175,175,176,
	189,189,189,190,190,190,190,190,174,191,191,191,191,175,176,176,
	205,205,206,206,206,178,178,207,207,207,179,179,192,192,209,180,
	205,205,206,206,206,178,178,207,207,207,179,179,192,192,209,180,
	193,193,194,194,194,194,195,195,195,195,195,196,196,196,196,213,
	193,193,194,194,194,194,195,195,195,195,212,196,196,196,213,213,
	193,193,194,194,194,194,182,195,195,195,212,196,196,196,213,184,
	181,181,194,194,194,182,182,195,195,195,183,183,183,196,213,184,
	181,181,198,198,182,182,182,182,199,199,183,183,183,183,213,184,
	197,197,198,198,198,198,182,199,199,199,183,200,200,200,200,217,
	197,197,198,198,198,198,199,199,199,199,216,200,200,200,217,217,
	197,197,198,198,198,198,199,199,199,216,216,200,200,200,217,217,
	185,185,198,215,215,186,186,186,216,216,187,187,187,217,217,188,
	185,185,202,202,202,186,186,203,203,203,187,187,187,204,204,188,
	201,201,202,202,202,186,186,203,203,203,187,187,204,204,204,221,
	201,201,202,202,202,202,186,203,203,203,220,204,204,204,221,221,
	218,218,202,219,219,219,219,203,220,220,220,204,204,221,221,221,
	189,189,219,219,190,190,190,220,220,220,191,191,221,221,221,176,
	222,222,206,206,223,223,178,207,207,208,208,192,192,209,209,226,
	222,222,206,206,223,223,178,207,207,208,208,192,192,209,209,226,
	193,193,194,194,194,194,195,195,195,212,212,196,196,196,213,213,
	193,193,194,194,194,211,211,195,195,212,212,196,196,213,213,213,
	210,210,194,194,211,211,211,195,212,212,212,196,196,213,213,230,
	210,210,194,211,211,211,182,195,212,212,229,183,196,213,213,230,
	181,181,198,211,211,182,182,199,212,212,229,183,183,213,213,230,
	197,197,198,198,198,198,199,199,199,199,216,200,200,200,217,217,
	197,197,198,198,215,215,215,199,199,216,216,200,200,217,217,217,
	214,214,215,215,215,215,215,199,216,216,216,200,200,217,217,234,
	214,214,215,215,215,232,232,216,216,216,233,187,217,217,217,234,
	201,201,202,202,202,186,186,203,203,203,187,187,204,204,234,234,
	201,201,202,202,202,202,186,203,203,203,220,204,204,204,221,221,
	218,218,202,219,219,219,219,203,220,220,220,204,204,221,221,221,
	218,218,219,219,219,219,219,220,220,220,220,237,221,221,221,238,
	235,235,219,219,236,236,236,220,220,237,237,237,221,221,238,238,
	239,239,223,223,224,224,224,208,208,225,225,225,209,209,226,226,
	239,239,223,223,224,224,224,208,208,225,225,225,209,209,226,226,
	210,210,211,211,211,211,211,195,212,212,212,196,196,213,213,230,
	210,210,211,211,211,211,228,212,212,212,229,229,213,213,213,230,
	227,227,211,211,211,228,228,212,212,229,229,229,213,213,230,230,
	227,227,211,211,228,228,228,212,212,229,229,246,213,213,230,230,
	227,227,211,228,228,228,245,212,229,229,229,246,213,213,230,230,
	214,214,198,215,215,215,215,199,216,216,216,200,200,217,217,217,
	214,214,215,215,215,215,232,216,216,216,233,200,217,217,217,234,
	231,231,215,215,232,232,232,216,216,233,233,233,217,217,234,234,
	231,231,215,232,232,232,232,216,233,233,233,250,217,217,234,234,
	231,231,202,232,232,249,249,203,203,233,250,250,204,234,234,251,
	218,218,202,219,219,219,219,203,220,220,220,204,204,221,221,221,
	218,218,219,219,219,219,219,220,220,220,220,237,221,221,221,238,
	235,235,219,219,236,236,236,220,220,237,237,237,221,221,238,238,
	235,235,236,236,236,236,236,220,237,237,237,254,221,238,238,238,
	240,240,224,224,224,241,241,241,225,225,242,242,242,226,226,243,
	240,240,224,224,224,241,241,241,225,225,242,242,242,226,226,243,
	227,227,211,211,228,241,241,212,212,229,242,242,213,213,230,243,
	227,227,211,228,228,228,245,212,229,229,229,246,213,213,230,230,
	227,227,228,228,228,245,245,245,229,229,246,246,246,230,230,230,
	244,244,244,228,245,245,245,245,229,229,246,246,246,230,230,247,
	244,244,244,245,245,245,245,245,229,246,246,246,246,230,230,247,
	244,244,215,215,245,245,245,216,216,216,246,246,217,217,217,247,
	231,231,215,232,232,232,232,216,216,233,233,233,217,217,234,234,
	231,231,232,232,232,232,249,216,233,233,233,250,217,234,234,234,
	248,248,248,232,249,249,249,249,233,233,250,250,250,234,234,251,
	248,248,248,249,249,249,249,249,233,250,250,250,250,234,251,251,
	248,248,219,219,249,249,249,220,220,220,250,250,221,221,221,251,
	235,235,219,219,236,236,236,220,220,237,237,237,221,221,238,238,
	235,235,236,236,236,236,236,220,237,237,237,254,221,238,238,238,
	252,252,252,236,236,253,253,253,237,237,254,254,254,238,238,255,
};
