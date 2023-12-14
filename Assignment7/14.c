#include<stdio.h>

int *fun();

int *fun() {
    int a = 10, b = 20;
    int sum = 0;
    sum = sum + a + b;

    // Returning the address of a local variable, which is not safe
    // The memory associated with sum will be deallocated once the function exits
    return &sum;
}

int main(void) {
    int *ptr;

    // Calling fun and assigning the returned pointer to ptr
    ptr = fun();

    // Dereferencing ptr, which may lead to undefined behavior
    printf("%d\n", *ptr);

    return 0;
}

