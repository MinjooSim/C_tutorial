#include<stdio.h>

int main(void)
{
	//���� ��Ģ���길 �Է�
	int num1, num2,result;
	char ope;
	int i;

	for (i = 1; i <= 10; i++)
	{
		printf("[��.��.��.��.%d]\n",i);
		printf("��Ģ ���� �Է�(����) : ");

		scanf("%d%c%d", &num1, &ope, &num2);

		if (ope == '+')
		{
			result = num1 + num2;
			printf("%d%c%d=%d\n", num1, ope, num2, result);
		}
		else if (ope == '-')
		{
			result = num1 - num2;
			printf("%d%c%d=%d\n", num1, ope, num2, result);
		}
		else if (ope == '*')
		{
			result = num1 * num2;
			printf("%d%c%d=%d\n", num1, ope, num2, result);
		}
		else if (ope == '/')
		{
			result = num1 / num2;
			printf("%d%c%d=%d\n", num1, ope, num2, result);
		}
		else
		{
			printf("�ٽ� �Է����ֽñ� �ٶ��ϴ�.\n");
		}
		printf("���α׷��� �����մϴ�\n");
	}
		return 0;
}