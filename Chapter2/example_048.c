//변수 범위 이해
#include<stdio.h>
void print_i(int x);
void print_o(void);

int x = 100;
main() {
	int x = 20;
	printf("%d\n", x);
	print_i(10);
	print_o();
}

void print_i(int x) {
	printf("%d\n", x);
}

void print_o(void) {
	printf("%d\n", x);
}
