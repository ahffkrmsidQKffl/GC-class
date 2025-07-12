#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a, b, c;

	for (a = 1; a < 100; a++)
	{
		for (b = 1; b < 100; b++)
		{
			for (c = 1; c < 100; c++)
			{
				if ((a * a + b * b == c * c) && (a < b)) //도전문제 (1)번 해결
					printf("%d, %d, %d\n", a, b, c);
			}
		}
	}
	
}