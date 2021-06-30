// 주소와 포인터의 크기
#include <stdio.h>

int main(void)
{
	char ch;
	int in;
	double db;

	char* pc = &ch;
	int* pi = &in;
	double* pd = &db;

	printf("char 형 변수의 주소 크기 : %d\n", sizeof(&ch)); // 4
	printf("int 형 변수의 주소 크기 : %d\n", sizeof(&in)); // 4
	printf("double 형 변수의 주소 크기 : %d\n", sizeof(&db)); // 4

	printf("char 형 변수의 포인터 크기 : %d\n", sizeof(pc)); // 4
	printf("int 형 변수의 포인터 크기 : %d\n", sizeof(pi)); // 4
	printf("double 형 변수의 포인터 크기 : %d\n", sizeof(pd)); // 4

	printf("char 형 변수의 포인터가 가르키는 변수의 크기 : %d\n", sizeof(*pc)); // 1
	printf("int 형 변수의 포인터가 가르키는 변수의 크기 : %d\n", sizeof(*pi)); // 4
	printf("double 형 변수의 포인터가 가르키는 변수의 크기 : %d\n", sizeof(*pd)); // 8

	return 0;
}