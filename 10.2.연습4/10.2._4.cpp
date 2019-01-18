#include<stdio.h>
void range5(int *pa);

int main(void)
{
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	printf("<<month 배열의 값을 한줄에 5개씩 출력하는 프로그램>>\n");
	range5(month);
}

void range5(int *pa)//배열명 저장할 포인터
{
	int i;//반복제어 변수

	for (i = 0;i < 12;i++)//출력 12번 반복
	{
		printf("%5d", pa[i]);//각 달의 일수 출력
		if ((i + 1) % 5 == 0)//출력한 개수가 5이면 줄바꿈
			printf("\n");
	}

}