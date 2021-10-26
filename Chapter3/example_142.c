//파일에 형식화된 문자열읽기 fscanf
#include<stdio.h>
void main(void) {
	FILE* file;
	int i;
	if (0 == fopen_s(&file, "test.txt", "r")) {
		
		fscanf_s(file, "%d", &i);
		printf("i=%d\n", i);
	}
	else {
		puts("텍스트 생성 못함");
	}
}
