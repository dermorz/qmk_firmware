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
  RGB_MODE_DISCO,
};

#define _______ KC_TRNS
#define KC_ KC_TRNS

// redefinitions for LAYOUT_kc
#define KC_LESS KC_GRV // < >
#undef KC_HASH
#define KC_HASH KC_BSLS
#undef KC_AT
#define KC_AT LALT(KC_L)
#undef KC_EQL
#define KC_EQL LSFT(KC_0)
#define KC_AE KC_QUOT
#define KC_OE KC_SCLN
#define KC_UE KC_LBRC
#define KC_SZ KC_MINS
#define KC_EURO LALT(KC_E)
#define KC_QST LSFT(KC_SZ)
#define KC_SEMI LSFT(KC_COMMA)
#define KC_COL LSFT(KC_DOT)

#define KC_SHOT LSFT(LGUI(LCTL(KC_4)))
#define KC_SSVR LSFT(LGUI(LCTL(LALT(KC_S))))
#define KC_SSSH TD(TD_SCREENSHOT_SCREENSAVER)
#define KC_LOWR LOWER
#define KC_RASE RAISE
#define KC_NUM  NUM
#define KC_BL_S BL_STEP
#define KC_BL_T BL_TOGG
#define KC_RMOD RGB_MOD

#define KC_KITT RGB_MODE_KNIGHT
#define KC_DSCO RGB_MODE_DISCO
#define KC_CYCL RGB_MOD
#define KC_RGB RGB_TOG

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

  [_LOWER] = LAYOUT_kc_ortho_4x12(
  //┌────┬────┬────┬────┬────┬────┐    ┌────┬────┬────┬────┬────┬────┐
     KITT,AT  ,EQL ,EURO,EXLM,CIRC,         ,UE  ,    ,OE  ,    ,    ,
  //├────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┤
     CYCL,AE  ,SZ  ,QST ,DOT ,COL ,     LEFT,DOWN, UP ,RIGHT,   ,    ,
  //├────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┤
     DSCO,    ,    ,    ,COMM,SEMI,         ,    ,    ,    ,    ,    ,
  //├────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┤
     RGB ,    ,    ,    ,    ,    ,     SPC ,    ,    ,    ,    ,
  //└────┴────┴────┴────┴────┴────┘    └────┴────┴────┴────┴────┴────┘
  //
  ),

};

void rgblight_randomrgb_at(uint8_t index) {
  uint8_t r, g, b;
  r = random() % 0xFF;
  g = random() % 0xFF;
  b = random() % 0xFF;
  rgblight_setrgb_at(r, g, b, index);
};

void rgblight_randomrgb(void) {
  uint8_t on;
  on = random() % RGBLED_NUM;
  for (uint8_t i = 0 ; i < RGBLED_NUM ; ++i ) {
    if (i == on) {
      rgblight_randomrgb_at(i);
    } else {
      rgblight_setrgb_at(0, 0, 0, i);
    }
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
    /* case RAISE: */
    /*   if (record->event.pressed) { */
    /*     layer_on(_RAISE); */
    /*     update_tri_layer(_LOWER, _RAISE, _ADJUST); */
    /*   } else { */
    /*     layer_off(_RAISE); */
    /*     update_tri_layer(_LOWER, _RAISE, _ADJUST); */
    /*   } */
    /*   return false; */
    /*   break; */
    /* case NUM: */
    /*   if (record->event.pressed) { */
    /*     layer_on(_NUM); */
    /*   } else { */
    /*     layer_off(_NUM); */
    /*   } */
    /*   return false; */
    /*   break; */
    /* case ADJUST: */
    /*   if (record->event.pressed) { */
    /*     layer_on(_ADJUST); */
    /*   } else { */
    /*     layer_off(_ADJUST); */
    /*   } */
    /*   return false; */
    /*   break; */
    /* case RGB_MODE_DISCO: */
    /*   if (record->event.pressed) { */
    /*     //rgblight_enable(); */
    /*     rgblight_mode(RGBLIGHT_MODE_DISCO); */
    /*     //rgblight_disable(); */
    /*   } */
    return false;
    case KC_A ... KC_SLASH:
      if (record->event.pressed) {
      /* if (rgblight_get_mode() == RGBLIGHT_MODE_DISCO) { */
        rgblight_randomrgb();
      /* } */
      }
      return true;
      break;
  }
  return true;
}
