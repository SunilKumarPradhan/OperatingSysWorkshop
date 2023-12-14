#include <stdio.h>

int main() {
    int i = 2, j = 0;
    int k = i && (j = 1);
    printf("%d\n", k);

    return 0;
}
