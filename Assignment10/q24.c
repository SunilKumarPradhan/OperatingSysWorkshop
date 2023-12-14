#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100
#define MAX_STRINGS 10

void bubbleSort(char arr[][MAX_LENGTH], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                char temp[MAX_LENGTH];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

int main() {
    int n;
    char strings[MAX_STRINGS][MAX_LENGTH];

    printf("Enter the number of strings (up to %d): ", MAX_STRINGS);
    scanf("%d", &n);

    // Consume the newline character after reading the number
    while (getchar() != '\n');

    if (n > MAX_STRINGS || n <= 0) {
        printf("Invalid input for number of strings!\n");
        return 1;
    }

    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        fgets(strings[i], MAX_LENGTH, stdin);
        // Remove the newline character at the end of the string
        strings[i][strcspn(strings[i], "\n")] = '\0';
    }

    // Sorting the strings using bubble sort
    bubbleSort(strings, n);

    printf("\nSorted strings:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}
