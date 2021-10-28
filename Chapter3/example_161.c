//디렉토리 생성하기 _mkdir
#include<stdio.h>
#include<direct.h>
void main(void) {
	char* path = "mkdir_test";
	if (_mkdir(path) == -1)perror("디렉토리 생성 못함");
	else puts("디렉토리 생성");
}
