#include <stdio.h>

struct vision
{
	double left;
	double right;
};

struct vision exchange(struct vision robot); // 함수 선언

int e(void)
{
	struct vision robot; // 구조체 변수 선언

	printf("시력 입력 : ");
	scanf("%lf%lf", &(robot.left), &(robot.right)); // 시력 입력
	robot = exchange(robot); // 함수 호출
	printf("바뀐 시력 : %.1f, %.1f\n", robot.left, robot.right);

	return 0;
}

struct vision exchange(struct vision robot) // 구조체를 반환하는 함수
{
	double temp; // 값을 임시 저장할 변수

	temp = robot.left;
	robot.left = robot.right;
	robot.right = temp;

	return robot;
}