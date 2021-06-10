#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 1번 문제
int main_ab(void)
{
    /* 변수 선언 */
    int kim[5] = { 0, }, lee[5] = { 0, }, park[5] = { 0, }, song[5] = { 0, }, choi[5] = { 0, };         // 개인별 실적 및 합계
    int quarter_sum[5] = { 0, };                                                      // 분기별 합계
    double quarter_avg[5] = { 0.0, };                                                   // 분기별 및 종합 평균

    /* 사원별 판매 실적 */
    /* KIM 실적 받기 */
    printf("KIM :");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &kim[i]);
    }

    /* LEE 실적 받기 */
    printf("LEE :");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &lee[i]);
    }

    /* PARK 실적 받기 */
    printf("PARK :");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &park[i]);
    }

    /* SONG 실적 받기 */
    printf("SONG :");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &song[i]);
    }

    /* CHOI 실적 받기 */
    printf("CHOI :");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &choi[i]);
    }

    /* 사원별 합계 */
    for (int i = 0; i < 4; i++)
    {
        kim[4] += kim[i];
        lee[4] += lee[i];
        park[4] += park[i];
        song[4] += song[i];
        choi[4] += choi[i];
    }

    /* 분기별 및 종합 합계 */
    for (int i = 0; i < 5; i++)
    {
        quarter_sum[i] = kim[i] + lee[i] + park[i] + song[i] + choi[i];
    }

    /* 분기별 및 종합 평균 */
    for (int i = 0; i < 5; i++)
    {
        quarter_avg[i] = quarter_sum[i] / 5;
    }

    /* 분기별 평균금액 그래프 별 */


    /* 판매 실적 보고서 */
    printf("=======================================================================\n");
    printf("판매사원     1/4분기     2/4분기     3/4분기     4/4분기     총합\n");
    printf("=======================================================================\n");
    printf("  KIM        ");
    for (int i = 0; i < 5; i++)
    {
        if (i == 4)
        {
            printf("%-10d\n", kim[i]);
        }
        else
        {
            printf("%-10d  ", kim[i]);
        }
    }

    printf("  LEE        ");
    for (int i = 0; i < 5; i++)
    {
        if (i == 4)
        {
            printf("%-10d\n", lee[i]);
        }
        else
        {
            printf("%-10d  ", lee[i]);
        }
    }

    printf("  PARK       ");
    for (int i = 0; i < 5; i++)
    {
        if (i == 4)
        {
            printf("%-10d\n", park[i]);
        }
        else
        {
            printf("%-10d  ", park[i]);
        }
    }

    printf("  SONG       ");
    for (int i = 0; i < 5; i++)
    {
        if (i == 4)
        {
            printf("%-10d\n", song[i]);
        }
        else
        {
            printf("%-10d  ", song[i]);
        }
    }

    printf("  CHOI       ");
    for (int i = 0; i < 5; i++)
    {
        if (i == 4)
        {
            printf("%-10d\n", choi[i]);
        }
        else
        {
            printf("%-10d  ", choi[i]);
        }
    }

    printf("분기총합     ");
    for (int i = 0; i < 5; i++)
    {
        if (i == 4)
        {
            printf("%-10d\n", quarter_sum[i]);
        }
        else
        {
            printf("%-10d  ", quarter_sum[i]);
        }
    }
    printf("=======================================================================\n");
    printf("분기평균     ");
    for (int i = 0; i < 5; i++)
    {
        if (i == 4)
        {
            printf("%-10.2f\n", quarter_avg[i]);
        }
        else
        {
            printf("%-10.2f  ", quarter_avg[i]);
        }
    }
    printf("=======================================================================\n");

    printf("분기별 판매 실적 그래프\n");
    printf("  ======================================================================\n");

    double percent = 0;
    for (int i = 10; i >= 1; i--)
    {
        printf("|");
        for (int j = 0; j < 4; j++)
        {
            percent = (quarter_avg[j] / quarter_avg[4]) * 100;
            if (percent >= 10 * i)
            {
                printf("     *");
            }
            else
            {
                printf("      ");
            }
        }
        printf("\n");
    }

    printf(" ------------------------------------------------------------------------");
}