#include <stdlib.h>
#include "Keyboard.hpp"

int main(void) {

    Keyboard keyboard;

    keyboard.init();

    keyboard.deinit();

    return EXIT_SUCCESS;
}