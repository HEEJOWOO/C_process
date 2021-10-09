//문자열을 특정 문자로 채움, strset
#include<stdio.h>
#include<string.h>

void main(void) {
	char str[100];
	do {
		gets(str);
		if (strlen(str) == 0) break;
		_strset_s(str, 100,str[0]);
		puts(str);
	} while (1);
}
