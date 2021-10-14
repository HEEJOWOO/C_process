//문자열을 실수로 변환, strtod
#include<stdio.h>
#include<stdlib.h>
void main(void) {
	char* ch = "1.234E-10";
	char* stop;
	double value;
	value = strtod(ch, &stop);
	printf("%d개의 문자열이 실수로 변경됨\n", stop - ch);
	printf("%s를 실수로 변경 하면 %E가 됩니다.\n", ch, value);
}
