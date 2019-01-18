#include<stdio.h>
#include<stdlib.h>

void prime(int *number, int num) 
{
	int i, j;
	
	for (i = 0;i < num;i++)  //number 초기화
	{
		number[i] = 0;
	}
	
	for (i = 2;i < num;i++)
	{
		for (j = 2;j < i;j++)
		{
			if (i%j == 0) //서로 약수관계시  break;
			{
				break;
			}
		}
	//	if (i == j) //i와 j동일 시점 부터 시작
	//	{
	//		number[i - 2] = i;//i가 2부터 시작이라 i-2
	//	}
	}

}
void print(int *number, int num)
{
	int i;
	char x = 'X';
	int pow = 0;

	for (i = 0;i < num;i++)
	{
		if (number[i] == 0)
		{
			printf("%5c",x);
			pow++;
		}
		else
		{
			printf("%5d", number[i]);
			pow++;
		}
		if (pow == 5)
		{
			printf("\n");
			pow = 0;

		}

	}
}
int main(void)
{
	int *number;
	int num;

	printf("양수 입력 :");
	scanf("%d",&num);

	number = (int *)calloc(num, sizeof(int)); 
	//저장공간 배열처럼 사용 가능!!
	prime(number, num);
	print(number, num);

	return 0;

}