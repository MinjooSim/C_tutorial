#include<stdio.h>

reverse(double *pa, int size);
int main(void)
{
	double ary[] = { 1.5, 20.1, 16.4, 2.3, 3.5 };
	
	printf("<<�¿찪 ��ġ �ٲٴ� �Լ�>>\n");
//	reverse(ary, sizeof(ary) / sizeof(*ary));
//	printf("ȣ�� �� �ٲ� �迭 ��� ��  : %.1lf",ary );
	
}

reverse(double *pa, int size)
{
	int i;
	double tmp;

	for (i = 0;i <size/2;i++)
	{
		tmp = pa[i];
		pa[i] = pa[size - 1 - i];//**
		pa[size - 1 - i] = tmp;
	}
}