//중첩 순환문
#include<stdio.h>
main() {
	for (int i = 1; i <= 9; i++) {
		if (i == 9) break; //i가 9일때 for문 종료, 단 break는 중첩되어 있을때 현재의 for문 범위에서만 적용
		for (int j = 1; j <= 9; j++) {
			if (j == 7) continue; 
			printf("%d x %d = %d\n", i, j, i * j);
		}
		
	}
}
