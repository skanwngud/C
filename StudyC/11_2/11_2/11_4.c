#include <stdio.h>

int d(void)
{
	int num, grade;

	printf("�й� �Է� : ");
	scanf("%d", &num); // num �Է�
	getchar(); // ���ۿ� �����ִ� ���๮�� ����
	printf("���� �Է� : ");
	grade = getchar(); // grade �Է�
	printf("�й� : %d ���� : %c", num, grade); // ���ۿ� ���� �� num, grade ���

	return 0;
}