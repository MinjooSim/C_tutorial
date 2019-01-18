#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char temp1[100]; // 임시 char 배열
	int temp2[100] ;
	char *str1[100];//동적 할당 영역을 연결할 포인터 배열
	int *str2[100];
	int i ;

	for(i=0;i<100;i++)
	{
		printf("이름 :  ");
		gets(temp1);   //문자열 입력

		if (strcmp(temp1,"end") == 0)
		{
			break;
		}

		str1[i] = (char *)malloc(strlen(temp1) + 1); //문자열 저장 공간 할당
		strcpy(str1[i], temp1);  //동적 할당 영역에 문자열 복사

		printf("기부금 : ");
		gets(temp2);
		str2[i] = (int *)malloc(strlen(temp2) + 1);
		strcpy(str2[i], temp2);

	}

	for (i = 0;i < 100;i++)
	{
		printf("%s %d\n", str1[i], str2[i]);   //입력된 문자열 출력
	}

	for (i = 0;i < 100;i++)
	{
		free(str1[i]);
		free(str2[i]);
	}
	return 0;
}