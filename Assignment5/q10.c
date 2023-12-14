#include <stdio.h>

void mergeArrays(int arr1[], int m, int arr2[], int n, int mergedArr[]) {
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            mergedArr[k++] = arr1[i++];
        } else {
            mergedArr[k++] = arr2[j++];
        }
    }

    // Copy the remaining elements of arr1, if any
    while (i < m) {
        mergedArr[k++] = arr1[i++];
    }

    // Copy the remaining elements of arr2, if any
    while (j < n) {
        mergedArr[k++] = arr2[j++];
    }
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {12, 20, 24, 32};
    int m = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {7, 8, 65, 105};
    int n = sizeof(arr2) / sizeof(arr2[0]);

    int mergedArr[m + n];

    // Merge the sorted arrays
    mergeArrays(arr1, m, arr2, n, mergedArr);

    // Display the merged sorted array
    printf("Merged Sorted Array: ");
    displayArray(mergedArr, m + n);

    return 0;
}
