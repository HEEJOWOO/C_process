//파일에 한 문자 읽기 fgetc
#include<stdio.h>
void main(void) {
	FILE* file;
	int ch;
	if (0 == fopen_s(&file, "C:\\Users\\\KSW\\source\\repos\\C_Process\\test.txt", "r")) {
		ch = fgetc(file);
		printf("%c\n", ch);
		fclose(file);
	
	}
	else {
		puts("파일이 생성되지 않았습니다.");
		
	}
}
