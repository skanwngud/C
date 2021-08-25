#include <stdio.h>

int i(void)
{
	char *ps= "apple pie";
	ps += 5;
	printf("%s", ps); // pie

	return 0;
}