//
// Created by sivan on 2021/6/1.
//
#include "main.h"

int main() {
    int a;
    a = 2;

    int *p = &a;

    *p = 3;
    // 右值 就是个值，而不是storage
    int b = *p;

    int array[4] = {0};

    int *pa = array;

    *pa = 2;

    *(pa++) = 3;


    // left is storage, right is value

    return 0;
}
