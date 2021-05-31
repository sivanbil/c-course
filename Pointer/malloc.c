//
// Created by sivan on 2021/6/1.
//
#include <stdlib.h>
#include <io_utils.h>

#define PLAYER_COUNT 10

void InitPointer(int **ptr, int length, int default_value) {
    *ptr = malloc(sizeof(int) * length);
    for (int i = 0; i < length; ++i) {
        (*ptr)[i]  = default_value;
    }
}

int main() {
    // heap mem
    int *players;
    InitPointer(&players, PLAYER_COUNT, 0);

    for (int i = 0; i < PLAYER_COUNT; ++i) {
        PRINT_INT(players[i]);
    }

    players = realloc(players, PLAYER_COUNT * 2 * sizeof(int));
    if (players) {

    } else {
        // assign mem failed
    }
    // free mem
    free(players);
    return 0;
}
