#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float e_rate;
	float og;
	float dollor;

	printf("환율을 입력하시오: ");
	scanf("%f", &e_rate);

	printf("원화를 입력하시오: ");
	scanf("%f", &og);

	dollor = e_rate * og;

	printf("원화%f원은 %f달러입니다.", og, dollor);

	return 0;
}

