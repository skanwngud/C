#include <stdio.h>

int main_b(void)
{
	int kor = 70;
	int eng = 80;
	int mat = 90;

	const int tot = kor + eng + mat;

	printf("���� : %d\n", kor);
	printf("���� : %d\n", eng);
	printf("���� : %d\n", mat);

	printf("���� : %d", tot);

	return 0;
}