#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 3번 문제

void input_score(int(*arr)[5])
{
    // 학생 번호 입력
    for (int i = 0; i < 5; i++)
    {
        arr[i][0] = i + 1;
    }

    // 학생 성적 입력
    printf("학생성적을 입력 하세요 (5명의 학생 자료)\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d번(국어, 영어, 수학) :", i + 1);
        for (int j = 1; j < 4; j++)
        {
            scanf("%d", &arr[i][j]);   // 성적 입력
            arr[i][4] += arr[i][j];      // 총점 계산
        }
    }

    // 과목 성적 총점
    for (int j = 1; j < 5; j++)
    {
        for (int i = 0; i < 5; i++)
        {
            arr[5][j] += arr[i][j];
        }
    }
}

void avg_score(int(*score)[5], double* arr)
{
    for (int i = 1; i < 5; i++)
    {
        arr[i] = score[5][i] / 5;
    }
}

int main_2(void)
{
    int score_arr[6][5] = { 0, };   // 번호, 성적, 총점
    double aves[5] = { 0, };      // 평균

    // 학생 성적 입력 및 계산
    input_score(score_arr);

    // 평균 계산
    avg_score(score_arr, aves);

    // 출력 화면
    printf("================================================\n");
    printf("     번호     국어     영어     수학     총점\n");
    printf("================================================\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j == 4)
            {
                printf("%9d\n", score_arr[i][j]);
            }
            else if (j == 0)
            {
                printf("       %d", score_arr[i][j]);
            }
            else
            {
                printf("%9d", score_arr[i][j]);
            }
        }
    }
    printf("================================================\n");
    printf(" 과목총점");
    for (int i = 1; i < 5; i++)
    {
        if (i == 4)
        {
            printf("%9d\n", score_arr[5][i]);
            break;
        }
        printf("%9d", score_arr[5][i]);
    }
    printf("================================================\n");
    printf(" 과목평균");
    for (int i = 1; i < 5; i++)
    {
        printf("%9.2f", aves[i]);
    }
    printf("\n================================================\n");

    for (int i = 0; i < 5; i++)
    {
        printf("\n개인별 총점 : 번호 %d 의 총점 %d", i, score_arr[i][4]);

    }


    printf("\n\n과목별 총점 : \n국어 : %d\n영어 : %d\n수학 : %d\n", score_arr[5][1], score_arr[5][2], score_arr[5][3]);
    printf("\n과목별 평균 : \n국어 : %.2f\n영어 : %.2f\n수학 : %.2f\n", aves[1], aves[2], aves[3]);
    return 0;
}