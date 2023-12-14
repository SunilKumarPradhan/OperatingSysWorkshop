#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

#define MAX_LENGTH 100

enum State {
    START,
    BUILD_NUM,
    NUMBER,
    BUILD_ID,
    IDENTIFIER,
    STOP
};

void output(const char *str, enum State state) {
    switch (state) {
        case NUMBER:
            printf("Number: %s\n", str);
            break;
        case IDENTIFIER:
            printf("Identifier: %s\n", str);
            break;
        default:
            break;
    }
}

void processString(const char *input) {
    enum State currentState = START;
    char buffer[MAX_LENGTH] = "";
    size_t bufferIndex = 0;

    for (size_t i = 0; input[i] != '\0'; i++) {
        char currentChar = input[i];

        switch (currentState) {
            case START:
                if (isspace(currentChar)) {
                    currentState = START;
                } else if (isdigit(currentChar)) {
                    currentState = BUILD_NUM;
                    buffer[bufferIndex++] = currentChar;
                } else if (isalpha(currentChar)) {
                    currentState = BUILD_ID;
                    buffer[bufferIndex++] = currentChar;
                } else if (currentChar == '.') {
                    currentState = STOP;
                }
                break;

            case BUILD_NUM:
                if (isdigit(currentChar)) {
                    buffer[bufferIndex++] = currentChar;
                } else if (isspace(currentChar)) {
                    currentState = NUMBER;
                    buffer[bufferIndex] = '\0';
                    output(buffer, currentState);
                    currentState = START;
                    bufferIndex = 0;
                }
                break;

            case BUILD_ID:
                if (isalnum(currentChar)) {
                    buffer[bufferIndex++] = currentChar;
                } else if (isspace(currentChar)) {
                    currentState = IDENTIFIER;
                    buffer[bufferIndex] = '\0';
                    output(buffer, currentState);
                    currentState = START;
                    bufferIndex = 0;
                }
                break;

            default:
                break;
        }
    }
}

int main() {
    const char input[] = " 95 K9 .";
    processString(input);

    return 0;
}

