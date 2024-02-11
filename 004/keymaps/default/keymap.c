#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_7,     KC_8,     KC_9,
        KC_4,     KC_5,     KC_6,
        KC_1,     KC_2,     KC_3,
        KC_DELETE, KC_0,    KC_DOT,
        KC_MUTE, KC_MUTE,    KC_MUTE
    )
};


#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) }
};
#endif


void keyboard_post_init_user(void) {
  debug_enable=true;
  debug_matrix=true;
}
