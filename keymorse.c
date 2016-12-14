#include <stdio.h>
#include <stdlib.h>
#include "libkm.h"

int main(void) {

    /**
     * Let's open the device
     */
    if (openKeyBoard(KEYBOARD) == ERROR) {
        perror("Error opening device...");
        return EXIT_FAILURE;
    }



    return EXIT_SUCCESS;
}