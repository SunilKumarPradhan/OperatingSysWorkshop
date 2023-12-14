#include<stdio.h>

void fun(int *, int *);

int main() {
    int i = 5, j = 5;
    fun(&i, &j);
    printf("%d %d\n", i, j);
    return 0;
}

void fun(int *p, int *q) {
    p = q;
    *q = 10;
}
