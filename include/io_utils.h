//
// Created by sivan on 2021/5/30.
//

#ifndef C_COURSE_IO_UTILS_H
#define C_COURSE_IO_UTILS_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

#define PRINT_METADATA
#ifdef PRINT_METADATA
# define PRINTLNF(format, ...) printf("("__FILE__":%d) %s:"format"\n", __LINE__, __FUNCTION__, ##__VA_ARGS__)
#else
# define PRINTLNF(format, ...) printf(format"\n", ##__VA_ARGS__)
#endif

#define PRINT_CHAR(char_value) PRINTLNF(#char_value": %c", char_value)

#define PRINT_WCHAR(char_value) PRINTLNF(#char_value": %lc", char_value)

#define PRINT_INT(int_value) PRINTLNF(#int_value": %d", int_value)

#define PRINT_HEX(int_value) PRINTLNF(#int_value": %#x", int_value)

#define PRINT_DOUBLE(double_value) PRINTLNF(#double_value": %lf", double_value)

#endif //C_COURSE_IO_UTILS_H
