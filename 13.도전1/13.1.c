#include<stdio.h>

int a, b;

void input_data(int *pa, int *pb)
{
	printf("두 정수 입력 : ");
	scanf("%d%d", &a, &b);
}
void swap_data(void)
{
	int i = 0;

	i = a;
	a = b;
	b = i;
}
void print_data(int a, int b)
{
	printf("두 정수 출력 : %d, %d\n", a, b);
}

int main(void)
{
	input_data(&a, &b); //전역 변수에 정수값 입력
	swap_data(); // 두 변수 교환
	print_data(a, b); //교환된 변수 값 출력

	return 0;
}