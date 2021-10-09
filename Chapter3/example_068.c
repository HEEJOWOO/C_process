//문자열 구분자로 분리
#include<stdio.h>
#include<string.h>
#define TOKEN " "
void main(void) {
	char str[100];
	char* ret, *context;
	puts("문자열을 입력하세요.");
	gets(str);
	ret = strtok_s(str,TOKEN,&context);
	while (ret != NULL) {
		puts(ret);
		ret = strtok_s(NULL, TOKEN, &context);
	}
}
