/*
Copyright 2021 wuquestudio

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


/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 16

#define MATRIX_ROW_PINS { B0, C7, D2, F7, D1, D0 }
#define MATRIX_COL_PINS { D3, D5, D4, D6, D7, B4, B5, E6, F0, F1, F4, F5, F6, C6, B7, B3 }

#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Enable encoder */
#define ENCODERS_PAD_A { B2 }
#define ENCODERS_PAD_B { B1 }

#define ENCODERS 1

#ifdef ENCODER_RESOLUTION
    #undef ENCODER_RESOLUTION
#endif
#define ENCODER_RESOLUTION 2

// Note:  array is { col, row )
#define ENCODERS_CW_KEY  { { 3, 5 } }
#define ENCODERS_CCW_KEY { { 5, 5 } }

#define LED_CAPS_LOCK_PIN B6
#define LED_PIN_ON_STATE 0
