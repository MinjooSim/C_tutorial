#include <stdio.h>
#include<string.h>

int main()
{
	char arr[100];
	char temp[100] = { 0 };
	char buff[100];

	while (1)
	{
		printf("�ܾ� �Է�: ");
		gets(arr);
		strcat(temp, arr);

		if ((strcmp(arr, "end")) == 0)
			break;

		printf("��������� ���ڿ�: %s \n", temp);

	}
	return 0;
}


