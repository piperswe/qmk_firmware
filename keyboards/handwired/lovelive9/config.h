

#pragma once

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 9

/* default pin-out */
#define MATRIX_ROW_PINS { NO_PIN }
#define MATRIX_COL_PINS { B4, B6, B2, D7, B1, F7, F6, F5, F4 }

#define DIODE_DIRECTION COL2ROW


/* ws2812 RGB LED */
#define RGB_DI_PIN D3

#define RGBLED_NUM 9    // Number of LEDs

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
#define BACKLIGHT_LEVELS 5
#define RGBLIGHT_EFFECT_SNAKE_LENGTH 4
#define BREATHING_PERIOD 2
#define RGBLIGHT_LIMIT_VAL 255
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 17
#define USB_MAX_POWER_CONSUMPTION 400

#define TAPPING_TERM 200
