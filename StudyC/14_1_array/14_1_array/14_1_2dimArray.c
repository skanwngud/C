#include <stdio.h>

int a(void)
{
	int score[3][4]; // 2차원 배열 선언
	int total;
	double avg;
	int i, j;

	for (i = 0; i < 3; i++) // 학생 수만큼 반복
	{
		printf("4과목의 점수 입력 : ");
		for (j = 0; j < 4; j++) // 과목 수만큼 반복
		{
			scanf("%d", &score[i][j]); // 점수 입력
		}
	}

	for (i = 0; i < 3; i++)
	{
		total = 0;
		for (j = 0; j < 4; j++)
		{
			total += score[i][j];
		}

		avg = total / 4.0; // 4과목의 평균 계산
		printf("총점 : %d, 평균 %.2lf\n", total, avg);
	}

	return 0;
}