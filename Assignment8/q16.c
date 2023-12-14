#include <stdio.h>

// Function to remove adjacent duplicates from a string using recursion
void removeAdjacentDuplicates(char *str) {
    if (*str == '\0') {
        return;
    }

    // If current character is same as next character, remove it
    if (*str == *(str + 1)) {
        while (*str == *(str + 1)) {
            str++;
        }
        str++;
    } else {
        printf("%c", *str);
        str++;
    }

    // Recursive call for the remaining string
    removeAdjacentDuplicates(str);
}

int main() {
    char inputString[100];

    // Get input from the user
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Remove adjacent duplicates
    printf("String after removing adjacent duplicates: ");
    removeAdjacentDuplicates(inputString);

    return 0;
}
