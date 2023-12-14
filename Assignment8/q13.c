#include <stdio.h>

// Function to find the sum of array elements using recursion
int sumOfArray(int arr[], int size) {
    // Base case: if the array is empty, return 0
    if (size == 0) {
        return 0;
    }

    // Recursive case: sum the current element with the sum of the rest of the array
    return arr[size - 1] + sumOfArray(arr, size - 1);
}

int main() {
    // Example array
    int array[] = {1, 2, 3, 4, 5};

    // Calculate the sum of array elements
    int sum = sumOfArray(array, sizeof(array) / sizeof(array[0]));

    // Display the result
    printf("Sum of array elements: %d\n", sum);

    return 0;
}
