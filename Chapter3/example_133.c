//함수 포인터 배열에서 사용
#include<stdio.h>
#include<string.h>
void main(void) {
	int(*my_func[3])(const char*);
	my_func[0] = puts;
	my_func[1] = strlen;
	my_func[2] = my_func[1];
	my_func[0]("function test");
	printf("%d\n", my_func[1]("aa"));
	printf("%d\n", my_func[2]("aaa"));
}
