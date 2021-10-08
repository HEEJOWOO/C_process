//정수값 입력 scanf
#include<stdio.h>
void main(void) {
	int tmp;
	int total = 0;
	for (int i = 1; i <= 3; i++) {
		printf("%d 번째 정수를 입력하세요\n", i);
		scanf_s("%d", & tmp);
		total += tmp;
		printf("입력 값 : %d, Total : %d\n", tmp, total);
	}
}
