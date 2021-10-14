//문자열을 정수로 변환
#include<stdio.h>
#include<stdlib.h>
void main(void) {
	int cnt;
	int total = 0;
	char string[100];
	for (cnt = 1; cnt <= 3; cnt++) {
		printf("%d번째 문자열을 입력한 뒤 Enter키를 누르세요.\n", cnt);
		gets(string);
		total += atoi(string);
		printf("입력값 = %d, 총 합 = %d\n", atoi(string), total);
	}
	printf("읽은 문자열의 총 합은 %d 입니다.\n", total);
}
