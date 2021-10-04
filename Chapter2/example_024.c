//증감 연산자 이해
#include<stdio.h>
main() {
	int i = 1;
	printf("%d\n", i++); //출력 1, 후 증가 2
	printf("%d\n", i++); //출력 2, 후 증가 3
	printf("%d\n", ++i); //출력 4, 선 증가
	printf("%d\n", i--); //출력 4, 후 감소 3
	printf("%d\n", i--); //출력 3, 후 감소 2
	printf("%d\n", --i); //출력 1, 선 감소 

}
