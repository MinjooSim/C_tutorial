#include<stdio.h>

void input_nums(int *lotto_nums)//배열에 로또 번호를 입력하는 함수
{
	int i, j;
	int str, n;
	printf("로또 번호를 입력하세요 : ");
	scanf("%d", &lotto_nums[0]);

	i = 1;
	while (i != 6)
	{
		printf("로또 번호를 입력하세요 : ");
		scanf("%d", &n);
		
		str = 1;
		for (j = 0;j < 6;j++)
		{
			if (n == lotto_nums[j])
			{
				printf("같은 번호가 있습니다.\n");
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

void print_nums(int *lotto_nums)//배열에 저장된 값을 출력하는 함수
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
			}//오름차순 배열
		}
	}
	printf("입력된 로또번호 : ");
	for (i = 0;i < 6;i++)
		printf("%3d\t", lotto_nums[i]);
	printf("\n");
}
int main(void)
{
	int lotto_nums[6] = {0}; //로또 번호를 저장할 배열

	input_nums(lotto_nums);// 입력함수 호출
	print_nums(lotto_nums);//출력함수 호출
	return 0;
}