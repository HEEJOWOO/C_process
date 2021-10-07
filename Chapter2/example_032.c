//중첩 조건문
#include<stdio.h>
main() {
	int i = 1, j = 2, k = 7;
	if (i == 1) {
		if (j == 2) {
			if (k == 3) {
				printf("i=1, j=2, k=3\n");
			}
			else if (k == 4) {
				printf("i=1,j=2,k=4\n");
			}
			else {
				printf("i=1,j=2,k=%d\n", k);
			}
		}
		
	}
}
