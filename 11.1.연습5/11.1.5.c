#include<stdio.h>

int main(void)
{
	char space, tab, enter;

	printf("(space)(tab)(enter)\n");
	scanf("%c%c%c", &space, &tab, &enter);
	printf("space Ű�� �ƽ�Ű �ڵ尪 : %d\n", space);
	printf("tab Ű�� �ƽ�Ű �ڵ� �� : %d\n", tab);
	printf("enter Ű�� �ƽ�Ű �ڵ� �� : %d\n", enter);

}