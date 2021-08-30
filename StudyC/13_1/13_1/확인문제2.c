#include <stdio.h>

int func2(void);

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 10; i++) {
		sum += func2();
	}

	printf("%d", sum);

	return 0;
}

int func2(void)
{
	static int a = 0;
	a++;

	return a;
}

// 55