//메모리 할당하기 malloc void* malloc(unsigned int size)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>
#define MEMORY "memory"
void main(void) {
	char* pmem;
	pmem = malloc(100); //100 바이트 할당
	if (pmem == NULL) {
		printf("메모리를 할당 받지 못했습니다. \n");
	}
	else {
		strcpy_s(pmem, 100,MEMORY);
		puts(pmem);
		free(pmem);
	}

}
