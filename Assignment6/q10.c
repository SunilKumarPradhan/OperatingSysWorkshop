#include <stdio.h>

struct Array {
    int arr[6];
};

int main() {
    struct Array myArray = {120, 502, 118, 188, 106, 447};

    int *ptr1 = &myArray.arr[1];
    int *ptr2 = &myArray.arr[2];
    int *ptr3 = &myArray.arr[3];
    int *ptr4 = &myArray.arr[4];
    int *ptr5 = &myArray.arr[5];

    printf("Array content using pointers:\n");
    printf("Value at index 1: %d\n", *ptr1);
    printf("Value at index 2: %d\n", *ptr2);
    printf("Value at index 3: %d\n", *ptr3);
    printf("Value at index 4: %d\n", *ptr4);
    printf("Value at index 5: %d\n", *ptr5);

    return 0;
}

