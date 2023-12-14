#include <stdio.h>

int main() {
    int a[] = {2, 4, 6, 8, 10};
    int sum = 0, i, *b = a + 4; // `b` points to the last element of the array

    for (i = 0; i < 5; i++) {
        // Calculate the sum using differences between elements and their indices
        sum = sum + (*b - i) - *(b - i);
    }

    printf("Sum = %d\n", sum);
    return 0;
}
