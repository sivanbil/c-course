//
// Created by sivan on 2021/6/1.
//

#include "main.h"

int main() {
    int value_int = 2;

    int other_value_int = 4;

    int *p = &value_int;
    // Read from back to front

    // Read-only pointer points to a variable
    int *const pp = &value_int;

    // The pointer points to a read-only variable
    int const *ppp = &value_int;

    // The pointer can point to another address
    ppp = &other_value_int;

    PRINT_INT(*ppp);

    PRINT_INT(*pp);

    PRINT_INT(*p);

    PRINT_HEX(p);

    {
        int array[] = {0, 2, 4, 6, 8, 10};

        int *p = array;
        // 指针做加减运算，相当于是移位
        PRINT_INT(*(p + 3));
        PRINT_INT(*(array + 3));
        PRINT_INT(p[3]);
        PRINT_INT(array[3]);
    }

    return 0;
}