#include<stdio.h>
//���̰� ���� �� �ܾ� ã��
int main(void)
{
	char ch;
	int n = 0;
	int largest = 0;
	int str[5] = { 0 };
	int i, j;

	while (ch = getchar() != -1)
	{
		for (i = 0;i < 100;i++)
		{
			for (j = 0;j < i;j++)
			{
				if (str[i] > str[j]) //�������� �迭
				{
					largest= str[i];
					str[i] = str[j];
					str[j] = largest;
				}

			}

			if (ch == '\n')
			{
				n = ch / sizeof(ch);
				str[i] = n;
			}
		}

	}
	printf("���� �� �ܾ��� ���� : %d\n", largest);
}
