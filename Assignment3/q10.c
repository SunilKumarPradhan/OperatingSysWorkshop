#include <stdio.h>
#include <math.h>

double calculateLogApproximation(double x) {
    double sum = 0.0;

    for (int i = 1; i <= 9; i++) {
        double term = pow((x - 1) / x, i) / i;
        sum += term;
    }

    return sum;
}

int main() {
    double x;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    double result = calculateLogApproximation(x);

    printf("Approximated natural logarithm: %lf\n", result);

    return 0;
}
