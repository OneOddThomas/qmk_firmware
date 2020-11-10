#include "../../ma2.h"
#include <print.h>


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		LCTL(KC_F12), KC_F12, LCTL(LALT(KC_B)), LCTL(LALT(KC_H)), 
		LCTL(LALT(KC_E)), KC_B, LALT(KC_F), LCTL(LALT(KC_P)), LALT(KC_A), LCTL(KC_A), KC_NO, 
		LALT(KC_F1), LCTL(LALT(KC_F)), LCTL(KC_S), KC_O, KC_V, LALT(KC_E), LALT(KC_G), LCTL(KC_D), 
		LALT(KC_F2), LCTL(LALT(KC_T)), LALT(KC_T), LCTL(KC_O), LALT(KC_P), KC_M, KC_P, LCTL(KC_C), 
		LALT(KC_F3), LALT(KC_LABK), LCTL(KC_L), LCTL(LALT(KC_LABK)), LALT(KC_S), LALT(KC_C), KC_X, 
		LALT(KC_F4), KC_LABK, LCTL(KC_P), LCTL(KC_LABK), KC_C, KC_F, KC_G, LCTL(KC_M), LALT(KC_PGUP), 
		LCTL(KC_T), KC_ESC, KC_7, KC_8, KC_9, KC_PLUS, LCTL(KC_F), KC_H, LCTL(LALT(KC_S)), LALT(KC_PGDN), 
		LALT(KC_SPC), LCTL(KC_U), KC_E, KC_BSPC, KC_4, KC_5, KC_6, KC_T, KC_PGUP, 
		KC_1, KC_2, KC_3, KC_MINS, KC_UP, KC_PGDN, 
		LCTL(KC_SPC), KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, LALT(KC_U), KC_U, KC_DEL, KC_0, KC_DOT, KC_I, KC_A, KC_MPRV, KC_END, KC_MNXT, LCTL(KC_PGUP), 
		KC_SPC, LCTL(KC_F1), LCTL(KC_F1), LCTL(KC_F3), LCTL(KC_F4), LCTL(KC_F5), LCTL(KC_F6), LCTL(KC_F7), LCTL(KC_F8), LCTL(KC_F9), LCTL(KC_F10), KC_L, KC_S, KC_LSFT, KC_ENT, KC_DOWN, LCTL(KC_PGDN)),

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // If console is enabled, it will print the matrix position and status of each key pressed
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: %u, col: %u, row: %u, pressed: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed);
#endif
  return true;
}
