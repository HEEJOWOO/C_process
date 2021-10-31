//현재까지 경과된 초의 수 구하기
#include<stdio.h>
#include<time.h>
void main(void) {
	time_t now;
	time(&now);
	printf("time test :%d\n",now);
}
