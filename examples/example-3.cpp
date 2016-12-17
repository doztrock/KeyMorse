/**
 * Example 3
 * 
 * Do you love the LOVE ?
 * 
 * Let's write this sweet word with the Morse code
 * 
 * With the LOVE Morse message:
 * 
 * .-.. --- ...- . (L O V E)
 * 
 */

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