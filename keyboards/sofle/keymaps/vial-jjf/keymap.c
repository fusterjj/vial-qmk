/* Copyright 2020 Josef Adamcik
 * Modification for VIA support and RGB underglow by Jens Bonk-Wiltfang
 * Modification for Vial support by Drew Petersen
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

// clang-format off

#include QMK_KEYBOARD_H

enum sofle_layers {
    _QWERTY,
    _COLEMAK,
    _SYM,
    _NAV,
    _MEDIA,
};

#include "oled.c"



// Generated from config.qmk.fm and qmk json2c
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_QWERTY] = LAYOUT(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSLS, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_BTN1, KC_NO, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LGUI, KC_LALT, KC_LCTL, MO(_SYM), KC_ENT, KC_SPC, MO(_NAV), KC_RCTL, KC_RALT, KC_RGUI),
	[_COLEMAK] = LAYOUT(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_GRV, KC_ESC, KC_Q, KC_W, KC_F, KC_P, KC_G, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_BSPC, KC_TAB, KC_A, KC_R, KC_S, KC_T, KC_D, KC_H, KC_N, KC_E, KC_I, KC_O, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_BTN1, KC_NO, KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LGUI, KC_LALT, KC_LCTL, MO(_SYM), KC_ENT, KC_SPC, MO(_NAV), KC_RCTL, KC_RALT, KC_RGUI),
	[_SYM] = LAYOUT(KC_F11, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F12, KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRNS, KC_TRNS, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE, KC_TRNS, KC_EQL, KC_MINS, KC_PLUS, KC_LCBR, KC_RCBR, KC_BTN2, KC_TRNS, KC_LBRC, KC_RBRC, KC_SCLN, KC_COLN, KC_SLSH, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(_MEDIA), KC_TRNS, KC_TRNS, KC_TRNS),
	[_NAV] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_WSTP, LCTL(KC_LEFT), KC_UP, LCTL(KC_RGHT), KC_WREF, KC_NO, KC_INS, KC_HOME, KC_PGUP, KC_NO, KC_TRNS, KC_TRNS, KC_WBAK, KC_LEFT, KC_DOWN, KC_RGHT, KC_WFWD, KC_NO, KC_DEL, KC_END, KC_PGDN, KC_NO, LCTL(KC_BSPC), KC_TRNS, LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), KC_NO, KC_BTN2, KC_TRNS, KC_NO, KC_PSCR, KC_SCRL, KC_PAUS, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(_MEDIA), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[_MEDIA] = LAYOUT(KC_SLEP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_VAI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_RMOD, RGB_VAD, RGB_MOD, KC_NO, KC_NO, KC_MPRV, KC_MPLY, KC_MNXT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_TOG, KC_NO, KC_NO, KC_MUTE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_QWERTY] = { ENCODER_CCW_CW(KC_WH_D, KC_WH_U), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [_COLEMAK] = { ENCODER_CCW_CW(KC_WH_D, KC_WH_U), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [_SYM] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [_NAV] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [_MEDIA] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
};
