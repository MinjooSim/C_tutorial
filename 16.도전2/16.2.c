#include<stdio.h>

int main(void)
{
	int i, j;
	int number;
	int num = 0;//����� ����
	int pow = 0;//5�پ� �迭
	char x = 'X';

	printf("��� �Է� :");
	scanf("%d", &number);

	for (i = 1;i <= number;i++)
	{
		for (j = 1;j <= i;j++)
		{
			if (num > 2)
			{
				printf("%5c", x);
				pow++;
				break;

			}
			if (i%j == 0)
			{
				num++;
			}
		}
		if (num == 2)
		{
			printf("%5d", i);
			pow++;
		}
		if (pow == 5)
		{
			printf("\n");
			pow = 0;
		}
		num = 0;//����� ���� �ʱ�ȭ
	}
	printf("\n");
}