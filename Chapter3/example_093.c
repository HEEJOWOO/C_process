//문자가 소문자인지 검사, islower -> int islower(int c)
#include<stdio.h>
#include<ctype.h>

void main(void) {
	char* str = "Car1 Car2 Car3";
	char buffer[100] = { 0, };
	int cnt = 0;
	while(*str){
		if (islower(*str)) {
			buffer[cnt++] = *str;
		}
		
		str++;
	}
	printf("%s\n", buffer);

}
