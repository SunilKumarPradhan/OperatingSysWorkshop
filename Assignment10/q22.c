#include <stdio.h>
#include <string.h>

int main() {
  char arr[10];
  int ch;
  for (int i = 0; i < 9; i++) {
    
    ch = getchar();
    arr[i] = ch;
  }
  printf("%s", arr);
}