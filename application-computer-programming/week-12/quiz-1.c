#include <stdio.h>
#include <stdlib.h>

int main() {
  int stuNum, kor, eng;
  int *students = NULL;
  printf("학생 수를 입력해 주세요: ");
  scanf("%d", &stuNum);

  students = (int*)malloc(sizeof(int) * stuNum);

  for (int k=0; k < stuNum; k++) {
    printf("%d번 학생의 국어 점수: ", k+1);
    scanf("%d", &kor);
    printf("%d번 학생의 영어 점수: ", k+1);
    scanf("%d", &eng);
    printf("평균: %.2lf\n", (kor + eng) / 2.0);
  }
  return 0;
}