//파일에 문자열 읽기 fgets
#include<stdio.h>
void main(void) {
	FILE* file;
	char buffer[100];
	char* test;
	if (0 == fopen_s(&file, "C:\\Users\\\KSW\\source\\repos\\C_Process\\test.txt", "r")) {
		fgets(buffer, 100,file);
		test = buffer;
		puts(test);
		fclose(file);
	
	}
	else {
		puts("파일이 생성되지 않았습니다.");
	}
}
