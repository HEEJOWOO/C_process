//문자열 연결, strcat
#include<stdio.h>
#include<string.h>

void main(void) {
	char str1[100];
	char str2[100];
	
	gets(str1);
	gets(str2);
	strcat_s(str1,100, str2);
	puts(str1);

}
