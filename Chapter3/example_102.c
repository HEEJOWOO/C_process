//메모리 이동하기 void* memmove(void* buf1, const void* buf2, unsigned int count)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(void) {
	char str[100] = "1234567890";
	char str1[100] = "1234567890";
	puts(str);
	memcpy(str + 4, str + 2, 5);
	puts(str);

	puts(str1);
	memmove(str1 + 4, str1 + 2, 5);
	puts(str1);
}
