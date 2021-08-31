#include <stdio.h>

int main(void)
{
	int score[2][3][4] = {
		{ { 72, 80, 95, 60}, {10, 10, 10, 10}, {75, 72, 84, 90}},
		{ {66, 85, 90, 88}, {95, 92, 88, 95}, {43, 72, 56,75}}
	};

	int i, j, k;

	for (i = 0; i < 2; i++)
	{
		printf("%d 반의 점수...\n", i + 1); // 반이 바뀔 때마다 (i 값이 증가할 때마다) 출력
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 4; k++)
			{
				printf("%5d", score[i][j][k]);
			}
			
			printf("\n");
		}

		printf("\n");
	}

	return 0;
}