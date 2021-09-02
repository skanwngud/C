#include <stdio.h>

int get_num_a(void); // 함수 선언

int main_a(void)
{
	int result;

	result = get_num_a(); // 함수 호출, 반환값은 result 에 저장
	printf("반환값 : %d\n", result); // 반환값 출력

	return 0;
}

int get_num_a(void) // 매개변수가 void 면 변수 없음
{
	int num; // 키보드 입력값을 저장할 변수

	printf("양수 입력 : ");
	scanf("%d", &num); // 키보드 입력

	return num; // 입력값 반환
}