#include <stdio.h>

int main() {
    int x = 2, y = 3, z = 4;
    int x1;
    
    x *= -2 * (y + z) / 3;
    x1 = x * -2 * (y + z) / 3;
    
    printf("The value of the expression is: %d\n", x);
    printf("The value of the expression is: %d\n", x1);
    
    return 0;
}
