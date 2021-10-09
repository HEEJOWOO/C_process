//문자열 검색, strstr
#include<stdio.h>
#include<string.h>
#define SKY "sky"
void main(void) {
	char str[100];
	char* ret;
	do {
		gets(str);
		ret = strstr(str, SKY);
		if (ret == NULL) printf("문자열 중에 %s가 없습니다.\n", SKY);
		else {
			printf("%d 번째에 %s가 있습니다.\n", ret - str, SKY);
			break;
		}


	} while (1);
}
