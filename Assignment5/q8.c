#include <stdio.h>

void addArrays(const int arr1[], const int arr2[], int result[], int size) {
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] + arr2[i];
    }
}

int main() {
    // Example arrays
    int arr1[] = {5, -1, 7};
    int arr2[] = {2, 4, -2};

    // Calculate the size of the arrays
    int size = sizeof(arr1) / sizeof(arr1[0]);

    // Initialize the result array
    int result[size];

    // Call the function to add arrays
    addArrays(arr1, arr2, result, size);

    // Display the result
    printf("Result array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
