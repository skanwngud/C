#include <stdio.h>

int b(void)
{
	char *dessert = "apple"; // 문자열을 포인터에 저장

	printf("오늘 후식은 %s 입니다.\n", dessert);
	dessert = "banana";
	printf("내일 후식은 %s 입니다.\n", dessert);

	return 0;
}