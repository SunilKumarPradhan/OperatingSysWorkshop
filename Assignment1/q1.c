#include <stdio.h>

int main() {
    float a = 1.0;
    float b = 2.0;
    float c = 3.0;
    float d = 4.0;

    float result = a - (b / c) * d;

    printf("The value of the expression is: %f\n", result);

    return 0;
}
