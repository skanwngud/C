#include <stdio.h>

int main_1(void)
{
	int a = 10, b = 5;
	int res;

	res = a / b * 2;
	printf("res = %d\n", res); // 4 : / �� * �� �� ��� �������̹Ƿ� ���ʺ��� ���
	res = ++a * 3;
	printf("res = %d\n", res); // 33 : ++ �� ���� ��� �Ǿ� a = 11 �� �� �� * ���
	res = a > b && a != 5;
	printf("res = %d\n", res); // 1 : ���ʺ��� > �� != ��� �� && ���
	res = a % 3 == 0;
	printf("res = %d\n", res); // 0 // % ��� �� == ���

	return 0;
}