/*
Copyright 2022 Stefan Sundin "4pplet" <mail@4pplet.com>

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
#define MATRIX_ROWS 5
#define MATRIX_COLS 14
// ROWS: Top to bottom, COLS: Left to right

#define MATRIX_ROW_PINS {B14,A9,B6,B5,B4}
#define MATRIX_COL_PINS {B2,A4,A3,A2,F1,F0,C15,C14,C13,B9,B8,B7,A15,B3}

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#define QMK_ESC_OUTPUT B2 // usually COL
#define QMK_ESC_INPUT B14 // usually ROW

#define RGBLED_NUM 1
#define WS2812_EXTERNAL_PULLUP
#define RGB_DI_PIN A8

#define BACKLIGHT_LEVELS 5

#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
