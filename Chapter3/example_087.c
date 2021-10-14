//실수를 문자열로 변환 ecvt -> char* ecvt(double value, int count, int* dec, int* sign)
#include<stdio.h>
#include<stdlib.h>

void main(void) {
	double value = 3.14e10;
	int dec, sign;
	char ch[100];
	_ecvt_s(ch, 100, value, 3, &dec, &sign);
	printf("%s로 변경 됐습니다.\n", ch);
	printf("소수점 : %d, 부호 : %d\n", dec, sign);
}
