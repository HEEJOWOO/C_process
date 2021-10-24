//구조체 배열 사용하기
#include<stdio.h>
#include<string.h>

struct tag {
	char name[30];
	char number[30];
	char address[50];
};
void main(void){
	struct tag ad[3];
	int i;
	for (i = 0; i < 3; i++) {
		sprintf_s(ad[i].name,30, "우희조 %d", i);
		strcpy_s(ad[i].number, 30, "010-1234-5678");
		strcpy_s(ad[i].address, 50, "서울 특별시");
	}
	for (i = 0; i < 3; i++) {
		printf("%s\n", ad[i].name);
		printf("%s\n", ad[i].number);
		printf("%s\n", ad[i].address);
	}
}
