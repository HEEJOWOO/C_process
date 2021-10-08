//문자열 입력, gets
#include<stdio.h>
int count(char* str);
void main(void) {
	char string[100];
	char* str;
	str = gets(string);
	if (str != NULL) {
		printf("'a'의 갯수는 %d개 입니다.\n", count(str));
	}
}

int count(char* str) {
	int len = 0;
	while (*str != NULL) {
		if (*str++ == 'a') {
			len++;
		}
	}
	return len;
}
