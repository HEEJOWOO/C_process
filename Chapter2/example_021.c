//대입 연산자 이해하기
#include<stdio.h>
main() {
	int x = 1;
	int y = 2;
	int z;
	int zz;
	z = x + y;
	zz = printf("z의 값 : %d\n", z); //printf가 몇 바이트를 반환했는지 저장 
	printf("zz의 값은 %d 입니다.\n", zz);
}
