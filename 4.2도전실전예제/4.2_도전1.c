#include<stdio.h>

int main(void)
{
	double kg, cm;
	double bmi;

	
	printf("������(kg)�� Ű(cm) �Է� :  ");//�����Կ� Ű �ڿ� �Ҽ���(.0)�̶� �ٿ��� �����.
	scanf("%lf %lf\n", &kg, &cm);
	

	bmi = kg/(cm/100 * cm/100);


	if (bmi < 20.0)
		printf("ü�߰����� �ʿ��մϴ�\n");
	else if (bmi >= 25.0)
		printf("ü�߰����� �ʿ��մϴ�\n");
	else
		printf("ǥ���Դϴ�\n");



}