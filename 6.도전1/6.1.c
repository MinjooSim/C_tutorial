#include<stdio.h>
#include<stdlib.h>

//1~30������ �� �߿� �ϳ��� �Է��� ���ڰ� ������ �ƴ� ��� ũ�ų� ������ �˷���.
//���� �Ŀ��� �õ��� Ƚ���� ���
int main(void)
{
	int random = 1 + rand() % 31; //1���� �����̶� +1
	int i, x;

	for (i = 1;i < 31;i++)
	{
		printf("���� �Է�(1���� 30����) : ");
		scanf("%d", &x);
		if (x == random)
		{
			printf("�����Դϴ�!\n");
			printf("�õ��� Ƚ���� %dȸ �Դϴ�\n", i);
			break;
		}
		else if (x > random)
		{
			printf("%d���� �۽��ϴ�!\n", x);
		}
		else
		{
			printf("%d���� Ů�ϴ�\n", x);
		}
	}

	return 0;
}