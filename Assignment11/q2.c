#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "ITER-IBCS-SOA-IDS-SUM-CSE"; // Sample input string
    char str2[] = "iter ibcs soa ids sum"; // Another sample input string
    char delimiters[] = "- "; // Delimiters for tokenizing, including '-' and ' '

    char *token;
    int count = 0;

    printf("String 1:\n");
    printf("Original String: %s\n", str1);

    token = strtok(str1, delimiters); // Get the first token
    while (token != NULL) {
        printf("Token %d: %s\n", ++count, token);
        token = strtok(NULL, delimiters); // Get the next token
    }

    printf("Total tokens in String 1: %d\n", count);

    printf("\nString 2:\n");
    printf("Original String: %s\n", str2);

    count = 0; // Reset count for the second string

    token = strtok(str2, delimiters); // Get the first token
    while (token != NULL) {
        printf("Token %d: %s\n", ++count, token);
        token = strtok(NULL, delimiters); // Get the next token
    }

    printf("Total tokens in String 2: %d\n", count);

    return 0;
}
