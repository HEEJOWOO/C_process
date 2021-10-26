//파일에 문자열 쓰기 fputs
#include<stdio.h>
void main(void) {
	FILE* file;
	int ch;
	if (0 == fopen_s(&file, "C:\\Users\\\KSW\\source\\repos\\C_Process\\test.txt", "w")) {
		fputs("korea polytechnic universiy",file);
		fclose(file);
	
	}
	else {
		puts("파일이 생성되지 않았습니다.");
	}
}
