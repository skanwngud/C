#include <stdio.h>

int main(void)
{
	int a = 10, b = 15, total; // int 형 변수 선언과 초기화
	double avg;				   // double 형 변수 선언
	int* pa, * pb;			   // 포인터 변수 선언
	int* pt = &total;		   // 포인터 선언 초기화
	double* pg = &avg;         // double 형 포인터 선언 및 초기화

	pa = &a;					// 포인터 pa 에 a 의 주소 대입
	pb = &b;					// 포인터 pb 에 b 의 주소 대입

	*pt = *pa + *pb;
	*pg = *pt / 2.0;

	printf("두 정수의 값 :%d, %d\n", *pa, *pb);
	printf("두 정수의 합 : %d\n", *pt);
	printf("두 정수의 평균 : %.1f\n", *pg);

	return 0;
}