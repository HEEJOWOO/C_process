//현재 작업중인 디렉터리 구하기 _getcwd
#include<stdio.h>
#include<direct.h>
#include<stdlib.h>
void main(void) {
	char pathname[_MAX_PATH]; //MAX_PATH 는 운영체제에 따른 최대 경로의 길이 값을 가지고 있음
	_getcwd(pathname, _MAX_PATH);
	puts(pathname);
}
