#pragma once


#define KEYBOARD_PCB_REV 11

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 23

/* key matrix pins */
#if KEYBOARD_PCB_REV == 10
#define MATRIX_ROW_PINS { D2, D3, D4, D5, D6, D7 }
#else
#define MATRIX_ROW_PINS { D2, D3, D4, D5, E6, D7 }
#endif
#define MATRIX_COL_PINS { F0, F1, F2, F3, F4, F5, F6, F7, C7, C6, C5, C4, C3, C2, C1, C0, B0, B1, B2, B3, B4, B5, B6 }

#define LED_NUM_LOCK_PIN E0
#define LED_CAPS_LOCK_PIN E1
#define LED_SCROLL_LOCK_PIN B7

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* force n-key rollover*/
#define FORCE_NKRO

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
#define RGBLED_NUM 0
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif

#define DYNAMIC_MACRO_COUNT 12
#define DYNAMIC_MACRO_SIZE 48
#define DYNAMIC_MACRO_EEPROM_STORAGE
#define DYNAMIC_MACRO_EEPROM_MAGIC_ADDR (uint16_t*)32
#define DYNAMIC_MACRO_EEPROM_BLOCK0_ADDR (uint8_t*)34
