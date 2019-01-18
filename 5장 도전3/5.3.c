#include <stdio.h>
int func1(int elc);
double func2(int elc);

int main(void)
{
	int elc;
	double tax = 0.0;
	printf("전기 사용량을 입력하세요(kw) :");
	scanf("%d", &elc);

	tax = (double)(func1(elc) + func2(elc)) * 0.09;
	//기본이랑 요금당이랑 세금 합한거
	printf("이번 달 요금은 %d원입니다.\n", func1(elc) + (int)func2(elc) + (int)tax);

}
int func1(int elc)
{
	int charge1 = 0;
	switch (elc / 100)
	{
	case 0:
		charge1 = 370;
		break;
	case 1:
		charge1 = 660;
		break;
	case 2:
		charge1 = 1130;
		break;
	case 3:
		charge1 = 2710;
		break;
	case 4:
		charge1 = 5130;
		break;
	default:
		charge1 = 9330;
		break;
	}
	return charge1;
}
double func2(int elc)
{
	double charge2 = 0.0;

	if (elc <= 100)
		charge2 = 100 * 52.0;
	else if ((elc > 100) && (elc <= 200))
		charge2 = 100 * 52.0 + (elc % 100) * 88.5;
	else if ((elc > 200) && (elc <= 300))
		charge2 = 100 * 52.0 + 100 * 88.5 + (elc % 100) * 127.8;
	else if ((elc > 300) && (elc <= 400))
		charge2 = 100 * 52.0 + 100 * 88.5 + 100 * 127.8 + (elc % 100) * 184.3;
	else if ((elc>400)&& (elc <= 500))
		charge2 = 100 * 52.0 + 100 * 88.5 + 100 * 127.8 + 100 * 184.3 + (elc % 100) * 274.3;
	else
		charge2 = 100 * 52.0 + 100 * 88.5 + 100 * 127.8 + 100 * 184.3 + 100 * 274.3 + (elc % 100) * 494.0;

	return charge2;
}
/*#include<stdio.h>
//키보드로 전기 사용량(kw)을 입력받으면 사용 요금을 출력하는 프로그램을 작성

int main(void)
{
	int kw, basic_fare,total;
	double kw_charge;
	double tax ,result;
	
	tax = total*0.09;
	result = tax + total;


	printf("전기 사용량을 입력하시오 : ");
	scanf("%d\n", &kw);

	if (kw > 500)
	{
		
	}
	{
		if (kw <= 100)
		{
			basic_fare = 370;
		}
		else if ((kw >= 101) && (kw <= 200))
		{
			basic_fare = 660;
		}
		else if ((kw >= 201) && (kw <= 300))
		{
			basic_fare = 1130;
		}
		else if ((kw >= 301) && (kw <= 400))
		{
			basic_fare = 2710;
		}
		else if ((kw >= 401) && (kw <= 500))
		{
			basic_fare = 5130;
		}
		else
		{
			basic_fare = 9330;
		}
	}

	
}
*/