/*
Copyright 2022 Yiancar-Designs

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published byß
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
#define MATRIX_COLS 15

#define MATRIX_ROW_PINS { A2, B9, B8, B5, B4 }
#define MATRIX_COL_PINS { A1, B1, B0, A7, A6, A5, A4, A3, B2, B10, B11, B12, B13, B14, B15 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Ensure we jump to bootloader if the QK_BOOT keycode was pressed */
#define EARLY_INIT_PERFORM_BOOTLOADER_JUMP TRUE

/* Indicator LEDs */
#define LED_CAPS_LOCK_PIN B6
#define LED_PIN_ON_STATE 0

/* RGB Light */
#define WS2812_PWM_DRIVER PWMD1
#define WS2812_PWM_CHANNEL 2
#define WS2812_PWM_PAL_MODE 2
#define WS2812_DMA_STREAM STM32_DMA1_STREAM5
#define WS2812_DMA_CHANNEL 5
#define WS2812_BYTE_ORDER WS2812_BYTE_ORDER_RGB

#define RGB_DI_PIN A9
#define RGBLED_NUM 37
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_RGB_TEST
#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_TWINKLE

/* define if matrix has ghost (lacks anti-ghosting diodes) */
//#define MATRIX_HAS_GHOST

/* If defined, GRAVE_ESC will always act as ESC when CTRL is held.
 * This is userful for the Windows task manager shortcut (ctrl+shift+esc).
 */
// #define GRAVE_ESC_CTRL_OVERRIDE

/* Bootmagic Lite key configuration */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0
