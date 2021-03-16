#include <stdio.h>

int main(void)
{
	int hour, min, sec;
	double time = 3.76;

	hour = (int)time; // 3.76 -> 3
	time -= hour; // 0.76
	printf("hour : %d, time : %.2lf\n", hour, time);
	time *= 60; // 0.76 * 60 = 45.6
	min = (int)time; // 45
	time -= min; // 0.6
	printf("min : %d, time : %.1lf\n", min, time);
	time *= 60; // 36
	sec = (int)time; // 36
	printf("sec : %d, time : %.1lf\n", sec, time);

	printf("3.76�ð��� %d �ð� %d �� %d ���Դϴ�", hour, min, sec);

	return 0;
}

/*
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

return 0;
*/