#include<stdio.h>
main() {
	char str_1[] = "i love korea"; //배열 선언, 변수형
	char str_2[13] = "i love korea"; //문자열의 길이보다 크게 할당하여 선언, 변수형
	char *str_3= "i love korea"; // 포인터를 이용하여 선언, 상수형
	
	printf("%s\n", str_1);
	printf("%s\n", str_2);
	printf("%s\n", str_3);
}
