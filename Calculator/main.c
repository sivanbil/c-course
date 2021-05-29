//
// Created by sivan on 2021/5/29.
//

#include "main.h"

int main() {
    int left = 0;
    int right = 0;
    char operator;

    int times = 0;
    while(times <= 10) {
        puts("please enter expression like '1 + 2':");
        scanf("%d %c %d", &left, &operator, &right);

        printf("The result is: %d\n", Calculator(left, right, operator));
    }
}
