#include <stdio.h>

int main(void)
{
	int i, res = 0;

	for (i = 0; i < 11; i++)
	{
		res += i;
	}

	printf("%d", res);

	return 0;
}