#include <stdio.h>

int maina(void) {
	// 개인별 실적
	int kim[5] = { 34000, 56000, 23000, 78000, 191000 };
	int lee[5] = { 23000, 65000, 18000, 94000, 200000 };
	int park[5] = { 25000, 34000, 19000, 68000, 146000 };
	int song[5] = { 18000, 52000, 23500, 73950, 167450 };
	int choi[5] = { 25000, 38000, 26000, 64000, 153000 };

	// 분기별 개인 실적 총합
	int sum_one = kim[0] + lee[0] + park[0] + song[0] + choi[0];
	int sum_two = kim[1] + lee[1] + park[1] + song[1] + choi[1];
	int sum_three = kim[2] + lee[2] + park[2] + song[2] + choi[2];
	int sum_four = kim[3] + lee[3] + park[3] + song[3] + choi[3];

	// 한 해 개인 실적 총합
	int sum_year = kim[4] + lee[4] + park[4] + song[4] + choi[4];

	// 분기별 개인 실적 평균
	double avg_one = sum_one / 5;
	double avg_two = sum_two / 5;
	double avg_three = sum_three / 5;
	double avg_four = sum_four / 5;
	
	// 한 해 개인 실적 평균
	double avg_year = sum_year / 5;

	// 그래프
	int graph_one = ((avg_one) * 100 / avg_year) / 10 ;
	int graph_two = ((avg_two) * 100 / avg_year) / 10 ;
	int graph_three = ((avg_three) * 100 / avg_year) / 10;
	int graph_four = ((avg_four) * 100 / avg_year) / 10;

	int graph[5] = { graph_one, graph_two, graph_three, graph_four };

	printf("1분기 총합 : %d\n", sum_one);
	printf("1분기 평균 : %.2f\n", avg_one);
	printf("1년 평균 : %.2f\n", avg_year);
	printf("1분기 그래프 : %d\n", graph_one);
	printf("2분기 그래프 : %d\n", graph_two);
	printf("3분기 그래프 : %d\n", graph_three);
	printf("4분기 그래프 : %d\n", graph_four);

	int i, j, k;
	
	for (i = 0; i < 10; i++)
	{
		printf("|\n");
	}
	for (i = 0; i < graph_one; i++)
	{
		printf("| *\n");
	}
	for (i = 0; i < graph_two; i++)
	{
		printf("| *\n");
	}
	printf("|-----------------\n");
	printf("| 1/4 2/4 3/4 4/4");
	

	return 0;
}