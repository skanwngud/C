#include <stdio.h>

void print_line(void); // 함수 선언

int main(void)
{
	print_line(); // 함수 호출
	printf("학번	이름	전공	학점\n");
	print_line(); // 함수 호출

	return 0;
}

void print_line(void) // 함수 정의
{
	int i;

	for (i = 0; i < 50; i++)
	{
		printf("-");
	}

	printf("\n"); // 반복문을 빠져나와서 개행
}