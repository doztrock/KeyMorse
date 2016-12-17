/**
 * Example 2
 * 
 * HELP!!!
 * 
 * Your computer ask you for help!
 * 
 * With the SOS Morse message:
 * 
 * . . .  _ _ _  . . . (3 dots, 3 dashes, 3 dots)
 * 
 */

#include <unistd.h>
#include <stdlib.h>
#include "../Keyboard.hpp"
#include "../morse.hpp"

int main(void) {

    Keyboard keyboard;

    keyboard.init();

    // S
    dot(keyboard);
    dot(keyboard);
    dot(keyboard);

    usleep(PAUSE_BETWEEN_CHARACTER);

    // O    
    dash(keyboard);
    dash(keyboard);
    dash(keyboard);

    usleep(PAUSE_BETWEEN_CHARACTER);

    // S
    dot(keyboard);
    dot(keyboard);
    dot(keyboard);

    usleep(PAUSE_BETWEEN_WORD);

    keyboard.deinit();

    return EXIT_SUCCESS;
}