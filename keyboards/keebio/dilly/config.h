#pragma once


/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 5

/* key matrix pins */
#define MATRIX_ROW_PINS { D7, E6, B4, B1, B3, B2 }
#define MATRIX_COL_PINS { D2, D4, C6, F6, F5 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define BACKLIGHT_PIN B5
#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 3
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#ifdef RGB_DI_PIN
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
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif
#define RGB_DI_PIN D3

#define RGBLED_NUM 10
