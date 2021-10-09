//문자열 거꾸로 뒤집기
#include<stdio.h>
#include<string.h>

void main(void) {
	char str[100];
	do {
		gets(str);
		if (strlen(str) == 0) break;
		_strrev(str);
		puts(str);
	} while (1);
}
