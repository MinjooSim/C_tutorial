#include<stdio.h>
int main(void)
{
	int num;
	char alpha;

	printf("���� �����ϴ� ����?");
	scanf("%d", &num);
	fflush(stdin);
	printf("���� �����ϴ� ���ĺ�?");
	alpha = getchar();
	printf("%d %c\n", num, alpha);

}