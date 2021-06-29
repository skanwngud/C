// 주소 연산자
#include <stdio.h>

int main(void)
{
	int a; // int 형 변수 선언 (4byte)
	double b; // double 형 변수 선언 (8byte)
	char c; // char 형 변수 선언 (1byte)

	printf("int 형 변수의 주소 : %u\n", &a); // 주소 연산자로 주소 계산
	printf("double 형 변수의 주소 : %u\n", &b);
	printf("char 형 변수의 주소 : %u\n", &c);

	return 0;
}