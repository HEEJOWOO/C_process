//문자열 일정 크기 비교, strncmp
#include<stdio.h>
#include<string.h>

#define SKY "sky"

void main(void) {
	char str[100];
	int ret;
	do {
		gets(str);
		ret = strcmp(str, SKY, 3); //_stricmp : 대소문자 구분 없이 일정 크기 비교 
		if (ret == 0) {
			printf("%3.3s==%s\n", str, SKY);
			break;
		}
		else if (ret < 0) printf("%3.3s<%s\n", str, SKY);
		else printf("%3.3s>%s\n", str, SKY);
	} while (1);
}
