#include QMK_KEYBOARD_H

// Layer definitions
#define BASE 0
#define CURS 1

#define MY_A LT(CURS, KC_A)
#define MY_F MT(MOD_LSFT, KC_F)
#define MY_J MT(MOD_RSFT, KC_J)
#define MY_D MT(MOD_LCTL, KC_D)
#define MY_K MT(MOD_RCTL, KC_K)
#define MY_S MT(MOD_LALT, KC_S)
#define MY_L MT(MOD_LALT, KC_L)
#define MY_E MT(MOD_LGUI, KC_E)
#define MY_I MT(MOD_RGUI, KC_I)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |E/Gui |   R  |   T  |   Y  |   U  |I/Gui |   O  |   P  | Grv  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Esc  |A/Curs|S/LAlt|D/LCtl|F/LShf|   G  |   H  |J/RShf|K/RCtl|L/RAlt|   ;  |Enter |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |BackSp|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  | Del  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Grv  | Ctrl | Alt  | GUI  |    Space    |  Space      | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[BASE] = LAYOUT_planck_grid(
  KC_TAB,  KC_Q,    KC_W,    MY_E,    KC_R,    KC_T,    KC_Y,    KC_U,    MY_I,    KC_O,    KC_P,    KC_GRV ,
  KC_ESC,  MY_A,    MY_S,    MY_D,    MY_F,    KC_G,    KC_H,    MY_J,    MY_K,    MY_L,    KC_SCLN, KC_ENT ,
  KC_BSPC, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_DEL ,
  KC_GRV , KC_LCTL, KC_LALT, KC_LGUI, MO(1),   KC_SPC,  KC_SPC,  KC_SPC,   KC_LEFT, KC_DOWN, KC_UP,  KC_RGHT
),

/* Cursor layer
 * ,----------------------------------------------------------------------------------------------------------.
 * |        |        |        |        |        |        |        |  HOME  |   UP   |  END   |        |       |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-------|
 * |        |        |        |        |        |        |        |  LEFT  |  DOWN  | RIGHT  |        |       |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-------|
 * |        |        |        |        |        |        |        |  PGUP  |        | PGDN   |        |       |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-------|
 * | RESET  |        |        |        |        |        |        |        |        |        |        |       |
 * `----------------------------------------------------------------------------------------------------------'
 */
[CURS] = LAYOUT_planck_grid(
    _______, _______, _______, _______, _______, _______, _______, KC_HOME,  KC_UP , KC_END , _______, _______,
    _______, _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, KC_PGUP, _______, KC_PGDN, _______, _______,
    RESET  , _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),


};
