//포인터
#include<stdio.h>
main() {
	int saram_A = 0, saram_B = 0;
	int* pointer;
	int* psaram;
	pointer = &saram_A;
	*pointer = 1;
	printf("%d,%d\n", saram_A, *pointer);
	saram_A = 2;
	printf("%d,%d\n", saram_A, *pointer);
	psaram = &saram_A;
	*psaram = 3;
	printf("%d,%d,%d\n", saram_A, *pointer, *psaram);

	pointer = &saram_B;
	*pointer = 123;
	printf("%d,%d,%d\n", saram_A, saram_B,*pointer);
	printf("%d,%d,%d,%d\n", saram_A, saram_B, *pointer,*psaram);
	psaram = &saram_B;
	*psaram = 321;
	printf("%d,%d,%d,%d\n", saram_A, saram_B, *pointer, *psaram);
}
