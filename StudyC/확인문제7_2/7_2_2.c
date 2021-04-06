#include <stdio.h>

int func(int n); // input 과 return 을 둘 다 받음
int ploy(int n); // input 과 return 을 둘 다 받음

int main_b(void)
{
	printf("%d\n", func(-3)); // func 함수의 input 을 -3 한 값을 출력

	return 0;
}

int func(int n) // func 함수 정의
{
	int res; // 값을 저장할 변수 선언

	res = poly(n); // poly 함수의 값을 저장
	
	if (res >= 0) return res; // 논리 연산자를 통해 res 값 도출
	
	else return -res;
}

int poly(int n) // poly 함수 정의
{
	return((2 * n * n) + (3 * n)); // poly 함수 연산 내용
}

// retrun 값 = 9