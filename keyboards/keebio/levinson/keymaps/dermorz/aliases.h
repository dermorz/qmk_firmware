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

// Letters
#define DO_A KC_A
#define DO_B KC_B
#define DO_C KC_C
#define DO_D KC_D
#define DO_E KC_E
#define DO_F KC_F
#define DO_G KC_G
#define DO_H KC_H
#define DO_I KC_I
#define DO_J KC_J
#define DO_K KC_K
#define DO_L KC_L
#define DO_M KC_M
#define DO_N KC_N
#define DO_O KC_O
#define DO_P KC_P
#define DO_Q KC_Q
#define DO_R KC_R
#define DO_S KC_S
#define DO_T KC_T
#define DO_U KC_U
#define DO_V KC_V
#define DO_W KC_W
#define DO_X KC_X
#define DO_Y KC_Z
#define DO_Z KC_Y

// Numbers
#define DO_0 KC_0
#define DO_1 KC_1
#define DO_2 KC_2
#define DO_3 KC_3
#define DO_4 KC_4
#define DO_5 KC_5
#define DO_6 KC_6
#define DO_7 KC_7
#define DO_8 KC_8
#define DO_9 KC_9

// Numbers
#define DO_F1 KC_F1
#define DO_F2 KC_F2
#define DO_F3 KC_F3
#define DO_F4 KC_F4
#define DO_F5 KC_F5
#define DO_F6 KC_F6
#define DO_F7 KC_F7
#define DO_F8 KC_F8
#define DO_F9 KC_F9
#define DO_F10 KC_F10
#define DO_F11 KC_F11
#define DO_F12 KC_F12

// interpunction
#define DO_DOT  KC_DOT  // .
#define DO_COMM KC_COMM // ,

// German letters
#define DO_SS KC_MINS   // ß
#define DO_AE KC_QUOT   // ä
#define DO_UE KC_LBRC   // ü
#define DO_OE KC_SCLN   // ö

// special characters
#define DO_CIRC KC_GRV // accent circumflex ^ and ring °
#define DO_ACUT KC_EQL  // accent acute ´ and grave `
#define DO_PLUS KC_RBRC // + and * and ~
#define DO_HASH KC_BSLS // # and '
#define DO_LESS KC_NUBS  // < and > and |
#define DO_MINS KC_SLSH // - and _

// shifted characters
#define DO_RING S(DO_CIRC) // °
#define DO_EXLM S(DO_1)    // !
#define DO_DQOT S(DO_2)    // "
#define DO_PARA S(DO_3)    // §
#define DO_DLR  S(DO_4)    // $
#define DO_PERC S(DO_5)    // %
#define DO_AMPR S(DO_6)    // &
#define DO_SLSH S(DO_7)    // /
#define DO_LPRN S(DO_8)    // (
#define DO_RPRN S(DO_9)    // )
#define DO_EQL  S(DO_0)    // =
#define DO_QST  S(DO_SS)   // ?
#define DO_GRV  S(DO_ACUT) // `
#define DO_ASTR S(DO_PLUS) // *
#define DO_QUOT S(DO_HASH) // '
#define DO_MORE S(DO_LESS) // >
#define DO_COLN S(DO_DOT)  // :
#define DO_SCLN S(DO_COMM) // ;
#define DO_UNDS S(DO_MINS) // _

// AltGr characters
#define DO_LCBR ALGR(DO_7) // {
#define DO_LBRC ALGR(DO_8) // [
#define DO_RBRC ALGR(DO_9) // ]
#define DO_RCBR ALGR(DO_0) // }
#define DO_BSLS ALGR(DO_SS) // backslash
#define DO_AT   ALGR(DO_Q) // @
#define DO_EURO ALGR(DO_E) // €
#define DO_TILD ALGR(DO_PLUS) // ~
#define DO_PIPE ALGR(DO_LESS) // |

#define DO_TAB  KC_TAB
#define DO_ESC  KC_ESC
#define DO_LSFT KC_LSFT
#define DO_LCTL KC_LCTL
#define DO_RALT KC_RALT
#define DO_LALT KC_LALT
#define DO_LGUI KC_LGUI
#define DO_RGUI KC_RGUI
#define DO_SPC  KC_SPC
#define DO_BSPC KC_BSPC
#define DO_DEL  KC_DEL
#define DO_ENT  KC_ENT
#define DO_PGUP KC_PGUP
#define DO_PGDN KC_PGDN
#define DO_PRNT KC_PSCR
#define DO_LCS  S(KC_LCTL)

#define DO_VOLU KC_VOLU
#define DO_VOLD KC_VOLD
#define DO_MUTE KC_MUTE

#define DO_LEFT KC_LEFT
#define DO_DOWN KC_DOWN
#define DO_UP   KC_UP
#define DO_RGHT KC_RIGHT

// special keycodes
#define DO_RST RESET

// mouse
#define DO_MS_U KC_MS_UP
#define DO_MS_D KC_MS_DOWN
#define DO_MS_L KC_MS_LEFT
#define DO_MS_R KC_MS_RIGHT

/* Custom keycodes */
#define DO_QWRZ QWERTZ
#define DO_LOWR LOWER
#define DO_RASE RAISE
#define DO_NUM  NUM
#define DO_ADJ  ADJUST
#define DO_SC2  SC2
#define DO_GLHF GLHF
#define DO_GG   GG
#define DO_NSPC LT(_NUM, DO_SPC)
#define DO_MSPC LT(_MOUSE, DO_SPC)
