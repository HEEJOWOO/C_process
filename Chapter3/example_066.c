//문자열 중 일치되는 첫 문자의 위치 구하기, strcspn
#include<stdio.h>
#include<string.h>

void main(void) {
	char* str = "This is a string $$$";
	char* set = "~!@#$%^&*()_+-={}[]:;'<>./?";
	
	printf("%d에 일치되는 첫 문자를 발견함\n", strcspn(str, set));
}
