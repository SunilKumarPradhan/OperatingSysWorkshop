#include <stdio.h>
#include <string.h>

int main() {
    char t1[20]; // Assuming t1 has enough space to store the result
    char t2[] = "Merry Christmas";

    strncpy(t1, &t2[3], 5); // Copy 5 characters from the fourth character of t2 into t1
    t1[5] = '\0'; // Manually add a null terminator at index 5 of t1

    printf("t1 after strncpy: %s\n", t1);

    return 0;
}
