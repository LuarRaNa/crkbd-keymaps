// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated from users/manna-harbour_miryoku/miryoku.org

// This program is free software: you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by the
// Free Software Foundation, either version 2 of the License, or
// (at your option) any later version. This program is distributed in the hope
// that it will be useful, but WITHOUT ANY WARRANTY; without even the implied
// warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details. You should have received a copy
// of the GNU General Public License along with this program.
// If not, see <http://www.gnu.org/licenses/>.

#include QMK_KEYBOARD_H

#define U_NP KC_NO // key is not present
#define U_NA KC_NO // present but not available for use
#define U_NU KC_NO // available but not used

enum layers { BASE, MBO, MEDIA, NAV, MOUSE, SYM, NUM, FUN };

#if defined MIRYOKU_CLIPBOARD_FUN
#define U_RDO KC_AGIN
#define U_PST KC_PSTE
#define U_CPY KC_COPY
#define U_CUT KC_CUT
#define U_UND KC_UNDO
#elif defined MIRYOKU_CLIPBOARD_MAC
#define U_RDO SCMD(KC_Z)
#define U_PST LCMD(KC_V)
#define U_CPY LCMD(KC_C)
#define U_CUT LCMD(KC_X)
#define U_UND LCMD(KC_Z)
#elif defined MIRYOKU_CLIPBOARD_WIN
#define U_RDO C(KC_Y)
#define U_PST C(KC_V)
#define U_CPY C(KC_C)
#define U_CUT C(KC_X)
#define U_UND C(KC_Z)
#else
#define U_RDO KC_AGIN
#define U_PST S(KC_INS)
#define U_CPY C(KC_INS)
#define U_CUT S(KC_DEL)
#define U_UND KC_UNDO
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
#if defined MIRYOKU_LAYERS_FLIP
  [BASE] = LAYOUT_miryoku(
  #if defined MIRYOKU_ALPHAS_COLEMAK
    KC_Q,              KC_W,              KC_F,              KC_P,              KC_G,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,
    LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_D,              KC_H,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),
    KC_Z,              ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_K,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,
    U_NP,              U_NP,              LT(FUN, KC_DEL),   LT(NUM, KC_BSPC),  LT(SYM, KC_ENT),   LT(MOUSE, KC_TAB), LT(NAV, KC_SPC),   LT(MEDIA, KC_ESC), U_NP,              U_NP
  #elif defined MIRYOKU_ALPHAS_COLEMAKDHK
    KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,
    LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_K,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),
    KC_Z,              ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,              KC_M,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,
    U_NP,              U_NP,              LT(FUN, KC_DEL),   LT(NUM, KC_BSPC),  LT(SYM, KC_ENT),   LT(MOUSE, KC_TAB), LT(NAV, KC_SPC),   LT(MEDIA, KC_ESC), U_NP,              U_NP
  #elif defined MIRYOKU_ALPHAS_DVORAK
    KC_QUOT,           KC_COMM,           KC_DOT,            KC_P,              KC_Y,              KC_F,              KC_G,              KC_C,              KC_R,              KC_L,
    LGUI_T(KC_A),      LALT_T(KC_O),      LCTL_T(KC_E),      LSFT_T(KC_U),      KC_I,              KC_D,              LSFT_T(KC_H),      LCTL_T(KC_T),      LALT_T(KC_N),      LGUI_T(KC_S),
    KC_SLSH,           ALGR_T(KC_Q),      KC_J,              KC_K,              KC_X,              KC_B,              KC_M,              KC_W,              ALGR_T(KC_V),      KC_Z,
    U_NP,              U_NP,              LT(FUN, KC_DEL),   LT(NUM, KC_BSPC),  LT(SYM, KC_ENT),   LT(MOUSE, KC_TAB), LT(NAV, KC_SPC),   LT(MEDIA, KC_ESC), U_NP,              U_NP
  #elif defined MIRYOKU_ALPHAS_HALMAK
    KC_W,              KC_L,              KC_R,              KC_B,              KC_Z,              KC_QUOT,           KC_Q,              KC_U,              KC_D,              KC_J,
    LGUI_T(KC_S),      LALT_T(KC_H),      LCTL_T(KC_N),      LSFT_T(KC_T),      KC_COMM,           KC_DOT,            LSFT_T(KC_A),      LCTL_T(KC_E),      LALT_T(KC_O),      LGUI_T(KC_I),
    KC_F,              ALGR_T(KC_M),      KC_V,              KC_C,              KC_SLSH,           KC_G,              KC_P,              KC_X,              ALGR_T(KC_K),      KC_Y,
    U_NP,              U_NP,              LT(FUN, KC_DEL),   LT(NUM, KC_BSPC),  LT(SYM, KC_ENT),   LT(MOUSE, KC_TAB), LT(NAV, KC_SPC),   LT(MEDIA, KC_ESC), U_NP,              U_NP
  #elif defined MIRYOKU_ALPHAS_WORKMAN
    KC_Q,              KC_D,              KC_R,              KC_W,              KC_B,              KC_J,              KC_F,              KC_U,              KC_P,              KC_QUOT,
    LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_H),      LSFT_T(KC_T),      KC_G,              KC_Y,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_O),      LGUI_T(KC_I),
    KC_Z,              ALGR_T(KC_X),      KC_M,              KC_C,              KC_V,              KC_K,              KC_L,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,
    U_NP,              U_NP,              LT(FUN, KC_DEL),   LT(NUM, KC_BSPC),  LT(SYM, KC_ENT),   LT(MOUSE, KC_TAB), LT(NAV, KC_SPC),   LT(MEDIA, KC_ESC), U_NP,              U_NP
  #elif defined MIRYOKU_ALPHAS_QWERTY
    KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,
    LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_D),      LSFT_T(KC_F),      KC_G,              KC_H,              LSFT_T(KC_J),      LCTL_T(KC_K),      LALT_T(KC_L),      LGUI_T(KC_QUOT),
    KC_Z,              ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,
    U_NP,              U_NP,              LT(FUN, KC_DEL),   LT(NUM, KC_BSPC),  LT(SYM, KC_ENT),   LT(MOUSE, KC_TAB), LT(NAV, KC_SPC),   LT(MEDIA, KC_ESC), U_NP,              U_NP
  #else
    KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,
    LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_M,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),
    KC_Z,              ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,              KC_K,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,
    U_NP,              U_NP,              LT(FUN, KC_DEL),   LT(NUM, KC_BSPC),  LT(SYM, KC_ENT),   LT(MOUSE, KC_TAB), LT(NAV, KC_SPC),   LT(MEDIA, KC_ESC), U_NP,              U_NP
  #endif
  ),
  #if defined MIRYOKU_NAV_INVERTEDT
  [NAV] = LAYOUT_miryoku(
    KC_PGUP, KC_HOME, KC_UP,   KC_END,  KC_INS,  U_NA,    U_NA,    U_NA,    U_NA,    RESET,
    KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_CAPS, U_NA,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    U_UND,   U_CUT,   U_CPY,   U_PST,   U_RDO,   U_NA,    U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,    U_NP,    KC_DEL,  KC_BSPC, KC_ENT,  U_NA,    U_NA,    U_NA,    U_NP,    U_NP
  ),
  [MOUSE] = LAYOUT_miryoku(
    KC_WH_U, KC_WH_L, KC_MS_U, KC_WH_R, U_NU,    U_NA,    U_NA,    U_NA,    U_NA,    RESET,
    KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, U_NU,    U_NA,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    U_UND,   U_CUT,   U_CPY,   U_PST,   U_RDO,   U_NA,    U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,    U_NP,    KC_BTN2, KC_BTN3, KC_BTN1, U_NA,    U_NA,    U_NA,    U_NP,    U_NP
  ),
  [MEDIA] = LAYOUT_miryoku(
    U_NU,    U_NU,    KC_VOLU, U_NU,    U_NU,    U_NA,    U_NA,    U_NA,    U_NA,    RESET,
    U_NU,    KC_MPRV, KC_VOLD, KC_MNXT, U_NU,    U_NA,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_TOG, U_NA,    U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,    U_NP,    KC_MUTE, KC_MPLY, KC_MSTP, U_NA,    U_NA,    U_NA,    U_NP,    U_NP
  ),
  #else
  [NAV] = LAYOUT_miryoku(
    KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_INS,  U_NA,    U_NA,    U_NA,    U_NA,    RESET,
    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_CAPS, U_NA,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    U_UND,   U_CUT,   U_CPY,   U_PST,   U_RDO,   U_NA,    U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,    U_NP,    KC_DEL,  KC_BSPC, KC_ENT,  U_NA,    U_NA,    U_NA,    U_NP,    U_NP
  ),
  [MOUSE] = LAYOUT_miryoku(
    KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, U_NU,    U_NA,    U_NA,    U_NA,    U_NA,    RESET,
    KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, U_NU,    U_NA,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    U_UND,   U_CUT,   U_CPY,   U_PST,   U_RDO,   U_NA,    U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,    U_NP,    KC_BTN2, KC_BTN3, KC_BTN1, U_NA,    U_NA,    U_NA,    U_NP,    U_NP
  ),
  [MEDIA] = LAYOUT_miryoku(
    RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_TOG, U_NA,    U_NA,    U_NA,    U_NA,    RESET,
    KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, U_NU,    U_NA,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    U_NU,    U_NU,    U_NU,    U_NU,    U_NU,    U_NA,    U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,    U_NP,    KC_MUTE, KC_MPLY, KC_MSTP, U_NA,    U_NA,    U_NA,    U_NP,    U_NP
  ),
  #endif
  [MBO] = LAYOUT_miryoku(
    U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,   U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_TRNS, KC_TRNS, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    U_NP,    U_NP,    KC_BTN2, KC_BTN3, KC_BTN1, KC_BTN1, KC_BTN3, KC_BTN2, U_NP,    U_NP
  ),
  [NUM] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    KC_EQL,  KC_4,    KC_5,    KC_6,    KC_SCLN,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    KC_BSLS, KC_1,    KC_2,    KC_3,    KC_GRV,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_MINS, KC_0,    KC_DOT,  U_NP,    U_NP
  ),
  [SYM] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    KC_PLUS, KC_DLR,  KC_PERC, KC_CIRC, KC_COLN,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    KC_PIPE, KC_EXLM, KC_AT,   KC_HASH, KC_TILD,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_UNDS, KC_LPRN, KC_RPRN, U_NP,    U_NP
  ),
  [FUN] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    KC_PSCR, KC_F7,   KC_F8,   KC_F9,   KC_F12,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    KC_SLCK, KC_F4,   KC_F5,   KC_F6,   KC_F11,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    KC_PAUS, KC_F1,   KC_F2,   KC_F3,   KC_F10,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_TAB,  KC_SPC,  KC_APP,  U_NP,    U_NP
  )
,
#else
  [BASE] = LAYOUT_miryoku(
  #if defined MIRYOKU_ALPHAS_COLEMAK
    KC_Q,              KC_W,              KC_F,              KC_P,              KC_G,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,
    LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_D,              KC_H,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),
    KC_Z,              ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_K,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,
    U_NP,              U_NP,              LT(MEDIA, KC_ESC), LT(NAV, KC_SPC),   LT(MOUSE, KC_TAB), LT(SYM, KC_ENT),   LT(NUM, KC_BSPC),  LT(FUN, KC_DEL),   U_NP,              U_NP
  #elif defined MIRYOKU_ALPHAS_COLEMAKDHK
    KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,
    LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_K,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),
    KC_Z,              ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,              KC_M,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,
    U_NP,              U_NP,              LT(MEDIA, KC_ESC), LT(NAV, KC_SPC),   LT(MOUSE, KC_TAB), LT(SYM, KC_ENT),   LT(NUM, KC_BSPC),  LT(FUN, KC_DEL),   U_NP,              U_NP
  #elif defined MIRYOKU_ALPHAS_DVORAK
    KC_QUOT,           KC_COMM,           KC_DOT,            KC_P,              KC_Y,              KC_F,              KC_G,              KC_C,              KC_R,              KC_L,
    LGUI_T(KC_A),      LALT_T(KC_O),      LCTL_T(KC_E),      LSFT_T(KC_U),      KC_I,              KC_D,              LSFT_T(KC_H),      LCTL_T(KC_T),      LALT_T(KC_N),      LGUI_T(KC_S),
    KC_SLSH,           ALGR_T(KC_Q),      KC_J,              KC_K,              KC_X,              KC_B,              KC_M,              KC_W,              ALGR_T(KC_V),      KC_Z,
    U_NP,              U_NP,              LT(MEDIA, KC_ESC), LT(NAV, KC_SPC),   LT(MOUSE, KC_TAB), LT(SYM, KC_ENT),   LT(NUM, KC_BSPC),  LT(FUN, KC_DEL),   U_NP,              U_NP
  #elif defined MIRYOKU_ALPHAS_HALMAK
    KC_W,              KC_L,              KC_R,              KC_B,              KC_Z,              KC_QUOT,           KC_Q,              KC_U,              KC_D,              KC_J,
    LGUI_T(KC_S),      LALT_T(KC_H),      LCTL_T(KC_N),      LSFT_T(KC_T),      KC_COMM,           KC_DOT,            LSFT_T(KC_A),      LCTL_T(KC_E),      LALT_T(KC_O),      LGUI_T(KC_I),
    KC_F,              ALGR_T(KC_M),      KC_V,              KC_C,              KC_SLSH,           KC_G,              KC_P,              KC_X,              ALGR_T(KC_K),      KC_Y,
    U_NP,              U_NP,              LT(MEDIA, KC_ESC), LT(NAV, KC_SPC),   LT(MOUSE, KC_TAB), LT(SYM, KC_ENT),   LT(NUM, KC_BSPC),  LT(FUN, KC_DEL),   U_NP,              U_NP
  #elif defined MIRYOKU_ALPHAS_WORKMAN
    KC_Q,              KC_D,              KC_R,              KC_W,              KC_B,              KC_J,              KC_F,              KC_U,              KC_P,              KC_QUOT,
    LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_H),      LSFT_T(KC_T),      KC_G,              KC_Y,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_O),      LGUI_T(KC_I),
    KC_Z,              ALGR_T(KC_X),      KC_M,              KC_C,              KC_V,              KC_K,              KC_L,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,
    U_NP,              U_NP,              LT(MEDIA, KC_ESC), LT(NAV, KC_SPC),   LT(MOUSE, KC_TAB), LT(SYM, KC_ENT),   LT(NUM, KC_BSPC),  LT(FUN, KC_DEL),   U_NP,              U_NP
  #elif defined MIRYOKU_ALPHAS_QWERTY
    KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,
    LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_D),      LSFT_T(KC_F),      KC_G,              KC_H,              LSFT_T(KC_J),      LCTL_T(KC_K),      LALT_T(KC_L),      LGUI_T(KC_QUOT),
    KC_Z,              ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,
    U_NP,              U_NP,              LT(MEDIA, KC_ESC), LT(NAV, KC_SPC),   LT(MOUSE, KC_TAB), LT(SYM, KC_ENT),   LT(NUM, KC_BSPC),  LT(FUN, KC_DEL),   U_NP,              U_NP
  #else
    KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,
    LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_M,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),
    KC_Z,              ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,              KC_K,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,
    U_NP,              U_NP,              LT(MEDIA, KC_ESC), LT(NAV, KC_SPC),   LT(MOUSE, KC_TAB), LT(SYM, KC_ENT),   LT(NUM, KC_BSPC),  LT(FUN, KC_DEL),   U_NP,              U_NP
  #endif
  ),
  #if defined MIRYOKU_NAV_VI
  [NAV] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_CAPS,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_INS,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_ENT,  KC_BSPC, KC_DEL,  U_NP,    U_NP
  ),
  [MOUSE] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, U_NU,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, U_NU,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_BTN1, KC_BTN3, KC_BTN2, U_NP,    U_NP
  ),
  [MEDIA] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, U_NU,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    U_NU,    U_NU,    U_NU,    U_NU,    U_NU,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_MSTP, KC_MPLY, KC_MUTE, U_NP,    U_NP
  ),
  #else
  [NAV] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_ENT,  KC_BSPC, KC_DEL,  U_NP,    U_NP
  ),
  [MOUSE] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    U_NU,    KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    U_NU,    KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_BTN1, KC_BTN3, KC_BTN2, U_NP,    U_NP
  ),
  [MEDIA] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    U_NU,    KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    U_NU,    U_NU,    U_NU,    U_NU,    U_NU,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_MSTP, KC_MPLY, KC_MUTE, U_NP,    U_NP
  ),
  #endif
  [MBO] = LAYOUT_miryoku(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_TRNS, KC_TRNS, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,   U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
    U_NP,    U_NP,    KC_BTN2, KC_BTN3, KC_BTN1, KC_BTN1, KC_BTN3, KC_BTN2, U_NP,    U_NP
  ),
  [NUM] = LAYOUT_miryoku(
    KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC, U_NA,    U_NA,    U_NA,    U_NA,    RESET,
    KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,  U_NA,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS, U_NA,    U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,    U_NP,    KC_DOT,  KC_0,    KC_MINS, U_NA,    U_NA,    U_NA,    U_NP,    U_NP
  ),
  [SYM] = LAYOUT_miryoku(
    KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, U_NA,    U_NA,    U_NA,    U_NA,    RESET,
    KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS, U_NA,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, U_NA,    U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,    U_NP,    KC_LPRN, KC_RPRN, KC_UNDS, U_NA,    U_NA,    U_NA,    U_NP,    U_NP
  ),
  [FUN] = LAYOUT_miryoku(
    KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR, U_NA,    U_NA,    U_NA,    U_NA,    RESET,
    KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SLCK, U_NA,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS, U_NA,    U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,    U_NP,    KC_APP,  KC_SPC,  KC_TAB,  U_NA,    U_NA,    U_NA,    U_NP,    U_NP
  )
#endif
};

#ifdef OLED_DRIVER_ENABLE
#include <stdio.h>

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master()) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return rotation;
}

void oled_render_layer_state(void) {
    oled_write_P(PSTR("Layer: "), false);
    switch (get_highest_layer(layer_state)) {
        case BASE:
            oled_write_ln_P(PSTR("BASE"), false);
            break;
        case MBO:
            oled_write_ln_P(PSTR("MBO"), false);
            break;
        case MEDIA:
            oled_write_ln_P(PSTR("MEDIA"), false);
            break;
        case NAV:
            oled_write_ln_P(PSTR("NAV"), false);
            break;
        case MOUSE:
            oled_write_ln_P(PSTR("MOUSE"), false);
            break;
        case SYM:
            oled_write_ln_P(PSTR("SYM"), false);
            break;
        case NUM:
            oled_write_ln_P(PSTR("NUM"), false);
            break;
        case FUN:
            oled_write_ln_P(PSTR("FUN"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undefined"), false);
    }
}


char keylog_str[24] = {};

const char code_to_name[60] = {
    ' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
    'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\',
    '#', ';', '\'', '`', ',', '.', '/', ' ', ' ', ' '};

void set_keylog(uint16_t keycode, keyrecord_t *record) {
  char name = ' ';
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) ||
        (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) { keycode = keycode & 0xFF; }
  if (keycode < 60) {
    name = code_to_name[keycode];
  }

  // update keylog
  snprintf(keylog_str, sizeof(keylog_str), "%dx%d, k%2d : %c",
           record->event.key.row, record->event.key.col,
           keycode, name);
}

void oled_render_keylog(void) {
    oled_write(keylog_str, false);
}

void render_bootmagic_status(bool status) {
    /* Show Ctrl-Gui Swap options */
    static const char PROGMEM logo[][2][3] = {
        {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
        {{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
    };
    if (status) {
        oled_write_ln_P(logo[0][0], false);
        oled_write_ln_P(logo[0][1], false);
    } else {
        oled_write_ln_P(logo[1][0], false);
        oled_write_ln_P(logo[1][1], false);
    }
}

void oled_render_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}

void oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_render_layer_state();
        oled_render_keylog();
    } else {
        oled_render_logo();
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    set_keylog(keycode, record);
  }
  return true;
}
#endif // OLED_DRIVER_ENABLE