#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 100

int main() {
    char line[MAX_LINE_LENGTH];
    int total_words = 0;
    int total_lines = 0;

    printf("Enter text (Ctrl+D to end):\n");

    while (fgets(line, MAX_LINE_LENGTH, stdin) != NULL) {
        char *token = strtok(line, " \t\n"); // Tokenize by space, tab, and newline

        while (token != NULL) {
            total_words++;
            token = strtok(NULL, " \t\n");
        }

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
