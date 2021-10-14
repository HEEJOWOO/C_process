//문자열내 문자가 알파벳인지 검사하기, isalpha -> int isalpha(int c) / 참이면 1 거짓이면 0 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void main(void) {
	char* str = "Car1 Car2 Car3";
	char buffer[100] = { 0, }; //배열을 0으로 초기화
	int cnt = 0;
	while (*str != NULL) {
		if (isalpha(*str)) {
			buffer[cnt++] = *str;
		}
		str++;
	}
	printf("%s\n", buffer);
}
