#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[] = "Sample String with 123 Numbers and Punctuation!";

    char *token, *saveptr;
    int total_alpha = 0, upper_alpha = 0, lower_alpha = 0, digits = 0, puncts = 0, spaces = 0;

    token = strtok_r(str, " ", &saveptr); // Tokenize by space

    while (token != NULL) {
        while (*token != '\0') {
            if (isalpha(*token)) {
                total_alpha++;
                if (isupper(*token))
                    upper_alpha++;
                else
                    lower_alpha++;
            } else if (isdigit(*token)) {
                digits++;
            } else if (ispunct(*token)) {
                puncts++;
            } else if (isspace(*token)) {
                spaces++;
            }
            token++;
        }
        token = strtok_r(NULL, " ", &saveptr);
    }

    printf("Total Alphabets: %d\n", total_alpha);
    printf("Uppercase Alphabets: %d\n", upper_alpha);
    printf("Lowercase Alphabets: %d\n", lower_alpha);
    printf("Digits: %d\n", digits);
    printf("Punctuation Symbols: %d\n", puncts);
    printf("Spaces: %d\n", spaces);

    return 0;
}
