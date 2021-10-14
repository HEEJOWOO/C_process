//정수를 문자열로 변경, ltoa -> char* ltoa(long value, char* string, int radex)
#include<stdio.h>
#include<stdlib.h>

void main(void) {
	int i = 1234;
	char str[100];
	_ltoa_s(i, str, 100,2);
	printf("%s로 변경 됨\n", str);
	i = -1234;
	_ltoa_s(i, str, 100, 2);
	printf("%s로 변경 됨\n", str);
}
