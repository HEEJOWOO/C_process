//공용체 이해
#include<stdio.h>
union union_test {
	int i;
	float j;
};
main() {
	union union_test test;
	test.i = 0;
	printf("test.i : %d\n", test.i);
	test.j = 3.141592;
	printf("test.i : %d\n", test.i);
	printf("test.j : %f\n", test.j);
}
