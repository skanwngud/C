#include <stdio.h>

int b(void)
{
	int arr[3];
	int *pa = arr; // �����Ͱ� arr �� ����Ŵ
	int i;

	*pa = 10; // ù ��° �迭 ��ҿ� 10 ����
	*(pa + 1) = 20; // �� ��° �迭 ��ҿ� 20 ����
	pa[2] = pa[0] + pa[1]; // �� ��° �迭 ��ҿ� �ش� ���� ����

	for (i = 0; i < 3; i++)
	{
		printf("%d", arr[i]);
		printf("\n");
	}

	return 0;
}

// 10
// 20
// 30