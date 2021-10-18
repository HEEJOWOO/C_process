//문자열에서 앞, 뒤 2바이트씩 교환하기 swab -> void swab(char *src, char *dest, int count)
#include<stdio.h>
#include<stdlib.h>

void main(void) {
	char str1[] = "1a2b3c4d5e";
	char str2[] = "..........";
	puts(str1);
	puts(str2);
	_swab(str1, str2, sizeof(str1) - 1);
	puts(str1);
	puts(str2);
}
