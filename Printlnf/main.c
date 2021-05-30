//
// Created by sivan on 2021/5/30.
//
#include "main.h"
#include "../include/io_utils.h"

void Printlnf(const char* format, ...) {
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    printf("\n");
    va_end(args);
}
// use macro function
//#define PRINTLNF(format, ...) printf(format"\n", ##__VA_ARGS__)
//#define PRINTLNF(format, ...) printf(format"\n", ##__VA_ARGS__)
//
//#define PRINT_INT(value)

int main(void) {
    char array_char[5] = {[2] = 'a', 'b', 'c'};
    for (int i = 0; i < 5; ++i) {
        PRINT_CHAR(array_char[i]);
    }
    int value = 2;
    Printlnf("hello world %d", value);
    PRINTLNF("hello world %d", value);
    PRINT_INT(2);
    PRINT_DOUBLE(2.0);
    return 0;
}
