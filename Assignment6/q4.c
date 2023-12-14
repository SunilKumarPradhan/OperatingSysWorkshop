/*Write the C program to declare and initialize the pointer variables p1, p2 and p3 to a single int variable  and display the value of x from p1. Also update the value of x to 100 using pointer p3.*/

#include <stdio.h>

int main() {
    int x = 10;
    int *p1 = &x;
    int *p2 = &x;
    int *p3 = &x;

    printf("Value of x from p1: %d\n", *p1);
    *p3 = 100;
    printf("Value of x from p1: %d\n", *p1);

    return 0;
}