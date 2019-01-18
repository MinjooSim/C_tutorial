#include<stdio.h>
//유효점수구하는 방법 공부함.
int main(void)
{
	int score[5];
	int i;
	int j = 0;
	int tot = 0;
	double ave;
	int tmp;

	printf("5명의 심사위원의 점수 입력 : ");
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
				//루프를 돌면서 score에 입력된 n번째 수가
				//n+1보다 클 경우 n과 n+1의 자리를 바꾼다

				tmp = score[j];
				score[j] = score[i];
				score[i] = tmp;//오름차순 정렬
			}
		}
	}
	printf("유효점수 : %5d %5d %5d\n", score[1], score[2], score[3]);
	
	for (i = 1;i < 4;i++)
	{

		tot += score[i];
		ave = (double)tot / 3.;
	}
	printf("평균 : %.1lf\n", ave);
}