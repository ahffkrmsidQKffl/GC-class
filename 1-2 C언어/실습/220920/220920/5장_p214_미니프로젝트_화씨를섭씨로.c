#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	double f, c;

	printf("화씨 온도를 입력하시오: ");
	scanf("%lf", &f);
	c = 5.0 / 9.0 * (f - 32);
	printf("%lf", c);
}