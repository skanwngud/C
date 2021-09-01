#include <stdio.h>

int main(void)
{
	int kor = 3, eng = 5, matt = 4, res, credits;
	double kscore = 3.8, escore = 4.4, mscore = 3.9, grade;
	
	credits = kor + eng + matt;
	grade = (kscore + escore + mscore) / 3.0;

	printf("전체 학점 : %d\n", credits);
	printf("평점 평균 : %.1lf\n", grade);

	res = (credits >= 10) && (grade >= 4.0);
	printf("결과 : %d", res);

	return 0;
}