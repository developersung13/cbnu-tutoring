#include <stdio.h>

#define DEBUG 1

int main() {
#if DEBUG == 1
  printf("Entered(1)\n");
#elif DEBUG == 2
  printf("Entered(2)\n");
#else
  printf("Entered(3)\n");
#endif
  return 0;
}