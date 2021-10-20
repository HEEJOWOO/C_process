//2차원 배열 사용
#include<stdio.h>

void main(void) {
	int jumsu[100][3];
	int total[3] = { 0, };
	for (int i = 0; i <= 99; i++) {
		jumsu[i][0] = 92;
		jumsu[i][1] = 80;
		jumsu[i][2] = 70;
	}
	for (int i = 0; i <= 99; i++) {
		total[0] += jumsu[i][0];
		total[1] += jumsu[i][1];
		total[2] += jumsu[i][2];
	}
	printf("total[0] = %d\n", total[0]);
	printf("total[1] = %d\n", total[1]);
	printf("total[2] = %d\n", total[2]);
}
