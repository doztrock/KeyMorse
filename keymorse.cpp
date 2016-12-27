#include <stdlib.h>
#include <string>
#include "Keyboard.hpp"
#include "morse.hpp"

#define ROOT_UID    0

int main(void) {

    /**
     * Check IF root
     */
    uid_t uid = getuid();

    if (uid != ROOT_UID) {
        std::cout << "Hey! You need to be root to use this program." << std::endl;
        return EXIT_SUCCESS;
    }

    std::string message;

    Keyboard keyboard;
    keyboard.init();

    std::cout << "Write a message to convert into Morse: " << std::endl;

    std::getline(std::cin, message);
    text2morse(message, keyboard);

    keyboard.deinit();

    return EXIT_SUCCESS;
}