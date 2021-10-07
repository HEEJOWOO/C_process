//Null문자 이해
#include<stdio.h>

int length(char* ptr);

main() {
	int len = length("abcde");

	printf("length : %d\n", len);

}

int length(char* ptr) {
	int len = 0;
	while (*ptr != NULL) { //ptr의 번지가 1씩 증가하면서 *ptr 값은 'a',b','c','d','e','\n'처럼 됨
		ptr++;
		len++;
	}
	return len;
}
