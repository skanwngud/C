#include <stdio.h>

int main(void)
{
	int rank = 2, m = 0;

	switch (rank) // rank 값이 얼마인지 확인
	{
	case 1: // rank 가 1일 때 m = 300 을 수행하고 switch 문 탈출
		m = 300;
		break;
		
	case 2: // rank 가 2 일 때 m = 200 을 수행하고 switch 문 탈출
		m = 200;
		break;

	case 3: // rank 가 3 일 때 m = 100 을 수행하고 switch 문 탈출
		m = 100;
		break;

	default: // m = 10 을 수행하고 switch 문 탈출
		m = 10;
		break;
	}

	printf("%d\n", m);

	return 0;
}

/* if 문으로도 바꿔서 사용 가능하나
   switch 문의 경우 정수값에 따라 실행 문장을 선택하기에 좋은 구조이며 범위를 검사하는 데에 있어서는 좋지 못하다.
   
   또한 switch 문에서 break 는 항상 쓸 필요는 없지만,
   특정 위치에서 switch 문을 빠져나오거나 하는 등의 편리함을 제공하며,
   보통 break 를 같이 쓰기 때문에 타인이 보기에 break 가 없는 switch 문은 잘못 쓴 코드로 보일 수도 있으니 주의한다.*/