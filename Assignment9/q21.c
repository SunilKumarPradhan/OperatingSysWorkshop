#include <stdio.h>
#include <stdlib.h>

struct address_t {
  int n1;
  int n2;
  int n3;
  char *ch;
};

int scan_address(int i, struct address_t model[]) {
  printf("%d round\n", i);
  char arr[10];
  int n1, n2, n3;
  scanf("%d %d %d %s", &n1, &n2, &n3, arr);
  model[i].n1 = n1;
  model[i].n2 = n2;
  model[i].n3 = n3;
  model[i].ch = arr;
  printf("%d", n2);
  return n2;
}

void print_address(struct address_t model[], int n, int count[], int i) {
  printf("machine %s, ", model[i].ch);
  for (i = 0; i < n; i++) {
    printf("%s, ", model[i].ch);
  }

  printf(" are on the same local");
}

int local_address(struct address_t model[], int i, int j) {}

int main() {
  struct address_t model[100];
  int n;
  for (int i = 0; i < 100; i++) {
    n = scan_address(i, model);
    if (n == 0) {
      n = i;
      break;
    }
  }

  int arr[n];
  int c = 0;
  int count[n];
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; i++) {
      if (arr[j] == 1) {
        continue;
      }
      if (local_address(model, i, j)) {
        count[c] = j;
        c++;
        arr[j] = 1;
      }
    }
    if (c != 0)
      print_address(model, c, count, i);
    c = 0;
  }

  return 0;
}