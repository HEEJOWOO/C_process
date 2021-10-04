//쉼표 연산자
#include<stdio.h>
main() {
	int x = 1, y = 5, max; //쉼표 연산자
	max = x > y ? x : y; //조건 연산자
	printf("max : %d, x : %d, y : %d\n", max, x, y);
	printf("test : %d ", max = x > y ? x : y);

	int xx, yy;
	for (xx = 0, yy = 5; xx < yy; xx++, yy--) {
		printf("x : %d, y : %d\n", xx, yy);
	}
}
