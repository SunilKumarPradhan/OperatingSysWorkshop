#include <stdio.h>

int main() {
    int arr1[] = {10, 13, 20, 33, 44};
    double arr2[] = {10.2, 13.3, 20.0, 33.3, 45.3, 89.9};

    printf("Values in arr1:\n");
    for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
        printf("Value: %d, Address: %p\n", arr1[i], (void *)&arr1[i]);
    }

    printf("\nValues in arr2:\n");
    for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++) {
        printf("Value: %.1f, Address: %p\n", arr2[i], (void *)&arr2[i]);
    }

    return 0;
}

