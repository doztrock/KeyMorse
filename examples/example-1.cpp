#include <stdlib.h>
#include "../Keyboard.hpp"

int main(void) {

    Keyboard keyboard;

    keyboard.init();

    for (int i = 0; i < 100; i++) {

        if (i % 2 == 0) {
            keyboard.turnOn();
        } else {
            keyboard.turnOff();
        }

        usleep(500000);
    }

    keyboard.deinit();

    return EXIT_SUCCESS;
}