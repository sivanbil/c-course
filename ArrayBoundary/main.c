//
// Created by sivan on 2021/5/30.
//

#include "main.h"

#define MAX_SIZE 5

int main() {
    int array[MAX_SIZE];
    PRINT_INT(array[0]);
    PRINT_INT(array[5]);
    // array[5] => array + 5
    // VAL  The length of an array can be declared as a variable. c99+ or gcc support
    int value = 2;
    int array_size_of_value[value];

    const int kSize = 5;
    int array_size_of_kSize[kSize];
    return 0;
}
