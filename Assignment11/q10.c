#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_COMMAND_LENGTH 100

int main() {
    char command[MAX_COMMAND_LENGTH];
    char choice[3];

    printf("Enter 'yes' to execute commands or 'no' to exit: ");
    scanf("%s", choice);

    while (strcmp(choice, "yes") == 0) {
        getchar(); // Consume newline character
        printf("Enter command to execute: ");
        fgets(command, MAX_COMMAND_LENGTH, stdin);

        // Remove newline character if present
        if (command[strlen(command) - 1] == '\n') {
            command[strlen(command) - 1] = '\0';
        }

        // Execute the command using system()
        int status = system(command);
        if (status != 0) {
            printf("Command execution failed.\n");
        }

        printf("Enter 'yes' to execute more commands or 'no' to exit: ");
        scanf("%s", choice);
    }

    printf("Program terminated.\n");

    return 0;
}
