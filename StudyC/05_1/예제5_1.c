#include <stdio.h>

int main(void)
{
	int a = 20;
	int b = 0;

	if (a > 10) // a �� 10���� ũ��, �̶�� ���ǽ��� �־����� ����� ��
	{
		b = a; // ����� ���� �� a �� b �� �����ϹǷ� b �� 20 �� �ȴ�.
		printf("a �� b �� �����ϴ�.\n");
	}

	printf("a : %d, b : %d\n", a, b);

	return 0;
}