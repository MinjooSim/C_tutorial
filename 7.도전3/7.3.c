#include<stdio.h>
int prime_check(int n);
//�Լ� ������ ����
int main(void)
{
	int number;
	int i;
	int pow = 0;

	printf("#��� �Է�(2�̻�) : ");
	scanf("%d", &number);

	for (i = 2;i <= number;i++)//1~number���� ������Ű�� for��
	{
		if (prime_check(i) == 1)
		{
			printf("%5d", i);//i���
			pow++;
		}
		if (pow==5)
		{
			printf("\n");
			pow = 0;
		}
	}
	printf("\n");
	


}
int prime_check(int n) 
{
	int i;

	for (i = 2;i < n;i++)
	{
		if (n%i == 0)
			return 0;
	}
	return 1;
}