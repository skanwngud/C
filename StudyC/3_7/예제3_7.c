#include <stdio.h>
#include <string.h>

int main(void)
{
	char fruit[20] = "strawberry"; // fruit 에 strawberry 로 초기화

	printf("%s\n", fruit); // 배열명에 저장 된 문자열 출력
	strcpy(fruit, "banana"); // 배열명에 새 문자열 복사
	printf("%s\n", fruit); // banana 출력

	return 0;
}

// strcpy (string copy) 는 이미 초기화 된 배열명에 새로운 문자열을 복사해 대치시킨다.
