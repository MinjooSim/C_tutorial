#include <stdio.h>

int main(void)
{

	int sandwich, coffee, cup;
	int total, change, rest;
	int w5000, w1000, w500, w100, w50, w10;
	int mon;
	printf("세 개의 물건값을 입력하세요 : ");
	scanf("%d%d%d", &sandwich, &coffee, &cup);
	printf("지불할 돈을 입력하세요 : ");
	scanf("%d", &mon);
	total = sandwich + coffee + cup;
	change = mon - total;

	w5000 = change / 5000;
	rest = change % 5000;
	w1000 = rest / 1000;
	rest = rest % 1000;
	w500 = rest / 500;
	rest = rest % 500;
	w100 = rest / 100;
	rest = rest % 100;
	w50 = rest / 50;
	rest = rest % 50;
	w10 = rest / 10;
	rest = rest % 10;

	printf("거스름돈은 %d원 입니다.\n", change);
	printf("오천원권 : %d장\n", w5000);
	printf("천원권 : %d장\n", w1000);
	printf("오백원짜리 동전 : %d개\n", w500);
	printf("백원짜리 동전 : %d개\n", w100);
	printf("오십원짜리 동전 : %d개\n", w50);
	printf("십원짜리 동전 : %d개\n", w10);

	return 0;

}