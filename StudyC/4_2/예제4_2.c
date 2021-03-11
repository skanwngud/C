#include <stdio.h>

int main(void)
{
	double apple; // 실수
	int banana; // 정수
	int orange; // 정수
	
	apple = 5.0 / 2.0; // 실수와 실수의 나누기 연산
	banana = 5 / 2; // 정수와 정수의 나누기 연산
	orange = 5 % 2; // 정수와 정수의 나누기 연산의 나머지

	printf("apple : %.1lf\n", apple);
	printf("banana : %d\n", banana); // 정수몫만 계산 되었으므로 2가 나옴
	printf("orange : %d\n", orange); // 나머지몫만 출력 되므로 1이 나옴

	return 0;
}

/* 나머지 연산자를 사용 할 때 반드시 정수 형태의 피연산자를 사용해야하는데,
그 이유는 실수의 나누기 연산에는 나머지가 존재하지 않기 때문이다.
실제로 나머지 연산자를 사용할 때 실수를 사용하게 되면 에러가 발생한다.*/