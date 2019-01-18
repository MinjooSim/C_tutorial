#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char temp[100]; //임시 char 배열
	char *str[100];
	int i; //반복 제어 변수

	for (i = 0;i < 100;i++)
	{
		printf("단어 입력 : ");
		gets(temp);
		if (strcmp(temp, "end") == 0)
		{
			break;
		}

		str[i] = (char *)malloc(strlen(temp) + 1);//문자열 저장공간 할당
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