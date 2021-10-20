//3차원 배열 포인터 사용하기
#include<stdio.h>

void main(void) {
	int i, j;
	int jumsu[10][100][3] = { 0, };
	int total[3] = { 0, };
	int(* pjumsu)[100][3]; //3차원 배열을 갖기위해 포인터 선언
	pjumsu = jumsu;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 100; j++) {
			pjumsu[i][j][0] = 95;
			pjumsu[i][j][1] = 90;
			pjumsu[i][j][2] = 55;
		}
	}
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			total[0] += pjumsu[i][j][0];
			total[1] += pjumsu[i][j][1];
			total[2] += pjumsu[i][j][2];
		}
		
	}
	printf("%d\n", total[0]);
	printf("%d\n", total[1]);
	printf("%d\n", total[2]);
}
