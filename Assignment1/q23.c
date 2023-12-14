#include <stdio.h>

int main() {
    // Given variables
    int A, B, num, xy, f, t, p, q, r;
    
    // (1) A = 10 + (num = 2) * 3;
    A = 10 + (num = 2) * 3;
    printf("(1) Result: A = %d, num = %d\n", A, num);

    // Reset variables for the next expression
    A = 0;
    
    // (2) B += (xy *= 3); [here xy = 10]
    xy = 10;
    B += (xy *= 3);
    printf("(2) Result: B = %d, xy = %d\n", B, xy);

    // Reset variables for the next expression
    B = xy = 0;

    // (3) x += (f = (t *= 20)); [here x = 20, t = 10]
    int x = 20;
    t = 10;
    x += (f = (t *= 20));
    printf("(3) Result: x = %d, f = %d, t = %d\n", x, f, t);

    // Reset variables for the next expression
    x = f = t = 0;

    // (4) p = q = r = 100;
    p = q = r = 100;
    printf("(4) Result: p = %d, q = %d, r = %d\n", p, q, r);

    return 0;
}
