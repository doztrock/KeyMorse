#include <unistd.h>
#include <stdlib.h>
#include "../Keyboard.hpp"
#include "../morse.hpp"

int main(void) {

    Keyboard keyboard;

    keyboard.init();

    text2morse("LOVE", keyboard);

    keyboard.deinit();

    return EXIT_SUCCESS;
}