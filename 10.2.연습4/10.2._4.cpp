#include<stdio.h>
void range5(int *pa);

int main(void)
{
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	printf("<<month �迭�� ���� ���ٿ� 5���� ����ϴ� ���α׷�>>\n");
	range5(month);
}

void range5(int *pa)//�迭�� ������ ������
{
	int i;//�ݺ����� ����

	for (i = 0;i < 12;i++)//��� 12�� �ݺ�
	{
		printf("%5d", pa[i]);//�� ���� �ϼ� ���
		if ((i + 1) % 5 == 0)//����� ������ 5�̸� �ٹٲ�
			printf("\n");
	}

}