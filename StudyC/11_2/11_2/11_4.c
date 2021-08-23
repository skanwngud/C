#include <stdio.h>

int d(void)
{
	int num, grade;

	printf("학번 입력 : ");
	scanf("%d", &num); // num 입력
	getchar(); // 버퍼에 남아있는 개행문자 제거
	printf("학점 입력 : ");
	grade = getchar(); // grade 입력
	printf("학번 : %d 학점 : %c", num, grade); // 버퍼에 저장 된 num, grade 출력

	return 0;
}