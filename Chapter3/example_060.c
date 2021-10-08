//문자열을 대소문자로 구분하여 비교하기
#include<stdio.h>
#include<string.h>
#define SKY "sky"
int My_Char_compare(const char* src1, const char* src2);
void main(void) {
	char str[100];
	char str2[100];
	gets(str);
	gets(str2);
	printf("%d\n",My_Char_compare(str, str2));

}

int My_Char_compare(const char* src1, const char* src2) {
	if((*src1==NULL)&&(*src2==NULL)) return 0;
	while (*src1 != NULL) {
		if (*src2 == NULL) return 1;
		if (*src1 == *src2) {
			src1++;
			src2++;
			continue;
		}
		if (*src1 < *src2) return -1;
		else return 1;
	}
	if (*src2 != NULL) return -1;
	return 0;
}
