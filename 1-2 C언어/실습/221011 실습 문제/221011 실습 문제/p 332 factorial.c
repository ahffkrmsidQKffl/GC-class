#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int factorial(int n)
{
	int result = 1;

	for (int i = 1; i <= n; i++)
		result = result * i;

	printf("%d", result);

}


int main(void)
{
	factorial(5);
}