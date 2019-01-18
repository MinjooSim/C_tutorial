#include <stdio.h>


char strcpy(char ch[80], char str[80])
{
	int i;

	for (i = 0;i < 50;i++)
	{
		ch[i] = str[i];
	}//strcpy역할
}
int strcmp(char *pa, char*pb)
{
	while ((*pa == *pb) && (*pa != '\0')) //두 문자가 같으나 널문자가 아닌 경우
	{
		pa++; //다음 문자로 이동
		pb++;
	}
	//반복문 이후 이시점에서는 두 문자가 다르거나 둘 다 널문자임
	if (*pa > *pb) //앞 문자의 아스키 코드값이 크면 1반환
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
	char str1[80], str2[80], str3[80]; //입력할 단어의 배열
	char temp[80];//임시 저장 배열

	printf("세 단어 입력 : ");
	scanf("%s %s %s", str1, str2, str3);
	
	//strcmp함수 = 알파벳이 뒤로 갈수록 아스키코드가 커진다는 것을 이용
	//str1이 str2보다 사전순으로 앞서면 음수 반환, 뒤에 있으면 양수반환, 둘다 같으면 0 반환
	
	if (strcmp(str1, str2) > 0)//사전순으로 나열하는 함수 
	{   
		//temp = str1;//옆으로 복사하는 함수
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