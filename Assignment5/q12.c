#include <stdio.h>

int linearSearch(const int arr[], int target, int n) {
    int found = 0;  // Flag to indicate whether the target is found
    int index = -1; // Index of the target if found

    for (int i = 0; i < n && !found; i++) {
        if (arr[i] == target) {
            found = 1;
            index = i;
        }
    }

    return index;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 5;

    int index = linearSearch(arr, target, size);

    if (index != -1) {
        printf("Element %d found at index %d\n", target, index);
    } else {
        printf("Element %d not found\n", target);
    }

    return 0;
}
