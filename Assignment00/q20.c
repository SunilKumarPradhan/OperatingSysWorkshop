#include <stdio.h>

int main() {
    char line[] = "lower-case";

    // Output with various flags and format specifiers
    printf(":%15s: :%15.5s: :%.5s:\n", line, line, line);
    printf(":%-15s: :%-15.5s: :%-.5s:\n", line, line, line);

    return 0;
}
