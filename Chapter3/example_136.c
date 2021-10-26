//파일생성하기
#include<stdio.h>
void main(void) {
	FILE* file;
	if (0 == fopen_s(&file, "C:\\Users\\\KSW\\source\\repos\\C_Process\\test.txt", "w+")) {
		puts("파일이 생성됐습니다..");
		fclose(file);
	
		
	}
	else {
		puts("파일이 생성되지 않았습니다.");
		
	}
}
