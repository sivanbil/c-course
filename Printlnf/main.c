//
// Created by sivan on 2021/5/30.
//

#include "main.h"

void Printlnf(const char* format, ...) {
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    printf("\n");
    va_end(args);
}
// use macro function
#define PRINTLNF(format, ...) printf(format"\n", ##__VA_ARGS__)

#define PRINT_INT(value)

int main(void) {
    int value = 2;
    Printlnf("hello world %d", value);
    PRINTLNF("hello world %d", value);
    return 0;
}
