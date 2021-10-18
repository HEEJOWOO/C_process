//메모리를 복사하는 함수 만들기
#include<stdio.h>
#include<string.h>

void* my_memorycopy(void* dst, void* src, unsigned int count);

struct gt {
	int x;
	int y;
	char buffer[100];
};

void main(void) {
	struct gt x1, x2;
	x1.x = 10;
	x1.y = 100;
	strcpy_s(x1.buffer, 100, "memory copy success!");
	my_memorycopy(&x2, &x1, sizeof(x1));
	puts(x2.buffer);
	printf("%d\n",x2.x);
	printf("%d\n", x2.y);

	

}

void* my_memorycopy(void* dst, void* src, unsigned int count) {
	void* ret=dst;
	while (count--) {
		*(char*)dst = *(char*)src;
		dst = (char*)dst + 1;
		src = (char*)src + 1;
	}
	return ret;

}
