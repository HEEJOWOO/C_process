//1차원 배열의 포인터 사용하기
#include<stdio.h>
#include<string.h>
void main(void) {
	char str[100] = "korea";
	char* p_str = str;
	puts(str);
	puts(p_str);

	strcpy_s(p_str,100, "japan");

	puts(str);
	puts(p_str);
}
