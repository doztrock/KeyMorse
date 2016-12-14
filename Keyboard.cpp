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
    close(this->descriptor);
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

    printf("%d\n", this->descriptor);
    
    this->getStatus();
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

void Keyboard::test() {
        
    int fd = open("/dev/tty0", O_NOCTTY);

    if (fd == -1){
        perror("open");
        return;
    }
    
    if (-1 == ioctl(fd, KDSKBLED, K_CAPSLOCK)){
        perror("ioctl set");
        close(fd);
        return;
    }
    
    close(fd);
    
    return;
    
}
