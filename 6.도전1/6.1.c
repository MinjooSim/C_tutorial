#include<stdio.h>
#include<stdlib.h>

//1~30까지의 수 중에 하나며 입력한 숫자가 정답이 아닐 경우 크거나 작은지 알려줌.
//맞춘 후에는 시도한 횟수를 출력
int main(void)
{
	int random = 1 + rand() % 31; //1부터 시작이라 +1
	int i, x;

	for (i = 1;i < 31;i++)
	{
		printf("숫자 입력(1부터 30까지) : ");
		scanf("%d", &x);
		if (x == random)
		{
			printf("정답입니다!\n");
			printf("시도한 횟수는 %d회 입니다\n", i);
			break;
		}
		else if (x > random)
		{
			printf("%d보다 작습니다!\n", x);
		}
		else
		{
			printf("%d보다 큽니다\n", x);
		}
	}

	return 0;
}