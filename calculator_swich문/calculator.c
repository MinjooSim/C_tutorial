#include<stdio.h>
int main(void)
{
	int num1, num2;
	int ope;
	int res;
	//char sum = '+', sub = '-', mul = '*', div = '/';

	printf("<<����_switch��>>\n\n");

	while (1)
	{
		printf("���� �� ���� �Է��ϼ��� : ");
		scanf("%d%d", &num1, &num2);
		printf("�����ڸ� �Է��Ͻÿ� : 1. ����, 2. ����, 3. ����, 4. ������\ :  " );
		scanf("%d", &ope);
		printf("%d�� �����ϼ̽��ϴ�.\n", ope);

		switch (ope)
		{
		case 1:
			res = num1 + num2;
			printf("��� : %d\n", res);
			break;
		case 2:
			res = num1 - num2;
			printf("��� : %d\n", res);
			break;
		case 3:
			res = num1*num2;
			printf("��� : %d\n", res);
			break;
		case 4:
			res = num1 / num2;
			printf("��� : %d\n", res);
			break;
		}
		printf("\n");
	}

}