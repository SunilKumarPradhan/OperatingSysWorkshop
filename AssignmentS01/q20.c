#include <stdio.h>
#include <unistd.h>

int main() {
    int i;
    for (i = 0; i < 12; i++) {
        if (i % 3 == 0) {
            fork();
        }
    }
    return 0;
}
/*
    P1
   / \
  P2  P3
 / \
P4  P5
| \
P6 P7
|
P8

*/