//1차원 배열 사용
#include<stdio.h>
void main(void) {
	char str[] = "koxea";
	puts(str);
	str[2] = 'r';
	puts(str);

	printf("%d | %c \n", str[0], str[0]);
	printf("%d | %c \n", str[1], str[1]);
	printf("%d | %c \n", str[2], str[2]);
	printf("%d | %c \n", str[3], str[3]);
	printf("%d | %c \n", str[4], str[4]);
	printf("%d | %c \n", str[5], str[5]); //NULL 값 , 숫자 0과 NULL의 0은 서로 다름

}
