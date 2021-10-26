//파일 포인터를 임의의 위치로 이동 fseek
#include<stdio.h>
void main(void) {
	FILE* file;

	if (0 == fopen_s(&file, "test.txt", "w")) {
		puts("파일 생성");
		printf("%d\n", ftell(file));
		fputs("abced", file);
		printf("%d\n", ftell(file));
		fseek(file, -2L, SEEK_CUR);
		printf("%d\n", ftell(file));
	}
	else {
		puts("파일 생성 안됨");
	}
}
