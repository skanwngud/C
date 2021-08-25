// 개행문자 제거
#include <stdio.h>

int f2(void)
{
	int age;
	char name[20];

	printf("나이 : ");
	scanf("%d", &age);
	fgetc(stdin); // 개행문자 제거

	printf("이름 : ");
	gets(name);

	printf("나이 : %d / 이름 : %s", age, name);

	return 0;
}