//파일 이름 변경 rename
#include<stdio.h>

void main(void) {
	char* original_name = "test_2.txt";
	char* change_name = "test.txt";
	if (rename(original_name, change_name) != 0) {
		perror("파일 이름 변경 오류");
	}
	else {
		perror("파일 이름 변경");
	}
}
