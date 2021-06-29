// const 사용
#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	const int* pa = &a;

	printf("변수 a 의 값 : %d\n", *pa); // pa 를 따라가면 &a 가 나오고 &a 는 a의 주소값이니 10
	
	pa = &b;							// pa 에 b의 주소값을 대입

	printf("변수 b 의 값 : %d\n", *pa); // pa 를 따라가면 &b 가 나오고.. 20

	pa = &a;							// pa 에 a 의 주소값을 대입
	a = 20;								// a 를 20으로 초기화
	printf("변수 a 의 값 : %d\n", *pa); // pa 는 a 를 나타내므로 20

	return 0;
}