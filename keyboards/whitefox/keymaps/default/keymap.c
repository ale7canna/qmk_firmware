/*
Copyright 2015 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include QMK_KEYBOARD_H
#include "whitefox.h"

#define BASE 0 // default layer
#define CURS 1 // symbols
#define EXTR 2 // media keys

#define _______ KC_TRNS

#define MY_A LT(CURS, KC_A)
#define MY_F MT(MOD_LSFT, KC_F)
#define MY_J MT(MOD_LSFT, KC_J)
#define MY_D MT(MOD_LCTL, KC_D)
#define MY_K MT(MOD_LCTL, KC_K)
#define MY_S MT(MOD_LALT, KC_S)
#define MY_L MT(MOD_LALT, KC_L)

#define MY_FN LT(EXTR, KC_APP)

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: Base Layer
     * ,------------------------------------------------------------------------------------------.
     * |Esc|    1|    2|    3|    4|    5|    6|    7|    8|    9|    0|    -|    =|    \|   `|Ins|
     * |------------------------------------------------------------------------------------------|
     * |Tab  |    Q|    W|    E|    R|    T|    Y|    U|    I|    O|    P|    [|    ]|Backs|   Del|
     * |------------------------------------------------------------------------------------------|
     * |BackSp|A/CRS|S/ALT|D/CTL|F/SFT|    G|    H|J/SFT|D/CTL|L/ALT|    ;|    '|  Enter   |   PgU|
     * |------------------------------------------------------------------------------------------|
     * |          |    Z|    X|    C|    V|    B|    N|    M|    ,|    .|    /| Caps  | Up |   PgD|
     * |------------------------------------------------------------------------------------------|
     * |    | Gui  |     |           Space                |MyFun|     | Gui |    | Lef | Dow | Rig|
     * `------------------------------------------------------------------------------------------'
     */
    [0] = LAYOUT( \
        KC_ESC,  KC_1   , KC_2   , KC_3 , KC_4 , KC_5 , KC_6 , KC_7 , KC_8 , KC_9   , KC_0   , KC_MINS, KC_EQL,  KC_BSLS, KC_GRV , KC_INS,
        KC_TAB,  KC_Q   , KC_W   , KC_E , KC_R , KC_T , KC_Y , KC_U , KC_I , KC_O   , KC_P   , KC_LBRC, KC_RBRC, KC_BSPC         , KC_DEL,
        KC_BSPC, MY_A   , MY_S   , MY_D , MY_F , KC_G , KC_H , MY_J , MY_K , MY_L   , KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT          , KC_PGUP,
        _______, _______, KC_Z   , KC_X , KC_C , KC_V , KC_B , KC_N , KC_M , KC_COMM, KC_DOT , KC_SLSH, KC_CAPS         , KC_UP  , KC_PGDN,
        _______, KC_LGUI, _______,                  KC_SPC                          , _______, MY_FN, _______, KC_LEFT, KC_DOWN, KC_RGHT),

    [1] = LAYOUT( \

    /* Layer 1: Cursor Layer
     * ,------------------------------------------------------------------------------------------.
     * |   |     |     |     |     |     |     |     |     |     |     |     |     |     |    |   |
     * |------------------------------------------------------------------------------------------|
     * |     |     |     |     |     |     |     | Home|   Up| End |     |     |     |     |      |
     * |------------------------------------------------------------------------------------------|
     * |      |     |     |     |     |     |BacSp| Left| Down|Right| Del |    '|          |      |
     * |------------------------------------------------------------------------------------------|
     * |          |     |     |     |     |     |     |PageUp|    |PageDn|    |       |    |      |
     * |------------------------------------------------------------------------------------------|
     * |    |      |     |                                |     |     |     |    |     |     |    |
     * `------------------------------------------------------------------------------------------'
     */
    [CURS] = KEYMAP(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, KC_HOME,  KC_UP , KC_END , _______, _______, _______, _______         , _______,
        _______, _______, _______, _______, _______, _______, KC_BSPC, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL , _______, _______, _______         , _______,
        _______, _______, _______, _______, _______, _______, _______, _______, KC_PGUP, _______, KC_PGDN, _______, _______         , _______, _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______, _______)
};
