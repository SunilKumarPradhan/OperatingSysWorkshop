#include <stdio.h>

int main() {
    int arr[4][5];
    int i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            arr[i][j] = 10 * i + j;
        }
    }

   
    
    printf("%d\n", arr[2][4]); // Print the value at arr[2][4]
    // prints the value at the 2nd row and 4th column of the array, which is calculated as 10*2 + 4 = 24
    
    
    printf("%d\n", *(*(arr + 2) + 4));// Print the value at arr[2][4] using pointer arithmetic
    //It dereferences the pointer to the 2nd row (*(arr + 2)) and then accesses the 4th element of that row (*(*(arr + 2) + 4)), resulting in the same value 24
    return 0;
}
