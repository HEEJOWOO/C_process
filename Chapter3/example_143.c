//파일에 버퍼 비우기 fflush
#include<stdio.h>
void main(void) {
	FILE* file;
	if (0 == fopen_s(&file, "test.txt", "w+")) {
		puts("파일생성");
		fputs("korea", file);
		fflush(file);
		fclose(file);
	}
	else {
		puts("파일생성안됨");
	}
}
