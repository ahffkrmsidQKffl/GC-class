#include <stdio.h>
#include <stdlib.h>
#include <time.h>         

int main()
{
	int bm[10][10] = { 0 };        // 10x10으로 배열을 선언 및 모든 요소를 0으로 초기화
	srand((unsigned)time(NULL));   //  프로그램 실행시마다 난수를 다르게 생성하기 위해 써야함

	for (int i = 0; i < 10; i++)   // 초기화된 배열을 난수로 채워 넣기 위해 반복문을 사용
	{
		for (int j = 0; j < 10; j++)
		{
			if (rand() % 99 <= 30) // 0부터 99사이의 난수를 생성하여서 30보다 적은 경우에만 지뢰(=1)를 놓음
				bm[i][j] = 1;
			else
				bm[i][j] = 0;
		}
	}

	for (int i = 0; i < 10; i++)   // 위에서 만든 배열을 출력하기 위해 반복문을 사용
	{
		for (int j = 0; j < 10; j++)
		{
			if (bm[i][j] == 1)     // 1을 지뢰로 설정했으니 조건문을 사용해 1일 경우 지뢰(#)를 출력
				printf("#");
			else
				printf(".");         

			
		}
		printf("\n");
	}
}
