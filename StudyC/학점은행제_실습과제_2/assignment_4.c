#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
// 4�� ����
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
    printf("�µ��� �Է��Ͻÿ� (1~%d��) : ", day);
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
    int month = 0;            // ��
    int day = 0;            // �ϼ�
    float* temper = 0;         // �µ�
    float avg_temper = 0;      // ��� �µ�
    int highday = 0;         // �� ���� ���� ���� �µ�
    int lowday = 0;            // �� ���� ���� ���� �µ�
    int start = 0;            // ������
    int end = 0;            // �Ⱓ
    static int standard = 10;   // �׷��� ����( | )
    int location = 0;         // �Ͽ� ���� �µ� �׷������� ��ġ

    // month �Է� �ޱ�
    printf("���� �Է��ϼ��� : ");
    scanf("%d", &month);

    // month�� �´� �ϼ� �� �µ� �Է�
    day = getMonthDay(month);
    temper = getDays(day);

    // �����ϰ� �Ⱓ �Է� �ޱ�
    printf("�׷��� ����� ���ϴ� �Ⱓ (������, �Ⱓ) : ");
    scanf("%d %d", &start, &end);

    // �ִ� �µ�, ���� �µ�
    highday = getHiDay(temper, day);
    lowday = getLowDay(temper, day);
    avg_temper = getAvgTemper(temper, day);

    printf("\n%d�� ��� ����\n", month);
    printf("===============================================\n");
    printf("  ���� ��� :  %10d��\n", highday);
    printf("  ���� �߿ :  %10d��\n", lowday);
    printf("  ��� ���   :  %10.2f��\n", avg_temper);
    printf("===============================================\n");

    // �׷��� �׸���
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