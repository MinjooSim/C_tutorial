#include<stdio.h>
void func(int *pmod, int *prem);

int main(void)
{
	int mod, rem;
	func(&mod, &rem);
	printf("�� : %d, ������ : %d\n", mod, rem);

	return 0;
}
void func(int *pmod, int *prem)
{
	int num;

	printf("��� �Է� : ");
	scanf("%d", &num);
	
	*pmod = num / 4;
	*prem = num % 4;


}