#include <stdio.h>
#include <unistd.h>

int main(void) {
    printf("hello\n");
    fork();
    printf("hello\n");
    fork();
    printf("hello\n");
    fork();
    printf("hello\n");
    return 0;
}
/*           
            P1
           / \
         P2   P9
        / \    \
      P3  P6    P10
     / \   \
    P4  P7  P11
   /
  P5
  
*/