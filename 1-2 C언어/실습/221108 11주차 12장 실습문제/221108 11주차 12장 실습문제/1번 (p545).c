#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	char fruits[5][20];

	for (i = 0; i < 5; i++)
	{
		printf("과일 이름을 입력하시오:", fruits[i]);
		scanf("%s", fruits[i]);
	}

	for (i = 0; i < 5; i ++ )
		printf("%d번째 과일: %s\n", i, fruits[i]);

	return 0;
}