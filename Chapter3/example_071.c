//문자열을 특정 문자로 채움, strset
#include<stdio.h>
#include<string.h>

void main(void) {
	char str[100] = "korea polytechnic university";

	_strnset_s(str, 100,'*', 5);
	printf("%s\n", str);
}
