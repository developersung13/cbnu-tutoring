#include <stdio.h>
#include <stdlib.h>

#define MAX 7

int main() {
  int n, k;
  int *p;

  scanf("%d", &n);
  p = (int*)calloc(MAX, sizeof(int));

  printf("%d개의 정수를 입력해 주세요: ", n);
  for (k = 0; k < n; k++)
    scanf("%d", &p[k]);

  for (k=0; k < MAX; k++)
    printf("%d ", p[k]);
  free(p);
  return 0;
}