/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

#pragma once

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_TERM 175

#define COMBO_COUNT 1
#define COMBO_MUST_HOLD_MODS
#define COMBO_TERM 300

#define RATE(kc) LCTL(LSFT((KC_1 + kc - 1)))

// enable local auto-completion
#ifndef QMK_COMPILER

// From AVR pgmspace.h
#    define PROGMEM __attribute__((__progmem__))

#    include "../../../../quantum/config_common.h"
#    include "../../../../quantum/quantum.h"
#    include "../../../../quantum/quantum_keycodes.h"
#    include "../../../../quantum/process_keycode/process_combo.h"
#    include "../../r2g/config.h"
#    include "../../config.h"
#    include "../../lily58.h"
#    include <stdio.h>
#    include <stdint.h>

// #    define TAP_DANCE_ENABLE
#    ifdef TAP_DANCE_ENABLE
#        include "../../../../quantum/process_keycode/process_tap_dance.h"
#    endif
#endif

#undef RGBLED_NUM
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_RGB_TEST
#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_TWINKLE
#define RGBLED_NUM 27
#define RGBLIGHT_LIMIT_VAL 120
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 17

// Underglow
/*
#undef RGBLED_NUM
#define RGBLED_NUM 14    // Number of LEDs
#define RGBLIGHT_SLEEP
*/
