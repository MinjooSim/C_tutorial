#include<stdio.h>
//strlen = 문자열의 길이를 계산하는 함수 
int strlen(char *ps)//ps는 배열명을 저장하고 첫번쨰 배열 요소를 가리킴
{
	int cnt = 0;//문자 수를 세기 위한 변수

	while (*ps != '\0')//ps가 가리키는 문자가 널문자가 아닌 동안
	{
		cnt++;//문자 수 증가
		ps++; //포인터를 다음 문자의 위치로 이동
	}
	return cnt;//전체 문자수 반환
}

int main(void)
{
	char num[11];
	int ch ;
	int i = 0;
	int cnt = 1;
	int tot;
	int n;
	int sum = 0;
	int s = 0;
	
	while ((ch = getchar()) != '\n')//줄바꿈 전까지 char 배열에 저장
	{
		num[i] = ch;
		i++;
		
	}
	num[i] = '\0'; //문자열의 끝을 알려주기 위해 널문자 삽입

	n = strlen(num); //sum의 문자열의 길이

	for (i = n - 1;i >= 0;i--) //변환된 값들의 자리 값 대입.
	{//배열의 시작은 0부터라 -1을 빼주면서 일의 자리 숫자부터 그 윗자리 숫자까지 올라가서 계산
		sum += ((num[i] - 48) * cnt); //-48은 0의 아스키코드가 48
		cnt *= 10;//cnt는 자리수
	}

	tot = sum + 10;

	printf("%d\n", tot);
	return 0;
}