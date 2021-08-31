#include <stdio.h>

int *sum(int a, int b); // int 형 변수의 주소를 반환하는 함수 선언

int main(void)
{
	int *resp; // 반환값을 저장한 포인터

	resp = sum(10, 20); // resp 에 sum 함수의 결과값의 주소를 저장
	printf("두 정수의 합 : %d\n", *resp);

	return 0;
}

int *sum(int a, int b)
{
	static int res; // 정적 지역 변수 선언

	res = a + b;

	return &res; // res 값을 반환
}