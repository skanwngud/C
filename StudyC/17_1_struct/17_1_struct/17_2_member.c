#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profilebb
{
	char name[20];
	int age;
	double height;
	char *intro;
};

int b(void)
{
	struct profilebb yuni;

	strcpy(yuni.name, "서하윤");
	yuni.age = 21;
	yuni.height = 164.5;

	yuni.intro = (char *)malloc(80); // 힙 영역에 80 바이트짜리 메모리를 할당함
	printf("자기소개 : ");
	gets(yuni.intro);

	printf("이름 : %s\n", yuni.name);
	printf("나이 : %d\n", yuni.age);
	printf("신장 : %.1f\n", yuni.height);
	printf("자기소개 : %s", yuni.intro);

	free(yuni.intro);

	return 0;
}