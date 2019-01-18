#include <stdio.h>


char strcpy(char ch[80], char str[80])
{
	int i;

	for (i = 0;i < 50;i++)
	{
		ch[i] = str[i];
	}//strcpy����
}
int strcmp(char *pa, char*pb)
{
	while ((*pa == *pb) && (*pa != '\0')) //�� ���ڰ� ������ �ι��ڰ� �ƴ� ���
	{
		pa++; //���� ���ڷ� �̵�
		pb++;
	}
	//�ݺ��� ���� �̽��������� �� ���ڰ� �ٸ��ų� �� �� �ι�����
	if (*pa > *pb) //�� ������ �ƽ�Ű �ڵ尪�� ũ�� 1��ȯ
	{
		return 1;
	}
	else if (*pa < *pb)
	{
		return -1;
	}
	else
		return 0;
}

int main(void)
{
	char str1[80], str2[80], str3[80]; //�Է��� �ܾ��� �迭
	char temp[80];//�ӽ� ���� �迭

	printf("�� �ܾ� �Է� : ");
	scanf("%s %s %s", str1, str2, str3);
	
	//strcmp�Լ� = ���ĺ��� �ڷ� ������ �ƽ�Ű�ڵ尡 Ŀ���ٴ� ���� �̿�
	//str1�� str2���� ���������� �ռ��� ���� ��ȯ, �ڿ� ������ �����ȯ, �Ѵ� ������ 0 ��ȯ
	
	if (strcmp(str1, str2) > 0)//���������� �����ϴ� �Լ� 
	{   
		//temp = str1;//������ �����ϴ� �Լ�
		strcpy(temp, str1);

		//str1 = str2;
		strcpy(str1, str2);

		//str2 = temp;
		strcpy(str2, temp);
	}

	if (strcmp(str1, str3) > 0)
	{
		//temp = str1;
		strcpy(temp, str1);

		//str1 = str3;
		strcpy(str1, str3);

		//str3 = temp;
		strcpy(str3, temp);

	}

	if (strcmp(str2, str3) > 0)
	{
		//temp = str2;
		strcpy(temp, str2);

		//str2 = str3;
		strcpy(str2, str3);

		//str3 = temp;
		strcpy(str3, temp);

	}
	printf("%s %s %s", str1, str2, str3);
	printf("\n");
	return 0;
}