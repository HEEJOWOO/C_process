//공용체 사용하기
#include<stdio.h>
#include<string.h>
//공용체 
typedef union tag {
	int i;
	double d;
}ad;

void print(ad* pad);

void main(void) {
	ad test;
	print(&test);
	
	

}

void print(ad* pad) {
	pad->i = 5;
	printf("%d\n", pad->i);
	pad->d = 3.141592;
	printf("%f\n", pad->d);

	printf("%d\n", pad->i);
}
