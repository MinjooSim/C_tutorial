#include<stdio.h>
//int count31(int *pa);

int main(void)
{
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int i;
	int num=0;
	printf("---month 배열에서  총 일수가 31일인 달의 개수를 반환하는 문장 ---");
	
	for (i = 0;i < 12;i++)
	{
		if (month[i] == 31)
		{
			num++;
		}
	}
	printf("%d개 입니다 \n", num);
}
/*
int count31(int *pa)
{
	int num = 0;//개수 선언
	int i;

	for (i = 0;i < 12;i++)
	{
		if(pa[i]==31)
		{
			num++;//개수 누적
		}
	}
	return num;
}*/