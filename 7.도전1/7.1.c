#include<stdio.h>

int total(int kor, int eng, int mat); //�� ���� ������ �Ѱܹ޾� ���� ��ȯ
double average(int tot); //������ �Ѱܹ޾� ��� ��ȯ
void print_totle(void); //������ ������ ������ �κ� ���
int main(void)
{
	int kor, eng, mat;
	int tot;
	double avg;
	printf("# �� ������ ���� �Է� : ");
	scanf("%d%d%d", &kor, &eng, &mat);

	tot = total(kor,eng,mat);
	avg = average(tot);
	print_totle();

	printf(" %3d %4d %5d  %4d  %.1lf \n", kor, eng, mat, tot, avg);


}
int total(int kor, int eng, int mat)
{
	int tot;

	tot = kor + eng + mat;
	return tot;
}
double average(int tot)
{
	double ave;
	ave = (double)tot / 3.;
	return ave;
}

void print_totle(void)
{
	printf(" =====<����ǥ>====\n");
	printf("\n");
	printf("------------------------------\n");
	printf(" ����  ����  ����    ����    ��� \n");
	printf("------------------------------\n");

}