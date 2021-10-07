//문자열 이해
#include<stdio.h>
#define ASCII_BEGIN 0
#define ASCII_END 255
main() {
	for (int i = ASCII_BEGIN; i <= ASCII_END; i++) {
		printf("ASCII CODE : %d, 문자 :%c\n", i, i);
	}
}
