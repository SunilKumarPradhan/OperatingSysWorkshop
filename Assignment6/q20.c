#include <stdio.h>

void sum_n_avg(double a, double b, double c, double *sum, double *avg);

void sum_n_avg(double a, double b, double c, double *sum, double *avg) {
    *sum = a + b + c;
    *avg = *sum / 3;
}

int main() {
    double one = 10.5;
    double two = 20.7;
    double three = 15.3;
    double sum_of_3, avg_of_3;
    sum_n_avg(one, two, three, &sum_of_3, &avg_of_3);

    printf("Sum: %lf\nAverage: %lf\n", sum_of_3, avg_of_3);

    return 0;
}
