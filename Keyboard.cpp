#include "Keyboard.hpp"

/**
 * Constructor
 */
Keyboard::Keyboard(void) {
    this->status = 0;
}

/**
 * Open the device and saves the file descriptor
 */
void Keyboard::init() {

    this->descriptor = open(DEVICE, O_NOCTTY);

    if (this->descriptor == ERROR) {
        perror("Error opening device...");
    }

}

/**
 * Close the device's file descriptor
 */
void Keyboard::deinit() {

    if (close(this->descriptor) == ERROR) {
        perror("Error closing device...");
    }

}

/**
 * Turn On the led
 */
void Keyboard::turnOn(void) {

    this->descriptor = ::open(DEVICE, O_NOCTTY);

    if (ioctl(this->descriptor, KDSKBLED, LED) == ERROR) {
        perror("Error turning on...");
        return;
    }

}

/**
 * Get the led status and saves it at <status>
 */
void Keyboard::getStatus() {

    if (ioctl(this->descriptor, KDGKBLED, &this->status) == ERROR) {
        perror("Error getting status...");
        return;
    }

}
