#include <stdio.h>

int main() {
    char line[] = "hexadecimal";

    // Output with minimum field width and precision for strings
    printf(":%10s: :%15s: :%15.5s: :%.5s:\n", line, line, line, line);

    return 0;
}
