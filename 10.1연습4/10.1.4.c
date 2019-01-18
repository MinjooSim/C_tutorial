#include<stdio.h>
//포인터 pa로 모든 배열 요소와 평균을 출력하는 프로그램을 작성합니다.
//평균값 실행 안 됨._//표시 해둔 부분 왜 안 되는지 모름
int main(void)
{
	//double ary[5];
	double ary[5] = { 1.2, 3.5, 7.4, 0.5, 10.0 };
	double *pa = ary;
	double tot=0; //총합을 누적할 변수
	int i;

	printf("배열 요소의 값 : ");
	/*for (i = 0;i < 5;i++)
	{
		scanf("%.1lf", ary[i]);
	}
	*/
	for (i = 0;i < 5;i++)
	{
		printf("%.1lf  ", *pa);//pa가 가리키는 배열 요소 출력
		tot += *pa;//pa가 가리키는 배열 요소 누적
		pa++;//pa를 다음 배열 요소로 이동
	}

	printf("\n평균 값 : %.1lf\n", tot/5.);
}