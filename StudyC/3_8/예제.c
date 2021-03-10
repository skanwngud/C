#include <stdio.h>

int main_b(void)
{
	int kor = 70;
	int eng = 80;
	int mat = 90;

	const int tot = kor + eng + mat;

	printf("국어 : %d\n", kor);
	printf("영어 : %d\n", eng);
	printf("과학 : %d\n", mat);

	printf("총점 : %d", tot);

	return 0;
}