#include <stdio.h>

int main() {
    int m = 25, n = 77;
    char c = '*';
    int *itemp;

    //m = &n   
    // Error: Assigning the address of n to m

    //item=m;
    // Error: Assigning the value of m to item

    itemp = &m;    
    *itemp = c; 
    //*itemp = &c; 
    // Error: Assigning the address of c to the value of itemp

    char *ctemp = &c;  
    // Corrected: Declaring a char pointer and assigning the address of c to it

    printf("%d %d %c %c\n", m, n, c, *ctemp);

    return 0;
}
