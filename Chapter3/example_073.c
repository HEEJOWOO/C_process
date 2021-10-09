//문자열 소문자로 변경
#include<stdio.h>
#include<string.h>

void main(void) {
	char str[100];
	do {
		gets(str);
		if (strlen(str) == 0) break;
		_strlwr_s(str,100);
		puts(str);
	} while (1);
}
