#include <stdio.h>

int main(void)
{
	printf("%c\n", 'A'); // 문자 상수
	printf("%s\n", "A"); // 문자열 상수
	printf("%c은 %s 입니다.", '1', "first"); // 문자와 문자열 상수를 같이 출력

	return 0;
}

/* 문자는 character, c
문자열은 string, s 로 표현한다.

#include <stdio.h>

int main(void)
{
	printf("학번 : %d\n", 32165);
	printf("이름 : %s\n", 홍길동);
	printf("학점 : %c\n", 'A');
	
	return 0;
}*/