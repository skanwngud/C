#include <stdio.h>

int main(void)
{
	int i, j;

	for (j = 2; j <= 9; j++)
	{
		printf("%d ´Ü\n", j);
		for (i = 1; i <= 9; i++)
		{
			printf("%d * %d = %d\n", j, i, j * i);
		}
		printf("\n");
	}
	return 0;
}