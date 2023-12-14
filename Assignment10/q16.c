#include <stdio.h>
#include <string.h>

char *stringconcate(char *s, char *t) {
  strcat(s, t);
  return s;
}

int main() {
  char s[] = "My name is Rajdeep";
  char t[] = "I am a B.Tech Student";
  char *cont = stringconcate(s, t);
}