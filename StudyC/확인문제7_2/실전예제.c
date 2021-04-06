#include <stdio.h>

int rec_func(int n);

int main_c(void)
{
	int res;

	res = rec_func(10);

	printf("%d\n", res);

	return 0;
}

int rec_func(int n)
{
	if (n == 1) return 1;
	
	else return (n+rec_func(n-1));
}

// 10 + rec_func(9) - 10 + rec_func �� �� �� �� ȣ��
// 9 + rec_func(8) - 9 + rec_func �� �� �� �� ȣ�� ... �Ͽ� n == 1 �� �Ǵ� �������� ��������
// 8 + ... (7)
// 7 + ... (6)
// 6 + ... (5)
// 5 + ... (4)
// 4 + ... (3)
// 3 + ... (2)
// 2 + ... (1)
// 1
// �� �� 1���� ���ʴ�� ����