#include<stdio.h>
//int count31(int *pa);

int main(void)
{
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int i;
	int num=0;
	printf("---month �迭����  �� �ϼ��� 31���� ���� ������ ��ȯ�ϴ� ���� ---");
	
	for (i = 0;i < 12;i++)
	{
		if (month[i] == 31)
		{
			num++;
		}
	}
	printf("%d�� �Դϴ� \n", num);
}
/*
int count31(int *pa)
{
	int num = 0;//���� ����
	int i;

	for (i = 0;i < 12;i++)
	{
		if(pa[i]==31)
		{
			num++;//���� ����
		}
	}
	return num;
}*/