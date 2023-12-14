#include <stdio.h>

int main() {
    int arr[4][5];
    int i, j;

    // Initialize the 2D array
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            arr[i][j] = 10 * i + j;
        }
    }

    printf("%d\n", *(arr[1] + 9));
    // arr[1] is a pointer to the second row of the array, and (arr[1] + 9) advances the pointer to the 10th element of that row.

    return 0;
}
