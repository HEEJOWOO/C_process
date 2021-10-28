//파일 삭제하기 remove
#include<stdio.h>
#include<io.h>
#include<sys/stat.h>
void main(void) {
	FILE* file;
	char* path = "test.txt";
	
	fopen_s(&file, "test.txt", "w");
	fputs("abcde", file);
	fclose(file);

	_chmod(file, "_S_IREAD");
	if (remove(path) != 0) {
		perror("파일 삭제 안됨 : ");
	}
	else {
		perror("파일 삭제 됨 : ");
	}
	
}
