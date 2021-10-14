//정수를 문자열로 변경, itoa -> char * iota(int value, char* string, int, index)
#include<stdio.h>
#include<stdlib.h>

void main(void) {
	int i = 1234;
	
	char str[100];
	_itoa_s(i, str, 100,10);
	printf("%d를 문자열로 변경했을때 %s가 됩니다.\n", i, str);
	i = -1234;
	_itoa_s(i, str, 100, 10);
	printf("%d를 문자열로 변경했을때 %s가 됩니다.\n", i, str);
}
