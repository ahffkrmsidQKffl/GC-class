#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	char fruits[5][20];

	for (i = 0; i < 5; i++)
	{
		printf("���� �̸��� �Է��Ͻÿ�:", fruits[i]);
		scanf("%s", fruits[i]);
	}

	for (i = 0; i < 5; i ++ )
		printf("%d��° ����: %s\n", i, fruits[i]);

	return 0;
}