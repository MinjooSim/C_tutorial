#include<stdio.h>
int main(void)
{
	int num1, num2;
	int ope;
	int res;
	//char sum = '+', sub = '-', mul = '*', div = '/';

	printf("<<°è»ê±â_switch¹®>>\n\n");

	while (1)
	{
		printf("¼ýÀÚ µÎ °³¸¦ ÀÔ·ÂÇÏ¼¼¿ä : ");
		scanf("%d%d", &num1, &num2);
		printf("¿¬»êÀÚ¸¦ ÀÔ·ÂÇÏ½Ã¿À : 1. µ¡¼À, 2. »¬¼À, 3. °ö¼À, 4. ³ª´°¼À\ :  " );
		scanf("%d", &ope);
		printf("%d¸¦ ¼±ÅÃÇÏ¼Ì½À´Ï´Ù.\n", ope);

		switch (ope)
		{
		case 1:
			res = num1 + num2;
			printf("°á°ú : %d\n", res);
			break;
		case 2:
			res = num1 - num2;
			printf("°á°ú : %d\n", res);
			break;
		case 3:
			res = num1*num2;
			printf("°á°ú : %d\n", res);
			break;
		case 4:
			res = num1 / num2;
			printf("°á°ú : %d\n", res);
			break;
		}
		printf("\n");
	}

}