//구조체의 길이를 구하고 초기화하기
#include<stdio.h>
#include<string.h>

struct tag {
	char name[30];
	char number[30];
	char address[50];
};
typedef struct tag ad;
void main(void) {
	ad pad;
	int len;
	len = sizeof(pad);
	printf("struct len : %d\n", len);
	memset(&pad, 0, len);
}
