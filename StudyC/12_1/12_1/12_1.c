#include <stdio.h>

int a(void)
{
	printf("apple �� ���� �� ���� �ּ� �� : %p\n", "apple");
	printf("�� ��° ������ �ּҰ� : %p\n", "apple" + 1);
	printf("ù ��° ���� : %c\n", *("apple"));
	printf("�� ��° ���� : %c\n", *("apple" + 1));
	printf("�迭�� ǥ���� �� ��° ���� : %c\n", "apple"[2]);

	return 0;
}

/*
apple �� ���� �� ���� �ּ� �� : 00857B30
�� ��° ������ �ּҰ� : 00857B31
ù ��° ���� : a
�� ��° ���� : p
�迭�� ǥ���� �� ��° ���� : p
*/