#include<stdio.h>
//달력프로그램_다른 답변 참조_손 못댐//이것도 미완
int day365or366(int);
int main(void)
{
	int months[12] = { 31, 28, 31, 30, 31, 31, 30, 31, 30, 31 };
	int day, year, total = 0;
	int total_1, today = 0;
	int month;
	int base_year = 1997;
	int before_year = 0;//기준시간부터 원하는 시간의 직전 해 까지의 날짜 수를 저장할 변수

	printf("달력을 만드는 프로그램입니다.\n");
	printf("년을 입력하세요 = ");
	scanf("%d", &year);
	printf("월을 입력하세요 =");
	scanf("%d", &month);
	printf("\n");
	
	for (int i = base_year;i < year;i++)
	{
		before_year += day365or366(i);//기준 해부터 직전핶지 날짜수를 저장합니다
	}
	for (int i = 0;i < month - 1;i++)
	{
		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		{
			months[1] = 29;
		}
		else
		{
			months[1] = 28;
		}
		total_1 += months[i];
	}
	today = before_year + total_1;//기준일~직전해 날짜 수 + 올해 직전달까지의 날짜수
	printf(" 월 화 수 목 금 토 일 \n");
	for (int i = 1;i <= (today % 7);i++)//위의 날짜수를 7로 나눈 나머지만큼 공백이 추가
	{
		printf("   ");
	}
	for (int i = 1; i <= months[month - 1];i++)
	{
		printf("%5d", i);
		if ((i + (today % 7)) % 7 == 0)
		{
			printf("\n");
		}
	}
		printf("\n");
		return 0;
}
	int day365or366(int year)//해당 연도를 매개변수로 받고 날짜수를 리턴하는 걸 함수로 뺌
	{
		int day;
		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		{
			day = 366;
		}
		else 
		{
			day = 365;
		}
		return day;
	}