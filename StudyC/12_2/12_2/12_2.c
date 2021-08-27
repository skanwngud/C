#include <stdio.h>
#include <string.h>

int b(void)
{
	char str[20] = "mango tree";

	strncpy(str, "apple-pie", 5);

	printf("%s", str); // apple tree

	return 0;
}