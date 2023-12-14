#include <stdio.h>

int main() {
    int x = 2, y = 3, z = 4;
    
    x *= -2 * (y + z) / 3;
    
    printf("The value of the expression is: %d\n", x);
    
    return 0;
}
