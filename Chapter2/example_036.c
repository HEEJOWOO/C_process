//조건 순환문
#include<stdio.h>
main() {
	int i = 1, hap = 0;
	do {
		hap += i;
		i++;
	} while (i <= 10);
	printf("hap = %d\n", hap);

}
