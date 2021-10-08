//정수값 출력
#include<stdio.h>
void main(void) {
	int i = 10;
	int j = 1000;
	int k = 12345;

	printf("[%d]\n", i);
	printf("[%d]\n", j);
	printf("[%d]\n", k);

	printf("[%5d]\n", i);
	printf("[%5d]\n", j);
	printf("[%5d]\n", k);

	printf("[%10d]\n", i);
	printf("[%10d]\n", j);
	printf("[%10d]\n", k);

	printf("[%-10d]\n", i);
	printf("[%-10d]\n", j);
	printf("[%-10d]\n", k);
}
