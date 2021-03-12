#include <stdio.h>

int main(void)
{
	int a = 10;
	double b = 3.4;

	printf("int 형의 변수 크기 : %d\n", sizeof(int)); // 정수형
	printf("double 형의 변수 크기 : %d\n", sizeof(double)); // 실수형
	printf("정수형 상수의 크기 : %d\n", sizeof(a)); // 정수형
	printf("연산의 결과값의 크기 : %d\n", sizeof(1.5+3.4)); // 실수형
	printf("char의 자료형의 크기 : %d\n", sizeof(char)); // 문자

	return 0;
}
/* sizeof(a) 의 경우 sizeof a 라고 사용할 수 있지만 sizeof(1.5 + 3.4) 같은 경우에는
sizeof 1.5 + 3.4 로 쓸 경우 sizeof 1.5 = 8, 8 + 3.4 로 연산이 되어
11.4 가 되어버리고 sizeof char 는 선언문이 되므로 에러가 발생할 수 있다.*/