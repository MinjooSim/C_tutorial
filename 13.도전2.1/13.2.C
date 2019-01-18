#include<stdio.h>

int h, m = 0;
char day;

void set(int ph, int pm) //최초 시간과 분을 설정하는 함수
{
	printf("최초 시간과 분 입력(24시간) : ");
	scanf("%d%d", &ph, &pm);

	h = ph;
	m = pm;
}
int time_(int *time)
{
	if (h > 12)
	{
		time = h - 12;
	}
	else
	{
		time = h;
	}
	h = time;
	return h;
}
char ampm(char *ap)
{
	if(h>12)
	{
		ap = 'P';
	}
	else
	{
		ap = 'A';
	}
	day = ap;
	return day;
}
void show(void)//시간과 분을 화면에 출력하는 함수
{
	ampm(day);
	time_(h);
	
	printf("설정된 시간 : %d : %d (%cM)\n", h, m, day);

}
void move(void)//한 번 호출될 때마다 1분씩 증가
{
	int move = 0;
	int i;

	printf("경과 시간 입력(분) : ");
	scanf("%d", &move);

	for (i = 0;i < move;i++)
	{
		m++;
	}
	if (m  > 60)
	{
		m -= 60;
		h++;
	}
}
int main(void)
{
	int i;

	for (i = 1;i < 12;i++)
	{
		printf("[실.행.결.과. %d]\n", i);

		set(h, m);
		show();
		ampm(day);
		move();

		printf("현재 시간 : %d : %d (%cM)\n\n", h, m, day);

	}

}