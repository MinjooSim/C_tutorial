#include<stdio.h>
int main(void)
{
	int rich =150 ;
	double grade =  4.1;
	int tuition = 100;
	
	/*
	printf("가정형편을 입력하시오 : ");
	scanf("%d\n", &rich);

	printf("학점을 입력하시오 : ");
	scanf("%.lf\n", &grade);
	*/
	if ((rich >= 100) && (grade >= 4.0))
	{
		tuition *= 0.8;
		printf("다음 학기 납입할 등록금은 %d만원 입니다.\n", tuition);
	}
	else if (rich < 150)
	{
		tuition *= 0.6;
		printf("다음 학기 납입할 등록금은 %d만원 입니다.\n", tuition);
	}
	else
	{
		printf("다음 학기 납입할 등록금은 %d만원 입니다.\n", tuition);
	}
}