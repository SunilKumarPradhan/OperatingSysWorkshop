#include <stdio.h>

int main() {
    int m, n;
    int count=0;
    for (m = 9; m > 0; --m) {
        for (n = 6; n > 1; --n) {
            count++;
            printf(" %d #########\n",count);
        }
    }

    return 0;
}
