//문자열 대문자로 변경
#include<stdio.h>
#include<string.h>

void main(void) {
	char str[100];
	do {
		gets(str);
		if (strlen(str) == 0) break;
		_strupr_s(str,100);
		puts(str);
	} while (1);
}
