#include<stdio.h>

struct student
{
	int id;//�й�
	char name[20];//�̸�
	int score[3];//����
	double avg;//���
};
typedef struct student STUDENT;

void print_avg(STUDENT *s)
{
	int i, j, sum = 0;
	
	for (j = 0;j < 5;j++)
	{
		printf("�й� ; %d\n", s[j].id);
		printf("�̸� : %s\n", s[j].name);
		printf("����, ����, ���� ���� : ");

		for (i = 0;i < 3;i++)
		{
			printf("%3d", s[j].score[i]);
			sum += s[j].score[i];
		}

		printf("%d");
		s[j].avg = sum / 3;
	}
	return s;
}
char grade(STUDENT *s)
{
	char abcd;

	if (s.avg >= 90)
	{
		abcd = "A";
	}
	else if (s.avg >= 80 && s.avg < 90)
	{
		abcd = "B";
	}
	else if (s.avg >= 70 && s.avg < 80)
	{
		abcd = "C";
	}
	else
	{
		abcd = "F";
	}
	return abcd;
}
void array(void)
{

}
int main(void)
{
	STUDENT s[5];

	


}