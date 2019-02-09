#include QMK_KEYBOARD_H
#include "action_layer.h"

extern keymap_config_t keymap_config;

#define _QWERTZ 0
#define _LOWER 1
#define _RAISE 2
#define _NUM 3
#define _ADJUST 16

enum custom_keycodes {
  QWERTZ = SAFE_RANGE,
  LOWER,
  RAISE,
  NUM,
  ADJUST,
};

#define _______ KC_TRNS
#define KC_ KC_TRNS

#define KC_LESS KC_GRV // < >
#undef KC_HASH
#define KC_HASH KC_BSLS

#define KC_SHOT LSFT(LGUI(LCTL(KC_4)))
#define KC_SSVR LSFT(LGUI(LCTL(LALT(KC_S))))
#define KC_SSSH TD(TD_SCREENSHOT_SCREENSAVER)
#define KC_LOWR LOWER
#define KC_RASE RAISE
#define KC_NUM  NUM
#define KC_BL_S BL_STEP
#define KC_BL_T BL_TOGG
#define KC_RMOD RGB_MOD

//Tap Dance Declarations
enum {
  TD_SCREENSHOT_SCREENSAVER = 0
};

//Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
  //Tap once for screenshot, twice to start screensaver
  [TD_SCREENSHOT_SCREENSAVER]  = ACTION_TAP_DANCE_DOUBLE(KC_SHOT, KC_SSVR),
};

// Fillers to make layering more clear
//
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTZ] = LAYOUT_kc_ortho_4x12(
  //┌────┬────┬────┬────┬────┬────┐    ┌────┬────┬────┬────┬────┬────┐
     TAB , Q  , W  , E  , R  , T  ,      Y  , U  , I  , O  , P  ,BSPC,
  //├────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┤
     ESC , A  , S  , D  , F  , G  ,      H  , J  , K  , L  ,HASH,ENT,
  //├────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┤
     LSFT,LESS, Z  , X  , C  , V  ,      B  , N  , M  ,    ,NUM ,DEL ,
  //├────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┤
     NUM ,LCTL,LALT,LGUI,LOWR,SPC ,     SPC ,RASE,LALT,RGUI,    ,SSSH
  //└────┴────┴────┴────┴────┴────┘    └────┴────┴────┴────┴────┴────┘
  //
  ),

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
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;
  }
  return true;
}
