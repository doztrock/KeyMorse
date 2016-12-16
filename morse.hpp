#ifndef MORSE_HPP
#define MORSE_HPP

#include <iostream>
#include <unistd.h>
#include <string>
#include "Keyboard.hpp"

//Error Code
#ifndef ERROR
#define ERROR       ~(0)
#endif

/* Elements */
#define DOT     (1<<1)
#define DASH    (2<<1)

/* Duration */
#define DOT_DURATION    300000              //Miliseconds
#define DASH_DURATION   DOT_DURATION * 3    //Miliseconds

/* Pauses */
#define PAUSE_BETWEEN_CHARACTER 100000      //Miliseconds
#define PAUSE_BETWEEN_WORD      500000      //Miliseconds

/* Alphabet */
#define ALPHABET_SIZE           36
#define MAX_CHARACTER_LENGTH    5

/**
 * Morse Alphabet
 */
int ALPHABET_MORSE[ALPHABET_SIZE][MAX_CHARACTER_LENGTH] = {
    {DOT, DASH}, //A
    {DASH, DOT, DOT, DOT}, //B
    {DASH, DOT, DASH, DOT}, //C
    {DASH, DOT, DOT}, //D
    {DOT}, //E
    {DOT, DOT, DASH, DOT}, //F
    {DASH, DASH, DOT}, //G
    {DOT, DOT, DOT, DOT}, //H
    {DOT, DOT}, //I
    {DOT, DASH, DASH, DASH}, //J
    {DASH, DOT, DASH}, //K
    {DOT, DASH, DOT, DOT}, //L
    {DASH, DASH}, //M
    {DASH, DOT}, //N
    {DASH, DASH, DASH}, //O
    {DOT, DASH, DASH, DOT}, //P
    {DASH, DASH, DOT, DASH}, //Q
    {DOT, DASH, DOT}, //R
    {DOT, DOT, DOT}, //S
    {DASH}, //T
    {DOT, DOT, DASH}, //U
    {DOT, DOT, DOT, DASH}, //V
    {DOT, DASH, DASH}, //W
    {DASH, DOT, DOT, DASH}, //X
    {DASH, DOT, DASH, DASH}, //Y
    {DASH, DASH, DOT, DOT}, //Z
    {DOT, DASH, DASH, DASH}, //1
    {DOT, DOT, DASH, DASH, DASH}, //2
    {DOT, DOT, DOT, DASH, DASH}, //3
    {DOT, DOT, DOT, DOT, DASH}, //4
    {DOT, DOT, DOT, DOT, DOT}, //5
    {DASH, DOT, DOT, DOT, DOT}, //6
    {DASH, DASH, DOT, DOT, DOT}, //7
    {DASH, DASH, DASH, DOT, DOT}, //8
    {DASH, DASH, DASH, DASH, DOT}, //9
    {DASH, DASH, DASH, DASH, DASH} //0
};

/**
 * Human Alphabet
 */
const char ALPHABET[ALPHABET_SIZE] = {
    'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
    'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
    'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '1',
    '2', '3', '4', '5', '6', '7', '8', '9', '0'
};

/**
 * Methods
 */
void dot(Keyboard keyboard);
void dash(Keyboard keyboard);
void text2morse(std::string text);
void getMorseLetter(char letter, int buffer[MAX_CHARACTER_LENGTH]);
int getLetterIndexHumanAlphabet(char letter);

#endif /* MORSE_HPP */
