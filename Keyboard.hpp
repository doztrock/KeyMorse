#ifndef KEYBOARD_HPP
#define KEYBOARD_HPP

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <linux/kd.h>

#define DEVICE      "/dev/tty0"
#define LED         K_NUMLOCK    //Caps Lock Led
#define ERROR       -1

class Keyboard {
private:

    int descriptor;
    int status;
    void getStatus(void);

public:

    Keyboard();

    void init(void);
    void deinit(void);

    void turnOn(void);
    void turnOff(void);
    
    void test(void);
};

#endif /* KEYBOARD_HPP */
