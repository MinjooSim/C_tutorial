#include<stdio.h>
int main(void)
{
	char ch;
	int cnt = 0;
	int temp = 0;//���� �� �ܾ��� ���� ����
	
	while ((scanf("%c", &ch)) != -1)//-1�Է½� ����
	{
		if (ch != '\n')//ch�� �ٹٲ��� �ƴҶ� ī��Ʈ ����
		{
			cnt++;
		}
		else//���� �ܾ�� �Է��� �ܾ� ��
		{
			if (temp < cnt)
			{
				temp = cnt;
				cnt = 0;
			}
		}
	}
	printf("���� �� �ܾ��� ���� : %d\n", temp);

	return 0;
}