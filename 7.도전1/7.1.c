#include<stdio.h>

int total(int kor, int eng, int mat); //세 과목 점수를 넘겨받아 총점 반환
double average(int tot); //총점을 넘겨받아 평균 반환
void print_totle(void); //점수를 제외한 나머지 부분 출력
int main(void)
{
	int kor, eng, mat;
	int tot;
	double avg;
	printf("# 세 과목의 점수 입력 : ");
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
	printf(" =====<성적표>====\n");
	printf("\n");
	printf("------------------------------\n");
	printf(" 국어  영어  수학    총점    평균 \n");
	printf("------------------------------\n");

}