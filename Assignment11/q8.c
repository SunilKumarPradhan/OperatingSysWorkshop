#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 100

int main() {
    char line[MAX_LINE_LENGTH];
    char *token, *saveptr;
    int total_words = 0;
    int total_lines = 0;

    printf("Enter text (Ctrl+D to end):\n");

    while (fgets(line, MAX_LINE_LENGTH, stdin) != NULL) {
        int words_in_line = 0;
        saveptr = line;
        
        token = strtok_r(saveptr, " \t\n", &saveptr); // Tokenize by space, tab, and newline

        while (token != NULL) {
            words_in_line++;
            token = strtok_r(NULL, " \t\n", &saveptr);
        }

        total_words += words_in_line;
        total_lines++;
    }

    if (total_lines > 0) {
        double average_words = (double)total_words / total_lines;
        printf("Average number of words per line: %.2f\n", average_words);
    } else {
        printf("No input provided.\n");
    }

    return 0;
}
