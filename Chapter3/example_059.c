//문자열을 대소문자로 구분하여 비교하기
#include<stdio.h>
#include<string.h>
#define SKY "sky"
void main(void) {
	char str[100];
	int ret = 0;
	printf("문자열을 입력하세요.\n");
	printf("sky를 입력하면 프로그램종료\n");
	while (1) {
		gets(str);
		ret = strcmp(str, SKY);
		if (ret == 0) {
			printf("%s==%s, ret=%d\n", str, SKY, ret);
			break;
		}
		else if (ret < 0) {
			printf("%s<%s, ret=%d\n", str, SKY, ret);
		}
		else {
			printf("%s>%s, ret=%d\n", str, SKY, ret);
		}
	}
}
