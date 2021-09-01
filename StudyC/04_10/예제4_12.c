#include <stdio.h>

int main_3(void)
{
	int a = 10, b = 20, res; // 변수 할당

	res = (a > b) ? a : b; // a 와 b 중에 큰 값 res 에 저장
	printf("결과값 : %d\n", res);

	return 0;
}

/*
조건 연산자는 피연산자에 수식을 넣어 활용할 수도 있다.
res = (a > b ) ? (res = a) : (res = b); <- 이렇게 사용 할 수도 있지만,
res 가 중복으로 들어가고 가독성이 떨어지므로 지양하는 편이 좋다.
*/