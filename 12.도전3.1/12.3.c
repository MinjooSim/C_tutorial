#include <stdio.h>
#include <string.h>

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
int main()
{
	char arr[200] = { 0 };
	char *ptr = arr;
	char input[20];
	int i;
	int cnt = 0;
	int len;

	printf("���� �Է� : ");
	gets(arr);

	while (1)
	{
		printf("�˻��� ���ڿ� �Է� (����� end) : ");
		gets(input);
		len = strlen(input);

		for (i = 0; i < strlen(arr); i++)//���ڿ��� ���� ��� �Լ� = strlen
		{
			 //strncmp(���� �迭1,���� �迭2,���� ���ڼ�)
			if (strncmp((ptr + i), input, len) == 0)//strncmp = ���ڿ� �� �Լ� & ���ڿ��� �Ϻθ� �ٷ�� �Լ�
			{
				cnt++;
			}
		}

		printf("�˻� ��� : %d\n", cnt);
		cnt = 0;

		if ((strcmp(input, "end") == 0))
			break;

	}


	return 0;

}


