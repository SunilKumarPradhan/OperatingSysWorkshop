#include <stdio.h>

int fun(int n) {
    int i, j;
    int count = 0;
    
    for (i = 1; i <= n; i++) {
        for (j = 1; j < n; j++) {
            printf("%d %d\n", i, j);
            count++;
        }
    }
    return count;
}

int main() {
    int n = 5;
    int result = fun(n);
    printf("The number of times the printf() will be executed when n=%d is %d\n", n, result);
    return 0;
}
