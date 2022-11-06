#include <stdio.h>

int main() {
  printf("Current Date: %s\n", __DATE__);
  printf("오류 발생 파일: %s, 라인 번호: %d\n", __FILE__, __LINE__);
  return 0;
}