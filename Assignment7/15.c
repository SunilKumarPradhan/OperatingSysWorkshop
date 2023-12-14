#include <stdio.h>
#include <stdlib.h>

int *fun();

int main(void) {
    int *ptr = fun();

    if (ptr != NULL) {
        printf("%d\n", *ptr);

        // Don't forget to free the allocated memory
        free(ptr);
    } else {
        printf("Memory allocation failed\n");
    }

    return 0;
}

int *fun() {
    int a = 10, b = 20;
    int *sum = (int *)malloc(sizeof(int));

    // Check if memory allocation is successful
    if (sum != NULL) {
        *sum = a + b;
    }

    return sum;
}
