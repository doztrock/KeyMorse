#include <stdlib.h>
#include "Keyboard.hpp"

int main(void) {

    Keyboard keyboard;

    keyboard.init();

    keyboard.turnOn();
    sleep(2);

    keyboard.turnOff();
    sleep(2);

    keyboard.turnOn();
    sleep(2);

    keyboard.deinit();

    return EXIT_SUCCESS;
}