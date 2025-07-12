#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int year, i_year;
	double amount = 100;

	printf("반감기을 입력하시오(년):");
	scanf("%d", &year);

	i_year = year;

	while (amount > 10)
	{
		amount = amount / 2.0;
		printf("%d년 후에 남은 양 = %lf\n", year, amount);
		year = year + i_year;

	}

	printf("1/10 이하로 되기까지 걸린 시간 = %d년", year - i_year);
}