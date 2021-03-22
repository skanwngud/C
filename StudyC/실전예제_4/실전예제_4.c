#include <stdio.h>

int main(void)
{
	double height, weight, bmi;
	
	printf("몸무게와 키를 입력하시오 : ");
	scanf("%lf%lf", &weight, &height);

	height = height / 100.0;
	bmi = weight / (height * height);

	(bmi >= 20.0)&&(bmi < 25.0)
		? printf("표준입니다")
		: printf("체중 관리가 필요합니다");

	return 0;
}


/*
int main(void)
{
	double kg[10];
	double cm[10];
	double bmi = kg[10]/pow((cm[10]/100.0) * (cm[10]/100.0));

	printf("몸무게와 키 입력 : ");
	scanf("%d%.1lf\n", kg, cm); 
	printf("%.1lf\n", bmi);
	(20.0 <= bmi < 25.0 ? printf("표준입니다") : printf("체중관리가 필요합니다"));

	return 0;
}
*/