#include<stdio.h>
//������ pa�� ��� �迭 ��ҿ� ����� ����ϴ� ���α׷��� �ۼ��մϴ�.
//��հ� ���� �� ��._//ǥ�� �ص� �κ� �� �� �Ǵ��� ��
int main(void)
{
	//double ary[5];
	double ary[5] = { 1.2, 3.5, 7.4, 0.5, 10.0 };
	double *pa = ary;
	double tot=0; //������ ������ ����
	int i;

	printf("�迭 ����� �� : ");
	/*for (i = 0;i < 5;i++)
	{
		scanf("%.1lf", ary[i]);
	}
	*/
	for (i = 0;i < 5;i++)
	{
		printf("%.1lf  ", *pa);//pa�� ����Ű�� �迭 ��� ���
		tot += *pa;//pa�� ����Ű�� �迭 ��� ����
		pa++;//pa�� ���� �迭 ��ҷ� �̵�
	}

	printf("\n��� �� : %.1lf\n", tot/5.);
}