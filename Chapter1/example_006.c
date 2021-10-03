#include<stdio.h>
main() {
	int i;
	int hap = 0;
	for (i = 1; i <= 10; i = i + 1) {
		hap = hap + i;
	}
	printf("1부터 10까지의 합은 %d 입니다.", hap);
}
