#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int sum(int scores[][5]); // 함수 선언

int main()
{
	srand((unsigned int)time(NULL));   // 매번 난수의 값을 다르게 하기 위해 작성
	int summ[3][5]; // 2차원 배열 생성
	for (int a = 0; a < 3; a++)
		for (int b = 0; b < 5; b++)
			summ[a][b] = rand() % 100; // 2차원 배열의 원소값을 난수로 입력

	for (int i = 0; i < 3; i++)        // 배열이 올바르게 생성되었는지 미리 출력해본다
	{
		for (int j = 0; j < 5; j++)
			printf("%d ", summ[i][j]);
		printf("\n");
	}

	sum(summ); // 배열의 원본을 함수로 전달하여 계산
}

int sum(int scores[][5]) // 2차원 배열의 행과 열의 합을 계산하는 함수,
{
	for (int i = 0; i < 3; i++) // 행의 합계를 각각 전부 출력
	{
		int sum1 = 0;
		for (int j = 0; j < 5; j++)
			sum1 = sum1 + scores[i][j];
		printf("%d행의 합계 : %d\n", i, sum1);

	}

	for (int i = 0; i < 5; i++) // 열의 합계를 각각 전부 출력
	{
		int sum2 = 0;
		for (int j = 0; j < 3; j++)
			sum2 = sum2 + scores[j][i];
		printf("%d열의 합계 : %d\n", i, sum2);

	}
}