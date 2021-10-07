//구조체 이해
#include<stdio.h>
struct struct_test {
	int one;
	int two;
	int three;
	char ch;
};
main() {
	struct struct_test test;
	test.one = 1;
	test.two = 2;
	test.three = 3;
	test.ch = '+';
	printf("%d,%d,%d,%c\n", test.one, test.two, test.three, test.ch);
}
