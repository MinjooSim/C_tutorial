#include<stdio.h>

int main(void)
{
	int km, km_h;
	int hour, min;
	double sec;
	double time;

	printf("거리와 속력 입력 : ");
	scanf("%d%d", &km, &km_h);

	time = (double)km / (double)km_h; //형 일치 시키기!

	hour = time;
	time -= hour;
	time *= 60.0;
	min = time;
	time -= min;
	time *= 60.0;
	sec = time;

	printf("소요 시간은 %d시간 %d분 %.3lf초입니다.\n ", hour, min, sec);

	return 0;
}