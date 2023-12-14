#include <stdio.h>

void sum_n_avg(double n1, double n2, double n3, double *sum, double *avg) {
    *sum = n1 + n2 + n3;
    *avg = *sum / 3.0;
}

int main() {
    double num1 = 10.5, num2 = 20.7, num3 = 15.3;
    double sum, avg;

    sum_n_avg(num1, num2, num3, &sum, &avg);

    printf("Input numbers: %f, %f, %f\n", num1, num2, num3);
    printf("Sum: %f\n", sum);
    printf("Average: %f\n", avg);

    return 0;
}

