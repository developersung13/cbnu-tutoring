#include <stdio.h>

int main() {
	double bmi, height, weight;

	printf("몸무게를 입력하세요(kg): ");
	scanf("%lf", &weight);

	printf("키를 입력하세요(cm): ");
	scanf("%lf", &height);
	
	height = height / 100;
	bmi = weight / (height * height);

	printf("당신의 BMI는 %.1f입니다.\n", bmi);
	if (bmi >= 40.1) printf("고도 비만입니다.\n"); 
	else if (bmi >= 30) printf("비만 입니다.\n");
	else if (bmi >= 25) printf("과제충 입니다.\n");
	else if(bmi >= 20) printf("정상 입니다.\n");
  else printf("저체중 입니다.\n");
  return 0;
}