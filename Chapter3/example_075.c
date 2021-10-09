//문자열 복제, strdup 사용
#include<stdio.h>
#include<string.h>
#include<malloc.h>
void main(void) {
	char str[100];
	char* ret;
	do {
		gets(str);
		if (strlen(str) == 0)break;
		ret = _strdup(str); //문자열 복제
		strcpy_s(str, 100,"temporary string");
		printf("original : %s\n", str);
		printf("copy char : %s\n", ret);
		free(ret);
	} while (1);
}
