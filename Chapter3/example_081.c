// 문자열을 실수로 변환, atof
#include<stdio.h>
#include<stdlib.h>
void main(void) {
	char* ch1 = "2.1은 1.0보다 크다";
	char* ch2 = "1004.5sms 천사.오 이다";
	char* ch3 = "2005년 이다.";
	char* ch4 = "6월 9일이다.";

	double t1, t2, t3, t4;
	t1 = atof(ch1);
	t2 = atof(ch2);
	t3 = atof(ch3);
	t4 = atof(ch4);
	printf("%.1lf\n", t1);
	printf("%.1lf\n", t2);
	printf("%.1lf\n", t3);
	printf("%.1lf\n", t4);

	printf("문자열을 실수로 바꾼 총 합은 %.1lf 입니다.\n", t1 + t2 + t3 + t4);

	
}
