#include<stdio.h>

reverse(double *pa, int size);
int main(void)
{
	double ary[] = { 1.5, 20.1, 16.4, 2.3, 3.5 };
	
	printf("<<좌우값 위치 바꾸는 함수>>\n");
//	reverse(ary, sizeof(ary) / sizeof(*ary));
//	printf("호출 후 바뀐 배열 요소 값  : %.1lf",ary );
	
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