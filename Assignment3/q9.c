#include <stdio.h>

void printPattern(int n) {
    for (int i = 0; i < n; i++) {
        // Print spaces
        for (int j = 0; j < i; j++) {
            printf(" ");
        }

        // Print characters in increasing order
        for (char ch = 'A'; ch <= 'G' - i; ch++) {
            printf("%c ", ch);
        }

        // Print characters in decreasing order
        for (char ch = 'F' - i; ch >= 'A'; ch--) {
            printf("%c%s", ch, ch != 'A' ? " " : "");
        }

        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printPattern(rows);

    return 0;
}
