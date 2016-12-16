#include "morse.hpp"

/**
 * Blink the Led as a Dot
 */
void dot(Keyboard keyboard) {
    keyboard.turnOn();
    usleep(DOT_DURATION);
    keyboard.turnOff();
    usleep(PAUSE_BETWEEN_CHARACTER);
}

/**
 * Blink the Led as a Dash
 */
void dash(Keyboard keyboard) {
    keyboard.turnOn();
    usleep(DASH_DURATION);
    keyboard.turnOff();
    usleep(PAUSE_BETWEEN_CHARACTER);
}