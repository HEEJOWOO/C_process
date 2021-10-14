//실수를 문자열로 변환, gcvt -> char *gcvt(double value, int digits, char* buffer)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(void) {
	double value = 3.14e10;
	char ch[100];
	_gcvt_s(ch, 100, value, 3);
	printf("%s 문자열로 변환\n", ch);
	
}
