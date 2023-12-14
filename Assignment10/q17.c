#include <stdio.h>
#include <string.h>

void strncat1(char *s, char *t, int n) {
  int l = strlen(s);
  int i;
  for (i = 0; t[i] != '\0' && i < n; i++) {
    s[i + l] = t[i];
  }
  s[i + l] = '\0';
}

void strncpy1(char *s, char *t, int n) {
  int i = 0;
  for (i = 0; *t != '\0' && i < n; i++) {
    *s++ = *t++;
  }
}

int strncmp1(char *s, char *t, int n) {
  int i = 0;
  while (i < n && s[i] != '\0' && t[i] != '\0') {
    if (s[i] != t[i])
      return s[i] - t[i];
    i++;
  }
  return s[i] == t[i] ? 0 : s[i] == '\0' ? t[i] : s[i];
}

int main() {
  char s[100] = "My name is Rajdeep";
  char t[100] = "I am a b.Tech Student";
  strncat1(s, t, 100);
  printf("%s\n", s);
  strncpy1(s, t, 100);
  printf("%s\n", s);
  int n = strncmp1(s, t, 100);
  printf("%d ", n);
}