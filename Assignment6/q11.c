#include <stdio.h>

struct Array {
    int arr[6];
};

int main() {
    struct Array myArray = {120, 502, 118, 188, 106, 447};
    int *ptr = myArray.arr; // Pointer to the array

    printf("Array content using pointers:\n");
    for (int i = 0; i < 6; i++) {
        printf("Value at index %d: %d\n", i, *(ptr + i));
    }

    return 0;
}

