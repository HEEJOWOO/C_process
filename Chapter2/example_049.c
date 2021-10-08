//#include 문 이해
#include<stdio.h>
#include<conio.h>
main() {
	int ch;
	printf("키보드에서 아무 버튼이나 하나 누르세요.\n");
	ch = _getch();
	printf("%c\n", ch);
}
