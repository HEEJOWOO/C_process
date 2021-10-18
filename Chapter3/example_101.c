//메모리 비교하기(memcmp) int memcmp(const void* buf1, const void* buf2, unsigned int count)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(void) {
	char str1[100] = "123";
	char str2[100] = "123";

	strcpy_s(&str1[4],100, "abc");
	strcpy_s(&str2[4],100, "def");

	if (strcmp(str1, str2) == 0)puts("버퍼의 값이 일치 합니다.");
	if (memcmp(str1, str2, 7) == 0)puts("버퍼의 값이 일치 합니다.");
	else {
		puts("버퍼의 값이 일치하지 않습니다.");
	}
}
