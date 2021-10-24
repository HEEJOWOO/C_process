//void 형 포인터 사용하기
#include<stdio.h>
#include<string.h>

void main(void) {
	int i = 5;
	double d = 3.14;
	int* pi;
	double* pd;
	void* pv;

	pi = &i;
	pd = &d;

	pv = &i;
	printf("%d\n", *(int*)pv);
	pv = &d;
	printf("%f\n", *(double*)pv);
	//pd = &i;
}
