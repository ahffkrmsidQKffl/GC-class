#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int sum(int scores[][5]); // �Լ� ����

int main()
{
	srand((unsigned int)time(NULL));   // �Ź� ������ ���� �ٸ��� �ϱ� ���� �ۼ�
	int summ[3][5]; // 2���� �迭 ����
	for (int a = 0; a < 3; a++)
		for (int b = 0; b < 5; b++)
			summ[a][b] = rand() % 100; // 2���� �迭�� ���Ұ��� ������ �Է�

	for (int i = 0; i < 3; i++)        // �迭�� �ùٸ��� �����Ǿ����� �̸� ����غ���
	{
		for (int j = 0; j < 5; j++)
			printf("%d ", summ[i][j]);
		printf("\n");
	}

	sum(summ); // �迭�� ������ �Լ��� �����Ͽ� ���
}

int sum(int scores[][5]) // 2���� �迭�� ��� ���� ���� ����ϴ� �Լ�,
{
	for (int i = 0; i < 3; i++) // ���� �հ踦 ���� ���� ���
	{
		int sum1 = 0;
		for (int j = 0; j < 5; j++)
			sum1 = sum1 + scores[i][j];
		printf("%d���� �հ� : %d\n", i, sum1);

	}

	for (int i = 0; i < 5; i++) // ���� �հ踦 ���� ���� ���
	{
		int sum2 = 0;
		for (int j = 0; j < 3; j++)
			sum2 = sum2 + scores[j][i];
		printf("%d���� �հ� : %d\n", i, sum2);

	}
}