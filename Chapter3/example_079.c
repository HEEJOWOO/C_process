//문자열을 정수로 변환, strtol
#include<stdio.h>
#include<stdlib.h>

void main(void) {
	char* string = "0xFF";
	char* stop;
	int radix = 16;
	long value;
	value = strtol(string, &stop, radix);
	printf("%d개의 문자가 변경\n", stop - string);
	printf("16진수 %s를 숫자로 변환하면 %ld가 됩니다.\n", string, value);
}
