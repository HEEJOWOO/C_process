//임시 파일 이름 만들기 tmpnam
#include<stdio.h>
void main(void) {
	int i;
	char buffer[100];
	char* path;
	for (i = 0; i < 10; i++) {
		tmpnam_s(buffer,100);
		puts(buffer);
	}

	for (i = 0; i < 10; i++) {
		path = _tempnam("", "tempnam_test");
		puts(path);
	}

	
}
