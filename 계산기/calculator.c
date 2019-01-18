#include<stdio.h>

int main(void)
{
	int num1, num2 ;
	int ope ;
	int result;

	
	while (1)
	{
		printf("첫번째 숫자를 입력하시오 :  ");
		scanf("%d", &num1);
		printf("두번째 숫자를 입력하시오 :  ");
		scanf("%d", &num2);
		printf("1번 덧셈, 2번 뺼셈, 3번 곱셈. 4번 나눗셈 : ");
		scanf("%d를 선택하셨습니다.\n", &ope);

		if (ope == 1)
		{
			result = num1 + num2;
			printf("결과 = %d 입니다\n", result);
		}
		else if (ope == 2)
		{
			result = num1 - num2;
			printf("결과 = %d 입니다\n", result);
		}
		else if (ope == 3)
		{
			result = num1 * num2;
			printf("결과 = %d 입니다\n", result);
		}
		else if (ope == 4)
		{
			result = num1 / num2;
			printf("결과 = %d 입니다\n", result);
		}
		else
		{
			printf("다시 입력해주시기 바랍니다\n");
		}

	}
	return 0;
}