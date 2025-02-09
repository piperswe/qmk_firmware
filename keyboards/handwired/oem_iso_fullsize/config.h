/** Copyright 2021 andresteare
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

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
#define MATRIX_ROW_PINS { C0, B4, F3, F4, F5, F6 }
#define MATRIX_COL_PINS { C2, C1, E0, D4, D5, A4, A0, B2, B0, E7, E6, D6, B1, B3, D3, D2, B6, F7, F0, F1, F2 }

/*Row 0, resistor R132, Pin A1
*Row 1, R131, Pin B5
*Row 2, R130, Pin E4
*Row 3, R129, Pin A2
*Row 4, R128, Pin E5
*Row 5, R127, Pin A7
#define LED_CAPS_LOCK_PIN C7
#define LED_SCROLL_LOCK_PIN A3
#define LED_NUM_LOCK_PIN C6
#define BACKLIGHT_PINS { B5, E5, E4, A7, A1, A2 }
#define BACKLIGHT_LEVELS 1*/

#define DIODE_DIRECTION ROW2COL


// generated by KBFirmware JSON to QMK Parser
// https://noroadsleft.github.io/kbf_qmk_converter/
