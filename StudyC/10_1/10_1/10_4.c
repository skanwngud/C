#include <stdio.h>

int d(void)
{
	int arr[5] = { 10, 20, 30, 40, 50 };
	int *pa = arr;
	int *pb = pa + 3; // �迭�� �� ��° ��� �ּ�

	printf("pa : %u\n", pa); // �迭�� ù ��° ���
	printf("pb : %u\n", pb); // �迭�� �� ��° ���

	pa++; // pa ���� ���� ��ҵ�� �̵���Ŵ

	printf("pb - pa : %u\n", pb - pa); // �� �������� ����
	
	printf("�տ� �ִ� �迭�� ����� �� ��� : ");
	if (pa > pb) printf("%d\n", *pa);
	else printf("%d", *pb);

	return 0;
}

/*
pa : 17823796
pb : 17823808
pb - pa : 2
�տ� �ִ� �迭�� ����� �� ��� : 40
*/