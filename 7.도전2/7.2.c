#include<stdio.h>
int rec_func(int n);

int main(void)
{
	int n;
	int num;
	printf("숫자를 입력하세요 : ");
	scanf("%d", &num);
	n = rec_func(num);
	printf("1부터 %d까지의 합 : %d\n",num,n);
	return 0;
}

int rec_func(int n)
{
	int i, tot=0;
	
	for (i = 0;i <= n;i++)
	{
		tot += i;
	}
	return tot;
}