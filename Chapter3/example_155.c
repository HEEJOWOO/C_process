//파일 읽기/쓰기 에러 검사 ferror
#include<stdio.h>
void main(void) {
	FILE* file;
	int ch;
	
	if (0== fopen_s(&file, "perror_test.txt", "r")){
		ch = fgetc(file);
		printf("%c\n", ch);

	}
	else {
		perror(file);
	}

}
