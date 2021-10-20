//2차원 배열을 함수에서 사용하기
#include<stdio.h>
void calc(int(*pjumsu)[3], int *total_);
void main(void) {
	int jumsu[100][3] = {0,};
	int total[3] = { 0, };
	calc(jumsu, total);
	printf("%d\n", total[0]);
	printf("%d\n", total[1]);
	printf("%d\n", total[2]);
}

void calc(int(*pjumsu)[3], int *total_) {
	int i;
	for (i = 0; i < 100; i++) {
		pjumsu[i][0] = 93;
		pjumsu[i][1] = 90;
		pjumsu[i][2] = 70;
	}

	for (i = 0; i < 100; i++) {
		total_[0] +=pjumsu[i][0];
		total_[1] += pjumsu[i][1];
		total_[2] += pjumsu[i][2];
	}

}
