/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifdef QMK_COMPILER
#    include QMK_KEYBOARD_H
#else
#    include "config.h"
#endif

enum layers { BASE, MEDIA, NAV, MACRO, SYM, NUM, FUN };

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_split_3x6_3(
        /* |=============================================================================================================================|        |===========================================================================================================================| */
        /* |         */ KC_NO, /*        */ KC_Q, /*        */ KC_W, /*        */ KC_E, /*           */ KC_R, /*             */ KC_T, /* |        | */ KC_Y, /*           */ KC_U, /*            */ KC_I, /*        */ KC_O, /*          */ KC_P, /*           */ KC_NO, /*   | */
	/* |                                                                                                                             |        |                                                                                                                           | */
        /* |         */ KC_NO, /**/ LGUI_T(KC_A), /**/ LALT_T(KC_S), /**/ LCTL_T(KC_D), /*   */ LSFT_T(KC_F), /*             */ KC_G, /* |        | */ KC_H, /*           */ RSFT_T(KC_J), /*    */ RCTL_T(KC_K), /**/ LALT_T(KC_L), /*  */ RGUI_T(KC_SCLN), /**/ KC_QUOT, /* | */
	/* |                                                                                                                             |        |                                                                                                                           | */
        /* |         */ KC_NO, /*        */ KC_Z, /**/ RALT_T(KC_X), /*        */ KC_C, /*           */ KC_V, /*             */ KC_B, /* |        | */ KC_N, /*           */ KC_M, /*            */ KC_COMM, /*     */ RALT_T(KC_DOT), /**/ KC_SLSH, /*        */ KC_NO, /*   | */
	/* |====================================================|                                                                        |        |                                                                     |=====================================================| */
        /*                                                      | */ LT(MEDIA, KC_ESC), /**/ LT(NAV, KC_SPC), /**/ LT(MACRO, KC_TAB), /* |        | */ LT(SYM, KC_ENT), /**/ LT(NUM, KC_BSPC), /**/ LT(FUN, KC_DEL) /* | */
        /*                                                      |========================================================================|        |=====================================================================| */
        ),
    [MEDIA] = LAYOUT_split_3x6_3(
        /* |===######====================================================================================================================|        |===========================================================================================================================| */
        /* |         */ KC_NO, /*       */ KC_NO, /*       */ KC_NO, /*       */ KC_NO, /*          */ KC_NO, /*            */ KC_NO, /* |        | */ RATE(KC_1), /*     */ RATE(KC_2), /*      */ RATE(KC_3), /*  */ RATE(KC_4), /*    */ RATE(KC_5), /*     */ KC_NO, /*   | */
	/* |                                                                                                                             |        |                                                                                                                           | */
        /* |       */ KC_TRNS, /*     */ KC_TRNS, /*     */ KC_TRNS, /*     */ KC_TRNS, /*        */ KC_TRNS, /*          */ KC_TRNS, /* |        | */ KC_NO, /*          */ KC_MPRV, /*         */ KC_MPLY, /*     */ KC_MNXT, /*       */ KC_NO, /*          */ KC_NO, /*   | */
	/* |                                                                                                                             |        |                                                                                                                           | */
        /* |         */ KC_NO, /*       */ KC_NO, /*     */ KC_TRNS, /*       */ KC_NO, /*          */ KC_NO, /*            */ KC_NO, /* |        | */ KC_NO, /*          */ KC_NO, /*           */ KC_NO, /*       */ KC_NO, /*         */ KC_NO, /*          */ KC_NO, /*   | */
	/* |================================================================|                                                            |        |                                                          |================================================================|*/
        /*                                                                  | */ KC_NO, /*          */ KC_NO, /*            */ KC_NO, /* |        | */ KC_NO, /*          */ KC_NO, /*           */ KC_NO /* | */
	/*                                                                  |============================================================|        |==========================================================| */
        ),
    [NAV] = LAYOUT_split_3x6_3(
        /* |=============================================================================================================================|        |===========================================================================================================================| */
        /* |         */ KC_NO, /*       */ KC_NO, /*       */ KC_NO, /*       */ KC_NO, /*          */ KC_NO, /*            */ KC_NO, /* |        | */ KC_HOME, /*        */ KC_PGDN, /*         */ KC_PGUP, /*     */ KC_END, /*        */ KC_NO, /*          */ KC_NO, /*   | */
	/* |                                                                                                                             |        |                                                                                                                           | */
        /* |       */ KC_TRNS, /*     */ KC_TRNS, /*     */ KC_TRNS, /*     */ KC_TRNS, /*        */ KC_TRNS, /*          */ KC_TRNS, /* |        | */ KC_LEFT, /*        */ KC_DOWN, /*         */ KC_UP, /*       */ KC_RIGHT, /*      */ KC_NO, /*          */ KC_NO, /*   | */
	/* |                                                                                                                             |        |                                                                                                                           | */
        /* |         */ KC_NO, /*       */ KC_NO, /*     */ KC_TRNS, /*       */ KC_NO, /*          */ KC_NO, /*            */ KC_NO, /* |        | */ KC_NO, /*          */ KC_NO, /*           */ KC_NO, /*       */ KC_NO, /*         */ KC_NO, /*          */ KC_NO, /*   | */
	/* |================================================================|                                                            |        |                                                          |================================================================| */
        /*                                                                  | */ KC_NO, /*          */ KC_NO, /*            */ KC_NO, /* |        | */ KC_NO, /*          */ KC_NO, /*           */ KC_NO /* | */
	/*                                                                  |============================================================|        |==========================================================| */
        ),
    [MACRO] = LAYOUT_split_3x6_3(
        /* |=============================================================================================================================|        |===========================================================================================================================| */
        /* |         */ KC_NO, /*       */ KC_NO, /*       */ KC_NO, /*       */ KC_NO, /*          */ KC_NO, /*            */ KC_NO, /* |        | */ KC_NO, /*          */ KC_NO, /*           */ KC_NO, /*       */ KC_NO, /*         */ KC_NO, /*          */ KC_NO, /*   | */
	/* |                                                                                                                             |        |                                                                                                                           | */
        /* |       */ KC_TRNS, /*     */ KC_TRNS, /*     */ KC_TRNS, /*     */ KC_TRNS, /*        */ KC_TRNS, /*          */ KC_TRNS, /* |        | */ KC_NO, /*          */ KC_NO, /*           */ KC_NO, /*       */ KC_NO, /*         */ KC_NO, /*          */ KC_NO, /*   | */
	/* |                                                                                                                             |        |                                                                                                                           | */
        /* |         */ KC_NO, /*       */ KC_NO, /*     */ KC_TRNS, /*       */ KC_NO, /*          */ KC_NO, /*            */ KC_NO, /* |        | */ KC_NO, /*          */ KC_NO, /*           */ KC_NO, /*       */ KC_NO, /*         */ KC_NO, /*          */ KC_NO, /*   | */
	/* |================================================================|                                                            |        |                                                          |================================================================| */
        /*                                                                  | */ KC_NO, /*          */ KC_NO, /*            */ KC_NO, /* |        | */ KC_NO, /*          */ KC_NO, /*           */ KC_NO /* | */
	/*                                                                  |============================================================|        |==========================================================| */
        ),
    [SYM] = LAYOUT_split_3x6_3(
        /* |=============================================================================================================================|        |===========================================================================================================================| */
        /* | */ LSFT(KC_NUHS), /*     */ KC_AMPR, /*     */ KC_ASTR, /*     */ KC_LCBR, /*        */ KC_RCBR, /*          */ KC_QUOT, /* |        | */ KC_NO, /*          */ KC_NO, /*           */ KC_NO, /*       */ KC_NO, /*         */ KC_NO, /*          */ KC_NO, /*   | */
	/* |                                                                                                                             |        |                                                                                                                           | */
        /* | */ LSFT(KC_NUBS), /*     */ KC_COLN, /*      */ KC_EQL, /*     */ KC_LBRC, /*        */ KC_RBRC, /*       */ LSFT(KC_2), /* |        | */ KC_TRNS, /*        */ KC_TRNS, /*         */ KC_TRNS, /*     */ KC_TRNS, /*       */ KC_TRNS, /*        */ KC_TRNS, /* | */
	/* |                                                                                                                             |        |                                                                                                                           | */
        /* |       */ KC_NUBS, /*     */ KC_CIRC, /*     */ KC_NUHS, /*     */ KC_MINS, /*        */ KC_UNDS, /*         */ KC_GRAVE, /* |        | */ KC_NO, /*          */ KC_NO, /*           */ KC_NO, /*       */ KC_TRNS, /*       */ KC_NO, /*          */ KC_NO, /*   | */
	/* |==============================================================|                                                              |        |                                                          |================================================================| */
        /*                                                                | */ KC_LPRN, /*        */ KC_RPRN, /*          */ KC_SLSH, /* |        | */ KC_NO, /*          */ KC_NO, /*           */ KC_NO /* | */
	/*                                                                |==============================================================|        |==========================================================| */
        ),
    [NUM] = LAYOUT_split_3x6_3(
        /* |=============================================================================================================================|        |===========================================================================================================================| */
        /* |         */ KC_NO, /*     */ KC_PSLS, /*        */ KC_7, /*        */ KC_8, /*           */ KC_9, /*          */ KC_PAST, /* |        | */ KC_NO, /*          */ KC_NO, /*           */ KC_NO, /*       */ KC_NO, /*         */ KC_NO, /*          */ KC_NO, /*   | */
	/* |                                                                                                                             |        |                                                                                                                           | */
        /* |         */ KC_NO, /*     */ KC_PENT, /*        */ KC_4, /*        */ KC_5, /*           */ KC_6, /*           */ KC_EQL, /* |        | */ KC_TRNS, /*        */ KC_TRNS, /*         */ KC_TRNS, /*     */ KC_TRNS, /*       */ KC_TRNS, /*        */ KC_TRNS, /* | */
	/* |                                                                                                                             |        |                                                                                                                           | */
        /* |         */ KC_NO, /*     */ KC_PMNS, /*        */ KC_1, /*        */ KC_2, /*           */ KC_3, /*          */ KC_PPLS, /* |        | */ KC_NO, /*          */ KC_NO, /*           */ KC_NO, /*       */ KC_TRNS, /*       */ KC_NO, /*          */ KC_NO, /*   | */
	/* |===============================================================|                                                             |        |                                                          |================================================================| */
        /*                                                                 | */ KC_DOT, /*           */ KC_0, /*           */ KC_ENT, /* |        | */ KC_NO, /*          */ KC_NO, /*           */ KC_NO /* | */
	/*                                                                 |=============================================================|        |==========================================================| */
        ),
    [FUN] = LAYOUT_split_3x6_3(
        /* |=============================================================================================================================|        |===========================================================================================================================| */
        /* |         */ KC_NO, /*      */ KC_F12, /*       */ KC_F7, /*       */ KC_F8, /*          */ KC_F9, /*            */ KC_NO, /* |        | */ KC_NO, /*          */ KC_NO, /*           */ KC_NO, /*       */ KC_NO, /*         */ KC_NO, /*          */ KC_NO, /*   | */
	/* |                                                                                                                             |        |                                                                                                                           | */
        /* |         */ KC_NO, /*      */ KC_F11, /*       */ KC_F4, /*       */ KC_F5, /*          */ KC_F6, /*            */ KC_NO, /* |        | */ KC_TRNS, /*        */ KC_TRNS, /*         */ KC_TRNS, /*     */ KC_TRNS, /*       */ KC_TRNS, /*        */ KC_TRNS, /* | */
	/* |                                                                                                                             |        |                                                                                                                           | */
        /* |         */ KC_NO, /*      */ KC_F10, /*       */ KC_F1, /*       */ KC_F2, /*          */ KC_F3, /*            */ KC_NO, /* |        | */ KC_NO, /*          */ KC_NO, /*           */ KC_NO, /*       */ KC_TRNS, /*       */ KC_NO, /*          */ KC_NO, /*   | */
	/* |================================================================|                                                            |        |                                                          |================================================================| */
        /*                                                                  | */ KC_NO, /*          */ KC_NO, /*            */ KC_NO, /* |        | */ KC_NO, /*          */ KC_NO, /*           */ KC_NO /* | */
	/*                                                                  |============================================================|        |==========================================================| */
        ),
};
//clang-format on

// L_Shift + R_Shift + Enter = CAPSLOCK
const uint16_t PROGMEM shift_shift_combo[]     = {RSFT_T(KC_J), LSFT_T(KC_F), LT(SYM, KC_ENT), COMBO_END};
combo_t                key_combos[COMBO_COUNT] = {COMBO(shift_shift_combo, KC_CAPS)};

