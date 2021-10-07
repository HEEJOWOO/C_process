//무조건 분기문
#include<stdio.h>
main() {
	for (int i = 1; i <= 100; i++) {
		for (int j = 1; j <= 9; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
			if (i == 9 && j == 9) goto whj_end;
		}
		
	}
whj_end:;
}
