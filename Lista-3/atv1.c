#include <stdio.h>

int s(int n) {
  if (n == 0) {
    return 1;
  } else {
    return 2 * s(n-1) + 1;
  }
}

int main() {
  int n;
  printf("Digite um número inteiro: ");
  scanf("%d", &n);
  printf("S(%d) = %d", n, s(n));
  return 0;
}