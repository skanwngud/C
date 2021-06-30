// 포인터를 사용한 두 변수의 값 교환
#include <stdio.h>

void swap(int* pa, int* pb); // 두 변수의 값을 바꾸는 함수의 선언

int main(void)
{
	int a = 10, b = 20;

	swap(&a, &b);
	printf("a : %d, b : %d\n", a, b);

	return 0;
}

void swap(int* pa, int* pb)
{
	int temp; // 교환을 위한 임시 변수

	temp = *pa; // temp 에 pa 가 가리키는 변수의 값 저장
	*pa = *pb; // pa 가 가르키는 변수에 pb 가 가르키는 변수의 값 저장
	*pb = temp; // pb 가 가르키는 변수에 temp 값 저장
}