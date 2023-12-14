#include <stdio.h>

int main(void) {
    int x = 1, z[2] = {10, 11};
    int *p = NULL;

    // Point p to the address of x
    p = &x;
    *p = 10;

    // Point p to the address of z[1]
    p = &z[1];
    
    // Increase the value at the address of z[0] + 1 by 3
    *(&z[0] + 1) += 3;

    // Print the values of x, z[0], and z[1]
    printf("%d, %d, %d\n", x, z[0], z[1]);

    return 0;
}
