/*Two pointers are pointing to different variables. Write the C statement to find the greater between a,
and b using pointer manipulation.*/

#include <stdio.h>

int main() {
    int a = 52;
    int b = 18;

    int *ptr1 = &a;
    int *ptr2 = &b;

    if (*ptr1 > *ptr2) {
        printf("a is greater than b\n");
    } else {
        printf("b is greater than a\n");
    }

    return 0;
}
