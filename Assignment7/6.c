#include<stdio.h>

// Recursive function to calculate the nth term of a series
int fun(int n, int *f_p) {
    int t, f;

    // Base case: if n is less than or equal to 1, set *f_p to 1 and return 1
    if (n <= 1) {
        *f_p = 1;
        return 1;
    }

    // Recursive call to calculate the (n-1)th term
    t = fun(n - 1, f_p);

    // Calculate the current term (nth term) in the series
    f = t + *f_p;

    // Update *f_p with the (n-1)th term
    *f_p = t;

    // Return the nth term
    return f;
}

int main() {
    int x = 15;

    // Print the result for n = 5
    printf("%d\n", fun(5, &x));

    return 0;
}
