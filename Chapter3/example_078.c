//문자열을 정수로 변환, atol
#include<stdio.h>
#include<stdlib.h>

void main(void) {
	char* ch1 = "2는 1보다 큽니다.";
	char* ch2 = "1004는 천사다.";
	char* ch3 = "2021년 입니다.";
	char* ch4 = "오늘은 6월 9일 입니다.";
	long t1, t2, t3, t4;

	puts(ch1);
	puts(ch2);
	puts(ch3);
	puts(ch4);

	t1 = atol(ch1);
	t2 = atol(ch2);
	t3 = atol(ch3);
	t4 = atol(ch4);

	printf("문자열을 숫자로 변환 : %ld\n", t1);
	printf("문자열을 숫자로 변환 : %ld\n", t2);
	printf("문자열을 숫자로 변환 : %ld\n", t3);
	printf("문자열을 숫자로 변환 : %ld\n", t4);

	printf("총 합은 %d 입니다.\n", t1 + t2 + t3 + t4);
}
