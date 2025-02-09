#pragma once


/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 3

/* key matrix pins */
#define MATRIX_ROW_PINS { C6, D4, D2, D3 }
#define MATRIX_COL_PINS { F6, F5, F4 }

#define ENCODERS_PAD_A { B3 }
#define ENCODERS_PAD_B { B2 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* ws2812 RGB LED */
#define RGB_DI_PIN F7
#define RGBLED_NUM 4    // Number of LEDs

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
#define RGBLIGHT_HUE_STEP 6
#define RGBLIGHT_SAT_STEP 4
#define RGBLIGHT_VAL_STEP 8
