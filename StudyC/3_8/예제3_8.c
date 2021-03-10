#include <stdio.h>

int main_a(void)
{
	int income = 0; // income 변수 초기화
	double tax; // tax 변수 선언
	const double tax_rate = 0.12; // tat_rate 변수 초기화

	income = 456; // incom 변수 저장
	tax = income * tax_rate; // tax 변수 저장
	printf("세금은 %.1lf 입니다.\n", tax); // 결과물 출력

	return 0;
}

/*
예약자와 식별자
int abc; 일 때 int 는 컴파일러와 약속이 된 이름이며
abc 는 임의로 작성 가능한 변수이름이다
*/