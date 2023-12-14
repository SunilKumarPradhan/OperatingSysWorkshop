/*Different pointers pointing to indices of an array,initialize the pointer variable and display the array content*/

#include <stdio.h>

int main() {
    int a[] = {120,502,118,188,106,447};
    int *p = a;

    int *ptr1 = &a[0];
    int *ptr2 = &a[1];
    int *ptr3 = &a[2];
    int *ptr4 = &a[3];
    int *ptr5 = &a[4];
    int *ptr6 = &a[5];


    printf("Value at index1: %d\n",*ptr1);
    printf("Value at index2: %d\n",*ptr2);
    printf("Value at index3: %d\n",*ptr3);
    printf("Value at index4: %d\n",*ptr4);
    printf("Value at index5: %d\n",*ptr5);
    printf("Value at index6: %d\n",*ptr6);
    

    return 0;
}
