#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int coin_toss()
{
	return rand() % 2;
}

int main(void)
{

	int f_count=0;
	int b_count=0;

	srand((unsigned)time(NULL));

	for (int i = 0; i < 100; i++)
	{
		if (coin_toss() == 1)
			f_count +=1;
		else
			b_count +=1;
	}

	printf("�ո��� %d��, �޸��� %d�� ���Խ��ϴ�.", f_count, b_count);

}