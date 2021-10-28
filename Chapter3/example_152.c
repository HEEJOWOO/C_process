//파일 닫기 flose
#include<stdio.h>
void main(void) {
	FILE* file;
	char str[100];
	fopen_s(&file, "test.txt", "w");
	fputs("fclose()", file);
	fclose(file);
	
	fopen_s(&file, "test.txt", "r");
	fgets(str,100, file);
	puts(str);
	fclose(file);
}
