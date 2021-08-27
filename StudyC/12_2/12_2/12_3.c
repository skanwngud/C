#include <stdio.h>
#include <string.h>

int c(void)
{
	char str[80] = "straw";

	strcat(str, "berry");
	printf("%s\n", str); // strawberry

	strncat(str, "piece", 3);
	printf("%s\n", str); // strawberrypie

	return 0;
}