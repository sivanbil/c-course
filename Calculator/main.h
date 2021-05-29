//
// Created by sivan on 2021/5/29.
//
#include "stdio.h"
#ifndef C_COURSE_MAIN_H
#define C_COURSE_MAIN_H

#endif //C_COURSE_MAIN_H

#ifndef MATH_OPERATOR
#define MATH_OPERATOR 1

#define MATH_OPERATOR_ADD '+'
#define MATH_OPERATOR_MINUS '-'
#define MATH_OPERATOR_MULTIPLE '*'
#define MATH_OPERATOR_DIVIDE '/'
#define MATH_OPERATOR_MOD '%'

#endif


__BEGIN_DECLS
/**
 * OPERATOR
 * @param left
 * @param right
 * @param operator
 * @return
 */
int Calculator(int left, int right, char operator);

/**
 * plus two numbers
 * @param a
 * @param b
 * @return
 */
int Add(int a, int b);

/**
 *
 * @param a
 * @param b
 * @return
 */
int Minus(int a, int b);

/**
 *
 * @param a
 * @param b
 * @return
 */
int Multiple(int a, int b);

/**
 * divide
 * @param a
 * @param b
 * @return
 */
int Divide(int a, int b);

/**
 * mod
 * @param a
 * @param b
 * @return
 */
int Mod(int a, int b);

__END_DECLS

int Calculator(int left, int right, char operator) {
    int result = 0;
    switch (operator) {
        case MATH_OPERATOR_MINUS:
            result = Minus(left, right);
            break;
        case MATH_OPERATOR_MULTIPLE:
            result = Multiple(left, right);
            break;
        case MATH_OPERATOR_DIVIDE:
            result = Divide(left, right);
            break;
        case MATH_OPERATOR_MOD:
            result = Mod(left, right);
            break;
        case MATH_OPERATOR_ADD:
        default:
            result = Add(left, right);
            break;
    }
    return result;
}

int Multiple(int a, int b) {
    return a * b;
}

int Mod(int a, int b) {
    return a % b;
}

int Minus(int a, int b) {
    return a - b;
}

int Divide(int a, int b) {
    return a / b;
}

int Add(int a, int b) {
    return a + b;
}

