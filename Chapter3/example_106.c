//포인터 사용, int형과 동일한 크기를 갖는 4바이트 변수임
#include<stdio.h>

void main(void) {
	char* p_char;
	short* p_short;
	int* p_int;
	long* p_long;
	float* p_float;
	double* p_double;

	printf("char size : %d\n", sizeof(char));
	printf("short size : %d\n", sizeof(short));
	printf("int size : %d\n", sizeof(int));
	printf("long size : %d\n", sizeof(long));
	printf("float size : %d\n", sizeof(float));
	printf("double size : %d\n", sizeof(double));

	printf("*char size : %d\n", sizeof(p_char));
	printf("*short size : %d\n", sizeof(p_short));
	printf("*int size : %d\n", sizeof(p_int));
	printf("*long size : %d\n", sizeof(p_long));
	printf("*float size : %d\n", sizeof(p_float));
	printf("*double size : %d\n", sizeof(p_double));

}
