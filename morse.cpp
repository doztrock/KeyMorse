#include "morse.hpp"

/**
 * Blink the Led as a Dot
 */
void dot(Keyboard keyboard) {
    keyboard.turnOn();
    usleep(DOT_DURATION);
    keyboard.turnOff();
    usleep(PAUSE_BETWEEN_CHARACTER);
}

/**
 * Blink the Led as a Dash
 */
void dash(Keyboard keyboard) {
    keyboard.turnOn();
    usleep(DASH_DURATION);
    keyboard.turnOff();
    usleep(PAUSE_BETWEEN_CHARACTER);
}

/**
 * Convert the text to array with DOT and DASH elements.
 */
void text2morse(std::string text) {

    char letter;
    int buffer[MAX_CHARACTER_LENGTH];

    for (int index = 0; index < text.size(); index++) {

        letter = text.at(index);

        std::cout << "Writing letter " << letter << "..." << std::endl;

        getMorseLetter(letter, buffer);

    }

    std::cout << buffer[0] << std::endl;
    std::cout << buffer[0] << std::endl;
    std::cout << buffer[0] << std::endl;
    std::cout << buffer[0] << std::endl;


}

void getMorseLetter(char letter, int buffer[MAX_CHARACTER_LENGTH]) {

    int index = getLetterIndexHumanAlphabet(letter);

    if (index != ERROR) {
        buffer = ALPHABET_MORSE[index];
    }

}

int getLetterIndexHumanAlphabet(char letter) {

    for (int index = 0; index < ALPHABET_SIZE; index++) {

        if (letter == ALPHABET[index]) {
            return index;
        }

    }

    return ERROR;
}