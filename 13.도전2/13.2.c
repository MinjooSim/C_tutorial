#include<stdio.h>

int h, m = 0;
char day;

void set(int ph, int pm) //���� �ð��� ���� �����ϴ� �Լ�
{
	printf("���� �ð��� �� �Է�(24�ð�) : ");
	scanf("%d%d", &ph, &pm);

	h = ph;
	m = pm;
}
void time(int time, char day)
{
	int i;

	for (i = 0;i < 24;i++)
	{
		if (i < 13)
		{
			day = 'A';
			time = i;
		}
		else
		{
			day = 'P';
			time = i - 12;
		}
	}

}
void show(void)//�ð��� ���� ȭ�鿡 ����ϴ� �Լ�
{

	time(h, day);
	printf("������ �ð� : %d : %d (%cM)\n", h, m, day);

}
void move(void)//�� �� ȣ��� ������ 1�о� ����
{
	int move = 0;
	int i;

	printf("��� �ð� �Է�(��) : ");
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
		printf("[��.��.��.��. %d]\n", i);

		set(h, m);
		show();
		move();

		printf("���� �ð� : %d : %d (%cM)\n\n", h, m, day);

	}

}