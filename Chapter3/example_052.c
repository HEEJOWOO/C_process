//문자 출력, putch
#include<stdio.h>
#include<conio.h>

int putch_function(char* str);

void main(void) {
	putch_function("This ia a putch function !");
}

int putch_function(char* str) {
	int  len = 0;
	while (*str != NULL) {
		_putch(*str);
		str++;
		len++;
	}
	printf("\r");
	printf("\n");
}
