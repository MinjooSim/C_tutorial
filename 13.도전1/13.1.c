#include<stdio.h>

int a, b;

void input_data(int *pa, int *pb)
{
	printf("�� ���� �Է� : ");
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
	printf("�� ���� ��� : %d, %d\n", a, b);
}

int main(void)
{
	input_data(&a, &b); //���� ������ ������ �Է�
	swap_data(); // �� ���� ��ȯ
	print_data(a, b); //��ȯ�� ���� �� ���

	return 0;
}