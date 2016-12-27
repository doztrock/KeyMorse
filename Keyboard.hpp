#ifndef KEYBOARD_HPP
#define KEYBOARD_HPP

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <linux/kd.h>

#define DEVICE      "/dev/tty0"
#define LED         K_SCROLLLOCK           //Num Lock Led

//Error Code
#ifndef ERROR
#define ERROR       ~(0)
#endif

class Keyboard {
private:

    int descriptor;
    int status;
    void getStatus(void);

    //Special
    void turnOnScrollLock(void);
    void turnOffScrollLock(void);

public:

    Keyboard();

    void init(void);
    void deinit(void);

    void turnOn(void);
    void turnOff(void);

};

#endif /* KEYBOARD_HPP */

