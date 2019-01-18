#include<stdio.h>

int main(void)
{
	//정수 사칙연산만 입력
	int num1, num2,result;
	char ope;
	int i;

	for (i = 1; i <= 10; i++)
	{
		printf("[실.행.결.과.%d]\n",i);
		printf("사칙 연산 입력(정수) : ");

		scanf("%d%c%d", &num1, &ope, &num2);

		if (ope == '+')
		{
			result = num1 + num2;
			printf("%d%c%d=%d\n", num1, ope, num2, result);
		}
		else if (ope == '-')
		{
			result = num1 - num2;
			printf("%d%c%d=%d\n", num1, ope, num2, result);
		}
		else if (ope == '*')
		{
			result = num1 * num2;
			printf("%d%c%d=%d\n", num1, ope, num2, result);
		}
		else if (ope == '/')
		{
			result = num1 / num2;
			printf("%d%c%d=%d\n", num1, ope, num2, result);
		}
		else
		{
			printf("다시 입력해주시기 바랍니다.\n");
		}
		printf("프로그램을 종료합니다\n");
	}
		return 0;
}