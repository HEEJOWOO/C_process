//메모리를 이동하는 함수 만들기
#include<stdio.h>
#include<string.h>

void* my_memmove(void* dst, void* src, unsigned int count);

char s[20] = "1234567890";

void main(void) {
	puts(s);
	my_memmove(s + 4, s + 2, 6);
	puts(s);
}
void* my_memmove(void* dst, void* src, unsigned int count) {
	void* ret = dst;
	if (dst <= src || (char*)dst >= ((char*)src + count)) {
		while (count--) {
			*(char*)dst = *(char*)src;
			dst = (char* )dst + 1;
			src = (char*)src + 1;

		}
	}
	else {
		dst = (char*)dst + count - 1;
		src = (char*)src + count - 1;
		while (count--) {
			*(char*)dst = *(char*)src;
			dst = (char*)dst - 1;
			src = (char*)src - 1;
		}
	}
	return ret;
}
