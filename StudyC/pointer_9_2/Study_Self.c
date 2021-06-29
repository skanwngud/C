// 포인터 선언 및 간접 참조 연산자
#include <stdio.h>

int main(void)
{
	int a; // 일반 변수 선언
	int* pa; // 포인터 선언

	pa = &a; // 포인터에 a 의 주소 대입
	*pa = 10; // 포인터로 변수 a 에 10 대입 -> pa 가 가르키는 곳은 a 의 주소값이고 a 의 주소값을 따라가니 10이 있었다. 라는 스토리 텔링이 가능

	printf("포인터로 a의 값 출력 : %d\n", *pa);
	printf("변수명으로 a의 값 출력 : %d\n", a);

	return 0;
}