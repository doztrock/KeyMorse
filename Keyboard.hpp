#ifndef KEYBOARD_HPP
#define KEYBOARD_HPP

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <linux/kd.h>

#define DEVICE      "/dev/tty0"
#define LED         K_CAPSLOCK          //Caps Lock Led

//Error Code
#ifndef ERROR
#define ERROR       ~(0)
#endif

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

};

#endif /* KEYBOARD_HPP */

