#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Number of command-line arguments passed: %d\n", argc - 1);

    printf("\nCommand-line tokens:\n");
    for (int i = 0; argv[i] != NULL; i++) {
        printf("argv[%d] --> %s\n", i, argv[i]);
    }

    return 0;
}

/*$ ./a.out
Number of command-line arguments passed: 0

Command-line tokens:
argv[0] --> ./a.out
*/

//------------------------------------------------------------------------

/*$ ./a.out ITER SOA IBCS
Number of command-line arguments passed: 3

Command-line tokens:
argv[0] --> ./a.out
argv[1] --> ITER
argv[2] --> SOA
argv[3] --> IBCS
*/

//------------------------------------------------------------------------


/*$ ./a.out "12 34 56"
Number of command-line arguments passed: 2

Command-line tokens:
argv[0] --> ./a.out
argv[1] --> 12 34 56
*/
//------------------------------------------------------------------------

/*$ ./a.out ITER SOA IBCS ‘‘23 45 67’’
Number of command-line arguments passed: 4

Command-line tokens:
argv[0] --> ./a.out
argv[1] --> ITER
argv[2] --> SOA
argv[3] --> IBCS
argv[4] --> ‘‘23
argv[5] --> 45
argv[6] --> 67’’
*/
//------------------------------------------------------------------------

/*$ ./a.out ./a.out 12\34\56
Number of command-line arguments passed: 3

Command-line tokens:
argv[0] --> ./a.out
argv[1] --> ./a.out
argv[2] --> 12\34\56
*/
//------------------------------------------------------------------------

/*$ ./a.out ./a.out ’12\34\56’
Number of command-line arguments passed: 3

Command-line tokens:
argv[0] --> ./a.out
argv[1] --> ./a.out
argv[2] --> ’12\34\56’
*/
//------------------------------------------------------------------------

/*$ ./a.out ./a.out ‘‘12\34\56’’
Number of command-line arguments passed: 3

Command-line tokens:
argv[0] --> ./a.out
argv[1] --> ./a.out
argv[2] --> ‘‘12\34\56’’
*/
//------------------------------------------------------------------------

/*$ ./a.out ./a.out 12 14 45 66
Number of command-line arguments passed: 6

Command-line tokens:
argv[0] --> ./a.out
argv[1] --> ./a.out
argv[2] --> 12
argv[3] --> 14
argv[4] --> 45
argv[5] --> 66
*/
//------------------------------------------------------------------------

/*$ ./a.out 12\
34\
56\
78
Number of command-line arguments passed: 1

Command-line tokens:
argv[0] --> ./a.out
argv[1] --> 12345678
*/
//------------------------------------------------------------------------


/*$ ./a.out # shell comments
Number of command-line arguments passed: 1

Command-line tokens:
argv[0] --> ./a.out
argv[1] --> #
argv[2] --> shell
argv[3] --> comments
*/
//------------------------------------------------------------------------

/*$ ./a.out 12 $HOME 34
Number of command-line arguments passed: 3

Command-line tokens:
argv[0] --> ./a.out
argv[1] --> 12
argv[2] --> /path/to/home
argv[3] --> 34
*/
//------------------------------------------------------------------------

/*$ ./a.out 12 ‘pwd‘ 34
Number of command-line arguments passed: 3

Command-line tokens:
argv[0] --> ./a.out
argv[1] --> 12
argv[2] --> ‘pwd‘
argv[3] --> 34
*/
//------------------------------------------------------------------------
