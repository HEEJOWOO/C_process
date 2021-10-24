//구조체를 함수에서 사용하기
#include<stdio.h>
#include<string.h>
void print(struct ad* pad);
struct ad {
	char name[30];
	char number[30];
	char address[50];
};
void main(void) {
	struct ad ad_;
	strcpy_s(ad_.name, 30, "우희조");
	strcpy_s(ad_.number, 30, "010-1234-5678");
	strcpy_s(ad_.address, 50, "서울특별시");
	print(&ad_);

}

void print(struct ad *pad) {
	printf("%s\n", pad->name);
	printf("%s\n", pad->number);
	printf("%s\n", pad->address);
}
