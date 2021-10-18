//공백, 탭, 개행 갯수 : isspace -> int isspace(int c)
#include<stdio.h>
#include<ctype.h>

void main(void) {
	char* str = "Car1 Car2 Car3";
	char buffer[100] = { 0, };
	int cnt = 0;
	while(*str){
		if (isspace(*str)) {
			cnt++;
		}
		
		str++;
	}
	printf("개행, 탭, 공백 갯수 : %d\n", cnt);

}
