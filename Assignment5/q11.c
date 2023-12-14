#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int bottom = 0;
    int top = size - 1;
    int found = 0;
    int index = -1;

    while (bottom <= top && !found) {
        int middle = (bottom + top) / 2;

        if (arr[middle] == target) {
            found = 1;
            index = middle;
        } else if (arr[middle] > target) {
            top = middle - 1;
        } else {
            bottom = middle + 1;
        }
    }

    return index;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 5;

    int index = binarySearch(arr, size, target);

    if (index != -1) {
        printf("Element %d found at index %d\n", target, index);
    } else {
        printf("Element %d not found\n", target);
    }

    return 0;
}
