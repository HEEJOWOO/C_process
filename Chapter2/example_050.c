//매크로 이해하기
#include<stdio.h>
#define MAX(a,b)	a>b?a:b
#define MIN(a,b)	a<b?a:b

void main() {
	printf("MAX 값은 %d 입니다.\n", MAX(11, 10));
	printf("MIN 값은 %d 입니다.\n", MIN(4, 5));

}
