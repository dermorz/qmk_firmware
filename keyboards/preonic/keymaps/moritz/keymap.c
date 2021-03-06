#include "preonic.h"
#include "action_layer.h"
#include "keymap_german_osx.h"

enum preonic_layers {
  _QWERTZ,
  _LOWER,
  _RAISE,
  _NUM,
  _ADJUST
};

enum preonic_keycodes {
  QWERTZ = SAFE_RANGE,
  LOWER,
  RAISE,
  NUM,
};

#define DO_LOCK LSFT(LALT(LGUI(LCTL(DO_S))))
#define DO_SHOT LSFT(LGUI(LCTL(DO_4)))
#define DO_GRAV LSFT(DO_ACUT)

//Tap Dance Declarations
enum {
  TD_SS_LCK = 0
};

//Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
  //Tap once for screenshot, twice to Lock mac
  [TD_SS_LCK]  = ACTION_TAP_DANCE_DOUBLE(DO_SHOT, DO_LOCK)
// Other declarations would go here, separated by commas, if you have them
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTZ (mac)
 * ,-----------------------------------------------------------------------------------.
 * |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |   +  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Z  |   U  |   I  |   O  |   P  | Del  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   #  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   <  |   Y  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |  -   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  Num | Ctrl | GUI  | Alt  |Lower |Space |Sp/Num|Raise |  Alt |  GUI |   +  |SS/LCK|
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTZ] = {
  {DO_1,    DO_2,    DO_3,    DO_4,    DO_5,  DO_6,   DO_7,  DO_8,   DO_9,    DO_0,    DO_PLUS,   KC_BSPC},
  {KC_TAB,  DO_Q,    DO_W,    DO_E,    DO_R,  DO_T,   DO_Z,  DO_U,   DO_I,    DO_O,    DO_P,    KC_DEL},
  {KC_ESC,  DO_A,    DO_S,    DO_D,    DO_F,  DO_G,   DO_H,  DO_J,   DO_K,    DO_L,    DO_HASH, KC_ENT},
  {KC_LSFT, DO_LESS, DO_Y,    DO_X,    DO_C,  DO_V,   DO_B,  DO_N,   DO_M,    DO_COMM, DO_DOT,  DO_MINS },
  {NUM,     KC_LCTL, KC_LGUI, KC_LALT, LOWER, KC_SPC, LT(_NUM, KC_SPC), RAISE, KC_LALT, KC_RGUI, DO_PLUS, TD(TD_SS_LCK)}
},

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   @  |   =  |   €  |   !  |   ^  |      |   Ü  |      |   Ö  |      | Vol+ |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   Ä  |   ß  |   ?  |   .  |   :  | Left | Down |  Up  |Right |      | Vol- |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |   ,  |   ;  |      |      |      |      |      | Mute |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |   _  |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_LOWER] = {
  {KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12},
  {_______, DO_AT,   DO_EQL,  DO_EURO, DO_EXLM, DO_CIRC, _______, DO_UE,   _______, DO_OE,   _______, KC_VOLU},
  {_______, DO_AE,   DO_SS,   DO_QST,  DO_DOT,  DO_COLN, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,_______, KC_VOLD},
  {_______, _______, _______, _______, DO_COMM, DO_SCLN, _______, _______, _______, _______, _______, KC_MUTE},
  {_______, _______, _______, _______, _______, _______, DO_UNDS, _______, _______, _______, _______, _______},
},

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |   %  |   \  |      |      |   "  |   {  |   }  |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |   $  |   /  |   -  |   *  |   '  |   [  |   ]  |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |   &  |   |  |   +  |      |   `  |   (  |   )  |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_RAISE] = {
  {_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______},
  {_______, _______, DO_PERC, DO_BSLS, _______, _______, DO_DQOT, DO_LCBR, DO_RCBR, _______, _______, _______},
  {_______, _______, DO_DLR , DO_SLSH, DO_MINS, DO_ASTR, DO_QUOT, DO_LBRC, DO_RBRC, _______, _______, _______},
  {_______, _______, DO_AMPR, DO_PIPE, DO_PLUS, _______, DO_GRAV, DO_LPRN, DO_RPRN, _______, _______, _______},
  {_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______},
},

/* Num
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |   7  |   8  |   9  |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |   4  |   5  |   6  |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |   1  |   2  |   3  |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |   0  |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_NUM] = {
  {_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______},
  {_______, _______, _______, _______, _______, _______, _______, DO_7,    DO_8,    DO_9,    _______, _______},
  {_______, _______, _______, _______, _______, _______, _______, DO_4,    DO_5,    DO_6,    _______, _______},
  {_______, _______, _______, _______, _______, _______, _______, DO_1,    DO_2,    DO_3,    _______, _______},
  {_______, _______, _______, _______, _______, _______, _______, DO_0,    _______, _______, _______, _______},
},

/* Adjust (Lower + Raise)
 * ,-----------------------------------------------------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | Reset|      |      |      |      |      |      |      |      |      |  Del |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |Aud on|AudOff|AGnorm|AGswap|Qwertz|      |      |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |Voice-|Voice+|Mus on|MusOff|MidiOn|MidOff|      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] = {
  {KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12},
  {_______, RESET,   DEBUG,   _______, _______, _______, _______, TERM_ON, TERM_OFF,_______, _______, KC_DEL},
  {_______, _______, MU_MOD,  AU_ON,   AU_OFF,  AG_NORM, AG_SWAP, QWERTZ,  _______, _______,  _______, _______},
  {_______, MUV_DE,  MUV_IN,  MU_ON,   MU_OFF,  MI_ON,   MI_OFF,  _______, _______, _______, _______, _______},
  {_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______}
}


};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
        case QWERTZ:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_QWERTZ);
          }
          return false;
          break;
        case LOWER:
          if (record->event.pressed) {
            layer_on(_LOWER);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          } else {
            layer_off(_LOWER);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          }
          return false;
          break;
        case RAISE:
          if (record->event.pressed) {
            layer_on(_RAISE);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          } else {
            layer_off(_RAISE);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          }
          return false;
          break;
        case NUM:
          if (record->event.pressed) {
            layer_on(_NUM);
          } else {
            layer_off(_NUM);
          }
          return false;
          break;
      }
    return true;
};
