#include <stdio.h>
#include <string.h>

char *trim_blanks(char *trimmed, const char *to_trim) {

  while (*to_trim != '\0' && *to_trim == ' ') {
    to_trim++;
  }
  strcpy(trimmed, to_trim);
  int i = 0;
  while (trimmed[i] != '\0') {
    int d = i;
    while (trimmed[d] == ' ' && trimmed[d] != '\0') {
      d++;
    }
    if (trimmed[d] == '\0') {
      break;
    }
    i = d + 1;
  }
  trimmed[i] = '\0';
  return trimmed;
}

int main() {
  char arr[] = "  a phrase    ";
  char res[100];
  char *ans = trim_blanks(res, arr);
  printf("%s", ans);
}