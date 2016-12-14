#include <stdlib.h>
#include "../Keyboard.hpp"

#define TIMEOUT 5 * 10          //5 Seconds
#define PAUSE   100000          //100000 Miliseconds

int main(void) {

    Keyboard keyboard;

    keyboard.init();

    for (int i = 0; i < TIMEOUT; i++) {

        if (i % 2 == 0) {
            keyboard.turnOn();
        } else {
            keyboard.turnOff();
        }

        usleep(PAUSE);
    }

    keyboard.deinit();

    return EXIT_SUCCESS;
}