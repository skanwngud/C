// 제어문 출력

#include <stdio.h>

int main(void)
{
	printf("Be happy\n"); // \n : 줄바꿈
	printf("1234567890\n");
	printf("My\tFriends!\n"); // \t : 다음 탭만큼 이동 후 출력
	printf("Goot\bd\tchance\n"); // \b : 뒤로 한 칸 이동 후 't'를 'b'로 바꿈
	printf("Cow\rW\a\n"); // \r : 맨 앞으로 이동해서 'C'를 'W'로 바꿈, \a : 벨소리를 냄

	return 0;
}