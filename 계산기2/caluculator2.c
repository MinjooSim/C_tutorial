#include<stdio.h>

int main(void) 
{
	int num1, num2;
	int ope;
	float sum, sub, mul, div;
	float result;

	sum = num1 + num2;
	sub = num1 - num2;
	mul = num1 * num2;
	div = num1 / num2;

	while (1)
	{
		printf("input first number :   ");
		scanf("%d\n", &num1);
		printf("input second number :   ");
		scanf("%d\n", &num2);
		printf("1 : ����, 2 : ����, 3 :����, 4 : ������");
		scanf("choose %d\n", &ope);

		if(ope == 1)
		{
			result = sum;
			printf(" result = %2.lf ", result);
		}
		else if(ope == 2)
		{
			result = sub;
			printf(" result = %2.lf ", result);
		}
		else if(ope == 3)
		{
			result = mul;
			printf("result = %2.lf ", result);
		}
		else if(ope == 4)
		{
			result = div;
			printf(" result = %2.lf ", result);
		}
		else
		{
			printf("�ٽ� �Է����ּ���\n");
		}
	}
	return 0;
}