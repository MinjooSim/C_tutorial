#include<stdio.h>

int main(void)
{
	double kg, cm;
	double bmi;

	
	printf("몸무게(kg)와 키(cm) 입력 :  ");//몸무게와 키 뒤에 소수점(.0)이라도 붙여야 실행됨.
	scanf("%lf %lf\n", &kg, &cm);
	

	bmi = kg/(cm/100 * cm/100);


	if (bmi < 20.0)
		printf("체중관리가 필요합니다\n");
	else if (bmi >= 25.0)
		printf("체중관리가 필요합니다\n");
	else
		printf("표준입니다\n");



}