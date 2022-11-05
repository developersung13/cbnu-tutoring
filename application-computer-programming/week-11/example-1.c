#include <stdio.h>

#define AND &&
#define OR ||
#define NOT !
#define IS ==
#define ISNOT !=
#define KEY 300

int main() {
  int k = 0;
  int numArr[] = { 100, 200, 300, 400, 500 };
  int arrSize = sizeof(numArr) / sizeof(numArr[0]);

  while (k < arrSize AND numArr[k] ISNOT KEY) k++;
  if (k IS arrSize) printf("KEY값에 해당하는 데이터를 조회하지 못 하였습니다.\n");
  else printf("배열 내 %d값의 위치: %d\n", KEY, k);
  return 0;
}