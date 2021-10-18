//메모리 해제하기 free -> void * free(void* memblock)
#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<stdlib.h>
#define MEMORY 1024*1024
void main(void) {
	char* pmem;
	for (int i = 0; i < 10; i++) {
		pmem = malloc(MEMORY);
		if (pmem == NULL)printf("메모리가 할당되지 못했습니다.\n");
		else {
			puts("1MByte 할당 됐습니다.");
			free(pmem);
			puts("메모리 할당 해제 하였습니다.");
		}
	}
}
