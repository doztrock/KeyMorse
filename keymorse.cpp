#include <stdlib.h>
#include <string>
#include "Keyboard.hpp"
#include "morse.hpp"

int main(void) {

    std::string message;

    Keyboard keyboard;
    keyboard.init();

    std::cout << "Write a message to convert into Morse: " << std::endl;

    std::getline(std::cin, message);
    text2morse(message, keyboard);

    keyboard.deinit();

    return EXIT_SUCCESS;
}