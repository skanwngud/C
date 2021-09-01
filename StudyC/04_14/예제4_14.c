#include <stdio.h>

int main_1(void)
{
	int a = 10, b = 5;
	int res;

	res = a / b * 2;
	printf("res = %d\n", res); // 4 : / 와 * 둘 다 산술 연산자이므로 왼쪽부터 계산
	res = ++a * 3;
	printf("res = %d\n", res); // 33 : ++ 가 먼저 계산 되어 a = 11 이 된 후 * 계산
	res = a > b && a != 5;
	printf("res = %d\n", res); // 1 : 왼쪽부터 > 와 != 계산 후 && 계산
	res = a % 3 == 0;
	printf("res = %d\n", res); // 0 // % 계산 후 == 계산

	return 0;
}