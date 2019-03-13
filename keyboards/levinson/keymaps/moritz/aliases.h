#include "keymap_german_osx.h"
#define _______ KC_TRNS
#define DO_ KC_TRNS

// Used to create a keymap using only DO_ prefixed keys
#define LAYOUT_do( \
    L00, L01, L02, L03, L04, L05, R00, R01, R02, R03, R04, R05, \
    L10, L11, L12, L13, L14, L15, R10, R11, R12, R13, R14, R15, \
    L20, L21, L22, L23, L24, L25, R20, R21, R22, R23, R24, R25, \
    L30, L31, L32, L33, L34, L35, R30, R31, R32, R33, R34, R35 \
    ) \
    LAYOUT( \
        DO_##L00, DO_##L01, DO_##L02, DO_##L03, DO_##L04, DO_##L05, DO_##R00, DO_##R01, DO_##R02, DO_##R03, DO_##R04, DO_##R05, \
        DO_##L10, DO_##L11, DO_##L12, DO_##L13, DO_##L14, DO_##L15, DO_##R10, DO_##R11, DO_##R12, DO_##R13, DO_##R14, DO_##R15, \
        DO_##L20, DO_##L21, DO_##L22, DO_##L23, DO_##L24, DO_##L25, DO_##R20, DO_##R21, DO_##R22, DO_##R23, DO_##R24, DO_##R25, \
        DO_##L30, DO_##L31, DO_##L32, DO_##L33, DO_##L34, DO_##L35, DO_##R30, DO_##R31, DO_##R32, DO_##R33, DO_##R34, DO_##R35 \
    )

/* Redefinitions for LAYOUT_do */
#define DO_TAB KC_TAB
#define DO_ESC KC_ESC
#define DO_LSFT KC_LSFT
#define DO_LCTL KC_LCTL
#define DO_LALT KC_LALT
#define DO_LGUI KC_LGUI
#define DO_RGUI KC_RGUI
#define DO_SPC KC_SPC
#define DO_BSPC KC_BSPC
#define DO_DEL KC_DEL
#define DO_ENT KC_ENT

#define DO_VOLU KC_VOLU
#define DO_VOLD KC_VOLD
#define DO_MUTE KC_MUTE

#define DO_LEFT KC_LEFT
#define DO_DOWN KC_DOWN
#define DO_UP KC_UP
#define DO_RGHT KC_RIGHT


#define DO_SHOT LSFT(LGUI(LCTL(KC_4)))
#define DO_SSVR HYPR(KC_S)
#define DO_SSSH TD(TD_SCREENSHOT_SCREENSAVER)
#define DO_LOWR LOWER
#define DO_RASE RAISE
#define DO_NUM  NUM
#define DO_NSPC LT(_NUM, DO_SPC)

/* Lighting */
#define DO_BL_S BL_STEP
#define DO_BL_T BL_TOGG
#define DO_RMOD RGB_MOD

#define DO_KITT RGB_MODE_KNIGHT
#define DO_DSCO RGB_MODE_DISCO
#define DO_CYCL RGB_MOD
#define DO_RGB RGB_TOG
