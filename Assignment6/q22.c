#include <stdio.h>

void arrange(int *a, int *b) {
    if (*a > *b) {
        // Swap values if they are in the wrong order
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int num1, num2, num3, num4, num5, num6;

    // Input six integers
    printf("Enter six integers: ");
    scanf("%d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6);

    // First call to arrange function
    arrange(&num1, &num2);
    arrange(&num1, &num3);
    arrange(&num1, &num4);
    arrange(&num1, &num5);
    arrange(&num1, &num6);

    // Second call to arrange function
    arrange(&num2, &num3);
    arrange(&num2, &num4);
    arrange(&num2, &num5);
    arrange(&num2, &num6);

    // Third call to arrange function
    arrange(&num3, &num4);
    arrange(&num3, &num5);
    arrange(&num3, &num6);

    // Fourth call to arrange function
    arrange(&num4, &num5);
    arrange(&num4, &num6);

    // Fifth call to arrange function
    arrange(&num5, &num6);

    // Output the sorted numbers
    printf("Sorted numbers: %d %d %d %d %d %d\n", num1, num2, num3, num4, num5, num6);

    return 0;
}
