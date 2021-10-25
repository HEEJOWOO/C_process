//main 함수 원형 사용
#include<stdio.h>
int main(int argc, int* argv[]) {
	int i;
	printf("인수의 수 : %d\n", argc);
	for (i = 0; i < argc; i++) {
		printf("argv[%d] : %s", i, argv[i]);
	}
}
