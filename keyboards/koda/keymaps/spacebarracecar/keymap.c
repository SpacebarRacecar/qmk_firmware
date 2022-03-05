#include QMK_KEYBOARD_H
#include "spacebarracecar.h"

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

enum layers {
  _MAC = FIRST_AFTER_BASE,
  _RAISE,
  _LOWER,
  _MUSICMODE
};

enum keycodes {
  CU_SWOS = NEW_SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Base
,-----------------------------------------------------------------------------------------------------------------------.
|Tab      |Q        |W        |E        |R        |T        |Z        |U        |I        |O        |P        |Backspace|
|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
|Esc/Nav  |A        |S        |D        |F        |G        |H        |J        |K        |L        |;        |'        |
|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
|Shift    |Y        |X        |C        |V        |B        |N        |M        |,        |.        |/        |Shift    |
|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
|LCtrl    |         |Win      |Alt      |Lower    |Space    |Enter    |Raise    |AltGr    |Win      |Menu     |RCtrl    |
`-----------------------------------------------------------------------------------------------------------------------'
*/

[_BASE] = KEYMAP(
  KC_TAB,   DE_Q,     DE_W,     DE_E,     DE_R,     DE_T,     CU_Z,     DE_U,     DE_I,     DE_O,     DE_P,     KC_BSPC,
  CU_NAV,   DE_A,     DE_S,     DE_D,     DE_F,     DE_G,     DE_H,     DE_J,     DE_K,     DE_L,     CU_SCLN,  CU_QUOT,
  CU_LSFT,  CU_Y,     DE_X,     DE_C,     DE_V,     DE_B,     DE_N,     DE_M,     CU_COMM,  CU_DOT,   CU_SLSH,  CU_RSFT,
  KC_LCTL,  XXXXXXX,  KC_LGUI,  KC_LALT,  LOWER,    KC_SPC,   CTLENT,   RAISE,    KC_ALGR,  KC_RGUI,  KC_MENU,  KC_RCTL
),

[_MAC] = KEYMAP(
  KC_TAB,   DE_Q,     DE_W,     DE_E,     DE_R,     DE_T,     CU_Z,     DE_U,     DE_I,     DE_O,     DE_P,     KC_BSPC,
  CU_NAV,   DE_A,     DE_S,     DE_D,     DE_F,     DE_G,     DE_H,     DE_J,     DE_K,     DE_L,     CU_SCLN,  CU_QUOT,
  CU_LSFT,  CU_Y,     DE_X,     DE_C,     DE_V,     DE_B,     DE_N,     DE_M,     CU_COMM,  CU_DOT,   CU_SLSH,  CU_RSFT,
  KC_LCMD,  KC_LCTL,  KC_LGUI,  KC_LALT,  LOWER,    KC_SPC,   CMDENT,   RAISE,    KC_ALGR,  KC_RGUI,  KC_RCTL,  KC_RCMD
),
/* Lower
,-----------------------------------------------------------------------------------------------------------------------.
|~        |!        |"        |#        |$        |%        |^        |&        |*        |(        |)        |         |
|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
|         |@        |         |         |         |         |         |_        |+        |{        |}        ||        |
|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
|         |€        |         |         |         |         |         |         |         |         |         |         |
|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
|         |         |         |         |         |         |         |         |         |         |         |         |
`-----------------------------------------------------------------------------------------------------------------------'
*/
[_LOWER] = KEYMAP(
  CU_TILD,  DE_EXLM,  DE_DQOT,  DE_HASH,  DE_DLR,   DE_PERC,  CU_CIRC,  DE_AMPR,  DE_ASTR,  DE_LPRN,  DE_RPRN,  _______,
  _______,  CU_AT,    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  DE_UNDS,  DE_PLUS,  CU_LCBR,  CU_RCBR,  CU_PIPE,
  _______,  DE_EURO,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  DE_MINS,  CU_EQL,   CU_LBRC,  CU_RBRC,  _______,
  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______
),

/* Raise
,-----------------------------------------------------------------------------------------------------------------------.
|`        |1        |2        |3        |4        |5        |6        |7        |8        |9        |0        |         |
|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
|         |F1       |F2       |F3       |F4       |F5       |F6       |-        |=        |[        |]        |\        |
|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
|         |F7       |F8       |F9       |F10      |F11      |F12      |         |         |         |         |         |
|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
|         |         |         |         |         |         |         |         |         |         |         |         |
`-----------------------------------------------------------------------------------------------------------------------'
*/

[_RAISE] = KEYMAP(
  CU_GRV,   DE_1,     DE_2,     CU_3,     DE_4,     DE_5,     CU_6,     CU_7,     CU_8,     CU_9,     CU_0,     _______,
  _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    DE_MINS,  CU_EQL,   CU_LBRC,  CU_RBRC,  CU_BSLS,
  _______,  KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   XXXXXXX,  _______,  _______,  _______,  _______,
  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______
),

/* Deadkey
,-----------------------------------------------------------------------------------------------------------------------.
|         |         |         |         |         |         |         |Ü        |         |Ö        |         |         |
|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
|         |Ä        |ß        |         |         |         |         |         |         |         |         |         |
|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
|         |         |         |         |         |         |         |         |         |         |         |         |
|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
|         |         |         |         |         |"        |"        |         |         |         |         |         |
`-----------------------------------------------------------------------------------------------------------------------'
*/

[_DEADKEY] = KEYMAP(
  KC_TAB,   CU_ED,    CU_ED,    CU_ED,    CU_ED,    CU_ED,    CU_ED,    CU_UE,    CU_ED,    CU_OE,    CU_ED,    KC_BSPC,
  CU_NAV,   CU_AE,    CU_SS,    CU_ED,    CU_ED,    CU_ED,    CU_ED,    CU_ED,    CU_ED,    CU_ED,    CU_ED,    CU_DDQ,
  CU_LSFT,  CU_ED,    CU_ED,    CU_ED,    CU_ED,    CU_ED,    CU_ED,    CU_ED,    CU_ED,    CU_ED,    CU_ED,    CU_RSFT,
  _______,  _______,  _______,  _______,  _______,  CU_DDQ,   CU_DDQ,   _______,  _______,  _______,  _______,  _______
),

/* Navigation
,-----------------------------------------------------------------------------------------------------------------------.
|         |PageDown |Up       |PageUp   |Home     |         |         |         |Win+Up   |         |         |Del      |
|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
|         |Left     |Down     |Right    |End      |         |         |Win+Left |Win+Down |Win+Right|         |Enter    |
|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
|         |Prev     |Pause    |Next     |LowerVol |RaiseVol |Mute     |         |         |         |         |         |
|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
|RESET    |ESCT     |SWOS     |         |         |         |         |         |         |         |         |Game     |
`-----------------------------------------------------------------------------------------------------------------------'
*/

[_NAV] = KEYMAP(
  _______,  KC_PGDN,  KC_UP,    KC_PGUP,  CU_HOME,  XXXXXXX,  KC_BRIU,  XXXXXXX,  CU_WINU,  XXXXXXX,  XXXXXXX,  KC_DEL,
  _______,  KC_LEFT,  KC_DOWN,  KC_RGHT,  CU_END,   XXXXXXX,  KC_BRID,  CU_WINL,  CU_WIND,  CU_WINR,  CU_EMO,   KC_ENT,
  _______,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_VOLD,  KC_VOLU,  KC_MUTE,  _______,  _______,  _______,  _______,  _______,
  RESET,    CU_ESCT,  CU_SWOS,  _______,  _______,  KC_SPC,   CTLENT,   _______,  _______,  _______,  _______,  CU_GAME
)

};

bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
switch (keycode) {
  case MO(_LOWER):
    if (game){
      if(record->event.pressed) {
        register_code(KC_SPC);
      } else {
        unregister_code(KC_SPC);
      }
      return false;
    } else {
      return true;
    }
  case KC_LALT:
    if (game) {
      if (record->event.pressed){
        layer_on(_RAISE);
      } else {
        layer_off(_RAISE);
      }
      return false;
    } else {
      return true;
    }
  case CU_SWOS:
    if (record->event.pressed){
        if (eeconfig_read_default_layer() == 1UL << _BASE) {
            persistent_default_layer_set(_MAC);
            mac = true;
            esct = true;
        } else {
            persistent_default_layer_set(_BASE);
            mac = false;
            esct = false;
        }
    }
    return false;
  default:
    return true;
  }
}

