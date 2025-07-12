#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int ten;

	int tester = 1 << 7;

	printf("10진수를 입력하시오: ");
	scanf("%d", &ten);

	((ten & tester) == 0) ? printf("0") : printf("1");
	tester = tester >> 1;
	((ten & tester) == 0) ? printf("0") : printf("1");
	tester = tester >> 1;
	((ten & tester) == 0) ? printf("0") : printf("1");
	tester = tester >> 1;
	((ten & tester) == 0) ? printf("0") : printf("1");
	tester = tester >> 1;
	((ten & tester) == 0) ? printf("0") : printf("1");
	tester = tester >> 1;
	((ten & tester) == 0) ? printf("0") : printf("1");
	tester = tester >> 1;
	((ten & tester) == 0) ? printf("0") : printf("1");
	tester = tester >> 1;
	((ten & tester) == 0) ? printf("0") : printf("1");
	tester = tester >> 1;



}