#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) 
{
	int a, b, c;
	int A, B, C;

	printf("�ﰢ���� 3���� �Է��Ͻÿ�: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("�ﰢ���� 3���� �Է��Ͻÿ�: ");
	scanf("%d %d %d", &A, &B, &C);

	if ((a + b) > c && (b + c) > a && (c + a) > b && (A+B+C) == 180)
	{ 
		printf("�ùٸ� �ﰢ��\n");

	}
	else
	{
		printf("�ùٸ��� ���� �ﰢ��\n");
	}
	return 0;

}