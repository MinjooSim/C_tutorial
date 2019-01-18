#include<stdio.h>
void rotate(int *pa, int *pb, int *pc);

int main(void)
{
	int a[3] = {1, 2, 3};
	char ch;
	int i;

	printf("%d : %d : %d\n", a[0], a[1],a[2] );
	
	while (1)
	{
		scanf("%c", &ch);
		if (ch == '\n') {
			rotate(a+0, a+1, a+2);//a+0은 a[0]을 의미
		}
		else 
			break;
	}
	return 0;
}

void rotate(int *pa, int *pb, int *pc)
{
	int temp;

	temp = *pa;
	*pa = *pb;
	*pb = *pc;
	*pc = temp;
	printf("%d : %d : %d ", *pa, *pb, *pc);
}