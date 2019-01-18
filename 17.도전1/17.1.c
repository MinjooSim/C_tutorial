#include<stdio.h>

struct money_box 
{
	int w500;
	int w100;
	int w50;
	int w10;
};

typedef struct money_box MoneyBox;

void init(MoneyBox *pmoney)//MoneyBox ���� �ʱ�ȭ //�Ű������� ����ü ������
{
	pmoney->w10 = 0;//pmoney = ����ü ������//->����ü ���� ��������() ��� ���
	pmoney->w50 = 0;
	pmoney->w100 = 0;
	pmoney->w500 = 0;
}

void save(MoneyBox *pmoney, int unit, int cnt)//unit ������ cnt�� ����
{
	switch(unit)
	{
	case 500:
	{
		pmoney->w500 = pmoney->w500 + cnt;
		break;
	}
	case 100:
	{
		pmoney->w100 = pmoney->w100 + cnt;
		break;
	}
	case 50:
	{
		pmoney->w50 = pmoney->w50 + cnt;
		break;
	}
	case 10:
	{
		pmoney->w10 = pmoney->w10 + cnt;
		break;
	}

	}

}

int total(MoneyBox *pmoney)//�������� �� ����� ��ȯ
{
	int tot =0;
	tot = pmoney->w500 * 500 + pmoney->w100 * 100 + pmoney->w50 * 50 + pmoney->w10 * 10;
	return tot;
}

int main(void)
{
	MoneyBox money;
	MoneyBox *pmoney = &money;

	int money_total = 0;
	int count = 0;
	int coin = 0;
	
	init(pmoney);

	while (coin != -1)
	{
		printf("������ �ݾװ� ���� : ");
		scanf("%d", &coin);
		if (coin == -1)
		{
			break;
		}
		scanf("%d", &count);

		save(pmoney,coin,count);
	}
	
	money_total = total(pmoney);
	
	printf("�� ���ݾ� : %d��\n", money_total);
	
	return 0;

}
