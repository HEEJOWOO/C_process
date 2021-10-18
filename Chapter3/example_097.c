//메모리 블록단위로 할당 calloc -> void * calloc(sizt_t num, sizt_t size)
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>

void main(void) {
	char* pmem;
	printf("sizeof(int)의 길이는 %d 입니다.\n", sizeof(int));
	pmem = calloc(100, sizeof(int));//4바이트 크기의 100개 블록생성
	if (pmem == NULL) {
		puts("메모리를 할당하지 못했습니다.");
	}
	else {
		puts("메모리를 할당했습니다.");
		free(pmem);
	}
}
