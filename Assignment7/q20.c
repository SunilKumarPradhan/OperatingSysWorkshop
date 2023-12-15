#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int *p = (int *)malloc(sizeof(int));

    *p = 100;

     p = (int *)realloc(p, 5 * sizeof(int));

    for (i = 0; i < 5; i++) {
        scanf("%d", p + i); /* 10, 20, 30, 40, 50 */
    }

    for (i = 0; i < 5; i++) {
        printf("%d...%d\n", p[i], *(p + i));
    }

    return 0;
}

