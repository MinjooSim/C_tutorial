#include <stdio.h>
#include <string.h>

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
int main()
{
	char arr[200] = { 0 };
	char *ptr = arr;
	char input[20];
	int i;
	int cnt = 0;
	int len;

	printf("문장 입력 : ");
	gets(arr);

	while (1)
	{
		printf("검색할 문자열 입력 (종료는 end) : ");
		gets(input);
		len = strlen(input);

		for (i = 0; i < strlen(arr); i++)//문자열의 길이 출력 함수 = strlen
		{
			 //strncmp(비교할 배열1,비교할 배열2,비교할 문자수)
			if (strncmp((ptr + i), input, len) == 0)//strncmp = 문자열 비교 함수 & 문자열의 일부를 다루는 함수
			{
				cnt++;
			}
		}

		printf("검색 결과 : %d\n", cnt);
		cnt = 0;

		if ((strcmp(input, "end") == 0))
			break;

	}


	return 0;

}


