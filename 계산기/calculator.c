#include<stdio.h>

int main(void)
{
	int num1, num2 ;
	int ope ;
	int result;

	
	while (1)
	{
		printf("ù��° ���ڸ� �Է��Ͻÿ� :  ");
		scanf("%d", &num1);
		printf("�ι�° ���ڸ� �Է��Ͻÿ� :  ");
		scanf("%d", &num2);
		printf("1�� ����, 2�� �E��, 3�� ����. 4�� ������ : ");
		scanf("%d�� �����ϼ̽��ϴ�.\n", &ope);

		if (ope == 1)
		{
			result = num1 + num2;
			printf("��� = %d �Դϴ�\n", result);
		}
		else if (ope == 2)
		{
			result = num1 - num2;
			printf("��� = %d �Դϴ�\n", result);
		}
		else if (ope == 3)
		{
			result = num1 * num2;
			printf("��� = %d �Դϴ�\n", result);
		}
		else if (ope == 4)
		{
			result = num1 / num2;
			printf("��� = %d �Դϴ�\n", result);
		}
		else
		{
			printf("�ٽ� �Է����ֽñ� �ٶ��ϴ�\n");
		}

	}
	return 0;
}