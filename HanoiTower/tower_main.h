//
// Created by sivan on 2021/5/30.
//
#include <stdio.h>
#ifndef C_COURSE_MAIN_H
#define C_COURSE_MAIN_H

#endif //C_COURSE_MAIN_H
/**
 *
 * @param n
 * @param src
 * @param dest
 * @param tmp
 */
void Move(int n, char src, char dest, char tmp);

void Move(int n, char src, char dest, char tmp) {
    if (n == 0) {
        return;
    }
    else if (n == 1) printf("%c --> %c\n", src, dest);
    else {
        Move(n - 1, src, tmp, dest);
        Move(1, src, dest, tmp);
        Move(n - 1, tmp, dest, src);
    }
}
