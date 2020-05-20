#include QMK_KEYBOARD_H

// Layer definitions
#define BASE 0
#define CURS 1

#define MY_A LT(CURS, KC_A)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Grv  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |Enter |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |BackSp|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  | Del  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Grv  | Ctrl | Alt  | GUI  |    Space    |  Space      | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[BASE] = LAYOUT_planck_grid(
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_GRV ,
  KC_ESC,  MY_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT ,
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
