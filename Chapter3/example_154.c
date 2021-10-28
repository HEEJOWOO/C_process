//파일 읽기/쓰기 에러 검사 ferror
#include<stdio.h>
void main(void) {
	FILE* file;
	int ch;
	fopen_s(&file, "test.txt", "r");
	while (!feof(file)){
		ch = fgetc(file);
		if (ferror(file)) puts("파일을 읽는중 에러를 발생하였습니다.");
		printf("%c\n", ch);
	}

}
