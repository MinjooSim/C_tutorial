#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char temp[100]; //�ӽ� char �迭
	char *str[100];
	int i; //�ݺ� ���� ����

	for (i = 0;i < 100;i++)
	{
		printf("�ܾ� �Է� : ");
		gets(temp);
		if (strcmp(temp, "end") == 0)
		{
			break;
		}

		str[i] = (char *)malloc(strlen(temp) + 1);//���ڿ� ������� �Ҵ�
		strcpy(str[i], temp);
	}

	for (i = 0;i < 100;i++)
	{
		
		printf("%s\t",str[i]);
	}
	for (i = 0;i < 100;i++)
	{
		free(str[i]);
	}
	return 0;
}