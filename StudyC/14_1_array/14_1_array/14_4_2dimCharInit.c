#include <stdio.h>

int c(void)
{
	char animal1[5][10] = { // 문자 상수로 하나씩 초기화
		{'d', 'o', 'g', '\0'},
		{'t', 'i', 'g', 'e', 'r', '\0'},
		{'r', 'a', 'b', 'b', 'i', 't', '\0'},
		{'h', 'o', 'r', 's', 'e', '\0'},
		{'c', 'a', 't', '\0'}
	};

	char animal2[][10] = { "dog", "tiger", "rabbit", "horse", "cat" }; // 문자열 상수로 초기화

	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%s ", animal1[i]);
	}
	printf("\n");

	for (i = 0; i < 5; i++)
	{
		printf("%s ", animal2[i]);
	}

	return 0;
}