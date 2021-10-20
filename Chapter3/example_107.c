//포인터를 함수에서 사용하기
#include<stdio.h>

void change_x1(int x1);
void change_x2(int *x1);

void main(void) {
	int x = 5;
	change_x1(x);
	printf("%d\n", x); // 값에 의한 호출

	change_x2(&x);
	printf("%d\n", x); // 참소에 의한 호출
}

void change_x1(int x1) {
	x1 = 100;
}

void change_x2(int *x1) {
	*x1 = 200;
}
