//파일의 끝에 도달했는지 검사 feof
#include<stdio.h>
void main(void) {
	FILE* file;
	int ch;
	fopen_s(&file, "test.txt", "r");
	while (!feof(file)) {
		ch = fgetc(file); //fgetc는 한 문자를 읽으면 파일 포인터는 자동으로 1만큼 증가
		printf("읽은 문자 : %c\n", ch);
	}
	fclose(file);

}
