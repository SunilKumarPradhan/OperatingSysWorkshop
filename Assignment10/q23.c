#include <stdio.h>
#include <ctype.h>

int main() {
    printf("Enter a string: ");

    int ch;
    int total_alphabets = 0, uppercase = 0, lowercase = 0, digits = 0, punctuation = 0, spaces = 0;

    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (isalpha(ch)) {
            total_alphabets++;
            if (isupper(ch)) {
                uppercase++;
            } else {
                lowercase++;
            }
        } else if (isdigit(ch)) {
            digits++;
        } else if (ispunct(ch)) {
            punctuation++;
        } else if (isspace(ch)) {
            spaces++;
        }
    }

    printf("\nTotal Alphabets: %d\n", total_alphabets);
    printf("Uppercase Alphabets: %d\n", uppercase);
    printf("Lowercase Alphabets: %d\n", lowercase);
    printf("Digits: %d\n", digits);
    printf("Punctuation Symbols: %d\n", punctuation);
    printf("Spaces: %d\n", spaces);

    return 0;
}
