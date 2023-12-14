#include <stdio.h>

int main() {
    int ivar = 1234;

    // Output using * as minimum field width
    printf(":%.*d:\n", 7, ivar);
    printf(":%-.*d:\n", 7, ivar);

    return 0;
}
