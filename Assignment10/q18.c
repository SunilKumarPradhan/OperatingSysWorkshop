#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  printf("Enter the MMOC product code\n");
  scanf("%s", str);
  int d = 0;
  while (!isdigit(str[d++]));

  char code[100];
  strncpy(code, str, d-- - 1);
  
  int i = d;
  while (!isalpha(str[d++]));
  
  char id[100];
  strncpy(id, str + i, d-- - 1 - i);
  char quan[100];
  strcpy(quan, str + d);
  printf("Warehouse: %s\nProduct: %s\nQunatifiers: %s\n", code, id, quan);
  return 0;
}