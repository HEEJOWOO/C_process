//문자열 복사 함수
#include<stdio.h>

#define KOREA "대한민국"

char* my_string(char* dest, const char* src);
void main(void) {
	char ch[100];
	my_string(ch, KOREA);
	puts(ch);
}

char* my_string(char* dest, const char* src) {
	if (*dest == NULL || *src == NULL) {
		if (*dest == NULL) { 
			*dest = NULL;
		}
		return NULL;
	}
	do {
		*dest++ = *src;
	} while (*src++ != NULL);
	return dest;
}
