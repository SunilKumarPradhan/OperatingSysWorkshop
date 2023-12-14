#include <stdio.h>
#include <stdlib.h>

// Function to read n words and print them in reverse order
void reverseInputWords(int n) {
    // Base case: stop recursion when n becomes 0
    if (n == 0) {
        return;
    }

    // Read a word and allocate memory for it
    char* word = (char*)malloc(50 * sizeof(char));
    printf("Enter word %d: ", n);
    scanf("%s", word);

    // Recursive call with n-1 to read the next word
    reverseInputWords(n - 1);

    // Print the word in reverse order
    printf("%s\n", word);

    // Free allocated memory
    free(word);
}

int main() {
    int n;

    // Get the number of words from the user
    printf("Enter the number of words: ");
    scanf("%d", &n);

    // Call the recursive function to reverse input words
    reverseInputWords(n);

    return 0;
}
