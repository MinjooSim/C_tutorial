#include<stdio.h>

void input_nums(int *lotto_nums)//�迭�� �ζ� ��ȣ�� �Է��ϴ� �Լ�
{
	int i, j;
	int str, n;
	printf("�ζ� ��ȣ�� �Է��ϼ��� : ");
	scanf("%d", &lotto_nums[0]);

	i = 1;
	while (i != 6)
	{
		printf("�ζ� ��ȣ�� �Է��ϼ��� : ");
		scanf("%d", &n);
		
		str = 1;
		for (j = 0;j < 6;j++)
		{
			if (n == lotto_nums[j])
			{
				printf("���� ��ȣ�� �ֽ��ϴ�.\n");
				str = 0;
				break;
			}
		}
		if (str == 1)
		{
			lotto_nums[i] = n;
			i++;
		}
	}

}

void print_nums(int *lotto_nums)//�迭�� ����� ���� ����ϴ� �Լ�
{
	int i, j;
	int num;

	for (i = 0;i < 6;i++)
	{
		for (j = i + 1;j < 6;j++)
		{
			if (lotto_nums[i] > lotto_nums[j])
			{
				num = lotto_nums[j];
				lotto_nums[j] = lotto_nums[i];
				lotto_nums[i] = num;
			}//�������� �迭
		}
	}
	printf("�Էµ� �ζǹ�ȣ : ");
	for (i = 0;i < 6;i++)
		printf("%3d\t", lotto_nums[i]);
	printf("\n");
}
int main(void)
{
	int lotto_nums[6] = {0}; //�ζ� ��ȣ�� ������ �迭

	input_nums(lotto_nums);// �Է��Լ� ȣ��
	print_nums(lotto_nums);//����Լ� ȣ��
	return 0;
}