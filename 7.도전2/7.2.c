#include<stdio.h>
int rec_func(int n);

int main(void)
{
	int n;
	int num;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num);
	n = rec_func(num);
	printf("1���� %d������ �� : %d\n",num,n);
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