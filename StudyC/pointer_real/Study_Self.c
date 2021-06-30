#include <stdio.h>

void swap(double* pa, double* pb);
void line_up(double* maxp, double* midp, double* minp);

int main(void)
{
	double max, mid, min;

	printf("�Ǽ��� 3�� �Է� : ");
	scanf("%lf%lf%lf", &max, &mid, &min); // 2.5 1.5 3.5

	line_up(&max, &mid, &min);
	printf("���� �� �� ��� : %.1lf, %.1lf, %.1lf", max, mid, min);

	return 0;
}

void swap(double* pa, double* pb)
{
	double temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line_up(double* maxp, double* midp, double* minp) // 2.5 1.5 3.5
{
	if (*maxp < *midp) { // 2.5 < 1.5 ���� �� �ǹǷ� �Ѿ
		swap(maxp, midp); // max 2.5 mid 1.5
	}
	if (*maxp < *minp) { // 2.5 < 3.5 ���� �ǹǷ� �ٲ�
		swap(maxp, minp); // max 3.5 min 2.5
	}
	if (*midp < *minp) {
		swap(midp, minp);
	}

}