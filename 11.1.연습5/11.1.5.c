#include<stdio.h>

int main(void)
{
	char space, tab, enter;

	printf("(space)(tab)(enter)\n");
	scanf("%c%c%c", &space, &tab, &enter);
	printf("space 키의 아스키 코드값 : %d\n", space);
	printf("tab 키의 아스키 코드 값 : %d\n", tab);
	printf("enter 키의 아스키 코드 값 : %d\n", enter);

}