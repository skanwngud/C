// 무한반복

#include <stdio.h>

int main_a(void)
{
	while (1) // while 에서 (1) 인 경우엔 참
	{
		printf("Be Happy!");
	}

	return 0;
}

#include <stdio.h>

int main_b(void)
{
	for (;;) // for 에서 (;;) 인 경우엔 참
	{
		printf("Be Happy!");
	}
	
	return 0;
}

#include <stdio.h>

int main_c(void)
{
	int count = 0;
	
	while (1)
	{
	printf("Be Happy!\n");
	count++;
	if (count == 5) break;
	}
	
	return 0;
}