//포인터의 포인터 사용
#include<stdio.h>
void my_ppointer(void** name);
void main(void) {
	char* name[3];
	
	name[0] = "호랑이";
	name[1] = "사자";
	name[2] = "토끼";
	my_ppointer(name);
	


}
void my_ppointer(void** name) {
	puts((char*)name[0]);
	puts((char*)name[1]);
	puts((char*)name[2]);
}
