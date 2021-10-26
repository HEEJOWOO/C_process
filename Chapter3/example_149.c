//파일의 길이 구하기 fseek
#include<stdio.h>
void main(void) {
	int len;
	FILE* file;
	fopen_s(&file, "test.txt", "w"); //파일 오픈, 쓰기 모드
	fputs("korea polytechnic university", file); //파일에 문자열 입력
	fseek(file, 0L, SEEK_END); //포인터의 위치를 맨 긑으로 변경
	len = ftell(file); //현재 포인터의 위치
	printf("파일의 길이 : %d \n", len);
}
