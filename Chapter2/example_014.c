#include<stdio.h>
main() {
	int b;
	int j;
	b = 10 > 5; //1
	j = 10 > 20; //0
	
	if (b) {
		printf("10>5의 식은 참 입니다.\n");
	}
	else {
		printf("10>5dml tlrdms 거짓입니다.\n");
	}
	if (j) {
		printf("10>20의 식은 참 입니다.\n");
	}
	else {
		printf("10>20의 식은 거짓 입니다.\n");
	}
	if (-1) {
		printf("-1은 참 입니다.\n");
	}
	else {
		printf("-1은 거짓 입니다.\n");
	}
}
