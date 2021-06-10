#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 3�� ����

void input_score(int(*arr)[5])
{
    // �л� ��ȣ �Է�
    for (int i = 0; i < 5; i++)
    {
        arr[i][0] = i + 1;
    }

    // �л� ���� �Է�
    printf("�л������� �Է� �ϼ��� (5���� �л� �ڷ�)\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d��(����, ����, ����) :", i + 1);
        for (int j = 1; j < 4; j++)
        {
            scanf("%d", &arr[i][j]);   // ���� �Է�
            arr[i][4] += arr[i][j];      // ���� ���
        }
    }

    // ���� ���� ����
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

int main_a(void)
{
    int score_arr[6][5] = { 0, };   // ��ȣ, ����, ����
    double aves[5] = { 0, };      // ���

    // �л� ���� �Է� �� ���
    input_score(score_arr);

    // ��� ���
    avg_score(score_arr, aves);

    // ��� ȭ��
    printf("================================================\n");
    printf("     ��ȣ     ����     ����     ����     ����\n");
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
    printf(" ��������");
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
    printf(" �������");
    for (int i = 1; i < 5; i++)
    {
        printf("%9.2f", aves[i]);
    }
    printf("\n================================================\n");

    return 0;
}