#include <stdio.h>

#define DEBUG

int main() {
  int x = 5, y = 10;

  printf("x = %d, y = %d\n", x, y);
#ifdef DEBUG
  x++;
  y++;
#else
  x--;
  y--;
#endif
  printf("x = %d, y = %d\n", x, y);
  return 0;
}