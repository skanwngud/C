#include <stdio.h>

int main(void)
{
	float ft = 1.234567890123456789; // 유효숫자가 많은 변수 할당
	double db = 1.234567890123456789;

	printf("float 형의 변수의 값 : %.20f\n", ft);
	printf("double 형의 변수의 값 : %.20lf\n", db);

	return 0;
}