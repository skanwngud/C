#include <stdio.h>

int c(void)
{
	int arr[3] = { 10, 20, 30 };
	int *pa = arr;
	int i;

	printf("�迭�� �� : ");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *pa); // pa �� ����Ű�� �迭�� ��� ��� (���ʴ� ù ��° ��Ҹ� ����Ŵ)
		pa++; // ���� �迭 ��Ҹ� ����Ű���� pa �� ������Ű��
	}

	return 0;
}

// 10 20 30