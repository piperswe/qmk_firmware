/* Copyright 2020 Hybrid65
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
#pragma once


/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 21
#define MATRIX_ROW_PINS { A6, B13, B8, A0, A1, A2 }
#define MATRIX_COL_PINS { B7, B6, B5, B4, B3, B2, B14, B1, B15, B0, B9, B10, B11, B12, A14, A13, A4, A5, A7, A8, A15 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
