//파일 이름 속성 변경 _chmod
#include<stdio.h>
#include<io.h>
#include<sys/stat.h>
void main(void) {
	char* path = "test.txt";
	if (_chmod(path,_S_IREAD)!=0) { //_S_IREAD : 읽기 전용 , _S_IWRITE : 일반 파일로 설정
		perror("파일 속성 변경 오류");
	}
	else {
		perror("파일 속성 변경");
	}
}
