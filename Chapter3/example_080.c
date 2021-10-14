//문자열을 정수로 변환, strtoul
#include<stdio.h>
#include<stdlib.h>

void main(void) {
	char* ch = "11000";
	char* stop;
	int radix = 2;
	unsigned long value;
	value = strtoul(ch, &stop, radix);
	printf("%d 개의 문자가 변환 \n", stop - ch);
	printf("2진수 %s가 10진수 %u로 변환 됐습니다.\n", ch, value);
}
