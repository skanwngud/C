#include <stdio.h>

int main(void)
{
	int kor = 3, eng = 5, matt = 4, res, credits;
	double kscore = 3.8, escore = 4.4, mscore = 3.9, grade;
	
	credits = kor + eng + matt;
	grade = (kscore + escore + mscore) / 3.0;

	printf("��ü ���� : %d\n", credits);
	printf("���� ��� : %.1lf\n", grade);

	res = (credits >= 10) && (grade >= 4.0);
	printf("��� : %d", res);

	return 0;
}