//실수를 문자열로 변과, fcvt
//실수값을 문자열로 변환하여 내부적인 기억 공간에 별로도 저장, 별도로 저장된 공간의 메모리 주소를 반환
#include<stdio.h>
#include<stdlib.h>

void main(void) {
	double value;
	char str[100];
	int dec=0, sign=0;
	
	value = 3.141592;
	_fcvt_s(str, 100, value, 3,&dec,&sign);
	printf("%s로 변경 됐습니다. \n", str);
	printf("소수점의 위치 : %d, 부호 %d 입니다\n", dec, sign);


}
