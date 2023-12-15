#include <stdio.h>


int f(int *a, int n, float y) {

    printf("Using pointer to an integer array\n");

    for (int i = 0; i < n; i++) {
        printf("a[%d] = %d\n", i, *(a + i));
    }
 
    return 0;
}

int g(int a[], int n, float y) {
    
    printf("\nUsing array of integers\n");
   
    for (int i = 0; i < n; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    float value = 10.5;

    f(arr, size, value);

    g(arr, size, value);

    return 0;
}
