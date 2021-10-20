//포인터 배열을 함수에서 사용하기
#include<stdio.h>

void printf_p_array(int* ptr[2]);

void main(void) {
	int i = 0, j = 0;
	int* array[2];
	array[0] = &i;
	array[1] = &j;
	*array[0] = 123;
	*array[1] = 456;

	printf_p_array(array);


}

void printf_p_array(int* ptr[2]) {
	printf("%d\n", *ptr[0]);
	printf("%d\n", *ptr[1]);
}
