#include<stdio.h>

int main(void)
{
	char ch;


		ch = getchar();

		if (ch > 64 && ch < 91)
		{
			ch = ch + ('a' - 'A');
		}
		else if (ch > 96 && ch < 123)
		{
			ch = ch - ('a' - 'A');
		}
		printf("%c", ch);


	return 0;
}