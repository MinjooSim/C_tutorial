#include<stdio.h>
int main(void)
{
	int lotto[6] = { 0 };
	int i, j;
	int num;
	int count = 1;
	int flag;

	//�迭 ù��° ��(�񱳴��)�Է�
	printf("�ζǹ�ȣ�� �Է��ϼ��� : ");
	scanf("%d", &lotto[0]);

	i = 1;
	while (i != 6)//i = �� ��° �迭����, �տ��� 0��° �迭 ���� �־������ϱ� 1��
	{
		printf("�ζǹ�ȣ�� �Է��ϼ��� : "); 
		scanf("%d", &num);

		flag = 1; //�ζ� �迭�� �ߺ��Ǵ� ���� �ߺ��� ���ٰ� ����
		for (j = 0; j < 6; j++)
		{
			if (lotto[j] == num)//�ߺ��Ǵ� ���� �ִٰ� ������ �ζ� �迭�� �������� ����.
			{
				printf("���� ��ȣ�� �ֽ��ϴ�!\n");
				flag = 0; //�ζ� �迭�� �������� ����.
				break;//�ݺ������� ��������
			}
		}
		if (flag == 1) {//������ �ִ� ���� �ٸ� ��� �ζ� �迭�� ���� �� �� ���� �迭�� �Ѿ.
			lotto[i] = num;
			i++;
		}


	}
	//-----------------------------------------
	for (i = 0;i < 6;i++)
	{
		for (j = i + 1;j < 6;j++)
		{
			if (lotto[i] > lotto[j])
			{
				num = lotto[j];
				lotto[j] = lotto[i];
				lotto[i] = num;
			}
		}//�������� �迭�� ����

	}

	printf("�Էµ� �ζ� ��ȣ :");
	for (i = 0; i < 6; i++)
		printf("%3d\t", lotto[i]);
	printf("\n");

}
/*
#include<stdio.h>
int main(void)
{
	int lotto[6] = {0};
	int i, j, num;
	int num = 0;
	int count=0;

	printf("�ζǹ�ȣ�� �Է��ϼ��� : ");
	scanf("%d", lotto[0]);

	while (count != 6)
	{
		printf("�ζǹ�ȣ�� �Է��ϼ��� : ");
		scanf("%d", num);

		for(i = 0; i < 6; i++)
			if(num != lotto[i])
				lotto[]
	}

	for (i = 0;i < 6;i++)
	{
		for (j = i + 1;j < 6;j++)
		{
			if (lotto[i] > lotto[j])
			{
				num = lotto[j];
				lotto[j] = lotto[i];
				lotto[i] = num;
			}
		}//�������� �迭�� ����
	
	}
	printf("�Էµ� �ζ� ��ȣ : %3d\n", lotto);
	return 0;
}
*/