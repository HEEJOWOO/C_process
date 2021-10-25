//함수 포인터 배열에서 사용
#include<stdio.h>
#include<string.h>
void my_pointer_function_puts(int (*my_func)(const char*));
void my_pointer_function_strlen(int (*my_func)(const char*));
void my_pointer_function(int (*my_func[2])(const char*));
void main(void) {
	int (*my_function[2])(const char*);

	my_function[0] = puts;
	my_function[1] = strlen;
	my_pointer_function(my_function);
	
	my_pointer_function_puts(puts);
	my_pointer_function_strlen(strlen);
	
}
void my_pointer_function_puts(int (*my_func)(const char*)) {
	my_func("ok");
}
void my_pointer_function_strlen(int (*my_func)(const char*)) {
	printf("%d\n",my_func("ok"));
}

void my_pointer_function(int (*my_func[2])(const char*)) {
	my_func[0]("okok");
	printf("%d\n", my_func[1]("ok"));
}
