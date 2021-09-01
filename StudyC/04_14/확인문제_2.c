#include <stdio.h>

int main_2(void)
{
	int seats = 70;
	int audience = 65;
	double rate;

	rate = (double)audience / (double)seats * 100;

	printf("ÀÔÀå·ü : %.1lf\n", rate);

	return 0;
}