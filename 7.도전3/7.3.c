#include<stdio.h>
int prime_check(int n);
//함수 나누기 못함
int main(void)
{
	int number;
	int i;
	int pow = 0;

	printf("#양수 입력(2이상) : ");
	scanf("%d", &number);

	for (i = 2;i <= number;i++)//1~number까지 증가시키는 for문
	{
		if (prime_check(i) == 1)
		{
			printf("%5d", i);//i출력
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