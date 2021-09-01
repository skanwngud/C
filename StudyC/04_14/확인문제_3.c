#include <stdio.h>

int main(void)
{
	int hour, min, sec;
	double time = 3.76;

	hour = (int)time;
	time -= hour;
	min = time * 60;
	min = (int)time;
	time -= min;
	sec = time * 60;
	sec = (int)time;
	time -= sec;


	printf("3.76시간은 %d 시간 %d 분 %d 초입니다", hour, min, sec);

	return 0;
}