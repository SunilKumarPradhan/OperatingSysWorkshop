#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int *)calloc(1, sizeof(int));

    *ptr = 100; // Assign a value to the allocated memory
    printf("%d\n", *ptr); // Print the value

    ptr = (int *)realloc(ptr, 0);

    ptr = NULL;

    printf("%p\n", (void *)ptr); // Print the pointer's 
    return 0;
}
