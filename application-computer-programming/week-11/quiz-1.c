#include "calc.h"
#include <stdio.h>

int main() {
  int x = 5, y = 6;
  printf("x + y = %d\n", sum(x, y));
  printf("x - y = %d\n", sub(x, y));
  printf("x * y = %d\n", mul(x, y));
  printf("x / y = %d\n", div(x, y));
  return 0;
}