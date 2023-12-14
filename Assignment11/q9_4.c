#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 100
#define MAX_LENGTH 100

void bubbleSort(char arr[][MAX_LENGTH], int n) {
    int i, j;
    char temp[MAX_LENGTH];

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

int main() {
    char strings[MAX_STRINGS][MAX_LENGTH];
    int n, i;

    printf("Enter the number of strings: ");
    scanf("%d", &n);
    getchar(); // To consume the newline character

    printf("Enter %d strings:\n", n);
    for (i = 0; i < n; i++) {
        fgets(strings[i], MAX_LENGTH, stdin);
        strtok(strings[i], "\n"); // Remove newline character if present
    }

    bubbleSort(strings, n);

    printf("\nSorted strings:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}
