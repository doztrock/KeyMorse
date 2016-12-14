#ifndef _LIBKM
#define _LIBKM 1

#include <sys/ioctl.h>
#include <linux/kd.h>
#include <fcntl.h>
#include <stdbool.h>

#define KEYBOARD    "/dev/tty0"
#define ERROR       -1

int openKeyBoard(char *keyboard);

#endif