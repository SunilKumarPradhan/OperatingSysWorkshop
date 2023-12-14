/*Declare two integer variable and assign values to them, and print their addresses. Additionally, Swap the contents of the variables and print their addresses after swap. State whether the addresses before and after are equal or not.*/

#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int temp;
    printf("Before swap:\n");
    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Value of b: %d\n", b);
    printf("Address of b: %p\n", &b);

    temp = a;
    a = b;
    b = temp;
    printf("\n");
    printf("After swap:\n");
    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Value of b: %d\n", b);
    printf("Address of b: %p\n", &b);

    return 0;
}


