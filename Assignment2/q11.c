#include <stdio.h>

int main() {
    int x;

    printf("Enter x: ");
    scanf("%d", &x);

    if (x == 10) {
        printf("x is 10\n");
        printf("Differentiate: == and =\n");
    } else {
        printf("Simply incorrect results\n");
    }

    return 0;
}
