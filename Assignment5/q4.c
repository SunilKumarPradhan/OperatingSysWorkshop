#include <stdio.h>

int sub() {
    int i = 10;
    return (i + 30);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 5};
    int *ip = arr + 4;  // ip points to the fifth element of the array

    printf("%d\n", ip[1]);  // prints the value of the element two positions away from ip

    // Call the sub function
    int result = sub();
    printf("Result of sub function: %d\n", result);

    return 0;
}
