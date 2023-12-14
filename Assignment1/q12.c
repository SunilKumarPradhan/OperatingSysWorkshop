#include <stdio.h>

int main() {
    // Another way to generate the same information using casts
    printf("integer: %ld bytes\n", sizeof(int));
    printf("float: %ld bytes\n", sizeof(float));
    printf("double: %ld bytes\n", sizeof(double));
    printf("character: %ld bytes\n", sizeof(char));

    /* Same way can be used for other data types to find the size */

    return 0;
}
