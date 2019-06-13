#ifndef I2CDEV_H
#define I2CDEV_H

#include <iostream>
#include <errno.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <linux/i2c-dev.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

class I2CDEV
{
public:
    I2CDEV();
    int i2c_init(char filename[], int addr);
    void i2c_set_pointer(int address, int value, int file);
    char * i2c_read(int add1, int add2, int nbytes, int file);
    void i2c_write(int add1, int add2, int nbytes, char value[], int file);
};

#endif // I2CDEV_H
