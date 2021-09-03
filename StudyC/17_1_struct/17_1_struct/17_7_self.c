#include <stdio.h>

struct list
{
	int num;
	struct list *next; // 구조체 자신을 가리키는 포인터
};

int main(void)
{
	struct list a = { 10, 0 }, b = { 20, 0 }, c = { 30, 0 }; // 변수 초기화
	struct list *head = &a, *current; // 포인터 초기화

	a.next = &b; // a 의 포인터는 b 를 가리킴
	b.next = &c; // b 의 포인터는 c 를 가리킴

	printf("head->num : %d\n", head->num); // head 포인터가 num 의 주소를 가리킴
	printf("head->next->num : %d\n", head->next->num); // head 로 b 의 num 멤버 사용

	printf("list all : ");
	current = head; // 최초 current 포인터가 a 를 가리킴
	while (current != NULL) // 마지막 구조체 변수까지 출력하면 종료
	{
		printf("%d ", current->num); // current 는 구조체의 num 멤버를 출력
		current = current->next; // current 가 다음 구조체 변수를 가리키도록 함
	}

	printf("\n");

	return 0;
}