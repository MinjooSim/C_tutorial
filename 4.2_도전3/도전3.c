#include<stdio.h>

int main(void)
{
	int km, km_h;
	int hour, min;
	double sec;
	double time;

	printf("�Ÿ��� �ӷ� �Է� : ");
	scanf("%d%d", &km, &km_h);

	time = (double)km / (double)km_h; //�� ��ġ ��Ű��!

	hour = time;
	time -= hour;
	time *= 60.0;
	min = time;
	time -= min;
	time *= 60.0;
	sec = time;

	printf("�ҿ� �ð��� %d�ð� %d�� %.3lf���Դϴ�.\n ", hour, min, sec);

	return 0;
}