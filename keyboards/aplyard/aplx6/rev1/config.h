/*
Copyright 2020 April Aplyard <alex.fragiou@gmail.com>

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
#define MATRIX_ROWS 2
#define MATRIX_COLS 3

/* pin-out */
#define MATRIX_ROW_PINS { E6, B3 }
#define MATRIX_COL_PINS { F7, B6, F4 }


/* ws2812 RGB LED */
//#define RGB_DI_PIN X

//#define RGBLED_NUM X    // Number of LEDs


/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW
