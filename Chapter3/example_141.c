//파일에 형식화된 문자열쓰기 fprintf
#include<stdio.h>
void main(void) {
	FILE* file;
	int i = 12345;
	if (0 == fopen_s(&file, "test.txt", "w")) {
		puts("텍스트 생성");
		fprintf(file, "%d", i);
	}
	else {
		puts("텍스트 생성 못함");
	}
}
