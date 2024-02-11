#pragma once

/* Onboard LEDs  */
#define LED_00 B6
#define LED_01 B1
#define LED_02 B3

// #define ENCODER_MAP_ENABLE
// #define ENCODERS_PAD_A { F5 }
// #define ENCODERS_PAD_B { F4 }

/* Single rotary encoder */
#define ENCODERS_PAD_A { F5 }
#define ENCODERS_PAD_B { F4 }
// #define ENCODER_DIRECTION_FLIP
// #define VIAL_ENCODER_DEFAULT { KC_VOLD, KC_VOLU, KC_TRNS, KC_TRNS, KC_LEFT, KC_RGHT, KC_DOWN, KC_UP }ddd

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
