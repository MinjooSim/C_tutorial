#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[50], ch[50];
	int i;
	int count = 0;
	printf("문장 입력 : ");
	gets(str);

	strcpy(ch, str);
	for (i = 0;i < strlen(ch);i++) 
	{
		ch[i] = (char)tolower(ch[i]);
	}
	for (i = 0;i < strlen(ch);i++)
	{
		if (str[i] != ch[i])
			count++;
	}
	
	printf("바뀐 문장 : ");
	puts(ch);
	printf("바뀐 문자 수 : %d\n", count);
}