#include "morse.hpp"

/**
 * Blink the Led as a Dot.
 */
void dot(Keyboard keyboard) {
    keyboard.turnOn();
    usleep(DOT_DURATION);
    keyboard.turnOff();
    usleep(PAUSE_BETWEEN_CHARACTER);
}

/**
 * Blink the Led as a Dash.
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
void text2morse(std::string text, Keyboard keyboard) {

    char letter;
    int indexMorse;

    for (unsigned int index = 0; index < text.size(); index++) {

        letter = text.at(index);
        indexMorse = getLetterIndexHumanAlphabet(letter);

        if (letter != ' ') {

            std::cout << "Writing letter " << letter << "..." << std::endl;
            writeMorse(ALPHABET_MORSE[indexMorse], keyboard);

            usleep(PAUSE_BETWEEN_CHARACTER);

        } else {

            std::cout << "-----------ESPACE----------" << std::endl;

            usleep(PAUSE_BETWEEN_WORD);

        }

    }

}

/**
 * Find the letter in the human alphabet and returns its index.
 */
int getLetterIndexHumanAlphabet(char letter) {

    for (int index = 0; index < ALPHABET_SIZE; index++) {

        if (letter == ALPHABET[index]) {
            return index;
        }

    }

    return ERROR;
}

/**
 * Write physically the letter in the great Morse code.
 */
void writeMorse(const int letter[MAX_CHARACTER_LENGTH], Keyboard keyboard) {

    for (int index = 0; index < MAX_CHARACTER_LENGTH; index++) {

        switch (letter[index]) {

            case DOT:
                dot(keyboard);
                break;

            case DASH:
                dash(keyboard);
                break;

        }

    }

}