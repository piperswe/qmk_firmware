// Copyright 2021 Danny Nguyen (@nooges)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once


/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 4

/*
 * Keyboard Matrix Assignments
 */

#define DIRECT_PINS { \
    { E6, B6, D6, NO_PIN }, \
    { NO_PIN, NO_PIN, NO_PIN, NO_PIN } \
}
#define AUDIO_PIN C6
#ifdef AUDIO_ENABLE
#    define STARTUP_SONG SONG(STARTUP_SOUND)
#endif

#define ENCODERS_PAD_A { C7, D7 }
#define ENCODERS_PAD_B { B5, D4 }
#define ENCODERS 2
#define ENCODERS_CW_KEY  { { 1, 1 }, { 3, 1 } }
#define ENCODERS_CCW_KEY { { 0, 1 }, { 2, 1 } }

#define RGB_DI_PIN D3
#ifdef RGB_DI_PIN
#    define RGBLED_NUM 16
#    define RGBLIGHT_HUE_STEP 8
#    define RGBLIGHT_SAT_STEP 8
#    define RGBLIGHT_VAL_STEP 8
#    define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
#    define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
#    define RGBLIGHT_EFFECT_BREATHING
#    define RGBLIGHT_EFFECT_RAINBOW_MOOD
#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#    define RGBLIGHT_EFFECT_SNAKE
#    define RGBLIGHT_EFFECT_KNIGHT
#    define RGBLIGHT_EFFECT_CHRISTMAS
#    define RGBLIGHT_EFFECT_STATIC_GRADIENT
#    define RGBLIGHT_EFFECT_RGB_TEST
#    define RGBLIGHT_EFFECT_ALTERNATING
#endif
#define RGBLIGHT_DEFAULT_MODE (RGBLIGHT_MODE_RAINBOW_SWIRL + 2)

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* define if matrix has ghost (lacks anti-ghosting diodes) */
//#define MATRIX_HAS_GHOST

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* If defined, GRAVE_ESC will always act as ESC when CTRL is held.
 * This is useful for the Windows task manager shortcut (ctrl+shift+esc).
 */
//#define GRAVE_ESC_CTRL_OVERRIDE

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/* Bootmagic Lite key configuration */
//#define BOOTMAGIC_LITE_ROW 0
//#define BOOTMAGIC_LITE_COLUMN 0
