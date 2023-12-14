#include <stdio.h>
#include <stdlib.h>

// Declaration of the external variable environ
extern char **environ;

int main() {
    // Iterate through the environment list until NULL is encountered
    for (char **env = environ; *env != NULL; env++) {
        printf("%s\n", *env);
    }

    return 0;
}
