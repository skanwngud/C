#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
// 4번 문제
// -2.0 3.5 4.0 5.0 -3.2 0.0 2.8 4.5 6.0 8.4 10.2 9.2 7.5 3.6 -1.0 -3.5 3.0 5.0 6.7 8.9 12.3 15.2 13.2 12.1 17.5 20.0 18.2 16.3 14.1 15.0 12.8

int getMonthDay(int month)
{
    if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        return 30;
    }
    else if (month == 2)
    {
        return 28;
    }
    else
    {
        return 31;
    }
}
float* getDays(int day)
{
    float* temper = (float*)calloc(day, sizeof(float));
    printf("온도를 입력하시오 (1~%d일) : ", day);
    for (int i = 0; i < day; i++)
    {
        scanf("%f", &temper[i]);
    }
    return temper;
}
int getHiDay(float* temper, int day)
{
    float max = temper[0];
    int num = 0;
    for (int i = 0; i < day; i++)
    {
        if (temper[i] > max)
        {
            max = temper[i];
            num = i + 1;
        }
    }
    return num;
}
int getLowDay(float* temper, int day)
{
    float min = temper[0];
    int num = 0;
    for (int i = 0; i < day; i++)
    {
        if (temper[i] < min)
        {
            min = temper[i];
            num = i + 1;
        }
    }
    return num;
}
float getAvgTemper(float* temper, int day)
{
    float avg_temper = 0;
    float sum = 0;
    for (int i = 0; i < day; i++)
    {
        sum += temper[i];
    }
    avg_temper = sum / day;

    return avg_temper;
}

int main(void)
{
    int month = 0;            // 월
    int day = 0;            // 일수
    float* temper = 0;         // 온도
    float avg_temper = 0;      // 평균 온도
    int highday = 0;         // 그 달의 가장 높은 온도
    int lowday = 0;            // 그 달의 가장 낮은 온도
    int start = 0;            // 시작일
    int end = 0;            // 기간
    static int standard = 10;   // 그래프 기준( | )
    int location = 0;         // 일에 따른 온도 그래프상의 위치

    // month 입력 받기
    printf("월을 입력하세요 : ");
    scanf("%d", &month);

    // month에 맞는 일수 및 온도 입력
    day = getMonthDay(month);
    temper = getDays(day);

    // 시작일과 기간 입력 받기
    printf("그래프 출력을 원하는 기간 (시작일, 기간) : ");
    scanf("%d %d", &start, &end);

    // 최대 온도, 최저 온도
    highday = getHiDay(temper, day);
    lowday = getLowDay(temper, day);
    avg_temper = getAvgTemper(temper, day);

    printf("\n%d월 기온 보고서\n", month);
    printf("===============================================\n");
    printf("  가장 더운날 :  %10d일\n", highday);
    printf("  가장 추운날 :  %10d일\n", lowday);
    printf("  평균 기온   :  %10.2f도\n", avg_temper);
    printf("===============================================\n");

    // 그래프 그리기
    printf("day:==========0================================\n");
    for (int i = start - 1; i < end; i++)
    {
        printf("%3d:", i + 1);
        location = standard + temper[i];
        if (location == standard)
        {
            for (int j = 1; j < location + 1; j++)
            {
                printf(" ");
            }
            printf("*");
        }
        else if (location < standard)
        {
            for (int j = 1; j < location + 1; j++)
            {
                printf(" ");
            }
            printf("*");
            for (int j = location + 1; j < standard; j++)
            {
                printf(" ");
            }
            printf("|");
        }
        else
        {
            for (int j = 1; j < standard + 1; j++)
            {
                printf(" ");
            }
            printf("|");
            for (int j = standard + 1; j < location; j++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    printf("   :==========0================================\n");

    free(temper);
    return;
}