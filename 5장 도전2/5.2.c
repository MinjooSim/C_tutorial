#include<stdio.h>
int main(void)
{
	int rich =150 ;
	double grade =  4.1;
	int tuition = 100;
	
	/*
	printf("���������� �Է��Ͻÿ� : ");
	scanf("%d\n", &rich);

	printf("������ �Է��Ͻÿ� : ");
	scanf("%.lf\n", &grade);
	*/
	if ((rich >= 100) && (grade >= 4.0))
	{
		tuition *= 0.8;
		printf("���� �б� ������ ��ϱ��� %d���� �Դϴ�.\n", tuition);
	}
	else if (rich < 150)
	{
		tuition *= 0.6;
		printf("���� �б� ������ ��ϱ��� %d���� �Դϴ�.\n", tuition);
	}
	else
	{
		printf("���� �б� ������ ��ϱ��� %d���� �Դϴ�.\n", tuition);
	}
}