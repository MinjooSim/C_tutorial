#include<stdio.h>
int main(void)
{
	int ch;//문자를 입력 변수
	int cnt = 0;//소문자의 개수를 셀 변수

	ch = getchar();//맨 처음 시작해주기 위해 작성.

	while (ch != '\n')//입력 버퍼의 끝에 있는 개행 문자 전까지 입력
	{
		if ((ch>='a')&&(ch<='z'))//소문자의 아스키 코드값 범위를 검사
			cnt++;
		ch = getchar();// getchar(); = 입력 문자의 아스키 코드값 반환(공백 문자, 탭문자, 개행문자도 입력)
	}
	printf("소문자의 개수 :  %d\n", cnt);//소문자 개수 반환
	
	return 0;
}