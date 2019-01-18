#include<stdio.h>
int main(void)
{
	int num;
	char alpha;

	printf("가장 좋아하는 숫자?");
	scanf("%d", &num);
	fflush(stdin);
	printf("가장 좋아하는 알파벳?");
	alpha = getchar();
	printf("%d %c\n", num, alpha);

}