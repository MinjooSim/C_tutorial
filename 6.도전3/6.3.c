#include<stdio.h>
int main(void)
{
	int year, month, day;
	int all_day;
	int new_line;
	int i, j, m, n;

	for(i=1;i<100;i++)
	{ 
		printf("년, 월을 입력하세요(종료는 0) : ");
		scanf("%d%d", &year, &month);
		printf("\n");
		printf("%10d년 %d월\n", year, month);
		printf("===========\n");
		printf("------------------------------------");
		printf(" SUN MON TUE WED THU FRI SAT %d \n");
		printf("------------------------------------\n");
			for (j = ;j;j++)
			{
				if ((year % 4 == 0)||(year%400==0))
				{
					all_day = 366;
				}
				else if ((year % 4 == 0) && (year % 100))
				{
					all_day = 365;
				}
				else
				{
					all_day = 365;
				}
				if (all_day)
				{

				}
			}
				
		if (new_line == 7)
		{
			printf("\n");
			new_line = 0;
		}


}