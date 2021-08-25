// 버퍼에 개행문자가 남아있어 제대로 출력을 못하는 경우
#include <stdio.h>

int f(void)
{
	int age;
	char name[20];

	printf("나이 : ");
	scanf("%d", &age);

	printf("이름 :");
	gets(name);

	printf("나이 : %d / 이름 : %s\n", age, name);

	return 0;
}