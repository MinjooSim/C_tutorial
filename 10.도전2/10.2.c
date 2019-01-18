#include<stdio.h>
int check_same(int *lotto_nums, int *my_nums)
{
	int i, j;
	int count=0;

	for (i =0 ;i < 6;i++)
	{
		for (j = 0;j < 6;j++)
		{
			if (lotto_nums[i] == my_nums[j])
			{
				count++;
			}
		}
	}

	return  count;
}

int main(void)
{
	int count =0;
	int lotto_nums[6] = { 4,10,25,30,41,45 };
	int my_nums[6] = { 1,4,7,22,41,43 };

	count = check_same(&lotto_nums, &my_nums);//&&

	printf("일치하는 번호의 개수 : %d\n", count);
}