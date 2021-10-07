//조건 순환문
#include<stdio.h>
main() {
	int i = 1, hap = 0;
	while (i <= 10) {
		hap += i;
		i++;
	}
	printf("hap = %d\n", hap);
}
