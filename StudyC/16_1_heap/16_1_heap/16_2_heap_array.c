#include <stdio.h>
#include <stdlib.h>

int b(void)
{
	int *pi;
	int i, sum = 0;

	pi = (int *)malloc(5 * sizeof(int)); // ���� ���� 5 * 4 = 20 ����Ʈ �Ҵ�
	if (pi == NULL)
	{
		printf("# �޸� ������ �����մϴ�.\n");
		exit(1);
	}

	printf("�ټ� ���� ���̸� �Է��ϼ��� : ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &pi[i]); // �迭 ��ҿ� �Է�
		sum += pi[i]; // �迭 ��Ҹ� ���� (�� ����)
	}

	printf("�ټ� ���� ��� ���� : %.1f\n", (sum / 5.0));
	free(pi);

	return 0;
}

// �ټ� ���� ���̸� �Է��ϼ��� : 21 27 24 22 35
// �ټ� ���� ��� ���� : 25.8