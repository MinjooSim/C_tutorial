#include<stdio.h>
//��ȿ�������ϴ� ��� ������.
int main(void)
{
	int score[5];
	int i;
	int j = 0;
	int tot = 0;
	double ave;
	int tmp;

	printf("5���� �ɻ������� ���� �Է� : ");
	for (i = 0;i < 5;i++)
	{
		scanf("%d", &score[i]);
	}


	for (i = 0;i < 5;i++)
	{
		for (j = i + 1;j < 5;j++)
		{
			if (score[i] > score[j])
			{
				//������ ���鼭 score�� �Էµ� n��° ����
				//n+1���� Ŭ ��� n�� n+1�� �ڸ��� �ٲ۴�

				tmp = score[j];
				score[j] = score[i];
				score[i] = tmp;//�������� ����
			}
		}
	}
	printf("��ȿ���� : %5d %5d %5d\n", score[1], score[2], score[3]);
	
	for (i = 1;i < 4;i++)
	{

		tot += score[i];
		ave = (double)tot / 3.;
	}
	printf("��� : %.1lf\n", ave);
}