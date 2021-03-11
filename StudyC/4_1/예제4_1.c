#include <stdio.h>

int main(void)
{
	int a, b;
	int sum, sub, mul, inv;

	a = 10; // 대입연산(=)
	b = 20; // 대입연산(=)
	sum = a + b; // 산술연산(+) 후 대입연산 (=)
	sub = a - b; // 산술연산(-) 후 대입연산 (=)
	mul = a * b; // 산술연산(*) 후 대입연산 (=)
	inv = -a; // 산술연산 (-) : 피연산자를 하나만 써서 변수를 음수화 시켰다.

	printf("a 의 값 : %d, b 의 값 : %d", a, b);
	printf("\t덧셈 : %d", sum);
	printf("\t뺄셈 : %d", sub);
	printf("\t곱하기 : %d", mul);
	printf("\ta의 음수 연산 : %d", inv);

	return 0;
}