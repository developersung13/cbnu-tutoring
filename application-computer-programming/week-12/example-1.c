#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, k;
  int *p;

  scanf("%d", &n);
  p = (int*)malloc(sizeof(int) * n);

  printf("%d개의 정수를 입력해 주세요: ", n);
  for (k = 0; k < n; k++)
    scanf("%d", &p[k]);

  printf("reversed: ");
  for (k=n-1; k >=0; k--)
    printf("%d ", p[k]);
  return 0;
}