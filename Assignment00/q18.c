#include <stdio.h>

int main() {
    int i = 345;
    float x = 34.0, y = -5.6;

    // Output with various format flags
    printf(":%6d: :%7.0f: :%10.1e:\n", i, x, y);
    printf(":%-6d: :%-7.0f: :%-10.1e:\n", i, x, y);
    printf(":%+6d: :%+7.0f: :%+10.1e:\n", i, x, y);
    printf(":%-+6d: :%-+7.0f: :%-+10.1e:\n", i, x, y);
    printf(":%6.0d: :%#7.0f: :%10g: :%#10g:\n", x, x, y, y);

    return 0;
}
