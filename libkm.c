#include "libkm.h"

/**
 * Open the device an returns its file descriptor
 */
int openKeyBoard(char* keyboard) {
    return open(keyboard, O_NOCTTY);
}

