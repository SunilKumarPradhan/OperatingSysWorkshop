#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "TOC;;PLC,USP;";
    char delimiters[] = ",;"; // Delimiters for tokenizing

    char *token;

    token = strtok(str, delimiters); // Get the first token
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, delimiters); // Get the next token
    }

    return 0;
}
