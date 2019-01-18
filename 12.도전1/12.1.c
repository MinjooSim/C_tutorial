#include<stdio.h>
void strcpy(char *pa, char *pb)
{
	char str1[80], str2[80] = { 0 };

	pa = str1;
	pb = str2;

	pa = pb;

}
void strcmp(char *pa, char *pb)
{
	char st1[80] = { 0 };
	char st2[80] = { 0 };
	char st3[80] = { 0 };
	char temp[80] = { 0 };

	if ((int)st1[0] > (int)st2[0])
	{
		voca = pa;//st1이 st2보다 사전 뒤에 위치함.(아스키코드이용)//2->1
		pa = pb;
		pb = voca;
	}
}
int main(void)
{
	char str1[80] = { 0 };
	char str2[80] = { 0 };
	char str3[80] = { 0 };
	
	while (1)
	{
		printf("세 단어 입력 : ");
		scanf("%s%s%s", &str1, &str2, &str3);

		string(&str1, &str2);
		string(&str2, &str3);
		string(&str1, &str3);
	
		printf("%s, %s, %s\n", str1, str2, str3);
	}
}