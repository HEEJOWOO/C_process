//문자열 내 알파벳, 숫자 검사 isalnum -> int isalnum(int c);
#include<stdio.h>
#include<ctype.h>

void main(void) {
	char* str = "car1 car2 car3";
	char buffer[100] = { 0, };
	int cnt = 0;
	while (*str) {
		if (isalnum(*str)) {
			buffer[cnt++] = *str;
		}
		str++;
	}
	printf("%s\n", buffer);
}
