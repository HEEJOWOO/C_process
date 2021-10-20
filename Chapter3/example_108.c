//포인터 배열 사용하기
#include<stdio.h>
void main(void) {
	int x = 0, y = 0;
	int* p_array[2];
	p_array[0] = &x;
	p_array[1] = &y;

	*p_array[0] = 123;
	*p_array[1] = 456;

	printf("x = %d , p_array[0] = %d\n", x, *p_array[0]);
	printf("y = %d , p_array[1] = %d\n", y, *p_array[1]);

}
