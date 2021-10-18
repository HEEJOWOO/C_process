//메모리 재할당 하기 realloc -> void* realloc(char* memblock, unsigned int size)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>

void main(void) {
	char* pmem;
	pmem = malloc(100); //100byte 할당
	if (pmem == NULL) puts("메모리를 할당할 수 없습니다.");
	else {
		printf("할당된 메모리의 크기는 %d 바이트 입니다.\n", _msize(pmem));
		pmem = realloc(pmem, 200);
		if (pmem == NULL)puts("메모리를 재할당 할 수 없습니다.");
		else {
			printf("재할당된 메모리의 크기는 %d 바이트 입니다. \n", _msize(pmem));
			free(pmem);
		}
	}
}
