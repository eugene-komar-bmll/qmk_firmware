/* Copyright 2015-2023 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

enum planck_layers { _BASE, _NUM, _SYM, _FN1, _FN2 };

#define NUM MO(_NUM)
#define SYM MO(_SYM)
#define FN1 MO(_FN1)
#define FN2 MO(_FN2)

/* clang-format off */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* BASE
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Brite| Ctrl | Alt  | GUI  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_BASE] = LAYOUT_planck_grid(
    KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,   KC_Y,    KC_U,   KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_LCTL,   KC_A,    KC_S,    KC_D,    KC_F,   KC_G,   KC_H,    KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,   KC_N,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_ENT ,
    KC_ESCAPE, FN1,     KC_LGUI, KC_LALT, NUM,    KC_SPC, KC_SPC,  SYM,    KC_RALT, KC_NO,   KC_NO,   FN2
),

/* NUM
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Brite| Ctrl | Alt  | GUI  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_NUM] = LAYOUT_planck_grid(
    KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,   KC_Y,    KC_U,   KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_LCTL,   KC_A,    KC_S,    KC_D,    KC_F,   KC_G,   KC_H,    KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,   KC_N,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_ENT ,
    KC_ESCAPE, FN1,     KC_LGUI, KC_LALT, NUM,    KC_SPC, KC_SPC,  SYM,    KC_RALT, KC_NO,   KC_NO,   FN2
),

/* SYM
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Brite| Ctrl | Alt  | GUI  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_SYM] = LAYOUT_planck_grid(
    KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,   KC_Y,    KC_U,   KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_LCTL,   KC_A,    KC_S,    KC_D,    KC_F,   KC_G,   KC_H,    KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,   KC_N,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_ENT ,
    KC_ESCAPE, FN1,     KC_LGUI, KC_LALT, NUM,    KC_SPC, KC_SPC,  SYM,    KC_RALT, KC_NO,   KC_NO,   FN2
),

/* FN1
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Brite| Ctrl | Alt  | GUI  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_FN1] = LAYOUT_planck_grid(
    KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,   KC_Y,    KC_U,   KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_LCTL,   KC_A,    KC_S,    KC_D,    KC_F,   KC_G,   KC_H,    KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,   KC_N,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_ENT ,
    KC_ESCAPE, FN1,     KC_LGUI, KC_LALT, NUM,    KC_SPC, KC_SPC,  SYM,    KC_RALT, KC_NO,   KC_NO,   FN2
),

/* FN2
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Brite| Ctrl | Alt  | GUI  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_FN2] = LAYOUT_planck_grid(
    KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,   KC_Y,    KC_U,   KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_LCTL,   KC_A,    KC_S,    KC_D,    KC_F,   KC_G,   KC_H,    KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,   KC_N,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_ENT ,
    KC_ESCAPE, FN1,     KC_LGUI, KC_LALT, NUM,    KC_SPC, KC_SPC,  SYM,    KC_RALT, KC_NO,   KC_NO,   FN2
),

};

