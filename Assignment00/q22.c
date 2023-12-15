#include <stdio.h>

int main() {
    // Original program using %c
    printf("Original program using %%c:\n");
    char char1, char2, char3;

    // Reading three characters using %c format specifier
    printf("Enter three characters: ");
    scanf(" %c %c %c", &char1, &char2, &char3);

    // Displaying the characters using %c format specifier
    printf("You entered: %c %c %c\n", char1, char2, char3);

    // Redesigned program using %s
    printf("\nRedesigned program using %%s:\n");
    char str[4]; // Array to store three characters and the null terminator

    // Reading three characters using %s format specifier
    printf("Enter three characters: ");
    scanf(" %3s", str);

   
    printf("You entered: %s\n", str);

    return 0;
}
