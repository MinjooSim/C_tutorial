#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[50], ch[50];
	int i;
	int count = 0;
	printf("���� �Է� : ");
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
	
	printf("�ٲ� ���� : ");
	puts(ch);
	printf("�ٲ� ���� �� : %d\n", count);
}