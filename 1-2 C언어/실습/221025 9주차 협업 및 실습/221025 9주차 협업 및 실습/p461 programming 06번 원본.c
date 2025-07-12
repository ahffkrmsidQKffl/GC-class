#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>



int main()
{

	int sum1 = 0;
	int sum2 = 0;
	int summ[3][5] = {
		{12, 56, 32, 16, 98},
		{99, 56, 34, 41, 3},
		{65, 3, 87, 78, 21} };


	for (int i = 0; i < 3; i++)
	{
		sum1 = 0;
		for (int j = 0; j < 5; j++)
			sum1 = sum1 + summ[i][j];
		printf("%d행의 합계 : %d\n", i, sum1);

	}

	for (int i = 0; i < 5; i++)
	{
		sum2 = 0;
		for (int j = 0; j < 3; j++)
			sum2 = sum2 + summ[j][i];
		printf("%d열의 합계 : %d\n", i, sum2);

	}

}