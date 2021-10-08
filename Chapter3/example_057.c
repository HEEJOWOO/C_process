//문자열 복사, strcpy_s(dest, memory_size,const src)
#include<stdio.h>
#include<string.h>

#define WINTER "겨울"
#define KOREA "대한민국"

void main(void) {
	
	char b[100];
	char* c=b;
	strcpy_s(c,100,KOREA);
	strcpy_s(b,100,WINTER);
	printf("%s\n", c);
	printf("%s\n", b);
	
	
}
