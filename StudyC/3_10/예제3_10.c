#include <stdio.h>

int main(void)
{
	int age;
	double height;

	printf("���̿� Ű�� �Է��ϼ��� : ");
	scanf("%d%lf", &age, &height); // ���̿� Ű�� �Բ� �Է� (spacebar �� tab, enter �� ����)
	printf("���̴� %d��, Ű�� %lf �Դϴ�.", age, height);

	return 0;
}