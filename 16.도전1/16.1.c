#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char temp1[100]; // �ӽ� char �迭
	int temp2[100] ;
	char *str1[100];//���� �Ҵ� ������ ������ ������ �迭
	int *str2[100];
	int i ;

	for(i=0;i<100;i++)
	{
		printf("�̸� :  ");
		gets(temp1);   //���ڿ� �Է�

		if (strcmp(temp1,"end") == 0)
		{
			break;
		}

		str1[i] = (char *)malloc(strlen(temp1) + 1); //���ڿ� ���� ���� �Ҵ�
		strcpy(str1[i], temp1);  //���� �Ҵ� ������ ���ڿ� ����

		printf("��α� : ");
		gets(temp2);
		str2[i] = (int *)malloc(strlen(temp2) + 1);
		strcpy(str2[i], temp2);

	}

	for (i = 0;i < 100;i++)
	{
		printf("%s %d\n", str1[i], str2[i]);   //�Էµ� ���ڿ� ���
	}

	for (i = 0;i < 100;i++)
	{
		free(str1[i]);
		free(str2[i]);
	}
	return 0;
}