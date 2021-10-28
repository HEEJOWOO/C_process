//파일이 존재하는지 확인 _access
#include<stdio.h>
#include<io.h>
void main(void) {
	if (0 == _access("test.txt", 0)) { //0 : 파일 존재 유무 2: 파일 쓰기위해 개방 가능 여부 4 :파일 읽기위해 가방 가능 여부 6: 파일 일기 쓰기 위해 개방 여부
		puts("파일이 존재합니다.");
	}
	else {
		puts("파일이 존재하지 않습니다.");
	}
}
