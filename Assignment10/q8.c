#include <stdio.h>

void f(int *ptr, int size) {
    printf("Elements of the sub-array:\n");
    for (int i = 0; i < size; i++) {
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }
}

int main() {
    int arname[] = {1, 2, 3, 4, 5, 6, 7};
    int start_index = 2; // Index of the starting element of the sub-array
    int *ptr = &arname[start_index]; // Equivalent statement

    // Function call with the pointer to the third element of the array
    f(ptr, sizeof(arname) / sizeof(arname[0]) - start_index);

    return 0;
}
