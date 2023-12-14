#include <stdio.h>

#define SIZE 6

int main() {
    int square[SIZE], i;

    for (i = 0; i < SIZE; i++) {
        square[i] = i * i;
    }

    // Print the values of the square array
    for (i = 0; i < SIZE; i++) {
        printf("square[%d] = %d\n", i, square[i]);
    }

    return 0;
}
