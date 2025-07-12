#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int find_prime(int n)
{
	int finder = 1;

	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			finder = 0;
			

	}

	if (finder == 0)
		printf("%d는 소수가 아닙니다.", n);
	else
		printf("%d는 소수입니다.", n);
}


int main(void)
{
	find_prime(19);
}