#include <stdio.h>
#include <string.h>

int main() {
  char pres[] = "Adams, John Quincy";
  char temp1[40], temp2[40];
  strncpy(temp1, &pres[7], 4);
  temp1[4] = '\0';
  strcat(temp1, " ");
  strncpy(temp2, pres, 5);
  temp2[5] = '\0';
  printf("%s\n", strcat(temp1, temp2));
  return 0;
}