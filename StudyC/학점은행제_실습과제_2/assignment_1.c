#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 1�� ����
int main_ab(void)
{
    /* ���� ���� */
    int kim[5] = { 0, }, lee[5] = { 0, }, park[5] = { 0, }, song[5] = { 0, }, choi[5] = { 0, };         // ���κ� ���� �� �հ�
    int quarter_sum[5] = { 0, };                                                      // �б⺰ �հ�
    double quarter_avg[5] = { 0.0, };                                                   // �б⺰ �� ���� ���

    /* ����� �Ǹ� ���� */
    /* KIM ���� �ޱ� */
    printf("KIM :");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &kim[i]);
    }

    /* LEE ���� �ޱ� */
    printf("LEE :");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &lee[i]);
    }

    /* PARK ���� �ޱ� */
    printf("PARK :");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &park[i]);
    }

    /* SONG ���� �ޱ� */
    printf("SONG :");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &song[i]);
    }

    /* CHOI ���� �ޱ� */
    printf("CHOI :");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &choi[i]);
    }

    /* ����� �հ� */
    for (int i = 0; i < 4; i++)
    {
        kim[4] += kim[i];
        lee[4] += lee[i];
        park[4] += park[i];
        song[4] += song[i];
        choi[4] += choi[i];
    }

    /* �б⺰ �� ���� �հ� */
    for (int i = 0; i < 5; i++)
    {
        quarter_sum[i] = kim[i] + lee[i] + park[i] + song[i] + choi[i];
    }

    /* �б⺰ �� ���� ��� */
    for (int i = 0; i < 5; i++)
    {
        quarter_avg[i] = quarter_sum[i] / 5;
    }

    /* �б⺰ ��ձݾ� �׷��� �� */


    /* �Ǹ� ���� ���� */
    printf("=======================================================================\n");
    printf("�ǸŻ��     1/4�б�     2/4�б�     3/4�б�     4/4�б�     ����\n");
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

    printf("�б�����     ");
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
    printf("�б����     ");
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

    printf("�б⺰ �Ǹ� ���� �׷���\n");
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