#include <stdio.h>

int main(void)
{
	int a = 10;
	int* p = &a;
	*p = 20;

	printf("%d\n", a);

	return 0;
}