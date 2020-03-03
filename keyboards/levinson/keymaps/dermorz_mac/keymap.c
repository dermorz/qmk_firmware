#include QMK_KEYBOARD_H
#include "action_layer.h"
#include "aliases.h"

extern keymap_config_t keymap_config;


enum layers {
  _QWERTZ = 0,
  _LOWER,
  _RAISE,
  _NUM,
  _ADJUST,
};

enum custom_keycodes {
  QWERTZ = SAFE_RANGE,
  LOWER,
  RAISE,
  NUM,
  ADJUST,
  RGB_MODE_DISCO,
};

//Tap Dance Declarations
enum {
  TD_SCREENSHOT_SCREENSAVER = 0
};

//Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
  //Tap once for screenshot, twice to start screensaver
  [TD_SCREENSHOT_SCREENSAVER]  = ACTION_TAP_DANCE_DOUBLE(DO_SHOT, DO_SSVR),
};

// Fillers to make layering more clear
//
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTZ] = LAYOUT_do(
  //┌────┬────┬────┬────┬────┬────┐    ┌────┬────┬────┬────┬────┬────┐
     TAB , Q  , W  , E  , R  , T  ,      Z  , U  , I  , O  , P  ,BSPC,
  //├────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┤
     ESC , A  , S  , D  , F  , G  ,      H  , J  , K  , L  ,HASH,ENT,
  //├────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┤
     LSFT,LESS, Y  , X  , C  , V  ,      B  , N  , M  ,    ,NUM ,DEL ,
  //├────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┤
     NUM ,LCTL,LGUI,LALT,LOWR,SPC ,     NSPC,RASE,LALT,RGUI,    ,SSSH
  //└────┴────┴────┴────┴────┴────┘    └────┴────┴────┴────┴────┴────┘
  //
  ),

  [_LOWER] = LAYOUT_do(
  //┌────┬────┬────┬────┬────┬────┐    ┌────┬────┬────┬────┬────┬────┐
     KITT,AT  ,EQL ,EURO,EXLM,CIRC,         ,UE  ,    ,OE  ,    ,VOLU,
  //├────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┤
     CYCL,AE  ,SS  ,QST ,DOT ,COLN,     LEFT,DOWN, UP ,RGHT,    ,VOLD,
  //├────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┤
     PLAI,    ,    ,    ,COMM,SCLN,         ,    ,    ,    ,    ,MUTE,
  //├────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┤
     RGB ,    ,    ,    ,    ,    ,     UNDS,    ,    ,    ,    ,
  //└────┴────┴────┴────┴────┴────┘    └────┴────┴────┴────┴────┴────┘
  //
  ),

  [_RAISE] = LAYOUT_do(
  //┌────┬────┬────┬────┬────┬────┐    ┌────┬────┬────┬────┬────┬────┐
         ,    ,PERC,BSLS,    ,    ,     DQOT,LCBR,RCBR,    ,    ,    ,
  //├────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┤
         ,    ,DLR ,SLSH,MINS,ASTR,     QUOT,LBRC,RBRC,    ,    ,    ,
  //├────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┤
         ,    ,AMPR,PIPE,PLUS,    ,     GRV ,LPRN,RPRN,    ,    ,    ,
  //├────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┤
         ,    ,    ,    ,    ,    ,         ,    ,    ,    ,    ,
  //└────┴────┴────┴────┴────┴────┘    └────┴────┴────┴────┴────┴────┘
  //
  ),

  [_NUM] = LAYOUT_do(
  //┌────┬────┬────┬────┬────┬────┐    ┌────┬────┬────┬────┬────┬────┐
         ,    ,    ,    ,    ,    ,         , 7  , 8  , 9  ,    ,    ,
  //├────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┤
         ,    ,    ,    ,    ,    ,         , 4  , 5  , 6  ,    ,    ,
  //├────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┤
         ,    ,    ,    ,    ,    ,         , 1  , 2  , 3  ,    ,    ,
  //├────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┤
         ,    ,    ,    ,    ,    ,         , 0  ,    ,    ,    ,
  //└────┴────┴────┴────┴────┴────┘    └────┴────┴────┴────┴────┴────┘
  //
  ),
};

// static uint8_t led_states[RGBLED_NUM] = {};

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
