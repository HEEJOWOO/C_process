//문자열 길이 구하기,strlen
#include<stdio.h>
#include<string.h>

void main(void) {
	char str1[100];
	do {
		gets_s(str1, 100);
		if (strlen(str1) == 0) break;
		printf("%s의 길이는 %d 입니다.\n", str1, strlen(str1));
	} while (1);
	
}
