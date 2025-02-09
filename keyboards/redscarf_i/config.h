/*
Copyright 2019 Ben Weakley

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


/* Matrix */
#define MATRIX_ROWS 6
#define MATRIX_COLS 4
#define MATRIX_ROW_PINS { D0, D1, D2, D3, D4, D5 }
#define MATRIX_COL_PINS { F0, F1, E6, C7 }
#define DIODE_DIRECTION COL2ROW

/* Backlight */
#define BACKLIGHT_PIN B5
#define BACKLIGHT_LEVELS 3

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5