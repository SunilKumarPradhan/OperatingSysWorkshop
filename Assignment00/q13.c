#include <stdio.h>

int main() {
    int ivar = 1234;

    // Output using * as minimum field width and precision
    printf(":%*.*d:\n", 13, 7, ivar);
    printf(":%-*.*d:\n", 13, 7, ivar);

    return 0;
}
