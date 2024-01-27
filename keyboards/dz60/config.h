#pragma once

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* VIA related config */
#define VIA_EEPROM_LAYOUT_OPTIONS_SIZE 2

// brn aguiar changes...
#define TAPPING_TERM 200 //- term delay... in MiliSeconds
//#define PERMISSIVE_HOLD // for fast typing...
#define QUICK_TAP_TERM 170 // to repeat key..
//#//--#//--#undef  PERMISSIVE_HOLD
#define HOLD_ON_OTHER_KEY_PRESS
// #define IGNORE_MOD_TAP_INTERRUPT // -- uncomment if you see lag... and try
