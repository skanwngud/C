#include <stdio.h>

double average(double x, double y);

int main_a(void)
{
	double res;
	res = average(1.5, 3.4);

	printf("%.2lf\n", res);

	return 0;
}

double average(double a, double b)
{
	double temp;
	temp = a + b;
	
	return(temp / 2.0);
}