#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr; // Pointer to the beginning of the integer array

    int n = 2; // Scalar value

    // Print the values using pointer arithmetic (p + n)
    printf("Values after moving the pointer forward by %d elements:\n", n);
    for (int i = 0; i < 3; i++) {
        printf("%d ", *(p + n + i)); // Access elements after moving the pointer forward by n elements
    }
    printf("\n");

    return 0;
}
