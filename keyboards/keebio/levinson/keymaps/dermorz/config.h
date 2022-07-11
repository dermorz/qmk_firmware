/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert
Copyright 2018 Danny Nguyen <danny@keeb.io>

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

/* Use I2C or Serial, not both */

#define USE_SERIAL
// #define USE_I2C

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define RGBLED_NUM 12

// #define RGBLIGHT_ANIMATIONS
// #define RGBLIGHT_EFFECT_KNIGHT_LED_NUM 12  // How many LEDs to travel
// #define RGBLIGHT_EFFECT_KNIGHT_LENGTH 3   // How many LEDs wide to light up

#define UNICODE_SELECTED_MODES UC_LNX

/* mouse settings */
#define MK_KINECTIC_SPEED
#define MOUSEKEY_DEPLAY 8
#define MOUSEKEY_INTERVAL 8
#define MOUSEKEY_MOVE_DELTA 25
#define MOUSEKEY_INITIAL_SPEED 100
#define MOUSEKEY_BASE_SPEED 1000
#define MOUSEKEY_DECELERATED_SPEED 400
#define MOUSEKEY_ACCELERATED_SPEED 400
#define MOUSEKEY_MAX_SPEED 3
#define MOUSEKEY_TIME_TO_MAX 50

#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD
