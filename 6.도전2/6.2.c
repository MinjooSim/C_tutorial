#include<stdio.h>

int main(void)
{
	int number;
	int i, j;
	int num = 0;//����� ���� 
	int p = 0;

	printf("2�̻��� ������ �Է��ϼ��� : ");
	scanf("%d", &number);

	for (i = 1;i <= number;i++)
	{
			for (j = 1;j <= i;j++)
			{
				if (num > 2)
				{
					break;
				}
				if (i%j == 0)
				{
					num ++;
				}
			}
			if (num == 2)//����� ������ 2���� �Ҽ�
			{
				printf("%5d", i);
				p++;
			}
			if (p == 5)
			{
				printf("\n");
				p = 0;
			}
			num = 0;
	}
	printf("\n");
}