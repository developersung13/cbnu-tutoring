#include <stdio.h>

int main() {
  char stuName[50];
  int engScore, mathScore;
  double avg;
  FILE *fp = NULL;
  
  if (!(fp = fopen("text.txt", "r"))) {
    printf("파일을 열 수 없습니다.");
    exit(1);
  }

  while(!feof(fp)) {
    fscanf(fp, "%s %d %d\n", stuName, &engScore, &mathScore);
    printf("<%s 학생의 성적 정보>\n", stuName);
    printf("영어 점수: %d\n", engScore);
    printf("수학 점수: %d\n", mathScore);
    avg = (engScore + mathScore) / 2.0;
    printf("평균: %.1lf\n", avg);
  }

  fclose(fp);
}