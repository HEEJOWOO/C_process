//메모리 복사하기 memcpy -> void* memcpy(void *dest, const void* src, unsigned int count)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct st {
	int x;
	int y;
	char buffer[30];
};
void main(void) {
	struct st x1, x2;
	x1.x = 10;
	x1.y = 100;
	strcpy_s(x1.buffer,100, "korea");
	memcpy_s(&x2,100, &x1, sizeof(x1));
	puts(x2.buffer);

	
}
