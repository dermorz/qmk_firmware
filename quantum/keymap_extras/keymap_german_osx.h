/* Copyright 2016 Stephen Bösebeck
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
#ifndef KEYMAP_GERMAN_OSX
#define KEYMAP_GERMAN_OSX

#include "keymap.h"

// Alt gr

// normal characters
#define DO_Z KC_Y
#define DO_Y KC_Z

#define DO_A KC_A
#define DO_B KC_B
#define DO_C KC_C
#define DO_D KC_D
#define DO_E KC_E
#define DO_F KC_F
#define DO_G KC_G
#define DO_H KC_H
#define DO_I KC_I
#define DO_J KC_J
#define DO_K KC_K
#define DO_L KC_L
#define DO_M KC_M
#define DO_N KC_N
#define DO_O KC_O
#define DO_P KC_P
#define DO_Q KC_Q
#define DO_R KC_R
#define DO_S KC_S
#define DO_T KC_T
#define DO_U KC_U
#define DO_V KC_V
#define DO_W KC_W
#define DO_X KC_X

#define DO_0 KC_0
#define DO_1 KC_1
#define DO_2 KC_2
#define DO_3 KC_3
#define DO_4 KC_4
#define DO_5 KC_5
#define DO_6 KC_6
#define DO_7 KC_7
#define DO_8 KC_8
#define DO_9 KC_9

#define DO_DOT KC_DOT
#define DO_COMM KC_COMM

#define DO_SS KC_MINS
#define DO_AE KC_QUOT
#define DO_UE KC_LBRC
#define DO_OE KC_SCLN

#define DO_CIRC KC_NUBS // accent circumflex ^ and ring °
#define DO_ACUT KC_EQL // accent acute ´ and grave `
#define DO_PLUS KC_RBRC // + and * and ~
#define DO_HASH KC_BSLS // # and '
#define DO_LESS KC_GRV // < and > and |
#define DO_MINS KC_SLSH // - and _

// shifted characters
#define DO_RING LSFT(DO_CIRC) // °
#define DO_EXLM LSFT(KC_1) // !
#define DO_DQOT LSFT(KC_2) // "
#define DO_PARA LSFT(KC_3) // §
#define DO_DLR  LSFT(KC_4) // $
#define DO_PERC LSFT(KC_5) // %
#define DO_AMPR LSFT(KC_6) // &
#define DO_SLSH LSFT(KC_7) // /
#define DO_LPRN LSFT(KC_8) // (
#define DO_RPRN LSFT(KC_9) // )
#define DO_EQL  LSFT(KC_0) // =
#define DO_QST  LSFT(DO_SS) // ?
#define DO_GRV  LSFT(DO_ACUT) // `
#define DO_ASTR LSFT(DO_PLUS) // *
#define DO_QUOT LSFT(DO_HASH) // '
#define DO_MORE LSFT(DO_LESS) // >
#define DO_COLN LSFT(KC_DOT) // :
#define DO_SCLN LSFT(KC_COMM) // ;
#define DO_UNDS LSFT(DO_MINS) // _

// Alt-ed characters
//#define DO_SQ2 LALT(KC_2) // ²
//#define DO_SQ3 LALT(KC_3) // ³
#define DO_LCBR LALT(KC_8) // {
#define DO_LBRC LALT(KC_5) // [
#define DO_RBRC LALT(KC_6) // ]
#define DO_RCBR LALT(KC_9) // }
#define DO_BSLS LALT(LSFT(KC_7)) // backslash
#define DO_AT  LALT(DO_L) // @
#define DO_EURO LALT(KC_E) // €
#define DO_TILD LALT(DO_N) // ~
#define DO_PIPE LALT(DO_7) // |

#endif
