#include<stdio.h>
int main(void)
{
	char ch;
	int cnt = 0;
	int temp = 0;//가장 긴 단어의 길이 변수
	
	while ((scanf("%c", &ch)) != -1)//-1입력시 종료
	{
		if (ch != '\n')//ch가 줄바꿈이 아닐때 카운트 증가
		{
			cnt++;
		}
		else//이전 단어와 입력한 단어 비교
		{
			if (temp < cnt)
			{
				temp = cnt;
				cnt = 0;
			}
		}
	}
	printf("가장 긴 단어의 길이 : %d\n", temp);

	return 0;
}