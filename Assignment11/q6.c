#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s <string> <major_delimiter> <sub_delimiter>\n", argv[0]);
        return 1;
    }

    char *str = argv[1]; // Input string to be parsed
    char *major_delim = argv[2]; // Major delimiter byte(s)
    char *sub_delim = argv[3]; // Sub delimiter byte(s)

    printf("Input String: %s\n", str);

    printf("\nTokenizing based on major delimiter '%s':\n", major_delim);
    char *token = strtok(str, major_delim);
    int token_count = 0;
    while (token != NULL) {
        printf("Token %d: %s\n", ++token_count, token);

        printf("Subtokens based on sub delimiter '%s':\n", sub_delim);
        char *subtoken = strtok(token, sub_delim);
        int subtoken_count = 0;
        while (subtoken != NULL) {
            printf("Subtoken %d: %s\n", ++subtoken_count, subtoken);
            subtoken = strtok(NULL, sub_delim);
        }

        token = strtok(NULL, major_delim);
    }

    return 0;
}
//./a.out 'CSE/CSIT//EEE/EC//MECH//CIVIL:MBA:MBBS' ':' '/'
