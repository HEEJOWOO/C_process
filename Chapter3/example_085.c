//정수를 문자열로 변환, _ultoa -> char* _ultoa(unsigned long value, char* str, int radex)
#include<stdio.h>
#include<stdlib.h>

void main(void) {
	unsigned long value;
	char str[100];
	value = 34567;
	_ultoa_s(value, str, 100, 16);
	printf("%s로 변경 됐습니다. \n", str);

}
