#include<stdio.h>
main() {
	
	int i; // 정수형 변수 i를 정의 합니다.
	int hap = 0; // 정수형 변수 hap을 정의하고 0으로 초기화 합니다.
	/*
	1.i에 1을 초기값으로 설정 합니다.
	2.i가 10보다 작거나 같을 때까지만 순환문은 반복 됩니다.
	3.현재의 hap의 값과 i값을 더하여 hap에 대입 합니다.
	4.i는 1씩 증가합니다.
	*/
	for (i = 1; i <= 10; i = i + 1) {
		hap = hap + i;
	}

	printf("1부터 10까지의 합은 %d 입니다.", hap);
}