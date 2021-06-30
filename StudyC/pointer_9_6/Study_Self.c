// 허용 되지 않은 포인터의 대입
#include <stdio.h>

int main(void)
{
	int a = 10;
	int* p = &a;
	double* pd;

	pd = p;
	printf("%lf\n", *pd); // 쓰레기값 출력

	/*
	쓰레기값이 출력 되지 않기 위해선 형변환을 시켜주면 된다
	
	double a = 3.4;
	double *pd = &a;
	int *pi;
	pi = (int *)pd;
	*/

	return 0;
}