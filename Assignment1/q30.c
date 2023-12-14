#include <stdio.h>

int main() {
    int i = 2, j = 2;
    int k = i ^ j & i;
    printf("%d\n", k);

    return 0;
}
