#ifndef MORSE_HPP
#define MORSE_HPP

#include <vector>
#include "Keyboard.hpp"

/* Elements */
#define DOT     (1<<1)
#define DASH    (2<<1)

/* Duration */
#define DOT_DURATION    10000               //Miliseconds
#define DASH_DURATION   DOT_DURATION * 3    //Miliseconds

/* Pauses */
#define PAUSE_BETWEEN_CHARACTER 100000      //Miliseconds
#define PAUSE_BETWEEN_WORD      500000      //Miliseconds

#endif /* MORSE_HPP */
