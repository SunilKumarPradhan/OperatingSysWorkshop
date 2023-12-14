#include <stdio.h>

int main(){
    int a, b, c;
    printf("Enter in decimal format:");
    scanf("%d", &a);
    printf("Enter in octal format: ");
    scanf("%o", &b);
    printf("Enter in hexadecimal format: ");
    scanf("%x", &c);
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    printf("Enter in decimal format:");
    scanf("%d", &a);
    printf("Enter in octal format: ");
    scanf("%o", &b);
    printf("Enter in hexadecimal format: ");
    scanf("%x", &c);
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}



/*1. Declare integer variables to store user-entered values.

2. Prompt the user to enter an integer in decimal format and read it into variable a using scanf.

3. Prompt the user to enter an integer in octal format and read it into variable b using scanf.

4. Prompt the user to enter an integer in hexadecimal format and read it into variable c using scanf.

5. Print the values of a, b, and c using printf, displaying them in decimal format.

6. Prompt the user to enter the value of b again, this time expecting the input in decimal format, and read it using scanf, overwriting the previous value of b.

7. Prompt the user to enter the values of b and c again, this time in octal and hexadecimal formats, respectively, and read them using scanf.

8. Finally, print the updated values of a, b, and c using printf, displaying them in their respective formats.*/