#include<stdio.h>
int main(void)
{
	int lotto[6] = { 0 };
	int i, j;
	int num;
	int count = 1;
	int flag;

	//배열 첫번째 항(비교대상)입력
	printf("로또번호를 입력하세요 : ");
	scanf("%d", &lotto[0]);

	i = 1;
	while (i != 6)//i = 몇 번째 배열인지, 앞에서 0번째 배열 수는 주어졌으니까 1로
	{
		printf("로또번호를 입력하세요 : "); 
		scanf("%d", &num);

		flag = 1; //로또 배열에 중복되는 값을 중복이 없다고 가정
		for (j = 0; j < 6; j++)
		{
			if (lotto[j] == num)//중복되는 값이 있다고 했을때 로또 배열에 저장하지 않음.
			{
				printf("같은 번호가 있습니다!\n");
				flag = 0; //로또 배열에 저장하지 않음.
				break;//반복문에서 빠져나옴
			}
		}
		if (flag == 1) {//기존에 있는 수와 다를 경우 로또 배열에 삽입 후 그 다음 배열로 넘어감.
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
		}//오름차순 배열로 변경

	}

	printf("입력된 로또 번호 :");
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

	printf("로또번호를 입력하세요 : ");
	scanf("%d", lotto[0]);

	while (count != 6)
	{
		printf("로또번호를 입력하세요 : ");
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
		}//오름차순 배열로 변경
	
	}
	printf("입력된 로또 번호 : %3d\n", lotto);
	return 0;
}
*/