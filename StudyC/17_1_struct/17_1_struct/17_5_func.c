#include <stdio.h>

struct vision
{
	double left;
	double right;
};

struct vision exchange(struct vision robot); // �Լ� ����

int e(void)
{
	struct vision robot; // ����ü ���� ����

	printf("�÷� �Է� : ");
	scanf("%lf%lf", &(robot.left), &(robot.right)); // �÷� �Է�
	robot = exchange(robot); // �Լ� ȣ��
	printf("�ٲ� �÷� : %.1f, %.1f\n", robot.left, robot.right);

	return 0;
}

struct vision exchange(struct vision robot) // ����ü�� ��ȯ�ϴ� �Լ�
{
	double temp; // ���� �ӽ� ������ ����

	temp = robot.left;
	robot.left = robot.right;
	robot.right = temp;

	return robot;
}