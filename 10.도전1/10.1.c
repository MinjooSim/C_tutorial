#include<stdio.h>
void printf_graph(int *pscore, int size);
int main(void)
{
	int score[5] = { 72,88,95,64,100 };
	int i;
	for (i = 0;i < 5;i++)
	{
		printf("(%d) : ", score[i]);
		printf_graph(score, score[i]);
	}
}

void printf_graph(int *pscore, int size)//�迭 ��� �迭 ��� ���� ���
{
	int i;
	
	for (i = 0;i < size/5;i++)
	{
		printf("*");
	}
	printf("\n");
}