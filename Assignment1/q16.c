#include <stdio.h>

int main() {
    int i = -5;
    int flag = (i < 0) ? 0 : 100;
    printf("When i = -5, flag = %d\n", flag);

    i = -6;
    flag = (i < 0) ? 0 : 100;
    printf("When i = -6, flag = %d\n", flag);

    return 0;
}
