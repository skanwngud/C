#include <stdio.h>
#include <string.h>

int f(void)
{
	char str[80];

	strcpy(str, "wine");
	strcat(str, "apple");
	strncpy(str, "pear", 1);
	printf("%s %d\n", str, strlen(str));

	return 0;
}

// pineapple 9