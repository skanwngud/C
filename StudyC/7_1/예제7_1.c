#include <stdio.h>

int sum(int x, int y); // sum 함수 선언 - 매개변수의 자료형이 같아서 , 로 구분 지어야한다

int main(void) // main 함수 시작
{
	int a = 10, b = 20; // a, b 변수 초기화
	int result; // 두 값의 합을 저장 할 result 변수 선언

	result = sum(a, b); // sum 함수 호출
	printf("result : %d\n", result);

	return 0;
} // main 함수의 끝

int sum(int x, int y) // sum 함수 정의 시작
{
	int temp; // 두 정수의 합을 잠시 저장할 변수 선언

	temp = x + y; // x와 y 의 합을 temp 에 저장

	return temp; // temp 반환
} // sum 함수의 끝