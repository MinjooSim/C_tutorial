#include <stdio.h>

int main(void)
{

	int sandwich, coffee, cup;
	int total, change, rest;
	int w5000, w1000, w500, w100, w50, w10;
	int mon;
	printf("�� ���� ���ǰ��� �Է��ϼ��� : ");
	scanf("%d%d%d", &sandwich, &coffee, &cup);
	printf("������ ���� �Է��ϼ��� : ");
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

	printf("�Ž������� %d�� �Դϴ�.\n", change);
	printf("��õ���� : %d��\n", w5000);
	printf("õ���� : %d��\n", w1000);
	printf("�����¥�� ���� : %d��\n", w500);
	printf("���¥�� ���� : %d��\n", w100);
	printf("���ʿ�¥�� ���� : %d��\n", w50);
	printf("�ʿ�¥�� ���� : %d��\n", w10);

	return 0;

}