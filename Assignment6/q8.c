/*Create a program with a pointer pointing to an array and display the address and value of each element of the given integer array a.*/

#include <stdio.h>

int main() {
    int a[] = {0,10,20,30,40,50,60,70,80,90};
    int *p = a;

    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        printf("Address of a[%d]: %p\n", i, p + i);
        printf("Value of a[%d]: %d\n", i, *(p + i));
    }

    return 0;
}
