#include "tada68.h"

#define BASE 0

#define _______ KC_TRNS

// special keys
#define MY_F MT(MOD_LSFT, KC_F)
#define MY_J MT(MOD_RSFT, KC_J)
#define MY_D MT(MOD_LCTL, KC_D)
#define MY_K MT(MOD_RCTL, KC_K)
#define MY_S MT(MOD_LALT, KC_S)
#define MY_L MT(MOD_RALT, KC_L)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap BASE: (Base Layer) Default Layer
   * ,----------------------------------------------------------------------------------------------.
   * |Esc   |   1|    2|    3|    4|    5|    6|    7|    8|    9|    0|    -|    =|  Backsp |  ~ ` |
   * |----------------------------------------------------------------------------------------------|
   * |Tab    |    Q|    W|    E|    R|    T|    Y|    U|    I|    O|    P|    [|    ]|    \  |  Del |
   * |----------------------------------------------------------------------------------------------|
   * |CAPS     |    A|S/ALT|D/CTL|F/SFT|    G|    H|J/SFT|K/CTL|L/ALT|    ;|    '|  Return   |  PgUp|
   * |----------------------------------------------------------------------------------------------|
   * |          |    Z|    X|    C|    V|    B|    N|    M|    ,|    .|    /|          |   Up|  PgDn|
   * |----------------------------------------------------------------------------------------------|
   * |Ctrl  |  Win |  Alt |          Space                    |  Alt|   FN|  Ctrl|  Lef|  Dow|  Rig |
   * `----------------------------------------------------------------------------------------------'
   */
[BASE] = KEYMAP_ANSI(
  KC_ESC  ,  KC_1  ,   KC_2 ,   KC_3 ,   KC_4 ,   KC_5 ,   KC_6 ,   KC_7 ,   KC_8 ,   KC_9 ,   KC_0 , KC_MINS, KC_EQL , KC_BSPC,   KC_GRV, \
  KC_TAB  ,  KC_Q  ,   KC_W ,   KC_E ,   KC_R ,   KC_T ,   KC_Y ,   KC_U ,   KC_I ,   KC_O ,   KC_P , KC_LBRC, KC_RBRC, KC_BSLS,   KC_DEL, \
  KC_CAPS ,  KC_A  ,   MY_S ,   MY_D ,   MY_F ,   KC_G ,   KC_H ,   MY_J ,   MY_K ,   MY_L , KC_SCLN, KC_QUOT,           KC_ENT,  KC_PGUP, \
  _______ ,            KC_Z ,   KC_X ,   KC_C ,   KC_V ,   KC_B ,   KC_N ,   KC_M , KC_COMM, KC_DOT , KC_SLSH, _______,   KC_UP,  KC_PGDN, \
  _______ , KC_LGUI, _______,                KC_SPC                               , _______, MO(_FL), _______, KC_LEFT, KC_DOWN,  KC_RGHT),
};
