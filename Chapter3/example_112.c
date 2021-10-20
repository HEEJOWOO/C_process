//1차원 배열을 함수에서 사용하기
#include<stdio.h>

void print_array_1(char str[]);
void print_array_2(char* str);


void main(void) {
	char str[] = "korea";
	print_array_1(str);
	print_array_2(str);

	char* ptr = "polytechnic";
	print_array_1(ptr);
	print_array_2(ptr);

}
void print_array_1(char str[]) {
	puts(str);
}

void print_array_2(char* str) {
	puts(str);
}
