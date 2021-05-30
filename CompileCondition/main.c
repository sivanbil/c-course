//
// Created by sivan on 2021/5/30.
// #ifndef
// #ifdef
// #if
//
#include <stdio.h>

#define DEBUG
void dump(char *message) {
#ifdef DEBUG
    puts(message);
#endif
}

int main() {
    dump("main start\n");

    printf("Hello world\n");

    printf("__STDC_VERSION:%ld\n", __STDC_VERSION__);
#if __STDC_VERSION__ == 201112
    puts("C11");
#elif __STDC_VERSION__ >= 19901
    puts("C99");
#else
    puts("maybe C90?");
#endif

    dump("main end\n");
    return 0;
}
