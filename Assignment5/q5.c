#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    // Using array subscript notation
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // Using pointer subscript notation (equivalent to array subscript notation)
    for (int i = 0; i < 10; i++)
        printf("%d ", i[arr]);
    printf("\n");

    // Using pointer arithmetic
    for (int i = 0; i < 10; i++)
        printf("%d ", *(arr + i));
    printf("\n");

    // Using array subscript notation with address-of operator
    for (int i = 0; i < 10; i++)
        printf("%d ", *(&arr[i]));
    
    return 0;
}
