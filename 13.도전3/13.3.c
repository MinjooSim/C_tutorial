#include<stdio.h>

char *my_token(char *ps)//ps = �ܾ �и��� ������ ������
{
	char *tmp;
	static int flag =0;//���ڿ��� ��� ó���ϸ� 1 ��ȯ
	char *start;//�и��� �ܾ� ���� �ּ�
	static char *location = NULL;//�������� ���
	//�������� ��� ���� : �Լ��� ȣ��� �����ٹ�ȯ�� ���� �迭 ����� ��ġ�� ���
	if (ps == NULL)
	{
		return NULL;
	}
	if (flag == 1)
	{
		return NULL;
	}
	if (location == NULL)
	{
		start = ps;//���� ��ġ ����
	}
	else
	{
		start = location + 1;
	}

	tmp = start;

	while ((*tmp != ' ') && (*tmp != '\0'))//���鵵 �ƴϰ� �ι��ڵ� �ƴϸ�
	{
		tmp++;
	}

	if (*tmp == '\0')//���ڿ��� ������ flag 1
	{
		flag = 1;
	}
	else//�ƴϸ� ����
	{
		*tmp = '\0';
	}

	location = tmp;//�и��� ��ġ ���

	return start;//���� �ּ� ��ȯ

}//��ȯ�� = �и��� �ܾ��� �ּ�

int main(void)
{
	char str[80] = { 0 };
	char *p;

	printf("���� �Է� : ");
	gets(str);

	while ((p = my_token(str)) != NULL)
	{
		printf("%s\n", p);
	}
	return 0;
}