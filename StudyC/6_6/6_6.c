// ���ѹݺ�

#include <stdio.h>

int main_a(void)
{
	while (1) // while ���� (1) �� ��쿣 ��
	{
		printf("Be Happy!");
	}

	return 0;
}

#include <stdio.h>

int main_b(void)
{
	for (;;) // for ���� (;;) �� ��쿣 ��
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