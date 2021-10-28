//디렉토리 삭제하기 _rmdir
#include<stdio.h>
#include<direct.h>
void main(void) {
	char* path = "mkdir_test";
	if (_rmdir(path) == -1)perror("디렉토리 삭제 못함");
	else puts("디렉토리 삭제");
}
