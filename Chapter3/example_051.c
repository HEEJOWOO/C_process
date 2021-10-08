//문자 입력받기, getch
#include<stdio.h>
#include<conio.h>

void main(void) {
	int ch;
	do {
		ch = _getch();
		printf("문자 :%c, 아크키 코드 < %d >\n", ch, ch);
	} while (ch != 13);
	
}