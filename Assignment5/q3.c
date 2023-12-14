#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 5};
    int *ip = arr + 4;  // ip points to the fifth element of the array

    printf("%d\n", ip[1]);  // prints the value of the element two positions away from ip

    return 0;
}
