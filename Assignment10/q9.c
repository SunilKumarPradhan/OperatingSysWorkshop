#include <stdio.h>

// Using a pointer to an integer array
int f(int *a, int n, float y) {
    // Function body using pointer to an integer array
    printf("Using pointer to an integer array\n");
    // Example: accessing elements using pointer notation
    for (int i = 0; i < n; i++) {
        printf("a[%d] = %d\n", i, *(a + i));
    }
    // Other function logic using the pointer a
    return 0;
}

// Using an array of integers (Note: It's functionally equivalent to using a pointer)
int g(int a[], int n, float y) {
    // Function body using array of integers
    printf("\nUsing array of integers\n");
    // Example: accessing elements using array notation
    for (int i = 0; i < n; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
    // Other function logic using the array a
    return 0;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    float value = 10.5;

    // Calling function f with a pointer to an integer array
    f(arr, size, value);

    // Calling function g with an array of integers
    g(arr, size, value);

    return 0;
}
