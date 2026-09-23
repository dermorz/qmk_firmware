#include QMK_KEYBOARD_H
#include "aliases.h"

enum layers {
  _QWERTZ = 0,
  _LOWER,
  _RAISE,
  _NUM,
  _ADJUST,
  _SC2,
  _MOUSE,
};

enum custom_keycodes {
  QWERTZ = SAFE_RANGE,
  LOWER,
  RAISE,
  NUM,
  ADJUST,
  SC2,
  MOUSE,
  GLHF,
  GG,
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
     LSFT,LESS, Y  , X  , C  , V  ,      B  , N  , M  ,    ,    ,DEL ,
  //├────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┤
     NUM ,LCTL,LGUI,LALT,LOWR,MSPC,     NSPC,RASE,RALT,RGUI,    ,PRNT
  //└────┴────┴────┴────┴────┴────┘    └────┴────┴────┴────┴────┴────┘
  //
  ),

  [_LOWER] = LAYOUT_do(
  //┌────┬────┬────┬────┬────┬────┐    ┌────┬────┬────┬────┬────┬────┐
         ,AT  ,EQL ,EURO,EXLM,CIRC,         ,UE  ,    ,OE  ,PGUP,VOLU,
  //├────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┤
         ,AE  ,SS  ,QST ,DOT ,COLN,     LEFT,DOWN, UP ,RGHT,PGDN,VOLD,
  //├────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┤
         ,    ,    ,    ,COMM,SCLN,         ,TILD,    ,    ,    ,MUTE,
  //├────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┤
         ,    ,    ,    ,    ,    ,     UNDS,    ,    ,    ,    ,
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
         ,    ,    ,    ,    ,    ,     ACUT,    ,    ,    ,    ,
  //└────┴────┴────┴────┴────┴────┘    └────┴────┴────┴────┴────┴────┘
  //
  ),

  [_NUM] = LAYOUT_do(
  //┌────┬────┬────┬────┬────┬────┐    ┌────┬────┬────┬────┬────┬────┐
     F1  ,F2  ,F3  ,F4  ,F5  ,F6  ,         , 7  , 8  , 9  ,    ,    ,
  //├────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┤
     F7  ,F8  ,F9  ,F10 ,F11 ,F12 ,         , 4  , 5  , 6  ,    ,    ,
  //├────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┤
         ,    ,    ,    ,    ,    ,         , 1  , 2  , 3  ,    ,    ,
  //├────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┤
         ,    ,    ,    ,    ,    ,         , 0  ,    ,    ,    ,
  //└────┴────┴────┴────┴────┴────┘    └────┴────┴────┴────┴────┴────┘
  //
  ),

  [_SC2] = LAYOUT_do(
  //┌────┬────┬────┬────┬────┬────┐    ┌────┬────┬────┬────┬────┬────┐
     TAB , Q  , W  , E  , R  , T  ,      Z  , U  , I  , O  , P  ,BSPC,
  //├────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┤
     ESC , A  , S  , D  , F  , G  ,      H  , J  , K  , L  ,HASH,ENT,
  //├────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┤
     LSFT, Y  , X  , C  , V  , B  ,      N  , M  ,DOT ,COMM,GLHF,DEL ,
  //├────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┤
     LCTL,LCS ,LGUI,LALT,4   ,SPC ,     NSPC,RASE,RALT,RGUI,GG  ,QWRZ
  //└────┴────┴────┴────┴────┴────┘    └────┴────┴────┴────┴────┴────┘
  //
  ),

  [_ADJUST] = LAYOUT_do(
  //┌────┬────┬────┬────┬────┬────┐    ┌────┬────┬────┬────┬────┬────┐
         ,QWRZ,    ,    ,    ,    ,         ,    ,    ,    ,    ,    ,
  //├────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┤
         ,    ,SC2 ,    ,    ,    ,         ,    ,    ,    ,    ,    ,
  //├────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┤
         ,    ,    ,    ,    ,    ,         ,    ,    ,    ,    ,    ,
  //├────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┤
         ,    ,    ,    ,    ,    ,         ,    ,    ,    ,    ,
  //└────┴────┴────┴────┴────┴────┘    └────┴────┴────┴────┴────┴────┘
  //
  ),

  [_MOUSE] = LAYOUT_do(
  //┌────┬────┬────┬────┬────┬────┐    ┌────┬────┬────┬────┬────┬────┐
         ,    ,    ,    ,    ,    ,         ,    ,    ,    ,    ,    ,
  //├────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┤
         ,    ,    ,    ,    ,    ,     MS_L,MS_D,MS_U,MS_R,    ,    ,
  //├────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┤
         ,    ,    ,    ,    ,    ,         ,    ,    ,    ,    ,    ,
  //├────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┤
         ,    ,    ,    ,    ,    ,         ,    ,    ,    ,    ,
  //└────┴────┴────┴────┴────┴────┘    └────┴────┴────┴────┴────┴────┘
  //
  ),
};

// The keymap is written for German layout on Linux. On macOS these keycodes
// produce different characters, so they get swapped for the mac equivalent.
static const uint16_t mac_swaps[][2] = {
  // Linux                 macOS
  {KC_GRV,                 KC_NUBS},              // ^ (mac swaps these two on ISO)
  {KC_NUBS,                KC_GRV},               // <
  {S(KC_GRV),              S(KC_NUBS)},           // °
  {S(KC_NUBS),             S(KC_GRV)},            // >
  {ALGR(KC_7),             A(KC_8)},              // {
  {ALGR(KC_8),             A(KC_5)},              // [
  {ALGR(KC_9),             A(KC_6)},              // ]
  {ALGR(KC_0),             A(KC_9)},              // }
  {ALGR(KC_MINS),          A(S(KC_7))},           // backslash
  {ALGR(KC_Q),             A(KC_L)},              // @
  {ALGR(KC_RBRC),          A(KC_N)},              // ~
  {ALGR(KC_NUBS),          A(KC_7)},              // |
  {KC_PSCR,                S(G(C(KC_4)))},        // screenshot to clipboard
};

static bool on_mac(void) {
  os_variant_t os = detected_host_os();
  return os == OS_MACOS || os == OS_IOS;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (on_mac()) {
    for (uint8_t i = 0; i < ARRAY_SIZE(mac_swaps); i++) {
      if (keycode == mac_swaps[i][0]) {
        if (record->event.pressed) {
          register_code16(mac_swaps[i][1]);
        } else {
          unregister_code16(mac_swaps[i][1]);
        }
        return false;
      }
    }
  }

  switch (keycode) {
    case QWERTZ:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTZ);
      }
      return false;
      break;
    case SC2:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_SC2);
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
    case GLHF:
      if (record->event.pressed) {
          SEND_STRING("\nglhf\n");
      }
      return false;
    case GG:
      if (record->event.pressed) {
          SEND_STRING("\ngg\n" SS_TAP(X_F10) "w" );
      }
      return false;
  }
  return true;
}
