#ifndef MA2_H
#define MA2_H

#include "quantum.h"

#define KEYMAP( \
	                                                                                                                K0016, K0017, K0018, K0019,               \
	                                                                             K0111,                      K0115, K0116, K0117, K0118, K0119,        K0121, \
	                                                                             K0211, K0212, K0213, K0214, K0215, K0216, K0217, K0218,                      \
	                                                                             K0311, K0312, K0313, K0314, K0315, K0316, K0317, K0318,                      \
	                                                                             K0411, K0412, K0413, K0414, K0415, K0416, K0417,                             \
	                                                                             K0511, K0512, K0513, K0514, K0515, K0516, K0517, K0518,               K0521, \
	                                                                                    K0612, K0613, K0614, K0615, K0616, K0617, K0618, K0619, K0620, K0621, \
	K0700,                                                                       K0711, K0712, K0713, K0714, K0715, K0716, K0717,                      K0721, \
	                                                                                                  K0814, K0815, K0816, K0817,        K0819,        K0821, \
	K0900, K0901, K0902, K0903, K0904, K0905, K0906, K0907, K0908, K0909, K0910, K0911, K0912, K0913, K0914, K0915, K0916, K0917, K0918, K0919, K0920, K0921, \
	K1000, K1001, K1002, K1003, K1004, K1005, K1006, K1007, K1008, K1009, K1010, K1011, K1012,        K1014,               K1017,        K1019,        K1021  \
) { \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K0016, K0017, K0018, K0019, KC_NO, KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K0111, KC_NO, KC_NO, KC_NO, K0115, K0116, K0117, K0118, K0119, KC_NO, K0121 }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K0211, K0212, K0213, K0214, K0215, K0216, K0217, K0218, KC_NO, KC_NO, KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K0311, K0312, K0313, K0314, K0315, K0316, K0317, K0318, KC_NO, KC_NO, KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K0411, K0412, K0413, K0414, K0415, K0416, K0417, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K0511, K0512, K0513, K0514, K0515, K0516, K0517, K0518, KC_NO, KC_NO, K0521 }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K0612, K0613, K0614, K0615, K0616, K0617, K0618, K0619, K0620, K0621 }, \
	{ K0700, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K0711, K0712, K0713, K0714, K0715, K0716, K0717, KC_NO, KC_NO, KC_NO, K0721 }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K0814, K0815, K0816, K0817, KC_NO, K0819, KC_NO, K0821 }, \
	{ K0900, K0901, K0902, K0903, K0904, K0905, K0906, K0907, K0908, K0909, K0910, K0911, K0912, K0913, K0914, K0915, K0916, K0917, K0918, K0919, K0920, K0921 }, \
	{ K1000, K1001, K1002, K1003, K1004, K1005, K1006, K1007, K1008, K1009, K1010, K1011, K1012, KC_NO, K1014, KC_NO, KC_NO, K1017, KC_NO, K1019, KC_NO, K1021 }  \
}

#endif
