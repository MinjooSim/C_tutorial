#include<stdio.h>
//strlen = ���ڿ��� ���̸� ����ϴ� �Լ� 
int strlen(char *ps)//ps�� �迭���� �����ϰ� ù���� �迭 ��Ҹ� ����Ŵ
{
	int cnt = 0;//���� ���� ���� ���� ����

	while (*ps != '\0')//ps�� ����Ű�� ���ڰ� �ι��ڰ� �ƴ� ����
	{
		cnt++;//���� �� ����
		ps++; //�����͸� ���� ������ ��ġ�� �̵�
	}
	return cnt;//��ü ���ڼ� ��ȯ
}

int main(void)
{
	char num[11];
	int ch ;
	int i = 0;
	int cnt = 1;
	int tot;
	int n;
	int sum = 0;
	int s = 0;
	
	while ((ch = getchar()) != '\n')//�ٹٲ� ������ char �迭�� ����
	{
		num[i] = ch;
		i++;
		
	}
	num[i] = '\0'; //���ڿ��� ���� �˷��ֱ� ���� �ι��� ����

	n = strlen(num); //sum�� ���ڿ��� ����

	for (i = n - 1;i >= 0;i--) //��ȯ�� ������ �ڸ� �� ����.
	{//�迭�� ������ 0���Ͷ� -1�� ���ָ鼭 ���� �ڸ� ���ں��� �� ���ڸ� ���ڱ��� �ö󰡼� ���
		sum += ((num[i] - 48) * cnt); //-48�� 0�� �ƽ�Ű�ڵ尡 48
		cnt *= 10;//cnt�� �ڸ���
	}

	tot = sum + 10;

	printf("%d\n", tot);
	return 0;
}