#include<stdio.h>

int main(void)
{
	char ch[50], str[50] = { 0 };
	int i;

	gets(str);
	
	for (i = 0;i < 50;i++)
	{
		ch[i] = str[i];
	}//strcpy¿ªÇÒ

	for (i = 0;i < 50;i++)
	{
		if ((ch[i] >= 'A') && (ch[i] <= 'Z'))
		{
			ch[i] = ch[i] + ('a' - 'A');
		}

		else if ((ch[i] >= 'a') && (ch[i] <= 'z'))
		{
			ch[i] = ch[i] + ('A' - 'a');
		}

		printf("%c", ch[i]);
	}

	printf("\n");
	
	return 0;

}