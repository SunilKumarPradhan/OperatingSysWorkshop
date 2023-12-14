#include <stdio.h>

int main() {
    int a = 0x80ec;
    float b = 0.3e-12;

    // Output with uppercase conversion characters
    printf(":%#4x: :%#10.2e:\n", a, b);
    printf(":%#4X :%#10.2E:\n", a, b);

    return 0;
}
