#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a, b, c;

	for (a = 1; a <= 6; a++)
	{
		for (b = 1; b <= 6; b++)
		{
			//if (a + b == 6)
				//printf("(%d, %d)\n", a, b);

			for (c = 1; c <= 6; c++)
			{
				if (a + b + c == 6)
					printf("(%d, %d, %d)\n", a, b, c);
			}
		}
	}

}