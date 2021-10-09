//문자열 중 문자 검색, strchr
#include<stdio.h>
#include<string.h>
#define FIND_H 'h'
void main(void) {
	char str[100];
	char* ret;
	do {
		gets(str);
		ret = strchr(str, FIND_H);
		if (ret == NULL) {
			printf("찾는 문자 %c 없습니다.\n", FIND_H);
		}
		else {
			printf("%d번째에 찾는 문자 h가 있습니다.\n", ret - str);
			break;
		}

	} while (1);

}
