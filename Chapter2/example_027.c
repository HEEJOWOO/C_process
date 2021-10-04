//조건 연산자
#include<stdio.h>
main() {
	int x = 1;
	int y = 2;
	int max, max_revision;
	max = x > y ? x : y;
	printf("max의 값 : %d\n", max);
	max_revision = x > y ? x : y > 5 ? 1 : x + y;
	printf("max_revision의 값 : %d\n", max_revision);
}
