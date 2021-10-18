//메모리 채우기 ,memset -> void* memset(void* dest, int fillChar, unsgiend int count)
#include<stdio.h>
#include<string.h>
void main(void) {
	char str[50] = "korea polytechnic university";
	puts(str);
	memset(str, (int)NULL, sizeof(str));
	puts(str);
	memset(str, '*', sizeof(str) - 1);
	puts(str);

}
