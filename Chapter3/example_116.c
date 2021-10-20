//3차원 배열 사용하기
#include<stdio.h>

void main(void) {
	int i, j;
	int jumsu[10][100][3] = { 0, };
	int total[3] = { 0, };
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 100; j++) {
			jumsu[i][j][0] = 95;
			jumsu[i][j][1] = 90;
			jumsu[i][j][2] = 55;
		}
	}
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			total[0] += jumsu[i][j][0];
			total[1] += jumsu[i][j][1];
			total[2] += jumsu[i][j][2];
		}
		
	}
	printf("%d\n", total[0]);
	printf("%d\n", total[1]);
	printf("%d\n", total[2]);
}
