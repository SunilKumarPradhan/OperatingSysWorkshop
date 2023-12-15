/*#include<stdio.h>

int main(){
    int a = 10;
    int *ptr = NULL;
    ptr = &a;
    *ptr = 5;
    printf("%d", *ptr);
    return 0;
}
*/

#include <stdio.h>

int main() {
    register int a = 10;  // Declaring 'a' as a register variable
    int *ptr = NULL;
    ptr = &a;
    *ptr = 5;  // Attempting to modify the value of 'a' through 'ptr'
    printf("%d", *ptr);
    return 0;
}
