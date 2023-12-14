/* Three Pointers pointing to three integers a,b,cand incrementing their value by 10*/

#include <stdio.h>

int main() {
    int a = 12;
    int b = 52;
    int c = 8;

    int *ptr1 = &a;
    int *ptr2 = &b;
    int *ptr3 = &c;

    *ptr1 += 10;
    *ptr2 += 10;
    *ptr3 += 10;

    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);

    return 0;
}