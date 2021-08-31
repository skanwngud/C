#include <stdio.h>

int main(void)
{
	char ch1 = 'A'; // 문자 변수에 문자 대입
	char ch2 = 65; // 문자 변수에 아스키코드 정수 대입
	
	printf("문자 %c 의 아스키 코드 : %d\n", ch1, ch1); // 첫번째 ch1 은 %c 이므로 'A' 를, 두 번째는 %d 이므로 정수형태를 반환한다
	printf("아스키 코드가 %d 인 문자 : %c\n", ch2, ch2); // 첫번째 ch1 은 %d 이므로 65, 두 번째는 %c 이므로 문자형태를 반환한다

	return 0;
}