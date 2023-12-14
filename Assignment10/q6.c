#include <stdio.h>

int main() {
    int a[10];
    int *pa;

    pa = a; // Legal: Assigning the address of array 'a' to pointer 'pa'
    pa = &a[0]; // Legal: Equivalent to pa = a;

    pa++; // Legal: Moves the pointer 'pa' to the next element in the array 'a'

    // Illegal: Cannot assign an array directly to a pointer or increment the entire array
    // a = pa;
    // a++;

    printf("pa[2] = %d\n", pa[2]); // Legal: Accessing value using array notation with pointer 'pa'
    printf("*(pa + 2) = %d\n", *(pa + 2)); // Legal: Accessing value using pointer arithmetic

    printf("&a[2] = %p\n", &a[2]); // Legal: Prints the address of the third element of array 'a'
    printf("(a + 2) = %p\n", (a + 2)); // Legal: Prints the address calculated with pointer arithmetic

    return 0;
}
