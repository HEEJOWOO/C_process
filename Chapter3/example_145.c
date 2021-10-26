//파일 포인터를 처음으로 이동, fseek
#include<stdio.h>
void main(void) {
	FILE* file;
	if (0 == fopen_s(&file, "test.txt", "w+")) {
		puts("파일생성");
		printf("%d\n", ftell(file));
		fputs("korea", file);
		printf("%d\n", ftell(file));
		fseek(file, 0L, SEEK_SET);
		printf("%d\n", ftell(file));
		fclose(file);
	}
	else {
		puts("파일생성안됨");
	}
}
