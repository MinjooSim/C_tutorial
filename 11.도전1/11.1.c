#include<stdio.h>
//길이가 가장 긴 단어 찾기
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
				if (str[i] > str[j]) //오름차순 배열
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
	printf("가장 긴 단어의 길이 : %d\n", largest);
}
