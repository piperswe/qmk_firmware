/* Copyright 2020-2021 SergioPoverony
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

/* key matrix size pins */
#define MATRIX_ROWS 1
#define MATRIX_COLS 9
#define DIRECT_PINS {   \
    { D1, D4, C6, D7, \
	                 E6, \
	  B2, B3, B1, F7  } \
}


/*led layout indication pins*/
#define RED_LED D0
#define BLUE_LED B5
#define GREEN_LED B6

/* encoder pins*/
#define ENCODERS_PAD_A { D2 }
#define ENCODERS_PAD_B { D3 }
#define ENCODER_RESOLUTION 1


