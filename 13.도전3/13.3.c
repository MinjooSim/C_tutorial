#include<stdio.h>

char *my_token(char *ps)//ps = 단어를 분리할 문장의 포인터
{
	char *tmp;
	static int flag =0;//문자열을 모두 처리하면 1 반환
	char *start;//분리할 단어 시작 주소
	static char *location = NULL;//정적변수 사용
	//정적변수 사용 이유 : 함수가 호출될 때마다반환할 다음 배열 요소의 위치를 기억
	if (ps == NULL)
	{
		return NULL;
	}
	if (flag == 1)
	{
		return NULL;
	}
	if (location == NULL)
	{
		start = ps;//시작 위치 설정
	}
	else
	{
		start = location + 1;
	}

	tmp = start;

	while ((*tmp != ' ') && (*tmp != '\0'))//공백도 아니고 널문자도 아니면
	{
		tmp++;
	}

	if (*tmp == '\0')//문자열이 끝나면 flag 1
	{
		flag = 1;
	}
	else//아니면 공백
	{
		*tmp = '\0';
	}

	location = tmp;//분리할 위치 기억

	return start;//시작 주소 반환

}//반환값 = 분리한 단어의 주소

int main(void)
{
	char str[80] = { 0 };
	char *p;

	printf("문장 입력 : ");
	gets(str);

	while ((p = my_token(str)) != NULL)
	{
		printf("%s\n", p);
	}
	return 0;
}