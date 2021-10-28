//현재 작업중인 디렉터리 변경하기 _chdir
#include<stdio.h>
#include<direct.h>
#include<stdlib.h>
void main(void) {
	char* mk_dir = "mk_dir";
	char pathname[_MAX_PATH];
	_mkdir(mk_dir);
	_getcwd(pathname, _MAX_PATH);
	puts(pathname);

	_chdir(mk_dir);
	_getcwd(pathname, _MAX_PATH);
	puts(pathname);

}
