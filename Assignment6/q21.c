#include <stdio.h>

void sub() {
    float x = 17.1;
    char code = 'g';
    int many = 14;

    float *valp = &x;
    char *letp = &code;
    int *countp = &many;

    printf("Values: %f %c %d\n", x, code, many);
}

int main() {
    float x = 17.1;
    char code = 'g';
    int many = 14;

    float *valp = &x;
    char *letp = &code;
    int *countp = &many;

    sub();

    return 0;
}

