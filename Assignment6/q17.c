#include <stdio.h>
#include <ctype.h>

void toUpperCase(char *str) {
    while (*str != '\0') {
        *str = toupper((unsigned char)*str);
        str++;
    }
}

int main() {
    char *argv[] = {"mine", "cs", "sc", "soa", NULL};

    printf("Original strings:\n");
    for (int i = 0; argv[i] != NULL; i++) {
        printf("%s\n", argv[i]);
    }

    printf("\nStrings in uppercase:\n");
    for (int i = 0; argv[i] != NULL; i++) {
        toUpperCase(argv[i]);
        printf("%s\n", argv[i]);
    }

    return 0;
}

