#include <stdio.h>

int main() {
    int a[] = {10,13,20,33,44};
    float b[] = {10.2,13.3,20.0,33.3,45.3,89.9};
    int *ptr1= a;
    float *ptr2= b;

    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        printf("Address of a[%d]: %p\n", i, ptr1+ i);
        printf("Value of a[%d]: %d\n", i, *(ptr1 + i));
    }

    printf("\n");

    for (int i = 0; i < sizeof(b) / sizeof(b[0]); i++) {
        printf("Address of b[%d]: %p\n", i, ptr2 + i);
        printf("Value of b[%d]: %f\n", i, *(ptr2 + i));
    }

    return 0;
}