// Keymap for GH60 Satan with pulsing LEDS
// and media keys in the HHKB layout!

#include "keymap_common.h"

#define KEYMAP_TKG( \
    K0A, K0B, K0C, K0D, K0E, K0F, K0G, K0H, K0I, K0J, K0K, K0L, K0M, K0N, \
    K1A, K1B, K1C, K1D, K1E, K1F, K1G, K1H, K1I, K1J, K1K, K1L, K1M, K1N, \
    K2A, K2B, K2C, K2D, K2E, K2F, K2G, K2H, K2I, K2J, K2K, K2L,      K2N, \
    K3A,      K3C, K3D, K3E, K3F, K3G, K3H, K3I, K3J, K3K, K3L, K3M, K3N, \
         K4B, K4C,           K4F,                K4J,      K4L, K4M  \
) { \
    { KC_##K0A, KC_##K0B, KC_##K0C, KC_##K0D, KC_##K0E, KC_##K0F, KC_##K0G, KC_##K0H, KC_##K0I, KC_##K0J, KC_##K0K, KC_##K0L, KC_##K0M, KC_##K0N }, \
    { KC_##K1A, KC_##K1B, KC_##K1C, KC_##K1D, KC_##K1E, KC_##K1F, KC_##K1G, KC_##K1H, KC_##K1I, KC_##K1J, KC_##K1K, KC_##K1L, KC_##K1M, KC_##K1N }, \
    { KC_##K2A, KC_##K2B, KC_##K2C, KC_##K2D, KC_##K2E, KC_##K2F, KC_##K2G, KC_##K2H, KC_##K2I, KC_##K2J, KC_##K2K, KC_##K2L, KC_NO,    KC_##K2N }, \
    { KC_##K3A, KC_NO,    KC_##K3C, KC_##K3D, KC_##K3E, KC_##K3F, KC_##K3G, KC_##K3H, KC_##K3I, KC_##K3J, KC_##K3K, KC_##K3L, KC_##K3M, KC_##K3N }, \
    { KC_NO,    KC_##K4B, KC_##K4C, KC_NO,    KC_NO,    KC_##K4F, KC_NO,    KC_NO,    KC_NO,    KC_##K4J, KC_NO,    KC_##K4L, KC_##K4M, KC_NO    }  \
}

#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    [0] = KEYMAP_TKG(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,DEL,  \
        LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,  \
        LSFT,     Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,FN0, RSFT, \
             LALT,LGUI,          SPC,                GRV,      RGUI,RALT),
    [1] = KEYMAP_TKG(
        PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS,  \
        CAPS,Q,   W,   E,   R,   MPRV,MPLY,MNXT,PSCR,SLCK,PAUS,UP,  RBRC,BSPC, \
        LCTL,VOLD,VOLU,MUTE,EJCT,EQL, PAST,PSLS,HOME,PGUP,LEFT,RGHT,     ENT,  \
        LSFT,     FN1, FN3, FN4, FN5, FN6, PPLS,PMNS,END, PGDN,DOWN,TRNS,RSFT, \
             LALT,LGUI,          SPC,                DEL,      MSTP,RALT),
};

#ifdef KEYMAP_SECTION_ENABLE
const uint16_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const uint16_t fn_actions[] PROGMEM = {
#endif
    [0] = ACTION_LAYER_TOGGLE(1),
    [1] = ACTION_NO(),
    [3] = ACTION_KEY(KC_APPLICATION),
    [4] = ACTION_BACKLIGHT_DECREASE(),
    [5] = ACTION_BACKLIGHT_TOGGLE(),
    [6] = ACTION_BACKLIGHT_INCREASE(),
};
