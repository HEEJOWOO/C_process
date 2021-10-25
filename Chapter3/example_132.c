//함수 포인터 사용
#include<stdio.h>
#include<string.h>
void main(void) {
	int(*my_func)(const char*);
	my_func = puts;
	puts("function test");
	my_func("function test");
	my_func = strlen;
	printf("%d\n", strlen("aa"));
	printf("%d\n", my_func("aa"));
}
