//void 형 포인터를 함수에서 사용하기
#include<stdio.h>
#include<string.h>
void my_memset(void* dest, int i, unsigned count);
typedef struct tag {
	int i;
	int j;

}point;

void main(void) {
	point ad = { 1,3 };
	char array[10];

	printf("%d,%d\n", ad.i, ad.j);
	my_memset(&ad, 0, sizeof(ad));
	printf("%d,%d\n", ad.i, ad.j);

	my_memset(array, 48, sizeof(array));
	printf("%c~%c\n", array[0], array[9]);
}
void my_memset(void* dest, int i, unsigned int count) {
	while (count--) {
		*(char*)dest = i;
		dest = (char*)dest + 1;
	}
}
