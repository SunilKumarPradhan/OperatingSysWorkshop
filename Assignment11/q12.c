#include <stdio.h>
#include <stdlib.h>

int main() {
    // Array of environment variables to retrieve
    const char *env_vars[] = {"PWD", "HOME", "LOGNAME", "USER", "PATH", "COLORTERM"};
    int num_vars = sizeof(env_vars) / sizeof(env_vars[0]);

    // Retrieve and print the values of specified environment variables
    for (int i = 0; i < num_vars; i++) {
        char *value = getenv(env_vars[i]);
        if (value != NULL) {
            printf("%s=%s\n", env_vars[i], value);
        } else {
            printf("%s is not set.\n", env_vars[i]);
        }
    }

    return 0;
}
