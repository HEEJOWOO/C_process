//파일 포인터의 현재 위치 설정하기 fsetpos
#include<stdio.h>
void main(void) {
	FILE* file;
	fpos_t pos;
	fopen_s(&file, "test.txt", "w+");
	fgetpos(file, &pos);
	fputs("abcde", file);
	printf("%d\n", ftell(file));
	fsetpos(file, &pos);
	printf("%d\n", ftell(file));
	fclose(file);
}
