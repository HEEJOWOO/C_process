//비트 연산자
#include<stdio.h>
main() {
	unsigned char ch = 255, mask = 0x7F;
	printf("%d\n", ch); // 255
	printf("%d\n", ch & mask); // 127, 논리 곱 연산
	printf("%d\n", (char)~ch); // 0, 비트값 반전
	printf("%d\n", ch^ch); // 0, 배타적 비트합 : 두 개의 비트가 서로 다른 경우에만 1, 같으면 0
	printf("%d\n", ch>>1); // 127, 쉬프트 연산
	printf("%d\n", mask<<1); // 254, 쉬프트 연산
}
