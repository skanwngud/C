#include <stdio.h>

int main(void)
{
	double height, weight, bmi;
	
	printf("�����Կ� Ű�� �Է��Ͻÿ� : ");
	scanf("%lf%lf", &weight, &height);

	height = height / 100.0;
	bmi = weight / (height * height);

	(bmi >= 20.0)&&(bmi < 25.0)
		? printf("ǥ���Դϴ�")
		: printf("ü�� ������ �ʿ��մϴ�");

	return 0;
}


/*
int main(void)
{
	double kg[10];
	double cm[10];
	double bmi = kg[10]/pow((cm[10]/100.0) * (cm[10]/100.0));

	printf("�����Կ� Ű �Է� : ");
	scanf("%d%.1lf\n", kg, cm); 
	printf("%.1lf\n", bmi);
	(20.0 <= bmi < 25.0 ? printf("ǥ���Դϴ�") : printf("ü�߰����� �ʿ��մϴ�"));

	return 0;
}
*/