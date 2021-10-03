#include<stdio.h>
int hap_value(int value) {
	int hap = 0;
	for (int i = 1; i <= value; i++) {
		hap += i;
	}
	return hap;
}

main() {
	
	printf("1부터10까지의 합은 %d입니다.\n", hap_value(10));
	printf("1부터100까지의 합은 %d입니다.\n", hap_value(100));
	printf("1부터1000까지의 합은 %d입니다.\n", hap_value(1000));
	
}

