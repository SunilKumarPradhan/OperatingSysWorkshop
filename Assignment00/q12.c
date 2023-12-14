#include <stdio.h>

int main() {
    int ivar = 1234;

    // Output using * as minimum field width and precision
    printf(":%*.*d:\n", 10, 4, ivar);
    printf(":%-*.*d:\n", 10, 4, ivar);

    return 0;
}
