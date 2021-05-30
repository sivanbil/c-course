//
// Created by sivan on 2021/5/30.
//

#include <stdio.h>

#define MAX(a, b) (a) > (b) ? (a) : (b)
/**
 * define macro function with multi lines.
 */
#define IS_HEX_CHARACTER(ch) \
((ch) >= '0' && (ch) <= '9') || \
((ch) >= 'A' && (ch) <= 'F') || \
((ch) >= 'a' && (ch) <= 'f')
int main(void) {
//    int max = MAX(1, 3);
    int max2 = MAX(1, MAX(4, 5));
    printf("max2: %d\n", max2);
    int a = IS_HEX_CHARACTER('A');
    printf("%d\n", a);
    return 0;
}