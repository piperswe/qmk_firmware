/* Copyright 2021 Densus Design and Basekeys.jp
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
#define MATRIX_ROWS 5
#define MATRIX_COLS 18

/* key matrix pins */

#define MATRIX_ROW_PINS { B7, B0, B1, B2, B3 }
#define MATRIX_COL_PINS { E6, F0, F1, F4, F5, F6, F7, C7, C6, B6, B5, B4, D7, D6, D4, D2, D5, D3 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

