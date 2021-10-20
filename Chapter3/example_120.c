//구조체 포인터 사용
#include<stdio.h>
#include<string.h>
struct ad {
	char name[20];
	char number[20];
	char address[50];
};
void main(void) {
	struct ad tag1;
	struct ad* tag2;
	tag2 = &tag1;
	//멤버 선택 연산자 사용 
	strcpy_s(tag2->name, 20, "우희조");
	strcpy_s(tag2->number, 20, "010-0000-0000");
	strcpy_s(tag2->address, 50, "서울 특별시");

	puts(tag2->name);
	puts(tag2->number);
	puts(tag2->address);

	strcpy_s((*tag2).name, 20, "우희조");
	strcpy_s((*tag2).number, 20, "010-0000-0000");
	strcpy_s((*tag2).address, 50, "서울 특별시");

	puts((*tag2).name);
	puts((*tag2).number);
	puts((*tag2).address);

	puts(tag1.name);
	puts(tag1.number);
	puts(tag1.address);


}
