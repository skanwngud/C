#include <stdio.h>

int a(void)
{
	int score[3][4]; // 2���� �迭 ����
	int total;
	double avg;
	int i, j;

	for (i = 0; i < 3; i++) // �л� ����ŭ �ݺ�
	{
		printf("4������ ���� �Է� : ");
		for (j = 0; j < 4; j++) // ���� ����ŭ �ݺ�
		{
			scanf("%d", &score[i][j]); // ���� �Է�
		}
	}

	for (i = 0; i < 3; i++)
	{
		total = 0;
		for (j = 0; j < 4; j++)
		{
			total += score[i][j];
		}

		avg = total / 4.0; // 4������ ��� ���
		printf("���� : %d, ��� %.2lf\n", total, avg);
	}

	return 0;
}