#include<stdio.h>
#include<stdlib.h>

void prime(int *number, int num) 
{
	int i, j;
	
	for (i = 0;i < num;i++)  //number �ʱ�ȭ
	{
		number[i] = 0;
	}
	
	for (i = 2;i < num;i++)
	{
		for (j = 2;j < i;j++)
		{
			if (i%j == 0) //���� ��������  break;
			{
				break;
			}
		}
	//	if (i == j) //i�� j���� ���� ���� ����
	//	{
	//		number[i - 2] = i;//i�� 2���� �����̶� i-2
	//	}
	}

}
void print(int *number, int num)
{
	int i;
	char x = 'X';
	int pow = 0;

	for (i = 0;i < num;i++)
	{
		if (number[i] == 0)
		{
			printf("%5c",x);
			pow++;
		}
		else
		{
			printf("%5d", number[i]);
			pow++;
		}
		if (pow == 5)
		{
			printf("\n");
			pow = 0;

		}

	}
}
int main(void)
{
	int *number;
	int num;

	printf("��� �Է� :");
	scanf("%d",&num);

	number = (int *)calloc(num, sizeof(int)); 
	//������� �迭ó�� ��� ����!!
	prime(number, num);
	print(number, num);

	return 0;

}