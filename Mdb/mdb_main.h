//
// Created by sivan on 2021/5/30.
// It is a miniature in-memory database, which can be saved or accessed.
//
#include <stdio.h>
#ifndef C_COURSE_MAIN_H
#define C_COURSE_MAIN_H
#define MAXSIZE 100
#define NULL_VALUE -1

#endif //C_COURSE_MAIN_H

/**
 * item map
 */
typedef struct CMap {
    char[] *keyStr,
    char[] value
};

/**
 * item list
 */
typedef stuct CList {
    Cmap item,
    int length,
    int cap
};

/**
 * get
 */
char[] GetMapValue(char[] *keyStr);

/**
 *
 * @return
 */
int SetMapValue(char[] keyStr, char[] value);


char[] GetMapValue(char[] keyStr) {

}

int SetMapValue(char[] keyStr, char[] value) {
    // c是如何来设置结构体里的值
    // 如何存入内存
    return 0
}
