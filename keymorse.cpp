#include <stdlib.h>
#include "Keyboard.hpp"
#include "morse.hpp"

int main(void) {

    Keyboard keyboard;

    keyboard.init();

    keyboard.deinit();

    return EXIT_SUCCESS;
}