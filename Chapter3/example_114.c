//2차원 배열의 포인터 사용
#include<stdio.h>

void main(void) {
	int jumsu[100][3];
	int total[3] = { 0, };
	int(* pjumsu)[3];
	pjumsu = jumsu;
	for (int i = 0; i <= 99; i++) {
		pjumsu[i][0] = 92;
		pjumsu[i][1] = 80;
		pjumsu[i][2] = 70;
	}
	for (int i = 0; i <= 99; i++) {
		total[0] += pjumsu[i][0];
		total[1] += pjumsu[i][1];
		total[2] += pjumsu[i][2];
	}
	printf("total[0] = %d\n", total[0]);
	printf("total[1] = %d\n", total[1]);
	printf("total[2] = %d\n", total[2]);
}
