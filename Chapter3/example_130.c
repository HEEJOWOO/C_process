//포인터의 포인터 사용
#include<stdio.h>
void main(void) {
	char* name[3];
	char** pname;
	name[0] = "호랑이";
	name[1] = "사자";
	name[2] = "토끼";
	pname = name;
	puts(name[0]);
	puts(pname[1]);
	puts(pname[2]);

	pname[0] = "제로";
	puts(pname[0]);
	puts(name[0]);


}
