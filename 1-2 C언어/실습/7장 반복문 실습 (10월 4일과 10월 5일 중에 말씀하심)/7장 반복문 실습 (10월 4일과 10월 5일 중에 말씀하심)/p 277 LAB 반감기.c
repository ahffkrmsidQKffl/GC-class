#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int year, i_year;
	double amount = 100;

	printf("�ݰ����� �Է��Ͻÿ�(��):");
	scanf("%d", &year);

	i_year = year;

	while (amount > 10)
	{
		amount = amount / 2.0;
		printf("%d�� �Ŀ� ���� �� = %lf\n", year, amount);
		year = year + i_year;

	}

	printf("1/10 ���Ϸ� �Ǳ���� �ɸ� �ð� = %d��", year - i_year);
}