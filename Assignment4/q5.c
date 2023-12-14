#include <stdio.h>

// Function prototypes
void fun2(int n);

void fun1(int n) {
    if (n == 0)
        return;
    printf("%d", n);
    fun2(n - 2);
    printf("%d", n);
}

void fun2(int n) {
    if (n == 0)
        return;
    printf("%d", n);
    fun1(++n);
    printf("%d", n);
}

int main(void) {
    int n = 5;
    fun1(n);
    return 0;
}
