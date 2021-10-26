//파일의 길이 구하기 fgetpos
#include<stdio.h>
void main(void) {
	FILE* file;
	fpos_t pos;
	fopen_s(&file, "test.txt", "w"); //파일 오픈, 쓰기 모드
	fputs("korea polytechnic university", file); //파일에 문자열 입력
	fgetpos(file, &pos);
	printf("파일의 길이 : %d \n", pos);
	fclose(file);
}
