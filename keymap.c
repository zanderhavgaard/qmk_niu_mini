#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Layer 0
     * ,-----------------------------------------------------------------------------------.
     * | Esc  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * | Tab  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  '   |
     * |------+------+------+------+------+------|------+------+------+------+------+------|
     * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |  /   |Enter |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * | Ctrl |Super | Alt  |Super |Layer1|    Space    |Layer2| LEFT | DOWN |  UP  |Right |
     * `-----------------------------------------------------------------------------------'
     */
    [0] = LAYOUT_planck_mit(
        KC_ESC,   KC_Q,    KC_W,    KC_E,    KC_R,  KC_T,   KC_Y,   KC_U,  KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_TAB,   KC_A,    KC_S,    KC_D,    KC_F,  KC_G,   KC_H,   KC_J,  KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,  KC_B,   KC_N,   KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
        KC_LCTRL, KC_LGUI, KC_LALT, KC_LGUI, MO(1),     KC_SPC,     MO(2), KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT
    ),

    /* Layer 1 -> Lower
     * ,-----------------------------------------------------------------------------------.
     * |      |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |      |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * |      | Vol- | Vol+ | Mute |      |      | HOME |PAGEDW|PAGEUP| END  | F11  | F12  |
     * |------+------+------+------+------+------|------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      |      |      |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * | Reset|      |      |      |      |  Backspace  |      |      |      |      |      |
     * `-----------------------------------------------------------------------------------'
     */
    [1] = LAYOUT_planck_mit(
        _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
        _______, KC_VOLD, KC_VOLU, KC_MUTE, _______, _______, KC_HOME,  KC_PGDN, KC_PGUP, KC_END,  KC_F11,  KC_F12,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,
        RESET,   _______, _______, _______, _______,     KC_BSPC,      _______, _______, _______, _______,  _______
    ),

    /* Layer 2  -> Raise
     * ,-----------------------------------------------------------------------------------.
     * |      |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | DEL  |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * | TAB  |r_TOG |r_Mode|r_Hue+|r_Hue-|      |  `   |   -  |   =  |   [  |   ]  |  \   |
     * |------+------+------+------+------+------|------+------+------+------+------+------|
     * |      |BL_TOG|BL_STEP|     |      |      |      |      |      |      |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      |      |      |      |      |
     * `-----------------------------------------------------------------------------------'
     */
    [2] = LAYOUT_planck_mit(
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,   KC_DEL,
        KC_TAB,  RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, _______, KC_GRV, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
        _______, BL_TOGG, BL_STEP, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,     _______,      _______, _______, _______, _______, _______
    )
};


void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}

void led_set_user(uint8_t usb_led) {

    if (IS_LED_ON(usb_led, USB_LED_NUM_LOCK)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_CAPS_LOCK)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_SCROLL_LOCK)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_COMPOSE)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_KANA)) {

    } else {

    }

}
