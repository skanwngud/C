#include <stdio.h>

int main_2(void)
{
	int a = 10, b = 20;
	int res; // res 변수 초기화

	res = (++a, ++b); // 왼쪽부터 차례대로 연산되며 최종적으로는 가장 오른쪽에 있는 ++b 값이 된다

	printf("a:%d, b:%d\n", a, b);
	printf("res:%d\n", res);

	return 0;
}

/* 대입연산자 (=) 보다 콤마연산자 (,) 의 우선순위가 낮으므로
8행에서 괄호를 빼게 된다면 res = ++a, ++b 에서 1이 증가 된 ++a 값만 res 에 저장이 되고,
++b 는 res 에 저장이 되질 않고 b 에만 저장이 된다.

즉, 출력문은

a : 11, b : 21,
res : 11 가 된다.*/